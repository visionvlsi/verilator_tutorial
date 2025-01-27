// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter4bit.h for the primary calling header

#include "Vtb_counter4bit__pch.h"
#include "Vtb_counter4bit__Syms.h"
#include "Vtb_counter4bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_counter4bit___024root___dump_triggers__act(Vtb_counter4bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_counter4bit___024root___eval_triggers__act(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_triggers__act\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_counter4bit__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_counter4bit__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_counter4bit__DOT__clk__0 
        = vlSelfRef.tb_counter4bit__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_counter4bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
