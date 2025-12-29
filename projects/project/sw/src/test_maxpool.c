#include "libnn/rv_custom_ext.h"
#include "model.h"
#include "trap.h"
#include <stdint.h>

#define HAL_NN_SOFT
#include "libnn/hal_nn.h"

#define TEST_SIZE 256


static uint32_t _rand_seed = 2023;

int16_t my_rand() {
    _rand_seed = _rand_seed * 1103515245 + 12345;
    return (int16_t)((_rand_seed >> 16) & 0xFFFF);
}

int16_t src_buf[TEST_SIZE];
int16_t dst_buf1[TEST_SIZE], dst_buf2[TEST_SIZE];

int main() {
    printf("Initializing random data...\n");
    for (int i = 0; i < TEST_SIZE; i++) {
        src_buf[i] = my_rand();
    }

    // 软实现计算
    hal_maxpool_2x2_i16(src_buf, dst_buf1, KERNEL_NUM, CONV_OUT_H, CONV_OUT_W);
    // 硬件计算 (DUT)
    maxpool_24_6(&src_buf[0], &dst_buf2[0]);

    // 打印结果，并使用check(bool)函数检测比较
    int error_cnt = 0;
    int out_len = KERNEL_NUM * CONV_OUT_H * CONV_OUT_W;

    if (out_len > TEST_SIZE) out_len = TEST_SIZE;

    for (int i = 0; i < out_len; i++) {
        if (dst_buf1[i] != dst_buf2[i]) {
            error_cnt++;
            // 仅打印前几个错误，避免刷屏
            if (error_cnt <= 10) {
                printf("Error at index %d: Soft=%d, Hard=%d\n", i, dst_buf1[i], dst_buf2[i]);
            }
        }
    }

    if (error_cnt == 0) {
        check(1);
    } else {
        printf("Total errors: %d\n", error_cnt);
        check(0);
    }

    return 0;
}
