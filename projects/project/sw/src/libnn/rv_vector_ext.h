#ifndef CUSTOM_RVV_H
#define CUSTOM_RVV_H

/*
 * Custom RISC-V Vector Extension Header
 * Based on provided README.md specifications.
 * VLEN=512, SEW=64
 */

// Helper macros for assembly string construction
#define STR2(s) #s
#define STR(s) STR2(s)

// Opcode Definitions
#define OP_LOAD  0x07
#define OP_STORE 0x27
#define OP_V     0x57

/*
 * Helper for calculating func7 based on func6 and vm=1
 * format: (func6 << 1) | 1
 */

// ==========================================
// LOAD / STORE Instructions
// ==========================================

/* vle64.v vd, rs1, vm */
/* Implementation: vd = Mem[x[rs1]] */
/* func6: 000000 -> func7: 0x01, func3: 111 (0x7), Op: 0x07 */
static inline void vle64_v(register int* vd, register int* rs1) {
    asm volatile(
        ".insn r %0, %1, %2, %3, %4, x0"
        :
        : "i"(OP_LOAD), "i"(0x7), "i"(0x01), "r"(vd), "r"(rs1)
        : "memory"
    );
}

/* vse64.v vs3, rs1, vm */
/* Implementation: Mem[x[rs1]] = vs3 */
/* func6: 000000 -> func7: 0x01, func3: 111 (0x7), Op: 0x27 */
static inline void vse64_v(register int* vs3, register int* rs1) {
    asm volatile(
        ".insn r %0, %1, %2, %3, %4, x0"
        :
        : "i"(OP_STORE), "i"(0x7), "i"(0x01), "r"(vs3), "r"(rs1)
        : "memory"
    );
}

// ==========================================
// Arithmetic Instructions (OPIVV, OPIVX, OPIVI)
// ==========================================

/* vadd.vv vd, vs2, vs1, vm */
/* func6: 000000 -> func7: 0x01, func3: 000 */
static inline void vadd_vv(register int* vd, register int* vs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x0, 0x01, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(vs1), "r"(vs2)
    );
}

/* vadd.vx vd, vs2, rs1, vm */
/* func6: 000000 -> func7: 0x01, func3: 100 (0x4) */
static inline void vadd_vx(register int* vd, register int* rs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x4, 0x01, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(rs1), "r"(vs2)
    );
}

/* vadd.vi vd, vs2, imm, vm */
/* func6: 000000 -> func7: 0x01, func3: 011 (0x3) */
/* Note: imm is passed in rs1 slot of .insn r format */
static inline void vadd_vi(register int* vd, register int imm, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x3, 0x01, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(imm), "r"(vs2)
    );
}

/* vsub.vv vd, vs2, vs1, vm */
/* func6: 000010 (0x02) -> func7: 0x05, func3: 000 */
static inline void vsub_vv(register int* vd, register int* vs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x0, 0x05, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(vs1), "r"(vs2)
    );
}

/* vsub.vx vd, vs2, rs1, vm */
/* func6: 000010 (0x02) -> func7: 0x05, func3: 100 (0x4) */
static inline void vsub_vx(register int* vd, register int* rs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x4, 0x05, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(rs1), "r"(vs2)
    );
}

// ==========================================
// Multiply / Divide (OPMVV, OPMVX)
// ==========================================

/* vmul.vv vd, vs2, vs1, vm */
/* func6: 100101 (0x25) -> func7: 0x4B, func3: 010 (0x2) */
static inline void vmul_vv(register int* vd, register int* vs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x2, 0x4B, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(vs1), "r"(vs2)
    );
}

/* vmul.vx vd, vs2, rs1, vm */
/* func6: 100101 (0x25) -> func7: 0x4B, func3: 110 (0x6) */
static inline void vmul_vx(register int* vd, register int* rs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x6, 0x4B, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(rs1), "r"(vs2)
    );
}

/* vdiv.vv vd, vs2, vs1, vm */
/* func6: 100001 (0x21) -> func7: 0x43, func3: 010 (0x2) */
static inline void vdiv_vv(register int* vd, register int* vs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x2, 0x43, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(vs1), "r"(vs2)
    );
}

/* vdiv.vx vd, vs2, rs1, vm */
/* func6: 100001 (0x21) -> func7: 0x43, func3: 110 (0x6) */
static inline void vdiv_vx(register int* vd, register int* rs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x6, 0x43, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(rs1), "r"(vs2)
    );
}

// ==========================================
// Move Instructions
// ==========================================

/* vmv.v.x vd, rs1, vm */
/* func6: 010111 (0x17) -> func7: 0x2F, func3: 100 (0x4) */
/* Hint: Set vid_wb_from_rs1 to 1 */
static inline void vmv_v_x(register int* vd, register int* rs1) {
    asm volatile(
        ".insn r %0, 0x4, 0x2F, %1, %2, x0"
        :
        : "i"(OP_V), "r"(vd), "r"(rs1)
    );
}

// ==========================================
// Min / Max Instructions
// ==========================================

/* vmin.vv vd, vs2, vs1, vm */
/* func6: 000101 (0x05) -> func7: 0x0B, func3: 000 */
static inline void vmin_vv(register int* vd, register int* vs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x0, 0x0B, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(vs1), "r"(vs2)
    );
}

/* vmin.vx vd, vs2, rs1, vm */
/* func6: 000101 (0x05) -> func7: 0x0B, func3: 100 (0x4) */
static inline void vmin_vx(register int* vd, register int* rs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x4, 0x0B, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(rs1), "r"(vs2)
    );
}

/* vmax.vv vd, vs2, vs1, vm */
/* func6: 000111 (0x07) -> func7: 0x0F, func3: 000 */
static inline void vmax_vv(register int* vd, register int* vs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x0, 0x0F, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(vs1), "r"(vs2)
    );
}

/* vmax.vx vd, vs2, rs1, vm */
/* func6: 000111 (0x07) -> func7: 0x0F, func3: 100 (0x4) */
static inline void vmax_vx(register int* vd, register int* rs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x4, 0x0F, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(rs1), "r"(vs2)
    );
}

// ==========================================
// Shift Instructions (VSRA)
// ==========================================

/* vsra.vv vd, vs2, vs1, vm */
/* func6: 101001 (0x29) -> func7: 0x53, func3: 000 */
static inline void vsra_vv(register int* vd, register int* vs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x0, 0x53, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(vs1), "r"(vs2)
    );
}

/* vsra.vx vd, vs2, rs1, vm */
/* func6: 101001 (0x29) -> func7: 0x53, func3: 100 (0x4) */
static inline void vsra_vx(register int* vd, register int* rs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x4, 0x53, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(rs1), "r"(vs2)
    );
}

/* vsra.vi vd, vs2, uimm, vm */
/* func6: 101001 (0x29) -> func7: 0x53, func3: 011 (0x3) */
static inline void vsra_vi(register int* vd, register int uimm, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x3, 0x53, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(uimm), "r"(vs2)
    );
}

// ==========================================
// Reduction Instructions (OPMVV)
// ==========================================

/* vredsum.vs vd, vs2, vs1, vm */
/* func6: 000000 -> func7: 0x01, func3: 010 (0x2) */
static inline void vredsum_vs(register int* vd, register int* vs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x2, 0x01, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(vs1), "r"(vs2)
    );
}

/* vredmax.vs vd, vs2, vs1, vm */
/* func6: 000111 (0x07) -> func7: 0x0F, func3: 010 (0x2) */
static inline void vredmax_vs(register int* vd, register int* vs1, register int* vs2) {
    asm volatile(
        ".insn r %0, 0x2, 0x0F, %1, %2, %3"
        :
        : "i"(OP_V), "r"(vd), "r"(vs1), "r"(vs2)
    );
}

#endif // CUSTOM_RVV_H
