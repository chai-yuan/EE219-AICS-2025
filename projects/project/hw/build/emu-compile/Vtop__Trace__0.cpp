// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<16>/*511:0*/ __Vtemp_h5c5b39ee__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+1,(vlSelf->top__DOT__ram_r_addr),64);
        bufp->chgQData(oldp+3,(vlSelf->top__DOT__ram_r_data),64);
        bufp->chgQData(oldp+5,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                 ? ((0x3fU >= (0x38U 
                                               & ((IData)(vlSelf->top__DOT__ram_r_addr) 
                                                  << 3U)))
                                     ? (((IData)(vlSelf->top__DOT__ram_w_ena)
                                          ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                          : 0ULL) << 
                                        (0x38U & ((IData)(vlSelf->top__DOT__ram_r_addr) 
                                                  << 3U)))
                                     : 0ULL) : ((2U 
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
                                                   : 0ULL))))),64);
        bufp->chgQData(oldp+7,(((IData)(vlSelf->top__DOT__ram_w_ena)
                                 ? ((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                     ? ((0U == (7U 
                                                & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                         ? 0xffULL : 
                                        ((1U == (7U 
                                                 & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                          ? 0xff00ULL
                                          : ((2U == 
                                              (7U & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                              ? 0xff0000ULL
                                              : ((3U 
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
                                     : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                         ? ((0U == 
                                             (3U & (IData)(
                                                           (vlSelf->top__DOT__ram_r_addr 
                                                            >> 1U))))
                                             ? 0xffffULL
                                             : ((1U 
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
                                         : ((3U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ram_r_addr 
                                                            >> 2U)))
                                                 ? 0xffffffff00000000ULL
                                                 : 0xffffffffULL)
                                             : ((7U 
                                                 == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                 ? 0xffffffffffffffffULL
                                                 : 0ULL))))
                                 : 0ULL)),64);
        bufp->chgQData(oldp+9,(vlSelf->top__DOT__regs[0]),64);
        bufp->chgQData(oldp+11,(vlSelf->top__DOT__regs[1]),64);
        bufp->chgQData(oldp+13,(vlSelf->top__DOT__regs[2]),64);
        bufp->chgQData(oldp+15,(vlSelf->top__DOT__regs[3]),64);
        bufp->chgQData(oldp+17,(vlSelf->top__DOT__regs[4]),64);
        bufp->chgQData(oldp+19,(vlSelf->top__DOT__regs[5]),64);
        bufp->chgQData(oldp+21,(vlSelf->top__DOT__regs[6]),64);
        bufp->chgQData(oldp+23,(vlSelf->top__DOT__regs[7]),64);
        bufp->chgQData(oldp+25,(vlSelf->top__DOT__regs[8]),64);
        bufp->chgQData(oldp+27,(vlSelf->top__DOT__regs[9]),64);
        bufp->chgQData(oldp+29,(vlSelf->top__DOT__regs[10]),64);
        bufp->chgQData(oldp+31,(vlSelf->top__DOT__regs[11]),64);
        bufp->chgQData(oldp+33,(vlSelf->top__DOT__regs[12]),64);
        bufp->chgQData(oldp+35,(vlSelf->top__DOT__regs[13]),64);
        bufp->chgQData(oldp+37,(vlSelf->top__DOT__regs[14]),64);
        bufp->chgQData(oldp+39,(vlSelf->top__DOT__regs[15]),64);
        bufp->chgQData(oldp+41,(vlSelf->top__DOT__regs[16]),64);
        bufp->chgQData(oldp+43,(vlSelf->top__DOT__regs[17]),64);
        bufp->chgQData(oldp+45,(vlSelf->top__DOT__regs[18]),64);
        bufp->chgQData(oldp+47,(vlSelf->top__DOT__regs[19]),64);
        bufp->chgQData(oldp+49,(vlSelf->top__DOT__regs[20]),64);
        bufp->chgQData(oldp+51,(vlSelf->top__DOT__regs[21]),64);
        bufp->chgQData(oldp+53,(vlSelf->top__DOT__regs[22]),64);
        bufp->chgQData(oldp+55,(vlSelf->top__DOT__regs[23]),64);
        bufp->chgQData(oldp+57,(vlSelf->top__DOT__regs[24]),64);
        bufp->chgQData(oldp+59,(vlSelf->top__DOT__regs[25]),64);
        bufp->chgQData(oldp+61,(vlSelf->top__DOT__regs[26]),64);
        bufp->chgQData(oldp+63,(vlSelf->top__DOT__regs[27]),64);
        bufp->chgQData(oldp+65,(vlSelf->top__DOT__regs[28]),64);
        bufp->chgQData(oldp+67,(vlSelf->top__DOT__regs[29]),64);
        bufp->chgQData(oldp+69,(vlSelf->top__DOT__regs[30]),64);
        bufp->chgQData(oldp+71,(vlSelf->top__DOT__regs[31]),64);
        bufp->chgQData(oldp+73,(vlSelf->top__DOT__vec_rs1_data),64);
        bufp->chgQData(oldp+75,(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr),64);
        bufp->chgWData(oldp+77,(vlSelf->top__DOT__vram_r_data),512);
        bufp->chgWData(oldp+93,(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din),512);
        bufp->chgQData(oldp+109,(((vlSelf->top__DOT__ram_r_addr 
                                   - 0x80000000ULL) 
                                  >> 3U)),64);
        bufp->chgQData(oldp+111,(((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                   - 0x80000000ULL) 
                                  >> 3U)),64);
        bufp->chgQData(oldp+113,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0]),64);
        bufp->chgQData(oldp+115,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[1]),64);
        bufp->chgQData(oldp+117,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[2]),64);
        bufp->chgQData(oldp+119,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[3]),64);
        bufp->chgQData(oldp+121,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[4]),64);
        bufp->chgQData(oldp+123,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[5]),64);
        bufp->chgQData(oldp+125,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[6]),64);
        bufp->chgQData(oldp+127,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[7]),64);
        bufp->chgQData(oldp+129,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[8]),64);
        bufp->chgQData(oldp+131,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[9]),64);
        bufp->chgQData(oldp+133,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[10]),64);
        bufp->chgQData(oldp+135,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[11]),64);
        bufp->chgQData(oldp+137,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[12]),64);
        bufp->chgQData(oldp+139,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[13]),64);
        bufp->chgQData(oldp+141,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[14]),64);
        bufp->chgQData(oldp+143,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[15]),64);
        bufp->chgQData(oldp+145,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[16]),64);
        bufp->chgQData(oldp+147,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[17]),64);
        bufp->chgQData(oldp+149,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[18]),64);
        bufp->chgQData(oldp+151,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[19]),64);
        bufp->chgQData(oldp+153,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[20]),64);
        bufp->chgQData(oldp+155,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[21]),64);
        bufp->chgQData(oldp+157,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[22]),64);
        bufp->chgQData(oldp+159,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[23]),64);
        bufp->chgQData(oldp+161,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[24]),64);
        bufp->chgQData(oldp+163,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[25]),64);
        bufp->chgQData(oldp+165,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[26]),64);
        bufp->chgQData(oldp+167,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[27]),64);
        bufp->chgQData(oldp+169,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[28]),64);
        bufp->chgQData(oldp+171,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[29]),64);
        bufp->chgQData(oldp+173,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[30]),64);
        bufp->chgQData(oldp+175,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[31]),64);
        bufp->chgBit(oldp+177,(((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc) 
                                | (IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g))));
        bufp->chgQData(oldp+178,(vlSelf->top__DOT__RV64I__DOT__epavvrInwBl),64);
        bufp->chgQData(oldp+180,(vlSelf->top__DOT__RV64I__DOT__X5fLoFTh),64);
        bufp->chgBit(oldp+182,(vlSelf->top__DOT__RV64I__DOT__plyN9CKEI));
        bufp->chgQData(oldp+183,(vlSelf->top__DOT__RV64I__DOT__MrCY1P97),64);
        bufp->chgBit(oldp+185,(vlSelf->top__DOT__RV64I__DOT__stsrseQpu));
        bufp->chgQData(oldp+186,(vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw),64);
        bufp->chgQData(oldp+188,(vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v),64);
        bufp->chgCData(oldp+190,(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1),8);
        bufp->chgQData(oldp+191,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                   ? (((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm) 
                                                              >> 7U))))) 
                                       << 8U) | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm)))
                                   : ((4U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                       ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm))
                                       : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                                                                      >> 0xfU))))) 
                                               << 0x10U) 
                                              | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)))
                                           : ((5U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                               ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY))
                                               : ((3U 
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
                                                     : 0ULL)))))))),64);
        bufp->chgQData(oldp+193,(((IData)(vlSelf->top__DOT__ram_w_ena)
                                   ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                   : 0ULL)),64);
        bufp->chgBit(oldp+195,(vlSelf->top__DOT__RV64I__DOT__CP5BekSY));
        bufp->chgCData(oldp+196,(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w),5);
        bufp->chgQData(oldp+197,(vlSelf->top__DOT__RV64I__DOT__cSWijWYsS),64);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C),32);
        bufp->chgSData(oldp+200,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY),16);
        bufp->chgCData(oldp+201,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm),8);
        bufp->chgQData(oldp+202,(((1U & (IData)((vlSelf->top__DOT__ram_r_addr 
                                                 >> 2U)))
                                   ? 0xffffffff00000000ULL
                                   : 0xffffffffULL)),64);
        bufp->chgQData(oldp+204,(((0U == (3U & (IData)(
                                                       (vlSelf->top__DOT__ram_r_addr 
                                                        >> 1U))))
                                   ? 0xffffULL : ((1U 
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
                                                     : 0ULL))))),64);
        bufp->chgQData(oldp+206,(((0U == (7U & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                   ? 0xffULL : ((1U 
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
                                                       : 0ULL))))))))),64);
        bufp->chgQData(oldp+208,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0]),64);
        bufp->chgQData(oldp+210,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[1]),64);
        bufp->chgQData(oldp+212,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[2]),64);
        bufp->chgQData(oldp+214,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[3]),64);
        bufp->chgQData(oldp+216,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[4]),64);
        bufp->chgQData(oldp+218,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[5]),64);
        bufp->chgQData(oldp+220,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[6]),64);
        bufp->chgQData(oldp+222,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[7]),64);
        bufp->chgQData(oldp+224,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[8]),64);
        bufp->chgQData(oldp+226,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[9]),64);
        bufp->chgQData(oldp+228,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[10]),64);
        bufp->chgQData(oldp+230,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[11]),64);
        bufp->chgQData(oldp+232,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[12]),64);
        bufp->chgQData(oldp+234,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[13]),64);
        bufp->chgQData(oldp+236,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[14]),64);
        bufp->chgQData(oldp+238,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[15]),64);
        bufp->chgQData(oldp+240,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[16]),64);
        bufp->chgQData(oldp+242,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[17]),64);
        bufp->chgQData(oldp+244,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[18]),64);
        bufp->chgQData(oldp+246,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[19]),64);
        bufp->chgQData(oldp+248,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[20]),64);
        bufp->chgQData(oldp+250,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[21]),64);
        bufp->chgQData(oldp+252,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[22]),64);
        bufp->chgQData(oldp+254,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[23]),64);
        bufp->chgQData(oldp+256,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[24]),64);
        bufp->chgQData(oldp+258,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[25]),64);
        bufp->chgQData(oldp+260,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[26]),64);
        bufp->chgQData(oldp+262,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[27]),64);
        bufp->chgQData(oldp+264,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[28]),64);
        bufp->chgQData(oldp+266,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[29]),64);
        bufp->chgQData(oldp+268,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[30]),64);
        bufp->chgQData(oldp+270,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[31]),64);
        bufp->chgQData(oldp+272,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx),64);
        bufp->chgBit(oldp+274,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc));
        bufp->chgWData(oldp+275,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1),512);
        bufp->chgWData(oldp+291,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2),512);
        bufp->chgWData(oldp+307,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_result),512);
        bufp->chgWData(oldp+323,(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data),512);
        bufp->chgWData(oldp+339,(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data),512);
        bufp->chgQData(oldp+355,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[0]),64);
        bufp->chgQData(oldp+357,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[1]),64);
        bufp->chgQData(oldp+359,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[2]),64);
        bufp->chgQData(oldp+361,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[3]),64);
        bufp->chgQData(oldp+363,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[4]),64);
        bufp->chgQData(oldp+365,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[5]),64);
        bufp->chgQData(oldp+367,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[6]),64);
        bufp->chgQData(oldp+369,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[7]),64);
        bufp->chgQData(oldp+371,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[0]),64);
        bufp->chgQData(oldp+373,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[1]),64);
        bufp->chgQData(oldp+375,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[2]),64);
        bufp->chgQData(oldp+377,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[3]),64);
        bufp->chgQData(oldp+379,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[4]),64);
        bufp->chgQData(oldp+381,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[5]),64);
        bufp->chgQData(oldp+383,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[6]),64);
        bufp->chgQData(oldp+385,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[7]),64);
        bufp->chgQData(oldp+387,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0]),64);
        bufp->chgQData(oldp+389,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1]),64);
        bufp->chgQData(oldp+391,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2]),64);
        bufp->chgQData(oldp+393,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3]),64);
        bufp->chgQData(oldp+395,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4]),64);
        bufp->chgQData(oldp+397,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5]),64);
        bufp->chgQData(oldp+399,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6]),64);
        bufp->chgQData(oldp+401,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+403,(vlSelf->top__DOT__inst),32);
        bufp->chgQData(oldp+404,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju),64);
        bufp->chgBit(oldp+406,(vlSelf->top__DOT__ram_r_ena));
        bufp->chgBit(oldp+407,(vlSelf->top__DOT__ram_w_ena));
        bufp->chgQData(oldp+408,(vlSelf->top__DOT__rom_rdata),64);
        bufp->chgBit(oldp+410,(vlSelf->top__DOT__vec_rs1_r_ena));
        bufp->chgCData(oldp+411,(vlSelf->top__DOT__vec_rs1_r_addr),5);
        bufp->chgBit(oldp+412,(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren));
        bufp->chgBit(oldp+413,(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen));
        bufp->chgQData(oldp+414,(((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                   - 0x80000000ULL) 
                                  >> 3U)),64);
        bufp->chgCData(oldp+416,((0x1fU & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9a5b570a__0)
                                            ? (0x1fU 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 0xfU))
                                            : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                                ? 0xaU
                                                : 0U)))),5);
        bufp->chgCData(oldp+417,((0x1fU & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h2869f3d5__0)
                                            ? (0x1fU 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 0x14U))
                                            : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                                ? 0xaU
                                                : 0U)))),5);
        bufp->chgBit(oldp+418,(((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG) 
                                | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A) 
                                   | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9) 
                                      | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4) 
                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)))))));
        bufp->chgBit(oldp+419,(vlSelf->top__DOT__RV64I__DOT__D7oya5Igy));
        bufp->chgQData(oldp+420,(vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z),64);
        bufp->chgBit(oldp+422,(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g));
        bufp->chgQData(oldp+423,(((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                   ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0
                                   : 0ULL)),64);
        bufp->chgCData(oldp+425,(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c),3);
        bufp->chgBit(oldp+426,(vlSelf->top__DOT__RV64I__DOT__z0MsdO));
        bufp->chgCData(oldp+427,(((IData)(vlSelf->top__DOT__RV64I__DOT__z0MsdO)
                                   ? (0x1fU & (vlSelf->top__DOT__inst 
                                               >> 7U))
                                   : 0U)),5);
        bufp->chgQData(oldp+428,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db),64);
        bufp->chgIData(oldp+430,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__H),32);
        bufp->chgQData(oldp+431,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0]),64);
        bufp->chgQData(oldp+433,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[1]),64);
        bufp->chgQData(oldp+435,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[2]),64);
        bufp->chgQData(oldp+437,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[3]),64);
        bufp->chgQData(oldp+439,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[4]),64);
        bufp->chgQData(oldp+441,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[5]),64);
        bufp->chgQData(oldp+443,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[6]),64);
        bufp->chgQData(oldp+445,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[7]),64);
        bufp->chgQData(oldp+447,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[8]),64);
        bufp->chgQData(oldp+449,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[9]),64);
        bufp->chgQData(oldp+451,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[10]),64);
        bufp->chgQData(oldp+453,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[11]),64);
        bufp->chgQData(oldp+455,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[12]),64);
        bufp->chgQData(oldp+457,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[13]),64);
        bufp->chgQData(oldp+459,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[14]),64);
        bufp->chgQData(oldp+461,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[15]),64);
        bufp->chgQData(oldp+463,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[16]),64);
        bufp->chgQData(oldp+465,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[17]),64);
        bufp->chgQData(oldp+467,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[18]),64);
        bufp->chgQData(oldp+469,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[19]),64);
        bufp->chgQData(oldp+471,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[20]),64);
        bufp->chgQData(oldp+473,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[21]),64);
        bufp->chgQData(oldp+475,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[22]),64);
        bufp->chgQData(oldp+477,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[23]),64);
        bufp->chgQData(oldp+479,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[24]),64);
        bufp->chgQData(oldp+481,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[25]),64);
        bufp->chgQData(oldp+483,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[26]),64);
        bufp->chgQData(oldp+485,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[27]),64);
        bufp->chgQData(oldp+487,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[28]),64);
        bufp->chgQData(oldp+489,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[29]),64);
        bufp->chgQData(oldp+491,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[30]),64);
        bufp->chgQData(oldp+493,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[31]),64);
        bufp->chgIData(oldp+495,((0xfffff000U & vlSelf->top__DOT__inst)),32);
        bufp->chgIData(oldp+496,(((0x100000U & (vlSelf->top__DOT__inst 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->top__DOT__inst) 
                                     | ((0x800U & (vlSelf->top__DOT__inst 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->top__DOT__inst 
                                            >> 0x14U)))))),21);
        bufp->chgSData(oldp+497,(((0x1000U & (vlSelf->top__DOT__inst 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->top__DOT__inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->top__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->top__DOT__inst 
                                            >> 7U)))))),13);
        bufp->chgSData(oldp+498,(((0xfe0U & (vlSelf->top__DOT__inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->top__DOT__inst 
                                              >> 7U)))),12);
        bufp->chgSData(oldp+499,((vlSelf->top__DOT__inst 
                                  >> 0x14U)),12);
        bufp->chgCData(oldp+500,((vlSelf->top__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+501,((0x1fU & (vlSelf->top__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+502,((0x1fU & (vlSelf->top__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+503,((7U & (vlSelf->top__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+504,((0x1fU & (vlSelf->top__DOT__inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+505,((0x7fU & vlSelf->top__DOT__inst)),7);
        bufp->chgQData(oldp+506,(((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hc944f92e__0)
                                   ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                   : ((IData)(vlSelf->top__DOT__ram_r_ena)
                                       ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                       : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hb88e4699__0)
                                           ? (QData)((IData)(
                                                             (0x3fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0x14U))))
                                           : ((IData)(vlSelf->top__DOT__ram_w_ena)
                                               ? ((
                                                   (- (QData)((IData)(
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
                                               : ((0x6fU 
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
                                                    : 0ULL))))))),64);
        bufp->chgBit(oldp+508,((0x37U == (0x7fU & vlSelf->top__DOT__inst))));
        bufp->chgBit(oldp+509,((0x17U == (0x7fU & vlSelf->top__DOT__inst))));
        bufp->chgBit(oldp+510,((0x6fU == (0x7fU & vlSelf->top__DOT__inst))));
        bufp->chgBit(oldp+511,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O));
        bufp->chgBit(oldp+512,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd));
        bufp->chgBit(oldp+513,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a));
        bufp->chgBit(oldp+514,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI));
        bufp->chgBit(oldp+515,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg));
        bufp->chgBit(oldp+516,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz));
        bufp->chgBit(oldp+517,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj));
        bufp->chgBit(oldp+518,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy));
        bufp->chgBit(oldp+519,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr));
        bufp->chgBit(oldp+520,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc));
        bufp->chgBit(oldp+521,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt));
        bufp->chgBit(oldp+522,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq));
        bufp->chgBit(oldp+523,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY));
        bufp->chgBit(oldp+524,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no));
        bufp->chgBit(oldp+525,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4));
        bufp->chgBit(oldp+526,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ));
        bufp->chgBit(oldp+527,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2));
        bufp->chgBit(oldp+528,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ));
        bufp->chgBit(oldp+529,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB));
        bufp->chgBit(oldp+530,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt));
        bufp->chgBit(oldp+531,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE));
        bufp->chgBit(oldp+532,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim));
        bufp->chgBit(oldp+533,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V));
        bufp->chgBit(oldp+534,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY));
        bufp->chgBit(oldp+535,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4));
        bufp->chgBit(oldp+536,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt));
        bufp->chgBit(oldp+537,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z));
        bufp->chgBit(oldp+538,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb));
        bufp->chgBit(oldp+539,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1));
        bufp->chgBit(oldp+540,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r));
        bufp->chgBit(oldp+541,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA));
        bufp->chgBit(oldp+542,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ));
        bufp->chgBit(oldp+543,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln));
        bufp->chgBit(oldp+544,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7));
        bufp->chgBit(oldp+545,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I));
        bufp->chgBit(oldp+546,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI));
        bufp->chgBit(oldp+547,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr));
        bufp->chgBit(oldp+548,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49));
        bufp->chgBit(oldp+549,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG));
        bufp->chgBit(oldp+550,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5));
        bufp->chgBit(oldp+551,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg));
        bufp->chgBit(oldp+552,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF));
        bufp->chgBit(oldp+553,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A));
        bufp->chgBit(oldp+554,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9));
        bufp->chgBit(oldp+555,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4));
        bufp->chgBit(oldp+556,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7));
        bufp->chgBit(oldp+557,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW));
        bufp->chgBit(oldp+558,((0x6bU == vlSelf->top__DOT__inst)));
        bufp->chgBit(oldp+559,((0x5007fU == vlSelf->top__DOT__inst)));
        bufp->chgCData(oldp+560,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode),8);
        bufp->chgBit(oldp+561,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en));
        bufp->chgBit(oldp+562,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel));
        bufp->chgCData(oldp+563,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr),5);
        bufp->chgBit(oldp+564,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_f_rs1));
        bufp->chgBit(oldp+565,(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en));
        bufp->chgCData(oldp+566,(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr),5);
        bufp->chgBit(oldp+567,(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en));
        bufp->chgCData(oldp+568,(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr),5);
        bufp->chgBit(oldp+569,((1U & (vlSelf->top__DOT__inst 
                                      >> 0x19U))));
        bufp->chgCData(oldp+570,((vlSelf->top__DOT__inst 
                                  >> 0x1aU)),6);
        bufp->chgCData(oldp+571,((3U & (vlSelf->top__DOT__inst 
                                        >> 0x1aU))),2);
        bufp->chgBit(oldp+572,((1U & (vlSelf->top__DOT__inst 
                                      >> 0x1cU))));
        bufp->chgCData(oldp+573,((vlSelf->top__DOT__inst 
                                  >> 0x1dU)),3);
        bufp->chgIData(oldp+574,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__i),32);
        bufp->chgWData(oldp+575,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0]),512);
        bufp->chgWData(oldp+591,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1]),512);
        bufp->chgWData(oldp+607,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2]),512);
        bufp->chgWData(oldp+623,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3]),512);
        bufp->chgWData(oldp+639,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4]),512);
        bufp->chgWData(oldp+655,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5]),512);
        bufp->chgWData(oldp+671,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6]),512);
        bufp->chgWData(oldp+687,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7]),512);
        bufp->chgWData(oldp+703,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8]),512);
        bufp->chgWData(oldp+719,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9]),512);
        bufp->chgWData(oldp+735,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[10]),512);
        bufp->chgWData(oldp+751,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[11]),512);
        bufp->chgWData(oldp+767,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[12]),512);
        bufp->chgWData(oldp+783,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[13]),512);
        bufp->chgWData(oldp+799,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[14]),512);
        bufp->chgWData(oldp+815,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[15]),512);
        bufp->chgWData(oldp+831,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[16]),512);
        bufp->chgWData(oldp+847,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[17]),512);
        bufp->chgWData(oldp+863,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[18]),512);
        bufp->chgWData(oldp+879,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[19]),512);
        bufp->chgWData(oldp+895,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[20]),512);
        bufp->chgWData(oldp+911,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[21]),512);
        bufp->chgWData(oldp+927,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[22]),512);
        bufp->chgWData(oldp+943,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[23]),512);
        bufp->chgWData(oldp+959,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[24]),512);
        bufp->chgWData(oldp+975,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[25]),512);
        bufp->chgWData(oldp+991,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[26]),512);
        bufp->chgWData(oldp+1007,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[27]),512);
        bufp->chgWData(oldp+1023,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[28]),512);
        bufp->chgWData(oldp+1039,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[29]),512);
        bufp->chgWData(oldp+1055,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[30]),512);
        bufp->chgWData(oldp+1071,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[31]),512);
    }
    bufp->chgBit(oldp+1087,(vlSelf->clock));
    bufp->chgBit(oldp+1088,(vlSelf->reset));
    bufp->chgBit(oldp+1089,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->chgBit(oldp+1090,(((~ (IData)(vlSelf->reset)) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en))));
    bufp->chgCData(oldp+1091,(((IData)(vlSelf->reset)
                                ? 0U : (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr))),5);
    if (vlSelf->reset) {
        __Vtemp_h5c5b39ee__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h5c5b39ee__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h5c5b39ee__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h5c5b39ee__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h5c5b39ee__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h5c5b39ee__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h5c5b39ee__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h5c5b39ee__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h5c5b39ee__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h5c5b39ee__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h5c5b39ee__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h5c5b39ee__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h5c5b39ee__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h5c5b39ee__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h5c5b39ee__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h5c5b39ee__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_f_rs1) {
        __Vtemp_h5c5b39ee__0[0U] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[1U] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                            >> 0x20U));
        __Vtemp_h5c5b39ee__0[2U] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[3U] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                            >> 0x20U));
        __Vtemp_h5c5b39ee__0[4U] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[5U] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                            >> 0x20U));
        __Vtemp_h5c5b39ee__0[6U] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[7U] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                            >> 0x20U));
        __Vtemp_h5c5b39ee__0[8U] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[9U] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                            >> 0x20U));
        __Vtemp_h5c5b39ee__0[0xaU] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[0xbU] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                              >> 0x20U));
        __Vtemp_h5c5b39ee__0[0xcU] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[0xdU] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                              >> 0x20U));
        __Vtemp_h5c5b39ee__0[0xeU] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[0xfU] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                              >> 0x20U));
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel) {
        __Vtemp_h5c5b39ee__0[0U] = vlSelf->top__DOT__vram_r_data[0U];
        __Vtemp_h5c5b39ee__0[1U] = vlSelf->top__DOT__vram_r_data[1U];
        __Vtemp_h5c5b39ee__0[2U] = vlSelf->top__DOT__vram_r_data[2U];
        __Vtemp_h5c5b39ee__0[3U] = vlSelf->top__DOT__vram_r_data[3U];
        __Vtemp_h5c5b39ee__0[4U] = vlSelf->top__DOT__vram_r_data[4U];
        __Vtemp_h5c5b39ee__0[5U] = vlSelf->top__DOT__vram_r_data[5U];
        __Vtemp_h5c5b39ee__0[6U] = vlSelf->top__DOT__vram_r_data[6U];
        __Vtemp_h5c5b39ee__0[7U] = vlSelf->top__DOT__vram_r_data[7U];
        __Vtemp_h5c5b39ee__0[8U] = vlSelf->top__DOT__vram_r_data[8U];
        __Vtemp_h5c5b39ee__0[9U] = vlSelf->top__DOT__vram_r_data[9U];
        __Vtemp_h5c5b39ee__0[0xaU] = vlSelf->top__DOT__vram_r_data[0xaU];
        __Vtemp_h5c5b39ee__0[0xbU] = vlSelf->top__DOT__vram_r_data[0xbU];
        __Vtemp_h5c5b39ee__0[0xcU] = vlSelf->top__DOT__vram_r_data[0xcU];
        __Vtemp_h5c5b39ee__0[0xdU] = vlSelf->top__DOT__vram_r_data[0xdU];
        __Vtemp_h5c5b39ee__0[0xeU] = vlSelf->top__DOT__vram_r_data[0xeU];
        __Vtemp_h5c5b39ee__0[0xfU] = vlSelf->top__DOT__vram_r_data[0xfU];
    } else {
        __Vtemp_h5c5b39ee__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U];
        __Vtemp_h5c5b39ee__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U];
        __Vtemp_h5c5b39ee__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U];
        __Vtemp_h5c5b39ee__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U];
        __Vtemp_h5c5b39ee__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U];
        __Vtemp_h5c5b39ee__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U];
        __Vtemp_h5c5b39ee__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U];
        __Vtemp_h5c5b39ee__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U];
        __Vtemp_h5c5b39ee__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U];
        __Vtemp_h5c5b39ee__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U];
        __Vtemp_h5c5b39ee__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU];
        __Vtemp_h5c5b39ee__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU];
        __Vtemp_h5c5b39ee__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU];
        __Vtemp_h5c5b39ee__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU];
        __Vtemp_h5c5b39ee__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU];
        __Vtemp_h5c5b39ee__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU];
    }
    bufp->chgWData(oldp+1092,(__Vtemp_h5c5b39ee__0),512);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
