#include "model.h"
#include "trap.h"

#define CLAMP(x, low, high) (((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

typedef struct {
    int8_t  *input_img;    // [6, 14, 14]
    int8_t  *conv_weights; // [4, 6, 3, 3] (OutC, InC, H, W)
    int16_t *fc1_weights;  // [60, 144]
    int32_t *fc2_weights;  // [10, 60]
    int32_t *fc2_bias;     // [10]
    int32_t *softmax_lut;  // [256]

    // 缩放因子
    int16_t conv_scale;
    int32_t fc1_scale;
} ModelWeights;

typedef struct {
    int16_t *conv_out;
    int16_t *pool_out;
    int32_t *fc1_out;
    int32_t *fc2_out;
    int32_t *softmax_out;
} FeatureMaps;

void layer_conv2d(const int8_t *input, const int8_t *weight, int16_t *output, int scale) {
    for (int oc = 0; oc < KERNEL_NUM; oc++) {
        for (int h = 0; h < CONV_OUT_H; h++) {
            for (int w = 0; w < CONV_OUT_W; w++) {

                int32_t acc = 0; // 累加器使用 int32 防止溢出

                // 卷积运算：遍历输入通道和核尺寸
                for (int ic = 0; ic < INPUT_C; ic++) {
                    for (int kh = 0; kh < KERNEL_SIZE; kh++) {
                        for (int kw = 0; kw < KERNEL_SIZE; kw++) {
                            // 计算扁平化索引 (NCHW 格式)
                            int img_idx = ic * (INPUT_H * INPUT_W) + (h + kh) * INPUT_W + (w + kw);
                            int w_idx = oc * (INPUT_C * KERNEL_SIZE * KERNEL_SIZE) + ic * (KERNEL_SIZE * KERNEL_SIZE) +
                                        kh * KERNEL_SIZE + kw;

                            acc += input[img_idx] * weight[w_idx];
                        }
                    }
                }

                // 模拟量化和激活: out = Clip(acc / scale, 0, 32768)
                int32_t res = acc / scale;
                res         = CLAMP(res, 0, 32768);

                // 存入输出 buffer
                int out_idx     = oc * (CONV_OUT_H * CONV_OUT_W) + h * CONV_OUT_W + w;
                output[out_idx] = (int16_t)res;
            }
        }
    }
}

void layer_maxpool(const int16_t *input, int16_t *output) {
    for (int c = 0; c < KERNEL_NUM; c++) {
        for (int h = 0; h < POOL_OUT_H; h++) {
            for (int w = 0; w < POOL_OUT_W; w++) {

                int16_t max_val = -32768; // 初始化最小值

                // 2x2 窗口扫描
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        int in_h   = h * 2 + i;
                        int in_w   = w * 2 + j;
                        int in_idx = c * (CONV_OUT_H * CONV_OUT_W) + in_h * CONV_OUT_W + in_w;

                        if (input[in_idx] > max_val) {
                            max_val = input[in_idx];
                        }
                    }
                }

                int out_idx     = c * (POOL_OUT_H * POOL_OUT_W) + h * POOL_OUT_W + w;
                output[out_idx] = max_val;
            }
        }
    }
}

// FC1: MatMul -> ReLU -> Scale -> Clip
void layer_fc1(const int16_t *input, const int16_t *weight, int32_t *output, int scale) {
    for (int i = 0; i < FC1_OUT_SIZE; i++) {
        int32_t acc = 0;
        for (int j = 0; j < FC1_IN_SIZE; j++) {
            // weight 形状 [FC1_OUT, FC1_IN]
            acc += (int32_t)input[j] * weight[i * FC1_IN_SIZE + j];
        }

        // ReLU
        if (acc < 0)
            acc = 0;

        // Scale & Clip
        acc = acc / scale;
        acc = CLAMP(acc, 0, 32768);

        output[i] = acc;
    }
}

// FC2: MatMul -> Add Bias
void layer_fc2(const int32_t *input, const int32_t *weight, const int32_t *bias, int32_t *output) {
    for (int i = 0; i < FC2_OUT_SIZE; i++) {
        int32_t acc = 0;
        for (int j = 0; j < FC2_IN_SIZE; j++) {
            // weight 形状 [FC2_OUT, FC2_IN]
            acc += input[j] * weight[i * FC2_IN_SIZE + j];
        }
        acc += bias[i]; // 加上偏置
        output[i] = acc;
    }
}

void layer_softmax_hw(const int32_t *input, const int32_t *lut, int32_t *output) {
    const int Q_16       = 1 << 16;
    const int SAFE_SHIFT = 2;

    // 寻找最大值 (防止指数爆炸)
    int32_t x_max = -2147483648;
    // 处理每个输入
    int32_t input_q16[FC2_OUT_SIZE];

    for (int i = 0; i < FC2_OUT_SIZE; i++) {
        int32_t val  = CLAMP(input[i], -32767, 32767);
        input_q16[i] = val << 16; // 转换为 Q16.16
        if (input_q16[i] > x_max) {
            x_max = input_q16[i];
        }
    }

    int32_t exp_sum = 0;
    int32_t exp_vals[FC2_OUT_SIZE];

    // 查表计算 Exp
    for (int i = 0; i < FC2_OUT_SIZE; i++) {
        int32_t delta = input_q16[i] - x_max;
        if (delta < -8 * Q_16)
            delta = -8 * Q_16;

        // 计算 LUT 索引
        // Python: idx_num = (delta + 8 * Q_16) * (LUT_SIZE - 1)
        // Python: idx = idx_num // (8 * Q_16)
        int64_t idx_num = (int64_t)(delta + 8 * Q_16) * (LUT_SIZE - 1);
        int32_t idx     = (int32_t)(idx_num / (8 * Q_16));

        idx = CLAMP(idx, 0, LUT_SIZE - 1);

        exp_vals[i] = lut[idx];
        exp_sum += exp_vals[i];
    }

    if (exp_sum <= 0)
        exp_sum = 1;

    // 计算概率
    int32_t exp_sum_shr = exp_sum >> SAFE_SHIFT;
    if (exp_sum_shr <= 0)
        exp_sum_shr = 1;

    for (int i = 0; i < FC2_OUT_SIZE; i++) {
        int32_t exp_delta_shr = exp_vals[i] >> SAFE_SHIFT;
        // num = exp_delta_shr * Q_16
        int64_t num = (int64_t)exp_delta_shr * Q_16;
        // result = num // exp_sum_shr
        output[i] = (int32_t)(num / exp_sum_shr);
    }
}

void init_buffers(FeatureMaps *maps) {
    maps->conv_out    = (int16_t *)ADDR_OUTCONV1;
    maps->pool_out    = (int16_t *)ADDR_OUTPOOL1;
    maps->fc1_out     = (int32_t *)ADDR_OUTFC1;
    maps->fc2_out     = (int32_t *)ADDR_OUTFC2;
    maps->softmax_out = (int32_t *)ADDR_OUTSM2;
}

void init_weights(ModelWeights *weights) {
    weights->input_img    = (void *)ADDR_INPUT;
    weights->conv_weights = (void *)ADDR_WCONV1;
    weights->conv_scale   = *(uint16_t *)ADDR_SCONV1;
    weights->fc1_weights  = (void *)ADDR_WFC1;
    weights->fc1_scale    = *(uint32_t *)ADDR_SFC1;
    weights->fc2_weights  = (void *)ADDR_WFC2;
    weights->fc2_bias     = (void *)ADDR_BFC2;
    weights->softmax_lut  = (void *)ADDR_SOFTMAX_LUT;
}

void run_network(ModelWeights *weights, FeatureMaps *buffers) {
    printf("Running Conv2D...\n");
    layer_conv2d(weights->input_img, weights->conv_weights, buffers->conv_out, weights->conv_scale);
    printf("Running MaxPool...\n");
    layer_maxpool(buffers->conv_out, buffers->pool_out);
    printf("Running FC1...\n");
    layer_fc1(buffers->pool_out, weights->fc1_weights, buffers->fc1_out, weights->fc1_scale);
    printf("Running FC2...\n");
    layer_fc2(buffers->fc1_out, weights->fc2_weights, weights->fc2_bias, buffers->fc2_out);
    printf("Running Softmax HW...\n");
    layer_softmax_hw(buffers->fc2_out, weights->softmax_lut, buffers->softmax_out);
}

void print_numpy_style(const int32_t *data, int size, int width) {
    printf("[");
    for (int i = 0; i < size; i++) {
        if (width > 0) {
            printf("%*d", width, data[i]);
        } else {
            printf("%d", data[i]);
        }

        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("]\n");
}

int main() {
    ModelWeights weights;
    FeatureMaps  buffers;

    init_weights(&weights);

    init_buffers(&buffers);

    run_network(&weights, &buffers);

    printf("\n===== TEST RESULT (INT32) ===================================\n");

    printf("\n===== FC2 RESULT ==============================================\n");
    print_numpy_style(buffers.fc2_out, FC2_OUT_SIZE, 0);

    printf("\n===== HARDWARE SOFTMAX RESULT (Q16.16) ========================\n");
    print_numpy_style(buffers.softmax_out, FC2_OUT_SIZE, 5);

    printf("===============================================================\n\n");
    return 0;
}
