// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__i = 8U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/ubuntu/hw/project/EE219-AICS-2025/projects/project/hw/vsrc/top.v", 11, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ren_inst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__raddr_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rdata_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ram_r_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ram_r_addr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ram_r_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ram_w_ena = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__pc_stall = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__rom_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__vec_rs1_r_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__vec_rs1_r_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__vec_rs1_data = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__vram_r_data);
    vlSelf->top__DOT__RV64I__DOT__epavvrInwBl = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__X5fLoFTh = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__plyN9CKEI = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__MrCY1P97 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__stsrseQpu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__RV64I__DOT__D7oya5Igy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__wWjUJ9g = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RV64I__DOT__z0MsdO = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__CP5BekSY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RV64I__DOT__cSWijWYsS = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9a5b570a__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h2869f3d5__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7eaab0d4__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hd1cd3f69__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hdce0b88d__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hbd185f73__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9d2eb154__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_haee5d15a__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_ha7ff697c__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h8bfe8111__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h23d4b69d__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hf41acb5a__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h3deb0372__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hc944f92e__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hb88e4699__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7c6be18f__0 = 0;
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__H = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__valu_result);
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din);
    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_f_rs1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data);
    vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT____VdfgExtracted_h505d93b6__0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vi0]);
    }
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vfunc_ram_inst_helper__0__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__1__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__3__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__4__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__5__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__6__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__7__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__8__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__9__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__10__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
