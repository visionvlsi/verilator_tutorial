// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_ha__Syms.h"


void Vtb_ha___024root__trace_chg_0_sub_0(Vtb_ha___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_ha___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root__trace_chg_0\n"); );
    // Init
    Vtb_ha___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ha___024root*>(voidSelf);
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_ha___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_ha___024root__trace_chg_0_sub_0(Vtb_ha___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root__trace_chg_0_sub_0\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.tb_ha__DOT__a));
    bufp->chgBit(oldp+1,(vlSelfRef.tb_ha__DOT__b));
    bufp->chgBit(oldp+2,(vlSelfRef.tb_ha__DOT__sum));
    bufp->chgBit(oldp+3,(vlSelfRef.tb_ha__DOT__co));
    bufp->chgCData(oldp+4,(vlSelfRef.tb_ha__DOT__i),3);
}

void Vtb_ha___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root__trace_cleanup\n"); );
    // Init
    Vtb_ha___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ha___024root*>(voidSelf);
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
