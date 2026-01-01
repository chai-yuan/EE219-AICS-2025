// 自定义指令立即数模板，vd 固定为 1，rs1 留 0
#define CUSTOM_VLE32_IMM1() ( \
    ((0b000000 & 0x3F) << 26) |  /* funct6 */ \
    ((1 & 0x1) << 25)        |  /* vm=1 */ \
    ((0 & 0x1F) << 15)       |  /* rs1 占位 0，由 asm 填 */ \
    ((0b111 & 0x7) << 12)    |  /* funct3 */ \
    ((1 & 0x1F) << 7)        |  /* vd=1 固定 */ \
    0x07                       /* opcode */ \
)
#define CUSTOM_VLE32_IMM2() ( \
    ((0b000000 & 0x3F) << 26) |  /* funct6 */ \
    ((1 & 0x1) << 25)        |  /* vm=1 */ \
    ((0 & 0x1F) << 15)       |  /* rs1 占位 0，由 asm 填 */ \
    ((0b111 & 0x7) << 12)    |  /* funct3 */ \
    ((2 & 0x1F) << 7)        |  /* vd=2 固定 */ \
    0x07                       /* opcode */ \
)

static inline void custom_vle32_v1(void* ptr) {
    uintptr_t addr = (uintptr_t)ptr;  // 把指针转整数
    asm volatile(
        ASM_CUSTOM(CUSTOM_VLE32_IMM1())
        :
        : "r"(addr)  // 编译器会选择整数寄存器作为 rs1
        : "memory"
    );
}

static inline void custom_vle32_v2(void* ptr) {
    uintptr_t addr = (uintptr_t)ptr;
    asm volatile(
        ASM_CUSTOM(CUSTOM_VLE32_IMM2())
        :
        : "r"(addr)
        : "memory"
    );
}
