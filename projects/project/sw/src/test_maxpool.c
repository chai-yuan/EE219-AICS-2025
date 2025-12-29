#include "libnn/rv_custom_ext.h"
#include "model.h"
#include "trap.h"
#include <stdint.h>

#define HAL_NN_SOFT
#include "libnn/hal_nn.h"

#define TEST_SIZE 800

static uint32_t _rand_seed = 42;

int16_t my_rand() {
    _rand_seed = _rand_seed * 1103515245 + 12345;
    return (int16_t)((_rand_seed >> 16) & 0xFFFF);
}

int16_t src_buf[TEST_SIZE];
int16_t dst_buf1[TEST_SIZE / 2], dst_buf2[TEST_SIZE / 2];

void __maxpool_2x2_i16(const int16_t *input, int16_t *output, int input_c, int input_h, int input_w) {
    int in_idx  = 0;
    int out_idx = 0;

    for (int i = 0; i < 6 * input_c; i++) {
        maxpool_24_6(&input[in_idx], &output[out_idx]);
        in_idx += 24;
        out_idx += 6;
    }
}

int main() {
    printf("Initializing random data...\n");
    for (int i = 0; i < TEST_SIZE; i++) {
        src_buf[i] = my_rand();
    }

    // 软实现计算
    hal_maxpool_2x2_i16(src_buf, dst_buf1, KERNEL_NUM, CONV_OUT_H, CONV_OUT_W);
    // 硬件计算 (DUT)
    __maxpool_2x2_i16(src_buf, dst_buf2, KERNEL_NUM, CONV_OUT_H, CONV_OUT_W);

    // 打印结果，并使用check(bool)函数检测比较
    int error_cnt = 0;
    int out_len   = KERNEL_NUM * (CONV_OUT_H / 2) * (CONV_OUT_W / 2);

    for (int i = 0; i < out_len; i++) {
        if (dst_buf1[i] != dst_buf2[i]) {
            printf("Error at index %d: Soft=%d, Hard=%d\n", i, dst_buf1[i], dst_buf2[i]);
        }
    }

    if (error_cnt == 0) {
        printf("Test PASS\n");
        check(1);
    } else {
        printf("Total errors: %d\n", error_cnt);
        check(0);
    }

    return 0;
}
