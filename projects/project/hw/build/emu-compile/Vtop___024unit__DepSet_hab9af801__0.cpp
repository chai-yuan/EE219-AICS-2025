// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024unit.h"

extern "C" void ram_write_helper(long long wIdx, long long wdata, long long wmask, svBit wen);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit\n"); );
    // Body
    long long wIdx__Vcvt;
    for (size_t wIdx__Vidx = 0; wIdx__Vidx < 1; ++wIdx__Vidx) wIdx__Vcvt = wIdx;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    long long wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    svBit wen__Vcvt;
    for (size_t wen__Vidx = 0; wen__Vidx < 1; ++wen__Vidx) wen__Vcvt = wen;
    ram_write_helper(wIdx__Vcvt, wdata__Vcvt, wmask__Vcvt, wen__Vcvt);
}

extern "C" long long ram_read_helper(svBit en, long long rIdx);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit\n"); );
    // Body
    svBit en__Vcvt;
    for (size_t en__Vidx = 0; en__Vidx < 1; ++en__Vidx) en__Vcvt = en;
    long long rIdx__Vcvt;
    for (size_t rIdx__Vidx = 0; rIdx__Vidx < 1; ++rIdx__Vidx) rIdx__Vcvt = rIdx;
    long long ram_read_helper__Vfuncrtn__Vcvt;
    ram_read_helper__Vfuncrtn__Vcvt = ram_read_helper(en__Vcvt, rIdx__Vcvt);
    ram_read_helper__Vfuncrtn = ram_read_helper__Vfuncrtn__Vcvt;
}

extern "C" long long ram_inst_helper(svBit en, long long rIdx);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ram_inst_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_inst_helper__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ram_inst_helper_TOP____024unit\n"); );
    // Body
    svBit en__Vcvt;
    for (size_t en__Vidx = 0; en__Vidx < 1; ++en__Vidx) en__Vcvt = en;
    long long rIdx__Vcvt;
    for (size_t rIdx__Vidx = 0; rIdx__Vidx < 1; ++rIdx__Vidx) rIdx__Vcvt = rIdx;
    long long ram_inst_helper__Vfuncrtn__Vcvt;
    ram_inst_helper__Vfuncrtn__Vcvt = ram_inst_helper(en__Vcvt, rIdx__Vcvt);
    ram_inst_helper__Vfuncrtn = ram_inst_helper__Vfuncrtn__Vcvt;
}
