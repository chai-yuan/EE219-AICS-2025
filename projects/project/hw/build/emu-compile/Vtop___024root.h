// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024unit;


class Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ top__DOT__ren_inst;
        CData/*0:0*/ top__DOT__ram_r_ena;
        CData/*0:0*/ top__DOT__ram_w_ena;
        CData/*0:0*/ top__DOT__pc_stall;
        CData/*0:0*/ top__DOT__vec_rs1_r_ena;
        CData/*4:0*/ top__DOT__vec_rs1_r_addr;
        CData/*0:0*/ top__DOT__RV64I__DOT__plyN9CKEI;
        CData/*0:0*/ top__DOT__RV64I__DOT__stsrseQpu;
        CData/*7:0*/ top__DOT__RV64I__DOT__FsjRBjnjb1;
        CData/*0:0*/ top__DOT__RV64I__DOT__D7oya5Igy;
        CData/*0:0*/ top__DOT__RV64I__DOT__wWjUJ9g;
        CData/*2:0*/ top__DOT__RV64I__DOT__Yb5ekIkGnKG8c;
        CData/*0:0*/ top__DOT__RV64I__DOT__z0MsdO;
        CData/*0:0*/ top__DOT__RV64I__DOT__CP5BekSY;
        CData/*4:0*/ top__DOT__RV64I__DOT__fjN1GhT7w;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW;
    };
    struct {
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9a5b570a__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h2869f3d5__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7eaab0d4__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hd1cd3f69__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hdce0b88d__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hbd185f73__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9d2eb154__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_haee5d15a__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_ha7ff697c__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h8bfe8111__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h23d4b69d__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hf41acb5a__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h3deb0372__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hc944f92e__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hb88e4699__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7c6be18f__0;
        CData/*0:0*/ top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc;
        CData/*7:0*/ top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm;
        CData/*7:0*/ top__DOT__RV_VECTOR__DOT__valu_opcode;
        CData/*0:0*/ top__DOT__RV_VECTOR__DOT__vmem_ren;
        CData/*0:0*/ top__DOT__RV_VECTOR__DOT__vmem_wen;
        CData/*0:0*/ top__DOT__RV_VECTOR__DOT__vid_wb_en;
        CData/*0:0*/ top__DOT__RV_VECTOR__DOT__vid_wb_sel;
        CData/*4:0*/ top__DOT__RV_VECTOR__DOT__vid_wb_addr;
        CData/*0:0*/ top__DOT__RV_VECTOR__DOT__vid_wb_f_rs1;
        CData/*0:0*/ top__DOT__RV_VECTOR__DOT__vs1_en;
        CData/*4:0*/ top__DOT__RV_VECTOR__DOT__vs1_addr;
        CData/*0:0*/ top__DOT__RV_VECTOR__DOT__vs2_en;
        CData/*4:0*/ top__DOT__RV_VECTOR__DOT__vs2_addr;
        CData/*0:0*/ top__DOT__RV_VECTOR__DOT__V_ID__DOT____VdfgExtracted_h505d93b6__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY;
        IData/*31:0*/ top__DOT__inst;
        VlWide<16>/*511:0*/ top__DOT__vram_r_data;
        IData/*31:0*/ top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C;
        IData/*31:0*/ top__DOT__RV64I__DOT__juyxmMf__DOT__H;
        VlWide<16>/*511:0*/ top__DOT__RV_VECTOR__DOT__operand_v1;
        VlWide<16>/*511:0*/ top__DOT__RV_VECTOR__DOT__operand_v2;
        VlWide<16>/*511:0*/ top__DOT__RV_VECTOR__DOT__valu_result;
        VlWide<16>/*511:0*/ top__DOT__RV_VECTOR__DOT__vmem_din;
        VlWide<16>/*511:0*/ top__DOT__RV_VECTOR__DOT__vs1_data;
        VlWide<16>/*511:0*/ top__DOT__RV_VECTOR__DOT__vs2_data;
        IData/*31:0*/ top__DOT__RV_VECTOR__DOT__V_REG__DOT__i;
        IData/*31:0*/ top__DOT__RV_VECTOR__DOT__V_ALU__DOT__i;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top__DOT__raddr_inst;
        QData/*63:0*/ top__DOT__rdata_inst;
        QData/*63:0*/ top__DOT__ram_r_addr;
        QData/*63:0*/ top__DOT__ram_r_data;
        QData/*63:0*/ top__DOT__rom_rdata;
        QData/*63:0*/ top__DOT__vec_rs1_data;
        QData/*63:0*/ top__DOT__RV64I__DOT__epavvrInwBl;
        QData/*63:0*/ top__DOT__RV64I__DOT__X5fLoFTh;
        QData/*63:0*/ top__DOT__RV64I__DOT__MrCY1P97;
        QData/*63:0*/ top__DOT__RV64I__DOT__BvitSgq1Hyw;
        QData/*63:0*/ top__DOT__RV64I__DOT__Lv5ku5dc93v;
        QData/*63:0*/ top__DOT__RV64I__DOT__gY53pm6Uc1a5z;
        QData/*63:0*/ top__DOT__RV64I__DOT__cSWijWYsS;
        QData/*63:0*/ top__DOT__RV64I__DOT__eD5A2ng0__DOT__db;
        QData/*63:0*/ top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju;
    };
    struct {
        QData/*63:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0;
        QData/*63:0*/ top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0;
        QData/*63:0*/ top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx;
        QData/*63:0*/ top__DOT__RV_VECTOR__DOT__vmem_addr;
        QData/*63:0*/ __Vfunc_ram_inst_helper__0__Vfuncout;
        QData/*63:0*/ __Vfunc_ram_read_helper__1__Vfuncout;
        QData/*63:0*/ __Vfunc_ram_read_helper__3__Vfuncout;
        QData/*63:0*/ __Vfunc_ram_read_helper__4__Vfuncout;
        QData/*63:0*/ __Vfunc_ram_read_helper__5__Vfuncout;
        QData/*63:0*/ __Vfunc_ram_read_helper__6__Vfuncout;
        QData/*63:0*/ __Vfunc_ram_read_helper__7__Vfuncout;
        QData/*63:0*/ __Vfunc_ram_read_helper__8__Vfuncout;
        QData/*63:0*/ __Vfunc_ram_read_helper__9__Vfuncout;
        QData/*63:0*/ __Vfunc_ram_read_helper__10__Vfuncout;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__regs;
        VlUnpacked<QData/*63:0*/, 32> top__DOT____Vcellout__RV64I____pinNumber13;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw;
        VlUnpacked<VlWide<16>/*511:0*/, 32> top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile;
        VlUnpacked<QData/*63:0*/, 8> top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1;
        VlUnpacked<QData/*63:0*/, 8> top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2;
        VlUnpacked<QData/*63:0*/, 8> top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
