#ifndef CUSTOM_RVV_H
#define CUSTOM_RVV_H

/* ================= 基础宏 ================= */

#define STR2(s)             #s
#define STR(s)              STR2(s)

#define INST_OPV_BIN(funct6, vm, vs2, vs1, funct3, vd, opcode) 0b##funct6##vm##vs2##vs1##funct3##vd##opcode
#define WORD(inst) ".word "#inst""
#define ASM_CUSTOM(inst) WORD(inst)

/* ============ OP-V (vv / vs) ============ */
/*
31    26 25 24   20 19   15 14  12 11    7 6      0
funct6 vm  vs2     vs1     funct3  vd     opcode
*/
#define INST_OPV(funct6, vm, vs2, vs1, funct3, vd, opcode) ( \
    (((funct6) & 0x3F) << 26) | \
    (((vm)     & 0x01) << 25) | \
    (((vs2)    & 0x1F) << 20) | \
    (((vs1)    & 0x1F) << 15) | \
    (((funct3) & 0x07) << 12) | \
    (((vd)     & 0x1F) << 7 ) | \
    ((opcode)  & 0x7F) \
)

/* ============ OPIVX (vmv.v.x) ============ */
/*
funct6 | vm | vs2=0 | rs1 | funct3 | vd | opcode
*/
#define INST_OPIVX(funct6, vm, rs1, funct3, vd, opcode) ( \
    (((funct6) & 0x3F) << 26) | \
    (((vm)     & 0x01) << 25) | \
    (0                << 20) | \
    (((rs1)    & 0x1F) << 15) | \
    (((funct3) & 0x07) << 12) | \
    (((vd)     & 0x1F) << 7 ) | \
    ((opcode)  & 0x7F) \
)

/* ============ VLOAD / VSTORE ============ */

#define INST_VLOAD(funct6, vm, rs1, funct3, vd) ( \
    (((funct6) & 0x3F) << 26) | \
    (((vm)     & 0x01) << 25) | \
    (((rs1)    & 0x1F) << 15) | \
    (((funct3) & 0x07) << 12) | \
    (((vd)     & 0x1F) << 7 ) | \
    0x07 \
)

#define INST_VSTORE(funct6, vm, vs3, rs1, funct3) ( \
    (((funct6) & 0x3F) << 26) | \
    (((vm)     & 0x01) << 25) | \
    (((vs3)    & 0x1F) << 7) | \
    (((rs1)    & 0x1F) << 15) | \
    (((funct3) & 0x07) << 12) | \
    0x27 \
)

/* ============ 指令封装 ============ */

static inline void custom_vle_v1(void *rs1) { 
    asm volatile ( ".insn r 0x07, 0x7, 1, x1, %0, x0" : : "r"(rs1) : "memory" );
 }

 static inline void custom_vle_v2(void *rs1) { 
    asm volatile ( ".insn r 0x07, 0x7, 1, x2, %0, x0" : : "r"(rs1) : "memory" );
 }
 static inline void custom_vse(void *rs1) { 
    asm volatile ( ".insn r 0x27, 0x7, 1, x3, %0, x0" : : "r"(rs1) : "memory" );
 }
static inline void vmul_vv() {
    asm volatile (
        ASM_CUSTOM(INST_OPV(0b100101, 1, 1, 2, 0b010, 3, 0x57))
    );
}

static inline void vredsum_vs() {
    asm volatile (
        ASM_CUSTOM(INST_OPV(0b000000, 1, 3, 0, 0b010, 3, 0x57))
    );
}

static inline void vmv_v_x() {
    asm volatile (
        ASM_CUSTOM(INST_OPIVX(0b010111, 1, 0, 0b100, 0, 0x57))
    );
}

/* ============ setvi (只传 sew) ============ */
/*
vsetivli x0, imm, eSEW,m1
*/
#define INST_SETVI(sew) ( \
    ((sew & 0x7) << 26) | \
    (0b111 << 12) | \
    0x57 \
)

static inline void setvi8() {
    asm volatile (
        ASM_CUSTOM(INST_SETVI(0))
    );
}
static inline void setvi16() {
    asm volatile (
        ASM_CUSTOM(INST_SETVI(1))
    );
}
static inline void setvi32() {
    asm volatile (
        ASM_CUSTOM(INST_SETVI(2))
    );
}

#endif // CUSTOM_RVV_H
