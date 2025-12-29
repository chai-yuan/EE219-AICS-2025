#ifndef RV_CUSTOM_EXT_H
#define RV_CUSTOM_EXT_H

#include <stdint.h>

static inline void maxpool_24_6(const void *src_addr, void *dst_addr) {
    asm volatile(".insn r 0x7B, 0x0, 0x0, x0, %0, %1" : : "r"(dst_addr), "r"(src_addr));
}

static inline void relu_512_32(const void *src_addr, void *dst_addr) {
    asm volatile(".insn r 0x7B, 0x1, 0x0, x0, %0, %1" : : "r"(dst_addr), "r"(src_addr));
}

static inline void relu_512_16(const void *src_addr, void *dst_addr) {
    asm volatile(".insn r 0x7B, 0x2, 0x0, x0, %0, %1" : : "r"(dst_addr), "r"(src_addr));
}

#endif // RV_CUSTOM_EXT_H
