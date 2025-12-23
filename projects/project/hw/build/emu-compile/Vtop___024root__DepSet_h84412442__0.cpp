// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;
void Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__RV64I__DOT__CP5BekSY = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->top__DOT__RV64I__DOT__z0MsdO));
    vlSelf->top__DOT__RV64I__DOT__plyN9CKEI = ((~ (IData)(vlSelf->reset)) 
                                               & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9a5b570a__0) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)));
    vlSelf->top__DOT__RV64I__DOT__stsrseQpu = ((~ (IData)(vlSelf->reset)) 
                                               & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h2869f3d5__0) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)));
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[1U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[2U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[3U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[4U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[5U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[6U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[7U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[8U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[9U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xaU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xbU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xcU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xdU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xeU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xfU] = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] = 0U;
        vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w = 0U;
        vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1 = 0U;
        vlSelf->top__DOT__RV64I__DOT__X5fLoFTh = 0ULL;
    } else {
        if (vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en) {
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xfU];
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        }
        if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) {
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
                [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xfU];
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        }
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] = 0U;
        vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w = ((IData)(vlSelf->top__DOT__RV64I__DOT__z0MsdO)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 7U))
                                                    : 0U);
        vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1 = 
            ((0x37U == (0x7fU & vlSelf->top__DOT__inst))
              ? 0x20U : ((0x17U == (0x7fU & vlSelf->top__DOT__inst))
                          ? 0x21U : ((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst))
                                      ? 0x40U : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O)
                                                  ? 0x80U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd)
                                                   ? 0x60U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)
                                                    ? 0x61U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)
                                                     ? 0x62U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)
                                                      ? 0x63U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz)
                                                       ? 0x64U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj)
                                                        ? 0x65U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy)
                                                         ? 0x80U
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)
                                                          ? 0x80U
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)
                                                           ? 0x80U
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)
                                                            ? 0x80U
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)
                                                             ? 0x80U
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY)
                                                              ? 0x80U
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)
                                                               ? 0x80U
                                                               : 
                                                              ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)
                                                                ? 0x80U
                                                                : 
                                                               ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ)
                                                                 ? 0x80U
                                                                 : 
                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2)
                                                                  ? 0x82U
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ)
                                                                   ? 0x83U
                                                                   : 
                                                                  ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB)
                                                                    ? 0x84U
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt)
                                                                     ? 0x85U
                                                                     : 
                                                                    ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE)
                                                                      ? 0x86U
                                                                      : 
                                                                     ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim)
                                                                       ? 0x87U
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V)
                                                                        ? 0x88U
                                                                        : 
                                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY)
                                                                         ? 0x89U
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4)
                                                                          ? 0x80U
                                                                          : 
                                                                         ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt)
                                                                           ? 0x81U
                                                                           : 
                                                                          ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z)
                                                                            ? 0x87U
                                                                            : 
                                                                           ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb)
                                                                             ? 0x82U
                                                                             : 
                                                                            ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1)
                                                                              ? 0x83U
                                                                              : 
                                                                             ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r)
                                                                               ? 0x84U
                                                                               : 
                                                                              ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA)
                                                                                ? 0x88U
                                                                                : 
                                                                               ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln)
                                                                                 ? 0x85U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7)
                                                                                 ? 0x86U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I)
                                                                                 ? 0x8aU
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)
                                                                                 ? 0x87U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg)
                                                                                 ? 0x88U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)
                                                                                 ? 0x81U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)
                                                                                 ? 0x87U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7)
                                                                                 ? 0x88U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((0x6bU 
                                                                                == vlSelf->top__DOT__inst)
                                                                                 ? 0xb0U
                                                                                 : 
                                                                                ((0x5007fU 
                                                                                == vlSelf->top__DOT__inst)
                                                                                 ? 0xb1U
                                                                                 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))));
        vlSelf->top__DOT__RV64I__DOT__X5fLoFTh = ((IData)(vlSelf->top__DOT__RV64I__DOT__plyN9CKEI)
                                                   ? 
                                                  vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9a5b570a__0)
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__inst 
                                                          >> 0xfU))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                                        ? 0xaU
                                                        : 0U)))]
                                                   : 0ULL);
    }
    vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw = ((IData)(vlSelf->top__DOT__RV64I__DOT__plyN9CKEI)
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7))
                                                   ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__X5fLoFTh))
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__RV64I__DOT__X5fLoFTh 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__X5fLoFTh)))
                                                    : vlSelf->top__DOT__RV64I__DOT__X5fLoFTh))
                                                  : 0ULL);
    vlSelf->top__DOT__RV64I__DOT__MrCY1P97 = ((IData)(vlSelf->reset)
                                               ? 0ULL
                                               : ((IData)(vlSelf->top__DOT__RV64I__DOT__stsrseQpu)
                                                   ? 
                                                  vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h2869f3d5__0)
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__inst 
                                                          >> 0x14U))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                                        ? 0xaU
                                                        : 0U)))]
                                                   : 0ULL));
    vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v = (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7eaab0d4__0) 
                                                  | ((IData)(vlSelf->top__DOT__ram_w_ena) 
                                                     | ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__inst)) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hd1cd3f69__0))))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hc944f92e__0)
                                                   ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__ram_r_ena)
                                                    ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hb88e4699__0)
                                                     ? (QData)((IData)(
                                                                       (0x3fU 
                                                                        & (vlSelf->top__DOT__inst 
                                                                           >> 0x14U))))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__ram_w_ena)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->top__DOT__inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelf->top__DOT__inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelf->top__DOT__inst 
                                                                               >> 7U))))))
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst))
                                                       ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hd1cd3f69__0)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->top__DOT__inst 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->top__DOT__inst))))
                                                        : 0ULL))))))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__stsrseQpu)
                                                   ? 
                                                  (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg) 
                                                    | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hdce0b88d__0)))
                                                    ? (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__MrCY1P97))))
                                                    : vlSelf->top__DOT__RV64I__DOT__MrCY1P97)
                                                   : 0ULL));
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc 
        = ((0x60U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
            ? (vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v 
               == vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw)
            : ((0x61U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                ? (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                   != vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                : ((0x62U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                    ? VL_LTS_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                    : ((0x63U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                        ? VL_GTES_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                        : ((0x64U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                            ? (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                               < vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                            : ((0x65U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1)) 
                               & (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                  >= vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))))));
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx 
        = ((IData)(vlSelf->reset) ? 0ULL : ((0x80U 
                                             & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                             ? ((0x40U 
                                                 & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                 ? 0ULL
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 0ULL
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                     ? 0ULL
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 0ULL
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       * vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                       : 
                                                      VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       & vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       | vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       ^ vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      ((vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                        < vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                        ? 1ULL
                                                        : 0ULL)
                                                       : 
                                                      (VL_LTS_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                        ? 1ULL
                                                        : 0ULL))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       - vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       + vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))))))))
                                             : ((0x40U 
                                                 & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                 ? 
                                                ((0x20U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z))))))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                     ? 0ULL
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 0ULL
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + 
                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                                         ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0
                                                         : 0ULL))))))))
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                     ? 0ULL
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                       : vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))))
                                                  : 0ULL))));
    vlSelf->top__DOT__ram_r_addr = ((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                     ? (4ULL + vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju)
                                     : (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG) 
                                         | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A) 
                                            | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9) 
                                               | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)))))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx)))
                                         : vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx));
    vlSelf->top__DOT__RV64I__DOT__epavvrInwBl = ((IData)(vlSelf->reset)
                                                  ? 0x80000000ULL
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                                   ? vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc)
                                                    ? vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx
                                                    : 0x80000000ULL)));
    if ((0x57U == (0x7fU & vlSelf->top__DOT__inst))) {
        if ((0x4000U & vlSelf->top__DOT__inst)) {
            if ((0x2000U & vlSelf->top__DOT__inst)) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0xcU)))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU];
                }
            } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                 >> 0xcU)))) {
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU];
            }
        } else if ((0x2000U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU];
        } else if ((1U & (~ (vlSelf->top__DOT__inst 
                             >> 0xcU)))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU];
        }
    }
    if ((0x57U != (0x7fU & vlSelf->top__DOT__inst))) {
        if ((7U != (0x7fU & vlSelf->top__DOT__inst))) {
            if ((0x27U == (0x7fU & vlSelf->top__DOT__inst))) {
                if (vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT____VdfgExtracted_h505d93b6__0) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[1U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[2U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[3U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[4U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[5U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[6U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[7U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[8U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[9U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xaU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xbU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xcU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xdU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xeU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xfU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU];
                }
            }
        }
    }
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__ram_r_ena, 
                                                                ((vlSelf->top__DOT__ram_r_addr 
                                                                  - 0x80000000ULL) 
                                                                 >> 3U), vlSelf->__Vfunc_ram_read_helper__1__Vfuncout);
    vlSelf->top__DOT__ram_r_data = vlSelf->__Vfunc_ram_read_helper__1__Vfuncout;
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
        = ((1U & (IData)((vlSelf->top__DOT__ram_r_addr 
                          >> 2U))) ? (IData)((vlSelf->top__DOT__ram_r_data 
                                              >> 0x20U))
            : (IData)(vlSelf->top__DOT__ram_r_data));
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY 
        = (0xffffU & ((1U & (IData)((vlSelf->top__DOT__ram_r_addr 
                                     >> 1U))) ? (vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
                                                 >> 0x10U)
                       : vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C));
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm 
        = (0xffU & ((1U & (IData)(vlSelf->top__DOT__ram_r_addr))
                     ? ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                        >> 8U) : (IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)));
    vlSelf->top__DOT__RV64I__DOT__cSWijWYsS = ((IData)(vlSelf->reset)
                                                ? 0ULL
                                                : ((IData)(vlSelf->top__DOT__ram_r_ena)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm) 
                                                                             >> 7U))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm)))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                      ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                                                                               >> 0xfU))))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                        ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY))
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C)))
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                          ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C))
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                           ? vlSelf->top__DOT__ram_r_data
                                                           : 0ULL)))))))
                                                    : vlSelf->top__DOT__ram_r_addr));
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[1U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (1U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [1U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[2U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (2U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [2U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[3U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (3U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [3U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[4U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (4U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [4U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[5U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (5U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [5U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[6U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (6U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [6U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[7U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (7U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [7U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[8U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (8U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [8U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[9U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (9U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [9U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xaU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xaU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xaU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xbU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xbU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xbU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xcU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xcU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xcU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xdU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xdU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xdU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xeU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xeU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xeU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xfU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xfU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xfU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x10U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x10U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x10U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x11U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x11U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x11U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x12U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x12U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x12U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x13U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x13U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x13U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x14U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x14U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x14U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x15U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x15U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x15U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x16U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x16U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x16U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x17U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x17U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x17U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x18U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x18U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x18U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x19U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x19U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x19U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1aU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1aU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1aU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1bU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1bU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1bU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1cU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1cU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1cU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1dU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1dU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1dU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1eU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1eU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1eU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1fU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1fU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1fU]);
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[1U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [1U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[2U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [2U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[3U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [3U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[4U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [4U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[5U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [5U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[6U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [6U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[7U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [7U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[8U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [8U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[9U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [9U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xaU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xaU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xbU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xbU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xcU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xcU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xdU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xdU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xeU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xeU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xfU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xfU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x10U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x10U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x11U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x11U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x12U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x12U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x13U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x13U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x14U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x14U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x15U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x15U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x16U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x16U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x17U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x17U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x18U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x18U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x19U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x19U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1aU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1aU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1bU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1bU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1cU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1cU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1dU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1dU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1eU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1eU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1fU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1fU];
    vlSelf->top__DOT__regs[0U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0U];
    vlSelf->top__DOT__regs[1U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [1U];
    vlSelf->top__DOT__regs[2U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [2U];
    vlSelf->top__DOT__regs[3U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [3U];
    vlSelf->top__DOT__regs[4U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [4U];
    vlSelf->top__DOT__regs[5U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [5U];
    vlSelf->top__DOT__regs[6U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [6U];
    vlSelf->top__DOT__regs[7U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [7U];
    vlSelf->top__DOT__regs[8U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [8U];
    vlSelf->top__DOT__regs[9U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [9U];
    vlSelf->top__DOT__regs[0xaU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xaU];
    vlSelf->top__DOT__regs[0xbU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xbU];
    vlSelf->top__DOT__regs[0xcU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xcU];
    vlSelf->top__DOT__regs[0xdU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xdU];
    vlSelf->top__DOT__regs[0xeU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xeU];
    vlSelf->top__DOT__regs[0xfU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xfU];
    vlSelf->top__DOT__regs[0x10U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x10U];
    vlSelf->top__DOT__regs[0x11U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x11U];
    vlSelf->top__DOT__regs[0x12U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x12U];
    vlSelf->top__DOT__regs[0x13U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x13U];
    vlSelf->top__DOT__regs[0x14U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x14U];
    vlSelf->top__DOT__regs[0x15U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x15U];
    vlSelf->top__DOT__regs[0x16U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x16U];
    vlSelf->top__DOT__regs[0x17U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x17U];
    vlSelf->top__DOT__regs[0x18U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x18U];
    vlSelf->top__DOT__regs[0x19U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x19U];
    vlSelf->top__DOT__regs[0x1aU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1aU];
    vlSelf->top__DOT__regs[0x1bU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1bU];
    vlSelf->top__DOT__regs[0x1cU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1cU];
    vlSelf->top__DOT__regs[0x1dU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1dU];
    vlSelf->top__DOT__regs[0x1eU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1eU];
    vlSelf->top__DOT__regs[0x1fU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1fU];
    vlSelf->top__DOT__vec_rs1_data = ((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                       ? vlSelf->top__DOT__regs
                                      [vlSelf->top__DOT__vec_rs1_r_addr]
                                       : 0ULL);
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] = 0U;
    if ((0x57U == (0x7fU & vlSelf->top__DOT__inst))) {
        if ((0x4000U & vlSelf->top__DOT__inst)) {
            if ((0x2000U & vlSelf->top__DOT__inst)) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0xcU)))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                }
            } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                 >> 0xcU)))) {
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
            }
        } else if ((0x2000U & vlSelf->top__DOT__inst)) {
            if ((0x1000U & vlSelf->top__DOT__inst)) {
                if ((0U == (vlSelf->top__DOT__inst 
                            >> 0x1aU))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                } else if ((0x29U == (vlSelf->top__DOT__inst 
                                      >> 0x1aU))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                }
            } else {
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[1U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[2U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[3U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[4U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[5U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[6U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[7U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[8U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[9U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xaU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xbU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xcU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xdU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xeU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xfU];
            }
        } else if ((1U & (~ (vlSelf->top__DOT__inst 
                             >> 0xcU)))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xfU];
        }
    }
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr = 0ULL;
    if ((0x57U != (0x7fU & vlSelf->top__DOT__inst))) {
        if ((7U == (0x7fU & vlSelf->top__DOT__inst))) {
            if (vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT____VdfgExtracted_h505d93b6__0) {
                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                    = vlSelf->top__DOT__vec_rs1_data;
            }
        } else if ((0x27U == (0x7fU & vlSelf->top__DOT__inst))) {
            if (vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT____VdfgExtracted_h505d93b6__0) {
                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                    = vlSelf->top__DOT__vec_rs1_data;
            }
        }
    }
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    if ((0x80U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    } else if ((0x40U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    } else if ((0x20U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    } else if ((0x10U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    } else if ((8U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        if ((4U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
        } else if ((2U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [0U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [0U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [0U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [1U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [1U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [1U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [2U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [2U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [2U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [3U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [3U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [3U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [4U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [4U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [4U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [5U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [5U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [5U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [6U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [6U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [6U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [7U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [7U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [7U]) : 0ULL);
            } else {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                [0U];
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [0U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [0U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [1U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [1U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [2U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [2U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [3U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [3U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [4U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [4U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [5U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [5U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [6U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [6U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [7U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [7U];
            }
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        if ((2U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                    [0U];
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [0U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [1U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [2U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [3U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [4U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [5U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [6U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [7U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
            } else {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [0U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [0U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [1U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [1U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [2U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [2U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [3U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [3U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [4U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [4U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [5U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [5U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [6U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [6U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [7U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [7U]);
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [0U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [0U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [0U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [0U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [1U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [1U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [1U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [1U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [2U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [2U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [2U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [2U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [3U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [3U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [3U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [3U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [4U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [4U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [4U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [4U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [5U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [5U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [5U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [5U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [6U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [6U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [6U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [6U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [7U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [7U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [7U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [7U]);
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [0U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [0U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [0U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [0U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [1U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [1U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [1U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [1U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [2U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [2U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [2U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [2U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [3U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [3U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [3U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [3U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [4U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [4U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [4U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [4U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [5U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [5U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [5U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [5U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [6U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [6U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [6U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [6U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [7U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [7U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [7U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [7U]);
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [0U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [0U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [1U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [1U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [2U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [2U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [3U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [3U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [4U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [4U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [5U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [5U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [6U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [6U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [7U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [7U]);
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [0U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [0U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [1U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [1U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [2U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [2U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [3U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [3U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [4U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [4U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [5U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [5U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [6U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [6U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [7U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [7U]);
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [1U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [2U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [3U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [4U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [5U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [6U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [7U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
    } else {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    }
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                  - 0x80000000ULL) 
                                                                 >> 3U), vlSelf->__Vfunc_ram_read_helper__3__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0U] = (IData)(vlSelf->__Vfunc_ram_read_helper__3__Vfuncout);
    vlSelf->top__DOT__vram_r_data[1U] = (IData)((vlSelf->__Vfunc_ram_read_helper__3__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (1ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__4__Vfuncout);
    vlSelf->top__DOT__vram_r_data[2U] = (IData)(vlSelf->__Vfunc_ram_read_helper__4__Vfuncout);
    vlSelf->top__DOT__vram_r_data[3U] = (IData)((vlSelf->__Vfunc_ram_read_helper__4__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (2ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__5__Vfuncout);
    vlSelf->top__DOT__vram_r_data[4U] = (IData)(vlSelf->__Vfunc_ram_read_helper__5__Vfuncout);
    vlSelf->top__DOT__vram_r_data[5U] = (IData)((vlSelf->__Vfunc_ram_read_helper__5__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (3ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
    vlSelf->top__DOT__vram_r_data[6U] = (IData)(vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
    vlSelf->top__DOT__vram_r_data[7U] = (IData)((vlSelf->__Vfunc_ram_read_helper__6__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (4ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__7__Vfuncout);
    vlSelf->top__DOT__vram_r_data[8U] = (IData)(vlSelf->__Vfunc_ram_read_helper__7__Vfuncout);
    vlSelf->top__DOT__vram_r_data[9U] = (IData)((vlSelf->__Vfunc_ram_read_helper__7__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (5ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__8__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xaU] = (IData)(vlSelf->__Vfunc_ram_read_helper__8__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xbU] = (IData)((vlSelf->__Vfunc_ram_read_helper__8__Vfuncout 
                                                   >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (6ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__9__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xcU] = (IData)(vlSelf->__Vfunc_ram_read_helper__9__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xdU] = (IData)((vlSelf->__Vfunc_ram_read_helper__9__Vfuncout 
                                                   >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (7ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__10__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xeU] = (IData)(vlSelf->__Vfunc_ram_read_helper__10__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xfU] = (IData)((vlSelf->__Vfunc_ram_read_helper__10__Vfuncout 
                                                   >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [0U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [0U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [1U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [1U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [2U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [2U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [3U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [3U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [4U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [4U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [5U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [5U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [6U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [6U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [7U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [7U] >> 0x20U));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);
void Vtop___024unit____Vdpiimwrap_ram_inst_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_inst_helper__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__db;
    __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__db = 0;
    QData/*63:0*/ __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju;
    __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v0;
    __Vdlyvset__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32;
    __Vdlyvdim0__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32 = 0;
    QData/*63:0*/ __Vdlyvval__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32;
    __Vdlyvval__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32;
    __Vdlyvset__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v0;
    __Vdlyvset__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32;
    __Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32 = 0;
    VlWide<16>/*511:0*/ __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32;
    VL_ZERO_W(512, __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32);
    CData/*0:0*/ __Vdlyvset__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32;
    __Vdlyvset__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32 = 0;
    // Body
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0U]))), 0xffffffffffffffffULL, (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 (1ULL 
                                                                  + 
                                                                  ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                    - 0x80000000ULL) 
                                                                   >> 3U)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[2U]))), 0xffffffffffffffffULL, (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 (2ULL 
                                                                  + 
                                                                  ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                    - 0x80000000ULL) 
                                                                   >> 3U)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[4U]))), 0xffffffffffffffffULL, (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 (3ULL 
                                                                  + 
                                                                  ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                    - 0x80000000ULL) 
                                                                   >> 3U)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[6U]))), 0xffffffffffffffffULL, (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 (4ULL 
                                                                  + 
                                                                  ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                    - 0x80000000ULL) 
                                                                   >> 3U)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[8U]))), 0xffffffffffffffffULL, (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 (5ULL 
                                                                  + 
                                                                  ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                    - 0x80000000ULL) 
                                                                   >> 3U)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xaU]))), 0xffffffffffffffffULL, (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 (6ULL 
                                                                  + 
                                                                  ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                    - 0x80000000ULL) 
                                                                   >> 3U)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xcU]))), 0xffffffffffffffffULL, (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 (7ULL 
                                                                  + 
                                                                  ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                    - 0x80000000ULL) 
                                                                   >> 3U)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xeU]))), 0xffffffffffffffffULL, (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen));
    __Vdlyvset__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v0 = 0U;
    __Vdlyvset__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32 = 0U;
    if (VL_UNLIKELY((0xb0U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1)))) {
        VL_FWRITEF(0x80000002U,"\n\033[31mHALT-%1#\n\033[0m",
                   32,(IData)(vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw));
        VL_FINISH_MT("/home/ubuntu/hw/project/EE219-AICS-2025/projects/project/hw/vsrc/RV64I/rvcpu.v", 863, "");
    }
    if (VL_UNLIKELY((0xb1U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1)))) {
        VL_FWRITEF(0x80000002U,"%c",8,(0xffU & (IData)(vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw)));
    }
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 ((vlSelf->top__DOT__ram_r_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U), 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                                   ? 
                                                                  ((0x3fU 
                                                                    >= 
                                                                    (0x38U 
                                                                     & ((IData)(vlSelf->top__DOT__ram_r_addr) 
                                                                        << 3U)))
                                                                    ? 
                                                                   (((IData)(vlSelf->top__DOT__ram_w_ena)
                                                                      ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                                      : 0ULL) 
                                                                    << 
                                                                    (0x38U 
                                                                     & ((IData)(vlSelf->top__DOT__ram_r_addr) 
                                                                        << 3U)))
                                                                    : 0ULL)
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                                    ? 
                                                                   ((0x3fU 
                                                                     >= 
                                                                     (0x30U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                                >> 1U)) 
                                                                         << 4U)))
                                                                     ? 
                                                                    (((IData)(vlSelf->top__DOT__ram_w_ena)
                                                                       ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                                       : 0ULL) 
                                                                     << 
                                                                     (0x30U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                                >> 1U)) 
                                                                         << 4U)))
                                                                     : 0ULL)
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                                     ? 
                                                                    ((0x3fU 
                                                                      >= 
                                                                      (0x20U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                                >> 2U)) 
                                                                          << 5U)))
                                                                      ? 
                                                                     (((IData)(vlSelf->top__DOT__ram_w_ena)
                                                                        ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                                        : 0ULL) 
                                                                      << 
                                                                      (0x20U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                                >> 2U)) 
                                                                          << 5U)))
                                                                      : 0ULL)
                                                                     : 
                                                                    ((7U 
                                                                      == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                                      ? 
                                                                     ((IData)(vlSelf->top__DOT__ram_w_ena)
                                                                       ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                                       : 0ULL)
                                                                      : 0ULL)))), 
                                                                 ((IData)(vlSelf->top__DOT__ram_w_ena)
                                                                   ? 
                                                                  ((1U 
                                                                    == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                                    ? 
                                                                   ((0U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                                     ? 0xffULL
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                                      ? 0xff00ULL
                                                                      : 
                                                                     ((2U 
                                                                       == 
                                                                       (7U 
                                                                        & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                                       ? 0xff0000ULL
                                                                       : 
                                                                      ((3U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                                        ? 0xff000000ULL
                                                                        : 
                                                                       ((4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                                         ? 0xff00000000ULL
                                                                         : 
                                                                        ((5U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                                          ? 0xff0000000000ULL
                                                                          : 
                                                                         ((6U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                                           ? 0xff000000000000ULL
                                                                           : 
                                                                          ((7U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                                            ? 0xff00000000000000ULL
                                                                            : 0ULL))))))))
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                                     ? 
                                                                    ((0U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                                >> 1U))))
                                                                      ? 0xffffULL
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                                >> 1U))))
                                                                       ? 0xffff0000ULL
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                                >> 1U))))
                                                                        ? 0xffff00000000ULL
                                                                        : 
                                                                       ((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                                >> 1U))))
                                                                         ? 0xffff000000000000ULL
                                                                         : 0ULL))))
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                                      ? 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                                >> 2U)))
                                                                       ? 0xffffffff00000000ULL
                                                                       : 0xffffffffULL)
                                                                      : 
                                                                     ((7U 
                                                                       == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                                       ? 0xffffffffffffffffULL
                                                                       : 0ULL))))
                                                                   : 0ULL), (IData)(vlSelf->top__DOT__ram_w_ena));
    __Vdlyvset__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v0 = 0U;
    __Vdlyvset__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32 = 0U;
    __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__db 
        = vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db;
    __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
        = vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju;
    if (vlSelf->reset) {
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__H = 0x20U;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__i = 0x20U;
        __Vdlyvset__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v0 = 1U;
    } else if (((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en))) {
        if (vlSelf->reset) {
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            __Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32 = 0U;
        } else {
            if (vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_f_rs1) {
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[1U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[2U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[3U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[4U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[5U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[6U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[7U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[8U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[9U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xaU] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xbU] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xcU] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xdU] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xeU] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xfU] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
            } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel) {
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0U] 
                    = vlSelf->top__DOT__vram_r_data[0U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[1U] 
                    = vlSelf->top__DOT__vram_r_data[1U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[2U] 
                    = vlSelf->top__DOT__vram_r_data[2U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[3U] 
                    = vlSelf->top__DOT__vram_r_data[3U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[4U] 
                    = vlSelf->top__DOT__vram_r_data[4U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[5U] 
                    = vlSelf->top__DOT__vram_r_data[5U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[6U] 
                    = vlSelf->top__DOT__vram_r_data[6U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[7U] 
                    = vlSelf->top__DOT__vram_r_data[7U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[8U] 
                    = vlSelf->top__DOT__vram_r_data[8U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[9U] 
                    = vlSelf->top__DOT__vram_r_data[9U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xaU] 
                    = vlSelf->top__DOT__vram_r_data[0xaU];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xbU] 
                    = vlSelf->top__DOT__vram_r_data[0xbU];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xcU] 
                    = vlSelf->top__DOT__vram_r_data[0xcU];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xdU] 
                    = vlSelf->top__DOT__vram_r_data[0xdU];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xeU] 
                    = vlSelf->top__DOT__vram_r_data[0xeU];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xfU] 
                    = vlSelf->top__DOT__vram_r_data[0xfU];
            } else {
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[1U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[2U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[3U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[4U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[5U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[6U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[7U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[8U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[9U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xaU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xbU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xcU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xdU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xeU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU];
                __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xfU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU];
            }
            __Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr;
        }
        __Vdlyvset__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32 = 1U;
    }
    if (__Vdlyvset__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v0) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xaU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xbU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xcU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xdU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xeU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0xfU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x10U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x11U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x12U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x13U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x14U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x15U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x16U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x17U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x18U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x19U][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1aU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1bU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1cU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1dU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1eU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0x1fU][0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    if (__Vdlyvset__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][0U] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][1U] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][2U] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][3U] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][4U] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][5U] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][6U] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][7U] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][8U] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][9U] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][0xaU] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][0xbU] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][0xcU] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][0xdU] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][0xeU] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[__Vdlyvdim0__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32][0xfU] 
            = __Vdlyvval__top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile__v32[0xfU];
    }
    if (vlSelf->reset) {
        __Vdlyvset__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v0 = 1U;
    } else if (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
                & (0U != (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))) {
        __Vdlyvval__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32 
            = vlSelf->top__DOT__RV64I__DOT__cSWijWYsS;
        __Vdlyvset__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32 = 1U;
        __Vdlyvdim0__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32 
            = vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w;
    }
    if (__Vdlyvset__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v0) {
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[1U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[2U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[3U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[4U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[5U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[6U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[7U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[8U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[9U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0xaU] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0xbU] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0xcU] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0xdU] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0xeU] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0xfU] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x10U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x11U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x12U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x13U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x14U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x15U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x16U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x17U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x18U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x19U] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x1aU] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x1bU] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x1cU] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x1dU] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x1eU] = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32) {
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[__Vdlyvdim0__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32] 
            = __Vdlyvval__top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw__v32;
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__db = 0x80000000ULL;
        __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju = 0x80000000ULL;
    } else if (vlSelf->top__DOT__pc_stall) {
        __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__db 
            = vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db;
        __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
            = vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju;
    } else if (((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc) 
                | (IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g))) {
        __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__db 
            = (4ULL + vlSelf->top__DOT__RV64I__DOT__epavvrInwBl);
        __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
            = vlSelf->top__DOT__RV64I__DOT__epavvrInwBl;
    } else {
        __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__db 
            = (4ULL + vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db);
        __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
            = vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db;
    }
    vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db 
        = __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__db;
    vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
        = __Vdly__top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju;
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0U] 
        = vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
        [0U];
    Vtop___024unit____Vdpiimwrap_ram_inst_helper_TOP____024unit(1U, 
                                                                ((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                                  - 0x80000000ULL) 
                                                                 >> 3U), vlSelf->__Vfunc_ram_inst_helper__0__Vfuncout);
    vlSelf->top__DOT__rom_rdata = vlSelf->__Vfunc_ram_inst_helper__0__Vfuncout;
    vlSelf->top__DOT__inst = ((1U & (IData)((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                             >> 2U)))
                               ? (IData)((vlSelf->top__DOT__rom_rdata 
                                          >> 0x20U))
                               : (IData)(vlSelf->top__DOT__rom_rdata));
    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_f_rs1 = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en = 0U;
    vlSelf->top__DOT__vec_rs1_r_addr = 0U;
    vlSelf->top__DOT__vec_rs1_r_ena = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT____VdfgExtracted_h505d93b6__0 
        = (IData)((0x6000U == (0xfc007000U & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0 
        = (((- (QData)((IData)((vlSelf->top__DOT__inst 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->top__DOT__inst 
                              >> 0x14U))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hd1cd3f69__0 
        = ((0x37U == (0x7fU & vlSelf->top__DOT__inst)) 
           | (0x17U == (0x7fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0 
        = (((- (QData)((IData)((vlSelf->top__DOT__inst 
                                >> 0x1fU)))) << 0x15U) 
           | (QData)((IData)(((0x100000U & (vlSelf->top__DOT__inst 
                                            >> 0xbU)) 
                              | ((0xff000U & vlSelf->top__DOT__inst) 
                                 | ((0x800U & (vlSelf->top__DOT__inst 
                                               >> 9U)) 
                                    | (0x7feU & (vlSelf->top__DOT__inst 
                                                 >> 0x14U))))))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0 
        = ((0x6bU == vlSelf->top__DOT__inst) | (0x5007fU 
                                                == vlSelf->top__DOT__inst));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim 
        = (IData)((0x1013U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ 
        = (IData)((0x13U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2 
        = (IData)((0x2013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ 
        = (IData)((0x3013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB 
        = (IData)((0x4013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt 
        = (IData)((0x6013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE 
        = (IData)((0x7013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy 
        = (IData)((3U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr 
        = (IData)((0x1003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc 
        = (IData)((0x2003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt 
        = (IData)((0x4003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq 
        = (IData)((0x5003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI 
        = (IData)((0x6003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr 
        = (IData)((0x3003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG 
        = (IData)((0x1bU == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb 
        = (IData)((0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln 
        = (IData)((0x6033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd 
        = (IData)((0x63U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a 
        = (IData)((0x1063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI 
        = (IData)((0x4063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg 
        = (IData)((0x5063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz 
        = (IData)((0x6063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj 
        = (IData)((0x7063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY 
        = (IData)((0x23U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no 
        = (IData)((0x1023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4 
        = (IData)((0x2023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49 
        = (IData)((0x3023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O 
        = (IData)((0x67U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h8bfe8111__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_ha7ff697c__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hf41acb5a__0 
        = (IData)((0x3bU == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h23d4b69d__0 
        = (IData)((0x501bU == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h3deb0372__0 
        = (IData)((0x503bU == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9d2eb154__0 
        = (IData)((0x33U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_haee5d15a__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren = 0U;
    vlSelf->top__DOT__ram_r_ena = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                   | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr) 
                                      | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc) 
                                         | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt) 
                                            | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq) 
                                               | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr)))))));
    vlSelf->top__DOT__RV64I__DOT__D7oya5Igy = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                                               | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a) 
                                                  | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI) 
                                                     | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg) 
                                                        | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj))))));
    vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c = (
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)
                                                     ? 4U
                                                     : 
                                                    (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no))
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)
                                                       ? 5U
                                                       : 
                                                      (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4))
                                                        ? 3U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)
                                                         ? 6U
                                                         : 
                                                        (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr) 
                                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                                          ? 7U
                                                          : 0U)))))));
    vlSelf->top__DOT__ram_w_ena = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                   | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no) 
                                      | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4) 
                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))));
    vlSelf->top__DOT__RV64I__DOT__wWjUJ9g = ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst)) 
                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hc944f92e__0 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O) 
           | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ) 
              | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2) 
                 | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ) 
                    | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB) 
                       | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt) 
                          | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE) 
                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG))))))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h8bfe8111__0) 
           & (0U == (vlSelf->top__DOT__inst >> 0x1aU)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h8bfe8111__0) 
           & (0x10U == (vlSelf->top__DOT__inst >> 0x1aU)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_ha7ff697c__0) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_ha7ff697c__0) 
           & (0x20U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hf41acb5a__0) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hf41acb5a__0) 
           & (0x20U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h23d4b69d__0) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h23d4b69d__0) 
           & (0x20U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h3deb0372__0) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h3deb0372__0) 
           & (0x20U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9d2eb154__0) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9d2eb154__0) 
           & (0x20U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9d2eb154__0) 
           & (1U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5 
        = ((0x1bU == (0x7fU & vlSelf->top__DOT__inst)) 
           & (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_haee5d15a__0));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__inst)) 
           & (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_haee5d15a__0));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4 
        = ((0x3bU == (0x7fU & vlSelf->top__DOT__inst)) 
           & (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_haee5d15a__0));
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[1U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[2U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[3U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[4U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[5U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[6U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[7U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[8U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[9U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xaU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xbU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xcU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xdU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xeU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xfU] = 0U;
    if ((0x57U == (0x7fU & vlSelf->top__DOT__inst))) {
        if ((0x4000U & vlSelf->top__DOT__inst)) {
            if ((0x2000U & vlSelf->top__DOT__inst)) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0xcU)))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = 1U;
                    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel = 0U;
                    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr 
                        = (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 7U));
                    if ((0x25U == (vlSelf->top__DOT__inst 
                                   >> 0x1aU))) {
                        vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 2U;
                    } else if ((0x21U == (vlSelf->top__DOT__inst 
                                          >> 0x1aU))) {
                        vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 0xbU;
                    }
                }
            } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                 >> 0xcU)))) {
                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = 1U;
                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel = 0U;
                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr 
                    = (0x1fU & (vlSelf->top__DOT__inst 
                                >> 7U));
                if ((vlSelf->top__DOT__inst >> 0x1fU)) {
                    if ((1U & (~ (vlSelf->top__DOT__inst 
                                  >> 0x1eU)))) {
                        if ((0x20000000U & vlSelf->top__DOT__inst)) {
                            if ((1U & (~ (vlSelf->top__DOT__inst 
                                          >> 0x1cU)))) {
                                if ((1U & (~ (vlSelf->top__DOT__inst 
                                              >> 0x1bU)))) {
                                    if ((0x4000000U 
                                         & vlSelf->top__DOT__inst)) {
                                        vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 6U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x40000000U & vlSelf->top__DOT__inst)) {
                    if ((1U & (~ (vlSelf->top__DOT__inst 
                                  >> 0x1dU)))) {
                        if ((0x10000000U & vlSelf->top__DOT__inst)) {
                            if ((0x8000000U & vlSelf->top__DOT__inst)) {
                                if ((0x4000000U & vlSelf->top__DOT__inst)) {
                                    vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 9U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                     >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->top__DOT__inst)) {
                        if ((0x8000000U & vlSelf->top__DOT__inst)) {
                            if ((0x4000000U & vlSelf->top__DOT__inst)) {
                                vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 5U;
                            }
                        } else if ((0x4000000U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 4U;
                        }
                    } else if ((0x8000000U & vlSelf->top__DOT__inst)) {
                        if ((1U & (~ (vlSelf->top__DOT__inst 
                                      >> 0x1aU)))) {
                            vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 3U;
                        }
                    } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                         >> 0x1aU)))) {
                        vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 1U;
                    }
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__inst >> 0xdU)))) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0xcU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__inst 
                                  >> 0x1fU)))) {
                        if ((0x40000000U & vlSelf->top__DOT__inst)) {
                            if ((1U & (~ (vlSelf->top__DOT__inst 
                                          >> 0x1dU)))) {
                                if ((0x10000000U & vlSelf->top__DOT__inst)) {
                                    if ((0x8000000U 
                                         & vlSelf->top__DOT__inst)) {
                                        if ((0x4000000U 
                                             & vlSelf->top__DOT__inst)) {
                                            vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_f_rs1 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x2000U & vlSelf->top__DOT__inst)) {
            if ((0x1000U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = 1U;
                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel = 0U;
                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr 
                    = (0x1fU & (vlSelf->top__DOT__inst 
                                >> 7U));
                if ((0U == (vlSelf->top__DOT__inst 
                            >> 0x1aU))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 1U;
                } else if ((0x29U == (vlSelf->top__DOT__inst 
                                      >> 0x1aU))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 6U;
                }
            } else if ((vlSelf->top__DOT__inst >> 0x1fU)) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0x1eU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__inst 
                                  >> 0x1dU)))) {
                        if ((0x10000000U & vlSelf->top__DOT__inst)) {
                            if ((1U & (~ (vlSelf->top__DOT__inst 
                                          >> 0x1bU)))) {
                                if ((0x4000000U & vlSelf->top__DOT__inst)) {
                                    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = 1U;
                                    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel = 0U;
                                    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr 
                                        = (0x1fU & 
                                           (vlSelf->top__DOT__inst 
                                            >> 7U));
                                    vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 2U;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                             >> 0x1bU)))) {
                            if ((0x4000000U & vlSelf->top__DOT__inst)) {
                                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = 1U;
                                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel = 0U;
                                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr 
                                    = (0x1fU & (vlSelf->top__DOT__inst 
                                                >> 7U));
                                vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 0xbU;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                 >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->top__DOT__inst)) {
                        if ((0x8000000U & vlSelf->top__DOT__inst)) {
                            if ((0x4000000U & vlSelf->top__DOT__inst)) {
                                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = 1U;
                                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel = 0U;
                                vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr 
                                    = (0x1fU & (vlSelf->top__DOT__inst 
                                                >> 7U));
                                vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 8U;
                            }
                        }
                    } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                         >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->top__DOT__inst 
                                      >> 0x1aU)))) {
                            vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = 1U;
                            vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel = 0U;
                            vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr 
                                = (0x1fU & (vlSelf->top__DOT__inst 
                                            >> 7U));
                            vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 7U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__inst 
                             >> 0xcU)))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = 1U;
            vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel = 0U;
            vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr 
                = (0x1fU & (vlSelf->top__DOT__inst 
                            >> 7U));
            if ((vlSelf->top__DOT__inst >> 0x1fU)) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0x1eU)))) {
                    if ((0x20000000U & vlSelf->top__DOT__inst)) {
                        if ((1U & (~ (vlSelf->top__DOT__inst 
                                      >> 0x1cU)))) {
                            if ((1U & (~ (vlSelf->top__DOT__inst 
                                          >> 0x1bU)))) {
                                if ((0x4000000U & vlSelf->top__DOT__inst)) {
                                    vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 6U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                 >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->top__DOT__inst)) {
                        if ((0x8000000U & vlSelf->top__DOT__inst)) {
                            if ((0x4000000U & vlSelf->top__DOT__inst)) {
                                vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 5U;
                            }
                        } else if ((0x4000000U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 4U;
                        }
                    } else if ((0x8000000U & vlSelf->top__DOT__inst)) {
                        if ((1U & (~ (vlSelf->top__DOT__inst 
                                      >> 0x1aU)))) {
                            vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 3U;
                        }
                    } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                         >> 0x1aU)))) {
                        vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 1U;
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->top__DOT__inst >> 0xeU)))) {
            if ((0x2000U & vlSelf->top__DOT__inst)) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0xcU)))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr 
                        = (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en = 1U;
                }
            } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                 >> 0xcU)))) {
                vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr 
                    = (0x1fU & (vlSelf->top__DOT__inst 
                                >> 0xfU));
                vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en = 1U;
            }
        }
    } else if ((7U == (0x7fU & vlSelf->top__DOT__inst))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = 1U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel = 1U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr 
            = (0x1fU & (vlSelf->top__DOT__inst >> 7U));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[1U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[2U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[3U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[4U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[5U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[6U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[7U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[8U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[9U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xaU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xbU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xcU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xdU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xeU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xfU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr][0xfU];
    } else {
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    if ((0x57U == (0x7fU & vlSelf->top__DOT__inst))) {
        if ((0x4000U & vlSelf->top__DOT__inst)) {
            if ((0x2000U & vlSelf->top__DOT__inst)) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0xcU)))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr 
                        = (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en = 1U;
                }
            } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                 >> 0xcU)))) {
                vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr 
                    = (0x1fU & (vlSelf->top__DOT__inst 
                                >> 0x14U));
                vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en = 1U;
            }
        } else if ((0x2000U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr 
                = (0x1fU & ((0x1000U & vlSelf->top__DOT__inst)
                             ? (vlSelf->top__DOT__inst 
                                >> 0x14U) : (vlSelf->top__DOT__inst 
                                             >> 0x14U)));
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en = 1U;
        } else if ((1U & (~ (vlSelf->top__DOT__inst 
                             >> 0xcU)))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr 
                = (0x1fU & (vlSelf->top__DOT__inst 
                            >> 0x14U));
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en = 1U;
        }
    } else if ((7U != (0x7fU & vlSelf->top__DOT__inst))) {
        if ((0x27U == (0x7fU & vlSelf->top__DOT__inst))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr 
                = (0x1fU & (vlSelf->top__DOT__inst 
                            >> 7U));
            vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en = 1U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU] 
            = vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile
            [vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr][0xfU];
    } else {
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] = 0U;
    vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z = ((IData)(vlSelf->top__DOT__RV64I__DOT__D7oya5Igy)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->top__DOT__inst 
                                                                         >> 0x1fU)))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      ((0x1000U 
                                                                        & (vlSelf->top__DOT__inst 
                                                                           >> 0x13U)) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->top__DOT__inst 
                                                                              << 4U)) 
                                                                          | ((0x7e0U 
                                                                              & (vlSelf->top__DOT__inst 
                                                                                >> 0x14U)) 
                                                                             | (0x1eU 
                                                                                & (vlSelf->top__DOT__inst 
                                                                                >> 7U))))))))
                                                    : 0ULL);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hdce0b88d__0 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7) 
           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hb88e4699__0 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim) 
           | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V) 
              | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY) 
                 | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5) 
                    | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg) 
                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF))))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hbd185f73__0 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4) 
           | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt) 
              | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z) 
                 | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb) 
                    | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1) 
                       | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r) 
                          | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA) 
                             | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ) 
                                | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln) 
                                   | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7) 
                                      | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I) 
                                         | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A) 
                                            | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9) 
                                               | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hdce0b88d__0)))))))))))))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7eaab0d4__0 
        = ((IData)(vlSelf->top__DOT__ram_r_ena) | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hc944f92e__0) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hb88e4699__0)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7c6be18f__0 
        = ((IData)(vlSelf->top__DOT__ram_w_ena) | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hbd185f73__0));
    vlSelf->top__DOT__RV64I__DOT__z0MsdO = ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hd1cd3f69__0) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__inst)) 
                                               | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7eaab0d4__0) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hbd185f73__0))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9a5b570a__0 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__D7oya5Igy) 
           | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7eaab0d4__0) 
              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7c6be18f__0)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h2869f3d5__0 
        = ((IData)(vlSelf->top__DOT__RV64I__DOT__D7oya5Igy) 
           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7c6be18f__0));
    vlSelf->top__DOT__RV64I__DOT__CP5BekSY = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->top__DOT__RV64I__DOT__z0MsdO));
    vlSelf->top__DOT__RV64I__DOT__plyN9CKEI = ((~ (IData)(vlSelf->reset)) 
                                               & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9a5b570a__0) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)));
    vlSelf->top__DOT__RV64I__DOT__stsrseQpu = ((~ (IData)(vlSelf->reset)) 
                                               & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h2869f3d5__0) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)));
    if (vlSelf->reset) {
        vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1 = 0U;
        vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w = 0U;
        vlSelf->top__DOT__RV64I__DOT__X5fLoFTh = 0ULL;
    } else {
        vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1 = 
            ((0x37U == (0x7fU & vlSelf->top__DOT__inst))
              ? 0x20U : ((0x17U == (0x7fU & vlSelf->top__DOT__inst))
                          ? 0x21U : ((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst))
                                      ? 0x40U : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O)
                                                  ? 0x80U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd)
                                                   ? 0x60U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)
                                                    ? 0x61U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)
                                                     ? 0x62U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)
                                                      ? 0x63U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz)
                                                       ? 0x64U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj)
                                                        ? 0x65U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy)
                                                         ? 0x80U
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)
                                                          ? 0x80U
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)
                                                           ? 0x80U
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)
                                                            ? 0x80U
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)
                                                             ? 0x80U
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY)
                                                              ? 0x80U
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)
                                                               ? 0x80U
                                                               : 
                                                              ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)
                                                                ? 0x80U
                                                                : 
                                                               ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ)
                                                                 ? 0x80U
                                                                 : 
                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2)
                                                                  ? 0x82U
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ)
                                                                   ? 0x83U
                                                                   : 
                                                                  ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB)
                                                                    ? 0x84U
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt)
                                                                     ? 0x85U
                                                                     : 
                                                                    ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE)
                                                                      ? 0x86U
                                                                      : 
                                                                     ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim)
                                                                       ? 0x87U
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V)
                                                                        ? 0x88U
                                                                        : 
                                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY)
                                                                         ? 0x89U
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4)
                                                                          ? 0x80U
                                                                          : 
                                                                         ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt)
                                                                           ? 0x81U
                                                                           : 
                                                                          ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z)
                                                                            ? 0x87U
                                                                            : 
                                                                           ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb)
                                                                             ? 0x82U
                                                                             : 
                                                                            ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1)
                                                                              ? 0x83U
                                                                              : 
                                                                             ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r)
                                                                               ? 0x84U
                                                                               : 
                                                                              ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA)
                                                                                ? 0x88U
                                                                                : 
                                                                               ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln)
                                                                                 ? 0x85U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7)
                                                                                 ? 0x86U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I)
                                                                                 ? 0x8aU
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)
                                                                                 ? 0x87U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg)
                                                                                 ? 0x88U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)
                                                                                 ? 0x81U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)
                                                                                 ? 0x87U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7)
                                                                                 ? 0x88U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((0x6bU 
                                                                                == vlSelf->top__DOT__inst)
                                                                                 ? 0xb0U
                                                                                 : 
                                                                                ((0x5007fU 
                                                                                == vlSelf->top__DOT__inst)
                                                                                 ? 0xb1U
                                                                                 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))));
        vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w = ((IData)(vlSelf->top__DOT__RV64I__DOT__z0MsdO)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 7U))
                                                    : 0U);
        vlSelf->top__DOT__RV64I__DOT__X5fLoFTh = ((IData)(vlSelf->top__DOT__RV64I__DOT__plyN9CKEI)
                                                   ? 
                                                  vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9a5b570a__0)
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__inst 
                                                          >> 0xfU))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                                        ? 0xaU
                                                        : 0U)))]
                                                   : 0ULL);
    }
    vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw = ((IData)(vlSelf->top__DOT__RV64I__DOT__plyN9CKEI)
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7))
                                                   ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__X5fLoFTh))
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__RV64I__DOT__X5fLoFTh 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__X5fLoFTh)))
                                                    : vlSelf->top__DOT__RV64I__DOT__X5fLoFTh))
                                                  : 0ULL);
    vlSelf->top__DOT__RV64I__DOT__MrCY1P97 = ((IData)(vlSelf->reset)
                                               ? 0ULL
                                               : ((IData)(vlSelf->top__DOT__RV64I__DOT__stsrseQpu)
                                                   ? 
                                                  vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h2869f3d5__0)
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__inst 
                                                          >> 0x14U))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                                        ? 0xaU
                                                        : 0U)))]
                                                   : 0ULL));
    vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v = (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h7eaab0d4__0) 
                                                  | ((IData)(vlSelf->top__DOT__ram_w_ena) 
                                                     | ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__inst)) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hd1cd3f69__0))))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hc944f92e__0)
                                                   ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__ram_r_ena)
                                                    ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hb88e4699__0)
                                                     ? (QData)((IData)(
                                                                       (0x3fU 
                                                                        & (vlSelf->top__DOT__inst 
                                                                           >> 0x14U))))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__ram_w_ena)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->top__DOT__inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelf->top__DOT__inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelf->top__DOT__inst 
                                                                               >> 7U))))))
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst))
                                                       ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hd1cd3f69__0)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->top__DOT__inst 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->top__DOT__inst))))
                                                        : 0ULL))))))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__stsrseQpu)
                                                   ? 
                                                  (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg) 
                                                    | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hdce0b88d__0)))
                                                    ? (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__MrCY1P97))))
                                                    : vlSelf->top__DOT__RV64I__DOT__MrCY1P97)
                                                   : 0ULL));
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc 
        = ((0x60U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
            ? (vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v 
               == vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw)
            : ((0x61U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                ? (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                   != vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                : ((0x62U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                    ? VL_LTS_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                    : ((0x63U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                        ? VL_GTES_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                        : ((0x64U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                            ? (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                               < vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                            : ((0x65U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1)) 
                               & (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                  >= vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))))));
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx 
        = ((IData)(vlSelf->reset) ? 0ULL : ((0x80U 
                                             & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                             ? ((0x40U 
                                                 & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                 ? 0ULL
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 0ULL
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                     ? 0ULL
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 0ULL
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       * vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                       : 
                                                      VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       & vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       | vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       ^ vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      ((vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                        < vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                        ? 1ULL
                                                        : 0ULL)
                                                       : 
                                                      (VL_LTS_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                        ? 1ULL
                                                        : 0ULL))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       - vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                       + vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))))))))
                                             : ((0x40U 
                                                 & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                 ? 
                                                ((0x20U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z))))))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                     ? 0ULL
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 0ULL
                                                       : 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + 
                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                                         ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0
                                                         : 0ULL))))))))
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                     ? 0ULL
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                       ? 
                                                      (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                       + vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                       : vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))))
                                                  : 0ULL))));
    vlSelf->top__DOT__ram_r_addr = ((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                     ? (4ULL + vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju)
                                     : (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG) 
                                         | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A) 
                                            | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9) 
                                               | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)))))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx)))
                                         : vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx));
    vlSelf->top__DOT__RV64I__DOT__epavvrInwBl = ((IData)(vlSelf->reset)
                                                  ? 0x80000000ULL
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                                   ? vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc)
                                                    ? vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx
                                                    : 0x80000000ULL)));
    if ((0x57U == (0x7fU & vlSelf->top__DOT__inst))) {
        if ((0x4000U & vlSelf->top__DOT__inst)) {
            if ((0x2000U & vlSelf->top__DOT__inst)) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0xcU)))) {
                    vlSelf->top__DOT__vec_rs1_r_addr 
                        = (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->top__DOT__vec_rs1_r_ena = 1U;
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU];
                }
            } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                 >> 0xcU)))) {
                vlSelf->top__DOT__vec_rs1_r_addr = 
                    (0x1fU & (vlSelf->top__DOT__inst 
                              >> 0xfU));
                vlSelf->top__DOT__vec_rs1_r_ena = 1U;
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU];
            }
        } else if ((0x2000U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU];
        } else if ((1U & (~ (vlSelf->top__DOT__inst 
                             >> 0xcU)))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU];
        }
    } else if ((7U == (0x7fU & vlSelf->top__DOT__inst))) {
        vlSelf->top__DOT__vec_rs1_r_addr = (0x1fU & 
                                            (vlSelf->top__DOT__inst 
                                             >> 0xfU));
        vlSelf->top__DOT__vec_rs1_r_ena = 1U;
    } else if ((0x27U == (0x7fU & vlSelf->top__DOT__inst))) {
        vlSelf->top__DOT__vec_rs1_r_addr = (0x1fU & 
                                            (vlSelf->top__DOT__inst 
                                             >> 0xfU));
        vlSelf->top__DOT__vec_rs1_r_ena = 1U;
    }
    if ((0x57U != (0x7fU & vlSelf->top__DOT__inst))) {
        if ((7U != (0x7fU & vlSelf->top__DOT__inst))) {
            if ((0x27U == (0x7fU & vlSelf->top__DOT__inst))) {
                if (vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT____VdfgExtracted_h505d93b6__0) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen = 1U;
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[1U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[1U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[2U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[2U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[3U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[3U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[4U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[4U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[5U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[5U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[6U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[6U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[7U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[7U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[8U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[8U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[9U] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[9U];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xaU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xaU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xbU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xbU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xcU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xcU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xdU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xdU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xeU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xeU];
                    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din[0xfU] 
                        = vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data[0xfU];
                }
            }
        }
        if ((7U == (0x7fU & vlSelf->top__DOT__inst))) {
            if (vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT____VdfgExtracted_h505d93b6__0) {
                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren = 1U;
            }
        }
    }
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__ram_r_ena, 
                                                                ((vlSelf->top__DOT__ram_r_addr 
                                                                  - 0x80000000ULL) 
                                                                 >> 3U), vlSelf->__Vfunc_ram_read_helper__1__Vfuncout);
    vlSelf->top__DOT__ram_r_data = vlSelf->__Vfunc_ram_read_helper__1__Vfuncout;
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
        = ((1U & (IData)((vlSelf->top__DOT__ram_r_addr 
                          >> 2U))) ? (IData)((vlSelf->top__DOT__ram_r_data 
                                              >> 0x20U))
            : (IData)(vlSelf->top__DOT__ram_r_data));
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY 
        = (0xffffU & ((1U & (IData)((vlSelf->top__DOT__ram_r_addr 
                                     >> 1U))) ? (vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
                                                 >> 0x10U)
                       : vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C));
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm 
        = (0xffU & ((1U & (IData)(vlSelf->top__DOT__ram_r_addr))
                     ? ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                        >> 8U) : (IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)));
    vlSelf->top__DOT__RV64I__DOT__cSWijWYsS = ((IData)(vlSelf->reset)
                                                ? 0ULL
                                                : ((IData)(vlSelf->top__DOT__ram_r_ena)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm) 
                                                                             >> 7U))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm)))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                      ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                                                                               >> 0xfU))))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                        ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY))
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C)))
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                          ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C))
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                           ? vlSelf->top__DOT__ram_r_data
                                                           : 0ULL)))))))
                                                    : vlSelf->top__DOT__ram_r_addr));
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[1U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (1U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [1U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[2U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (2U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [2U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[3U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (3U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [3U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[4U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (4U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [4U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[5U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (5U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [5U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[6U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (6U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [6U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[7U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (7U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [7U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[8U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (8U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [8U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[9U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (9U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [9U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xaU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xaU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xaU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xbU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xbU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xbU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xcU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xcU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xcU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xdU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xdU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xdU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xeU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xeU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xeU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xfU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xfU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xfU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x10U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x10U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x10U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x11U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x11U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x11U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x12U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x12U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x12U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x13U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x13U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x13U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x14U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x14U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x14U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x15U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x15U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x15U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x16U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x16U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x16U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x17U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x17U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x17U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x18U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x18U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x18U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x19U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x19U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x19U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1aU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1aU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1aU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1bU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1bU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1bU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1cU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1cU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1cU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1dU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1dU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1dU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1eU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1eU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1eU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1fU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1fU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1fU]);
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[1U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [1U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[2U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [2U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[3U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [3U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[4U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [4U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[5U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [5U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[6U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [6U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[7U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [7U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[8U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [8U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[9U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [9U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xaU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xaU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xbU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xbU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xcU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xcU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xdU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xdU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xeU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xeU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xfU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xfU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x10U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x10U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x11U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x11U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x12U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x12U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x13U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x13U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x14U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x14U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x15U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x15U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x16U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x16U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x17U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x17U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x18U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x18U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x19U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x19U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1aU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1aU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1bU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1bU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1cU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1cU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1dU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1dU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1eU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1eU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1fU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1fU];
    vlSelf->top__DOT__regs[0U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0U];
    vlSelf->top__DOT__regs[1U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [1U];
    vlSelf->top__DOT__regs[2U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [2U];
    vlSelf->top__DOT__regs[3U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [3U];
    vlSelf->top__DOT__regs[4U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [4U];
    vlSelf->top__DOT__regs[5U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [5U];
    vlSelf->top__DOT__regs[6U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [6U];
    vlSelf->top__DOT__regs[7U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [7U];
    vlSelf->top__DOT__regs[8U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [8U];
    vlSelf->top__DOT__regs[9U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [9U];
    vlSelf->top__DOT__regs[0xaU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xaU];
    vlSelf->top__DOT__regs[0xbU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xbU];
    vlSelf->top__DOT__regs[0xcU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xcU];
    vlSelf->top__DOT__regs[0xdU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xdU];
    vlSelf->top__DOT__regs[0xeU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xeU];
    vlSelf->top__DOT__regs[0xfU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xfU];
    vlSelf->top__DOT__regs[0x10U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x10U];
    vlSelf->top__DOT__regs[0x11U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x11U];
    vlSelf->top__DOT__regs[0x12U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x12U];
    vlSelf->top__DOT__regs[0x13U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x13U];
    vlSelf->top__DOT__regs[0x14U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x14U];
    vlSelf->top__DOT__regs[0x15U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x15U];
    vlSelf->top__DOT__regs[0x16U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x16U];
    vlSelf->top__DOT__regs[0x17U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x17U];
    vlSelf->top__DOT__regs[0x18U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x18U];
    vlSelf->top__DOT__regs[0x19U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x19U];
    vlSelf->top__DOT__regs[0x1aU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1aU];
    vlSelf->top__DOT__regs[0x1bU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1bU];
    vlSelf->top__DOT__regs[0x1cU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1cU];
    vlSelf->top__DOT__regs[0x1dU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1dU];
    vlSelf->top__DOT__regs[0x1eU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1eU];
    vlSelf->top__DOT__regs[0x1fU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1fU];
    vlSelf->top__DOT__vec_rs1_data = ((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                       ? vlSelf->top__DOT__regs
                                      [vlSelf->top__DOT__vec_rs1_r_addr]
                                       : 0ULL);
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] = 0U;
    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] = 0U;
    if ((0x57U == (0x7fU & vlSelf->top__DOT__inst))) {
        if ((0x4000U & vlSelf->top__DOT__inst)) {
            if ((0x2000U & vlSelf->top__DOT__inst)) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0xcU)))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                        = (IData)(vlSelf->top__DOT__vec_rs1_data);
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                        = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                   >> 0x20U));
                }
            } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                 >> 0xcU)))) {
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                    = (IData)(vlSelf->top__DOT__vec_rs1_data);
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                    = (IData)((vlSelf->top__DOT__vec_rs1_data 
                               >> 0x20U));
            }
        } else if ((0x2000U & vlSelf->top__DOT__inst)) {
            if ((0x1000U & vlSelf->top__DOT__inst)) {
                if ((0U == (vlSelf->top__DOT__inst 
                            >> 0x1aU))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                        = (IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 0x13U))))) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0xfU))))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                        = (IData)(((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU))))) 
                                   >> 0x20U));
                } else if ((0x29U == (vlSelf->top__DOT__inst 
                                      >> 0x1aU))) {
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                        = (IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU)))));
                    vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                        = (IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xfU)))) 
                                   >> 0x20U));
                }
            } else {
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[1U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[2U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[3U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[4U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[5U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[6U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[7U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[8U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[9U];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xaU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xbU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xcU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xdU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xeU];
                vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xfU];
            }
        } else if ((1U & (~ (vlSelf->top__DOT__inst 
                             >> 0xcU)))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data[0xfU];
        }
    }
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr = 0ULL;
    if ((0x57U != (0x7fU & vlSelf->top__DOT__inst))) {
        if ((7U == (0x7fU & vlSelf->top__DOT__inst))) {
            if (vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT____VdfgExtracted_h505d93b6__0) {
                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                    = vlSelf->top__DOT__vec_rs1_data;
            }
        } else if ((0x27U == (0x7fU & vlSelf->top__DOT__inst))) {
            if (vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT____VdfgExtracted_h505d93b6__0) {
                vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                    = vlSelf->top__DOT__vec_rs1_data;
            }
        }
    }
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU])));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    if ((0x80U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    } else if ((0x40U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    } else if ((0x20U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    } else if ((0x10U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    } else if ((8U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        if ((4U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
        } else if ((2U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [0U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [0U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [0U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [1U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [1U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [1U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [2U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [2U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [2U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [3U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [3U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [3U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [4U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [4U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [4U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [5U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [5U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [5U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [6U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [6U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [6U]) : 0ULL);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                    = ((0ULL != vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                        [7U]) ? VL_DIV_QQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                           [7U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                           [7U]) : 0ULL);
            } else {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                [0U];
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [0U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [0U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [1U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [1U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [2U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [2U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [3U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [3U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [4U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [4U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [5U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [5U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [6U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [6U];
            }
            if (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                           [7U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                           [0U])) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                    [7U];
            }
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        if ((2U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                    [0U];
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [0U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [1U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [2U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [3U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [4U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [5U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [6U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                       [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                       [7U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
            } else {
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [0U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [0U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [1U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [1U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [2U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [2U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [3U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [3U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [4U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [4U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [5U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [5U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [6U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [6U]);
                vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                    = VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                                     [7U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                                     [7U]);
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [0U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [0U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [0U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [0U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [1U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [1U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [1U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [1U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [2U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [2U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [2U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [2U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [3U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [3U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [3U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [3U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [4U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [4U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [4U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [4U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [5U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [5U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [5U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [5U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [6U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [6U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [6U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [6U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                = (VL_GTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [7U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [7U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [7U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [7U]);
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [0U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [0U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [0U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [0U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [1U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [1U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [1U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [1U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [2U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [2U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [2U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [2U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [3U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [3U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [3U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [3U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [4U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [4U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [4U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [4U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [5U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [5U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [5U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [5U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [6U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [6U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [6U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [6U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                = (VL_LTS_IQQ(64, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                              [7U], vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                              [7U]) ? vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [7U] : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [7U]);
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [0U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [0U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [1U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [1U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [2U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [2U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [3U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [3U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [4U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [4U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [5U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [5U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [6U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [6U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [7U] - vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [7U]);
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [0U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [0U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [1U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [1U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [2U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [2U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [3U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [3U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [4U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [4U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [5U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [5U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [6U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [6U]);
            vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
                = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
                   [7U] * vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
                   [7U]);
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [0U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [1U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [2U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [3U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [4U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [5U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [6U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] 
            = (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2
               [7U] + vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1
               [0U]);
    } else {
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6U] = 0ULL;
        vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7U] = 0ULL;
    }
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                  - 0x80000000ULL) 
                                                                 >> 3U), vlSelf->__Vfunc_ram_read_helper__3__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0U] = (IData)(vlSelf->__Vfunc_ram_read_helper__3__Vfuncout);
    vlSelf->top__DOT__vram_r_data[1U] = (IData)((vlSelf->__Vfunc_ram_read_helper__3__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (1ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__4__Vfuncout);
    vlSelf->top__DOT__vram_r_data[2U] = (IData)(vlSelf->__Vfunc_ram_read_helper__4__Vfuncout);
    vlSelf->top__DOT__vram_r_data[3U] = (IData)((vlSelf->__Vfunc_ram_read_helper__4__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (2ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__5__Vfuncout);
    vlSelf->top__DOT__vram_r_data[4U] = (IData)(vlSelf->__Vfunc_ram_read_helper__5__Vfuncout);
    vlSelf->top__DOT__vram_r_data[5U] = (IData)((vlSelf->__Vfunc_ram_read_helper__5__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (3ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
    vlSelf->top__DOT__vram_r_data[6U] = (IData)(vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
    vlSelf->top__DOT__vram_r_data[7U] = (IData)((vlSelf->__Vfunc_ram_read_helper__6__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (4ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__7__Vfuncout);
    vlSelf->top__DOT__vram_r_data[8U] = (IData)(vlSelf->__Vfunc_ram_read_helper__7__Vfuncout);
    vlSelf->top__DOT__vram_r_data[9U] = (IData)((vlSelf->__Vfunc_ram_read_helper__7__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (5ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__8__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xaU] = (IData)(vlSelf->__Vfunc_ram_read_helper__8__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xbU] = (IData)((vlSelf->__Vfunc_ram_read_helper__8__Vfuncout 
                                                   >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (6ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__9__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xcU] = (IData)(vlSelf->__Vfunc_ram_read_helper__9__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xdU] = (IData)((vlSelf->__Vfunc_ram_read_helper__9__Vfuncout 
                                                   >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (7ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__10__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xeU] = (IData)(vlSelf->__Vfunc_ram_read_helper__10__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xfU] = (IData)((vlSelf->__Vfunc_ram_read_helper__10__Vfuncout 
                                                   >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [0U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [0U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [1U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [1U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [2U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [2U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [3U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [3U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [4U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [4U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [5U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [5U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [6U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [6U] >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU] 
        = (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                  [7U]);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU] 
        = (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out
                   [7U] >> 0x20U));
}
