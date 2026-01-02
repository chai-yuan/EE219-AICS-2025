/*
 *  一个简单的用于神经网络计算的单头文件库
 *  提供包含软实现的多种实现，使用宏控制目前的实现后端
 */

#ifndef HAL_NN_H
#define HAL_NN_H
#include "model.h"

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#ifndef CLAMP
#define CLAMP(x, l, h) ((x) < (l) ? (l) : ((x) > (h) ? (h) : (x)))
#endif

// 卷积参数结构体 (减少参数数量，方便传递)
typedef struct {
    int input_h;
    int input_w;
    int input_c;
    int kernel_size;
    int output_c; // Kernel Num
    int output_h;
    int output_w;
    int scale; // 量化缩放因子
} hal_conv_params_t;

// 全连接参数结构体
typedef struct {
    int in_features;
    int out_features;
    int scale;
} hal_fc_params_t;

// 卷积算子: Input(int8) -> Weights(int8) -> Output(int16) [CHW格式]
void hal_conv2d_i8_i16(const int8_t *input, const int8_t *weight, int16_t *output, const hal_conv_params_t *params);

// 最大池化: Input(int16) -> Output(int16) [CHW格式]
void hal_maxpool_2x2_i16(const int16_t *input, int16_t *output, int input_c, int input_h, int input_w);

// 全连接层 Type A: Input(int16) -> Weight(int16) -> ReLU -> Scale -> Output(int32)
void hal_fc_i16_i32_relu_scale(const int16_t *input, const int16_t *weight, int32_t *output,
                               const hal_fc_params_t *params);

// 全连接层 Type B: Input(int32) -> Weight(int32) -> Add Bias -> Output(int32)
void hal_fc_i32_i32_bias(const int32_t *input, const int32_t *weight, const int32_t *bias, int32_t *output);

// Softmax: Input(int32) -> LUT -> Output(int32)
void hal_softmax_i32(const int32_t *input, const int32_t *lut, int32_t *output, int size, int lut_size);

// 32位矩阵乘法
void hal_matmul_i32(const int32_t *A, const int32_t *B, int32_t *C, int M, int K, int N);

// 矩阵辅助函数

// 矩阵转置
static inline void helper_matrix_T(const int32_t *src, int32_t *dst, int h, int w) {
    if (src == NULL || dst == NULL || h <= 0 || w <= 0) {
        return;
    }
    for (int r = 0; r < h; r++) {
        for (int c = 0; c < w; c++) {
            dst[c * h + r] = src[r * w + c];
        }
    }
}

#define HARDWARE_SIZE 8
#define BLOCK_ELEM_COUNT (HARDWARE_SIZE * HARDWARE_SIZE)

static inline void matmul_i32_8x8(int32_t *A, int32_t *B, int32_t *C);

// 从大矩阵中加载 8x8 数据块到临时 buffer
static inline void load_tile_8x8(const int32_t *src, int32_t *dst, int rows, int cols, int start_row, int start_col) {
    for (int i = 0; i < HARDWARE_SIZE; i++) {
        int r = start_row + i;
        for (int j = 0; j < HARDWARE_SIZE; j++) {
            int c       = start_col + j;
            int dst_idx = i * HARDWARE_SIZE + j;

            if (r < rows && c < cols) {
                int src_idx  = r * cols + c;
                dst[dst_idx] = src[src_idx];
            } else {
                dst[dst_idx] = 0;
            }
        }
    }
}

static inline void load_tile_i16_to_i32(const int16_t *src, int32_t *dst, int rows, int cols, int start_row,
                                        int start_col) {
    for (int i = 0; i < HARDWARE_SIZE; i++) {
        int r = start_row + i;
        for (int j = 0; j < HARDWARE_SIZE; j++) {
            int dst_idx = i * HARDWARE_SIZE + j;
            if (r < rows && j + start_col < cols) {
                int src_idx = r * cols + (start_col + j);
                // 关键点：类型提升 (Casting)
                dst[dst_idx] = (int32_t)src[src_idx];
            } else {
                dst[dst_idx] = 0; // Padding
            }
        }
    }
}

static inline void load_tile_i8_to_i32(const int8_t *src, int32_t *dst, int rows, int cols, int start_row,
                                       int start_col) {
    for (int i = 0; i < HARDWARE_SIZE; i++) {
        int r = start_row + i;
        for (int j = 0; j < HARDWARE_SIZE; j++) {
            int dst_idx = i * HARDWARE_SIZE + j;
            if (r < rows && j + start_col < cols) {
                int src_idx = r * cols + (start_col + j);
                // 关键点：类型提升 (Casting)，保留符号位
                dst[dst_idx] = (int32_t)src[src_idx];
            } else {
                dst[dst_idx] = 0; // Padding
            }
        }
    }
}

static inline void store_tile_i32_to_i16(const int32_t *src, int16_t *dst, int rows, int cols, int start_row,
                                         int start_col) {
    for (int i = 0; i < HARDWARE_SIZE; i++) {
        int r = start_row + i;
        if (r >= rows)
            continue;
        for (int j = 0; j < HARDWARE_SIZE; j++) {
            int c = start_col + j;
            if (c >= cols)
                continue;

            int32_t val = src[i * HARDWARE_SIZE + j];

            if (val > 32767)
                val = 32767;
            else if (val < -32768)
                val = -32768;

            dst[r * cols + c] = (int16_t)val;
        }
    }
}

// 将 8x8 buffer 中的结果写回大矩阵
static inline void store_tile_8x8(const int32_t *src, int32_t *dst, int rows, int cols, int start_row, int start_col) {
    for (int i = 0; i < HARDWARE_SIZE; i++) {
        int r = start_row + i;
        if (r >= rows)
            continue;

        for (int j = 0; j < HARDWARE_SIZE; j++) {
            int c = start_col + j;
            if (c >= cols)
                continue;

            int src_idx = i * HARDWARE_SIZE + j;
            int dst_idx = r * cols + c;

            dst[dst_idx] = src[src_idx];
        }
    }
}

static inline void helper_matmul_i32(int32_t *A, int32_t *B, int32_t *C, int M, int K, int N) {
    int32_t tile_A[BLOCK_ELEM_COUNT];
    int32_t tile_B[BLOCK_ELEM_COUNT];
    int32_t tile_C_hw_out[BLOCK_ELEM_COUNT];
    int32_t tile_C_accum[BLOCK_ELEM_COUNT];

    for (int m = 0; m < M; m += HARDWARE_SIZE) {
        for (int n = 0; n < N; n += HARDWARE_SIZE) {

            memset(tile_C_accum, 0, sizeof(tile_C_accum));
            for (int k = 0; k < K; k += HARDWARE_SIZE) {
                load_tile_8x8(A, tile_A, M, K, m, k);

                load_tile_8x8(B, tile_B, K, N, k, n);

                matmul_i32_8x8(tile_A, tile_B, tile_C_hw_out);

                for (int i = 0; i < BLOCK_ELEM_COUNT; i++) {
                    tile_C_accum[i] += tile_C_hw_out[i];
                }
            }

            store_tile_8x8(tile_C_accum, C, M, N, m, n);
        }
    }
}

static inline void helper_matmul_i16_i32(int16_t *A, int16_t *B, int32_t *C, int M, int K, int N) {
    int32_t tile_A[BLOCK_ELEM_COUNT];
    int32_t tile_B[BLOCK_ELEM_COUNT];
    int32_t tile_C_hw[BLOCK_ELEM_COUNT];
    int32_t tile_C_accum[BLOCK_ELEM_COUNT];

    for (int m = 0; m < M; m += HARDWARE_SIZE) {
        for (int n = 0; n < N; n += HARDWARE_SIZE) {

            memset(tile_C_accum, 0, sizeof(tile_C_accum));

            for (int k = 0; k < K; k += HARDWARE_SIZE) {
                load_tile_i16_to_i32(A, tile_A, M, K, m, k);

                load_tile_i16_to_i32(B, tile_B, K, N, k, n);

                matmul_i32_8x8(tile_A, tile_B, tile_C_hw);

                for (int i = 0; i < BLOCK_ELEM_COUNT; i++) {
                    tile_C_accum[i] += tile_C_hw[i];
                }
            }

            store_tile_8x8(tile_C_accum, C, M, N, m, n);
        }
    }
}

static inline void helper_matmul_i8_i16(int8_t *A, int8_t *B, int16_t *C, int M, int K, int N) {
    int32_t tile_A[BLOCK_ELEM_COUNT];
    int32_t tile_B[BLOCK_ELEM_COUNT];
    int32_t tile_C_hw[BLOCK_ELEM_COUNT];
    int32_t tile_C_accum[BLOCK_ELEM_COUNT];

    for (int m = 0; m < M; m += HARDWARE_SIZE) {
        for (int n = 0; n < N; n += HARDWARE_SIZE) {

            memset(tile_C_accum, 0, sizeof(tile_C_accum));

            for (int k = 0; k < K; k += HARDWARE_SIZE) {
                load_tile_i8_to_i32(A, tile_A, M, K, m, k);

                load_tile_i8_to_i32(B, tile_B, K, N, k, n);

                matmul_i32_8x8(tile_A, tile_B, tile_C_hw);

                for (int i = 0; i < BLOCK_ELEM_COUNT; i++) {
                    tile_C_accum[i] += tile_C_hw[i];
                }
            }

            store_tile_i32_to_i16(tile_C_accum, C, M, N, m, n);
        }
    }
}

#ifdef HAL_NN_SOFT

void hal_conv2d_i8_i16(const int8_t *input, const int8_t *weight, int16_t *output, const hal_conv_params_t *p) {
    for (int oc = 0; oc < p->output_c; oc++) {
        for (int h = 0; h < p->output_h; h++) {
            for (int w = 0; w < p->output_w; w++) {

                int32_t acc = 0;
                // CHW 格式遍历
                for (int ic = 0; ic < p->input_c; ic++) {
                    for (int kh = 0; kh < p->kernel_size; kh++) {
                        for (int kw = 0; kw < p->kernel_size; kw++) {

                            int img_idx = ic * (p->input_h * p->input_w) + (h + kh) * p->input_w + (w + kw);

                            // 权重排列假设为: [Out_C, In_C, K_H, K_W]
                            int w_idx = oc * (p->input_c * p->kernel_size * p->kernel_size) +
                                        ic * (p->kernel_size * p->kernel_size) + kh * p->kernel_size + kw;

                            acc += input[img_idx] * weight[w_idx];
                        }
                    }
                }

                int32_t res = acc / p->scale;
                res         = CLAMP(res, 0, 32768);

                int out_idx     = oc * (p->output_h * p->output_w) + h * p->output_w + w;
                output[out_idx] = (int16_t)res;
            }
        }
    }
}

void hal_maxpool_2x2_i16(const int16_t *input, int16_t *output, int input_c, int input_h, int input_w) {
    int out_h = input_h / 2; // 假设 padding=0, stride=2
    int out_w = input_w / 2;

    for (int c = 0; c < input_c; c++) {
        for (int h = 0; h < out_h; h++) {
            for (int w = 0; w < out_w; w++) {

                int16_t max_val = -32768;

                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        int in_h_idx = h * 2 + i;
                        int in_w_idx = w * 2 + j;
                        // CHW layout
                        int in_idx = c * (input_h * input_w) + in_h_idx * input_w + in_w_idx;

                        if (input[in_idx] > max_val) {
                            max_val = input[in_idx];
                        }
                    }
                }

                int out_idx     = c * (out_h * out_w) + h * out_w + w;
                output[out_idx] = max_val;
            }
        }
    }
}

// FC1: MatMul -> ReLU -> Scale
void hal_fc_i16_i32_relu_scale(const int16_t *input, const int16_t *weight, int32_t *output, const hal_fc_params_t *p) {
    int M = p->out_features;
    int K = p->in_features;
    int N = 1;

    helper_matmul_i16_i32((int16_t *)weight, (int16_t *)input, output, M, K, N);

    for (int i = 0; i < M; i++) {
        int32_t acc = output[i];

        if (acc < 0) {
            acc = 0;
        }

        if (p->scale != 0) {
            acc = acc / p->scale;
        }

        acc = CLAMP(acc, 0, 32768);

        output[i] = acc;
    }
}

// FC2: MatMul -> Add Bias
void hal_fc_i32_i32_bias(const int32_t *input, const int32_t *weight, const int32_t *bias, int32_t *output) {
    int M = FC2_OUT_SIZE;
    int K = FC2_IN_SIZE;
    int N = 1;

    helper_matmul_i32((int32_t *)weight, (int32_t *)input, output, M, K, N);

    for (int i = 0; i < FC2_OUT_SIZE; i++) {
        output[i] += bias[i];
    }
}

// Softmax
void hal_softmax_i32(const int32_t *input, const int32_t *lut, int32_t *output, int size, int lut_size) {
    const int Q_16       = 1 << 16;
    const int SAFE_SHIFT = 2;

    int32_t x_max = -2147483648;
#define MAX_SOFTMAX_SIZE 100
    int32_t input_q16[MAX_SOFTMAX_SIZE];
    int32_t exp_vals[MAX_SOFTMAX_SIZE];

    if (size > MAX_SOFTMAX_SIZE)
        return; // Error handling needed in real code

    for (int i = 0; i < size; i++) {
        int32_t val  = CLAMP(input[i], -32767, 32767);
        input_q16[i] = val << 16;
        if (input_q16[i] > x_max) {
            x_max = input_q16[i];
        }
    }

    int32_t exp_sum = 0;

    for (int i = 0; i < size; i++) {
        int32_t delta = input_q16[i] - x_max;
        if (delta < -8 * Q_16)
            delta = -8 * Q_16;

        int64_t idx_num = (int64_t)(delta + 8 * Q_16) * (lut_size - 1);
        int32_t idx     = (int32_t)(idx_num / (8 * Q_16));

        idx         = CLAMP(idx, 0, lut_size - 1);
        exp_vals[i] = lut[idx];
        exp_sum += exp_vals[i];
    }

    if (exp_sum <= 0)
        exp_sum = 1;

    int32_t exp_sum_shr = exp_sum >> SAFE_SHIFT;
    if (exp_sum_shr <= 0)
        exp_sum_shr = 1;

    for (int i = 0; i < size; i++) {
        int32_t exp_delta_shr = exp_vals[i] >> SAFE_SHIFT;
        int64_t num           = (int64_t)exp_delta_shr * Q_16;
        output[i]             = (int32_t)(num / exp_sum_shr);
    }
}

void hal_matmul_i32(const int32_t *A, const int32_t *B, int32_t *C, int M, int K, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int32_t sum = 0;
            for (int k = 0; k < K; k++) {
                sum += A[i * K + k] * B[k * N + j];
            }
            C[i * N + j] = sum;
        }
    }
}

static inline void matmul_i32_8x8(int32_t *A, int32_t *B, int32_t *C) {
    for (int i = 0; i < HARDWARE_SIZE; i++) {
        for (int j = 0; j < HARDWARE_SIZE; j++) {
            int32_t sum = 0;
            for (int k = 0; k < HARDWARE_SIZE; k++) {
                int32_t a_val = A[i * HARDWARE_SIZE + k];
                int32_t b_val = B[k * HARDWARE_SIZE + j];
                sum += a_val * b_val;
            }
            C[i * HARDWARE_SIZE + j] = sum;
        }
    }
}

#endif // HAL_NN_SOFT

#ifdef HAL_NN_RVV
#include "rv_vector_ext.h"

void hal_conv2d_i8_i16(const int8_t *input, const int8_t *weight, int16_t *output, const hal_conv_params_t *p) {
    for (int oc = 0; oc < p->output_c; oc++) {
        for (int h = 0; h < p->output_h; h++) {
            for (int w = 0; w < p->output_w; w++) {

                int32_t acc = 0;
                // CHW 格式遍历
                for (int ic = 0; ic < p->input_c; ic++) {
                    for (int kh = 0; kh < p->kernel_size; kh++) {
                        for (int kw = 0; kw < p->kernel_size; kw++) {

                            int img_idx = ic * (p->input_h * p->input_w) + (h + kh) * p->input_w + (w + kw);

                            // 权重排列假设为: [Out_C, In_C, K_H, K_W]
                            int w_idx = oc * (p->input_c * p->kernel_size * p->kernel_size) +
                                        ic * (p->kernel_size * p->kernel_size) + kh * p->kernel_size + kw;

                            acc += input[img_idx] * weight[w_idx];
                        }
                    }
                }

                int32_t res = acc / p->scale;
                res         = CLAMP(res, 0, 32768);

                int out_idx     = oc * (p->output_h * p->output_w) + h * p->output_w + w;
                output[out_idx] = (int16_t)res;
            }
        }
    }
}

void hal_maxpool_2x2_i16(const int16_t *input, int16_t *output, int input_c, int input_h, int input_w) {

    int out_h = input_h / 2; // 假设 padding=0, stride=2
    int out_w = input_w / 2;

    for (int c = 0; c < input_c; c++) {
        for (int h = 0; h < out_h; h++) {
            for (int w = 0; w < out_w; w++) {

                int16_t max_val = -32768;

                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        int in_h_idx = h * 2 + i;
                        int in_w_idx = w * 2 + j;
                        // CHW layout
                        int in_idx = c * (input_h * input_w) + in_h_idx * input_w + in_w_idx;

                        if (input[in_idx] > max_val) {
                            max_val = input[in_idx];
                        }
                    }
                }

                int out_idx     = c * (out_h * out_w) + h * out_w + w;
                output[out_idx] = max_val;
            }
        }
    }
}

// FC1: MatMul -> ReLU -> Scale
void hal_fc_i16_i32_relu_scale(const int16_t *input, const int16_t *weight, int32_t *output, const hal_fc_params_t *p) {
    int M = p->out_features;
    int K = p->in_features;
    int N = 1;

    helper_matmul_i16_i32((int16_t *)weight, (int16_t *)input, output, M, K, N);

    for (int i = 0; i < M; i++) {
        int32_t acc = output[i];

        if (acc < 0) {
            acc = 0;
        }

        if (p->scale != 0) {
            acc = acc / p->scale;
        }

        acc = CLAMP(acc, 0, 32768);

        output[i] = acc;
    }
}

// FC2: MatMul -> Add Bias
void hal_fc_i32_i32_bias(const int32_t *input, const int32_t *weight, const int32_t *bias, int32_t *output) {
    int M = FC2_OUT_SIZE;
    int K = FC2_IN_SIZE;
    int N = 1;

    helper_matmul_i32((int32_t *)weight, (int32_t *)input, output, M, K, N);

    for (int i = 0; i < FC2_OUT_SIZE; i++) {
        output[i] += bias[i];
    }
}

// Softmax
void hal_softmax_i32(const int32_t *input, const int32_t *lut, int32_t *output, int size, int lut_size) {
    const int Q_16       = 1 << 16;
    const int SAFE_SHIFT = 2;

    int32_t x_max = -2147483648;
#define MAX_SOFTMAX_SIZE 100
    int32_t input_q16[MAX_SOFTMAX_SIZE];
    int32_t exp_vals[MAX_SOFTMAX_SIZE];

    if (size > MAX_SOFTMAX_SIZE)
        return; // Error handling needed in real code

    for (int i = 0; i < size; i++) {
        int32_t val  = CLAMP(input[i], -32767, 32767);
        input_q16[i] = val << 16;
        if (input_q16[i] > x_max) {
            x_max = input_q16[i];
        }
    }

    int32_t exp_sum = 0;

    for (int i = 0; i < size; i++) {
        int32_t delta = input_q16[i] - x_max;
        if (delta < -8 * Q_16)
            delta = -8 * Q_16;

        int64_t idx_num = (int64_t)(delta + 8 * Q_16) * (lut_size - 1);
        int32_t idx     = (int32_t)(idx_num / (8 * Q_16));

        idx         = CLAMP(idx, 0, lut_size - 1);
        exp_vals[i] = lut[idx];
        exp_sum += exp_vals[i];
    }

    if (exp_sum <= 0)
        exp_sum = 1;

    int32_t exp_sum_shr = exp_sum >> SAFE_SHIFT;
    if (exp_sum_shr <= 0)
        exp_sum_shr = 1;

    for (int i = 0; i < size; i++) {
        int32_t exp_delta_shr = exp_vals[i] >> SAFE_SHIFT;
        int64_t num           = (int64_t)exp_delta_shr * Q_16;
        output[i]             = (int32_t)(num / exp_sum_shr);
    }
}

static inline void matmul_i32_8x8(int32_t *A, int32_t *B, int32_t *C) {
    int32_t B_T[HARDWARE_SIZE * HARDWARE_SIZE];
    helper_matrix_T(B, B_T, HARDWARE_SIZE, HARDWARE_SIZE);
    int32_t receive[32] = {0};
    setvi32();

    for (int i = 0; i < HARDWARE_SIZE; i++) {
        custom_vle_v1(&A[i * HARDWARE_SIZE]);

        for (int j = 0; j < HARDWARE_SIZE; j++) {
            custom_vle_v2(&B_T[j * HARDWARE_SIZE]);

            vmul_vv();
            vmv_v_x();
            vredsum_vs();

            custom_vse(receive);

            C[i * HARDWARE_SIZE + j] = receive[0];
        }
    }
}

#endif

#ifdef HAL_NN_CUSTOM
#include "rv_custom_ext.h"

static inline void matmul_i32_8x8(int32_t *A, int32_t *B, int32_t *C) {
    matrix_set_a(8, 8);
    matrix_set_b(8, 8);
    _Alignas(16) int32_t temp_A[8 * 8];
    helper_matrix_T(A, temp_A, 8, 8);
    matrix_addr(temp_A, B);
    matrix_cal(C);
}

void hal_conv2d_i8_i16(const int8_t *input, const int8_t *weight, int16_t *output, const hal_conv_params_t *p) {
    for (int oc = 0; oc < p->output_c; oc++) {
        for (int h = 0; h < p->output_h; h++) {
            for (int w = 0; w < p->output_w; w++) {

                int32_t acc = 0;
                // CHW 格式遍历
                for (int ic = 0; ic < p->input_c; ic++) {
                    for (int kh = 0; kh < p->kernel_size; kh++) {
                        for (int kw = 0; kw < p->kernel_size; kw++) {

                            int img_idx = ic * (p->input_h * p->input_w) + (h + kh) * p->input_w + (w + kw);

                            // 权重排列假设为: [Out_C, In_C, K_H, K_W]
                            int w_idx = oc * (p->input_c * p->kernel_size * p->kernel_size) +
                                        ic * (p->kernel_size * p->kernel_size) + kh * p->kernel_size + kw;

                            acc += input[img_idx] * weight[w_idx];
                        }
                    }
                }

                int32_t res = acc / p->scale;
                res         = CLAMP(res, 0, 32768);

                int out_idx     = oc * (p->output_h * p->output_w) + h * p->output_w + w;
                output[out_idx] = (int16_t)res;
            }
        }
    }
}

void hal_maxpool_2x2_i16(const int16_t *input, int16_t *output, int input_c, int input_h, int input_w) {
    int in_idx  = 0;
    int out_idx = 0;

    for (int i = 0; i < 6 * input_c; i++) {
        maxpool_24_6(&input[in_idx], &output[out_idx]);
        in_idx += 24;
        out_idx += 6;
    }
}

// FC1: MatMul -> ReLU -> Scale
void hal_fc_i16_i32_relu_scale(const int16_t *input, const int16_t *weight, int32_t *output, const hal_fc_params_t *p) {
    int M = p->out_features;
    int K = p->in_features;
    int N = 1;

    helper_matmul_i16_i32((int16_t *)weight, (int16_t *)input, output, M, K, N);

    for (int i = 0; i < M; i++) {
        int32_t acc = output[i];

        if (acc < 0) {
            acc = 0;
        }

        if (p->scale != 0) {
            acc = acc / p->scale;
        }

        acc = CLAMP(acc, 0, 32768);

        output[i] = acc;
    }
}

// FC2: MatMul -> Add Bias
void hal_fc_i32_i32_bias(const int32_t *input, const int32_t *weight, const int32_t *bias, int32_t *output) {
    int M = FC2_OUT_SIZE;
    int K = FC2_IN_SIZE;
    int N = 1;

    helper_matmul_i32((int32_t *)weight, (int32_t *)input, output, M, K, N);

    for (int i = 0; i < FC2_OUT_SIZE; i++) {
        output[i] += bias[i];
    }
}

// Softmax
void hal_softmax_i32(const int32_t *input, const int32_t *lut, int32_t *output, int size, int lut_size) {
    const int Q_16       = 1 << 16;
    const int SAFE_SHIFT = 2;

    int32_t x_max = -2147483648;
#define MAX_SOFTMAX_SIZE 100
    int32_t input_q16[MAX_SOFTMAX_SIZE];
    int32_t exp_vals[MAX_SOFTMAX_SIZE];

    if (size > MAX_SOFTMAX_SIZE)
        return; // Error handling needed in real code

    for (int i = 0; i < size; i++) {
        int32_t val  = CLAMP(input[i], -32767, 32767);
        input_q16[i] = val << 16;
        if (input_q16[i] > x_max) {
            x_max = input_q16[i];
        }
    }

    int32_t exp_sum = 0;

    for (int i = 0; i < size; i++) {
        int32_t delta = input_q16[i] - x_max;
        if (delta < -8 * Q_16)
            delta = -8 * Q_16;

        int64_t idx_num = (int64_t)(delta + 8 * Q_16) * (lut_size - 1);
        int32_t idx     = (int32_t)(idx_num / (8 * Q_16));

        idx         = CLAMP(idx, 0, lut_size - 1);
        exp_vals[i] = lut[idx];
        exp_sum += exp_vals[i];
    }

    if (exp_sum <= 0)
        exp_sum = 1;

    int32_t exp_sum_shr = exp_sum >> SAFE_SHIFT;
    if (exp_sum_shr <= 0)
        exp_sum_shr = 1;

    for (int i = 0; i < size; i++) {
        int32_t exp_delta_shr = exp_vals[i] >> SAFE_SHIFT;
        int64_t num           = (int64_t)exp_delta_shr * Q_16;
        output[i]             = (int32_t)(num / exp_sum_shr);
    }
}

#endif

#ifdef HAL_NN_SOFT_OPT

void hal_conv2d_i8_i16(const int8_t *input, const int8_t *weight, int16_t *output, const hal_conv_params_t *p) {
    for (int oc = 0; oc < p->output_c; oc++) {
        for (int h = 0; h < p->output_h; h++) {
            for (int w = 0; w < p->output_w; w++) {

                int32_t acc = 0;
                // CHW 格式遍历
                for (int ic = 0; ic < p->input_c; ic++) {
                    for (int kh = 0; kh < p->kernel_size; kh++) {
                        for (int kw = 0; kw < p->kernel_size; kw++) {

                            int img_idx = ic * (p->input_h * p->input_w) + (h + kh) * p->input_w + (w + kw);

                            // 权重排列假设为: [Out_C, In_C, K_H, K_W]
                            int w_idx = oc * (p->input_c * p->kernel_size * p->kernel_size) +
                                        ic * (p->kernel_size * p->kernel_size) + kh * p->kernel_size + kw;

                            acc += input[img_idx] * weight[w_idx];
                        }
                    }
                }

                int32_t res = acc / p->scale;
                res         = CLAMP(res, 0, 32768);

                int out_idx     = oc * (p->output_h * p->output_w) + h * p->output_w + w;
                output[out_idx] = (int16_t)res;
            }
        }
    }
}

void hal_maxpool_2x2_i16(const int16_t *input, int16_t *output, int input_c, int input_h, int input_w) {

    int out_h = input_h / 2; // 假设 padding=0, stride=2
    int out_w = input_w / 2;

    for (int c = 0; c < input_c; c++) {
        for (int h = 0; h < out_h; h++) {
            for (int w = 0; w < out_w; w++) {

                int16_t max_val = -32768;

                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        int in_h_idx = h * 2 + i;
                        int in_w_idx = w * 2 + j;
                        // CHW layout
                        int in_idx = c * (input_h * input_w) + in_h_idx * input_w + in_w_idx;

                        if (input[in_idx] > max_val) {
                            max_val = input[in_idx];
                        }
                    }
                }

                int out_idx     = c * (out_h * out_w) + h * out_w + w;
                output[out_idx] = max_val;
            }
        }
    }
}

// FC1: MatMul -> ReLU -> Scale
void hal_fc_i16_i32_relu_scale(const int16_t *input, const int16_t *weight, int32_t *output, const hal_fc_params_t *p) {
    for (int i = 0; i < p->out_features; i++) {
        int32_t acc = 0;
        for (int j = 0; j < p->in_features; j++) {
            // weight shape: [Out, In]
            acc += (int32_t)input[j] * weight[i * p->in_features + j];
        }

        if (acc < 0)
            acc = 0; // ReLU

        acc = acc / p->scale;
        acc = CLAMP(acc, 0, 32768);

        output[i] = acc;
    }
}

// FC2: MatMul -> Add Bias
void hal_fc_i32_i32_bias(const int32_t *input, const int32_t *weight, const int32_t *bias, int32_t *output) {
    for (int i = 0; i < FC2_OUT_SIZE; i++) {
        int32_t acc = 0;
        for (int j = 0; j < FC2_IN_SIZE; j++) {
            acc += input[j] * weight[i * FC2_IN_SIZE + j];
        }
        acc += bias[i];
        output[i] = acc;
    }
}

// Softmax
void hal_softmax_i32(const int32_t *input, const int32_t *lut, int32_t *output, int size, int lut_size) {
    const int Q_16       = 1 << 16;
    const int SAFE_SHIFT = 2;

    int32_t x_max = -2147483648;
#define MAX_SOFTMAX_SIZE 100
    int32_t input_q16[MAX_SOFTMAX_SIZE];
    int32_t exp_vals[MAX_SOFTMAX_SIZE];

    if (size > MAX_SOFTMAX_SIZE)
        return; // Error handling needed in real code

    for (int i = 0; i < size; i++) {
        int32_t val  = CLAMP(input[i], -32767, 32767);
        input_q16[i] = val << 16;
        if (input_q16[i] > x_max) {
            x_max = input_q16[i];
        }
    }

    int32_t exp_sum = 0;

    for (int i = 0; i < size; i++) {
        int32_t delta = input_q16[i] - x_max;
        if (delta < -8 * Q_16)
            delta = -8 * Q_16;

        int64_t idx_num = (int64_t)(delta + 8 * Q_16) * (lut_size - 1);
        int32_t idx     = (int32_t)(idx_num / (8 * Q_16));

        idx         = CLAMP(idx, 0, lut_size - 1);
        exp_vals[i] = lut[idx];
        exp_sum += exp_vals[i];
    }

    if (exp_sum <= 0)
        exp_sum = 1;

    int32_t exp_sum_shr = exp_sum >> SAFE_SHIFT;
    if (exp_sum_shr <= 0)
        exp_sum_shr = 1;

    for (int i = 0; i < size; i++) {
        int32_t exp_delta_shr = exp_vals[i] >> SAFE_SHIFT;
        int64_t num           = (int64_t)exp_delta_shr * Q_16;
        output[i]             = (int32_t)(num / exp_sum_shr);
    }
}

static inline void matmul_i32_8x8(int32_t *A, int32_t *B, int32_t *C) {}

#endif

#endif // HAL_NN_H
