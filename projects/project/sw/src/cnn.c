#include "model.h"
#include "trap.h"

/*
 *  HAL_NN_SOFT     纯粹的软件实现，用于参考和调试
 *  HAL_NN_RVV      利用RVV指令的实现
 *  HAL_NN_CUSTOM   利用自定义指令的实现
 *  HAL_NN_SOFT_OPT 纯软件实现，经过了软件优化，不适合用作硬件调试
 */
#define HAL_NN_SOFT_OPT
#include "libnn/hal_nn.h"

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
    hal_conv_params_t conv_params;

    conv_params.input_c     = INPUT_C;
    conv_params.input_h     = INPUT_H;
    conv_params.input_w     = INPUT_W;
    conv_params.kernel_size = KERNEL_SIZE;
    conv_params.output_c    = KERNEL_NUM;
    conv_params.output_h    = CONV_OUT_H;
    conv_params.output_w    = CONV_OUT_W;
    conv_params.scale       = weights->conv_scale;

    hal_conv2d_i8_i16(weights->input_img, weights->conv_weights, buffers->conv_out, &conv_params);

    printf("Running MaxPool...\n");
    hal_maxpool_2x2_i16(buffers->conv_out, buffers->pool_out, KERNEL_NUM, CONV_OUT_H, CONV_OUT_W);

    printf("Running FC1...\n");
    hal_fc_params_t fc_params;

    fc_params.in_features  = FC1_IN_SIZE;
    fc_params.out_features = FC1_OUT_SIZE;
    fc_params.scale        = weights->fc1_scale;

    hal_fc_i16_i32_relu_scale(buffers->pool_out, weights->fc1_weights, buffers->fc1_out, &fc_params);

    printf("Running FC2...\n");
    hal_fc_i32_i32_bias(buffers->fc1_out, weights->fc2_weights, weights->fc2_bias, buffers->fc2_out);

    printf("Running Softmax HW...\n");
    hal_softmax_i32(buffers->fc2_out, weights->softmax_lut, buffers->softmax_out, FC2_OUT_SIZE, LUT_SIZE);
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
