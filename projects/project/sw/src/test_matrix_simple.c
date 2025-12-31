#include "libnn/rv_custom_ext.h"
#include "model.h"
#include "trap.h"
#include <stdint.h>

#define HAL_NN_SOFT
#include "libnn/hal_nn.h"

// 定义矩阵维度: C(M x N) = A(M x K) * B(K x N)
#define M_DIM 16
#define K_DIM 20
#define N_DIM 16

int32_t src_a[M_DIM * K_DIM];
int32_t src_b[K_DIM * N_DIM];
int32_t dst_soft[M_DIM * N_DIM];
int32_t dst_hard[M_DIM * N_DIM];

// 简单的 O(N^3) 矩阵乘法
void matmul_software_ref(int32_t *A, int32_t *B, int32_t *C, int M, int K, int N) {
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

void init_data() {
    for (int i = 0; i < M_DIM * K_DIM; i++) {
        src_a[i] = (int32_t)(i % 10 + 1);
    }
    for (int i = 0; i < K_DIM * N_DIM; i++) {
        src_b[i] = (int32_t)(i % 5 + 1);
    }

    for (int i = 0; i < M_DIM * N_DIM; i++) {
        dst_soft[i] = 0;
        dst_hard[i] = 0;
    }
}

int main() {
    printf("Matrix Multiplication Test: [%d x %d] * [%d x %d]\n", M_DIM, K_DIM, K_DIM, N_DIM);

    init_data();

    // 软件实现计算 (Reference)
    printf("Running Software Reference...\n");
    matmul_software_ref(src_a, src_b, dst_soft, M_DIM, K_DIM, N_DIM);

    // 硬件计算 (DUT)
    printf("Running Hardware Acceleration...\n");
    matrix_set_w(M_DIM, K_DIM);
    matrix_set_x(K_DIM, N_DIM);
    matrix_addr(src_a, src_b);
    matrix_cal(dst_hard);

    // 结果验证
    printf("Verifying Results...\n");
    int error_cnt = 0;

    for (int i = 0; i < M_DIM * N_DIM; i++) {
        if (dst_soft[i] != dst_hard[i]) {
            error_cnt++;

            if (error_cnt <= 10) {
                printf("Mismatch at index %d: Soft=%d, Hard=%d\n", i, dst_soft[i], dst_hard[i]);
            }
        }
    }

    if (error_cnt == 0) {
        printf("Test PASS: Software and Hardware results match.\n");
        check(1); // Pass
    } else {
        printf("Test FAIL: Total errors: %d\n", error_cnt);
        check(0); // Fail
    }

    return 0;
}
