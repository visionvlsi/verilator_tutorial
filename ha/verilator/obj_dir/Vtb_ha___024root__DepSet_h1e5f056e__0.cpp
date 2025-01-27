// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ha.h for the primary calling header

#include "Vtb_ha__pch.h"
#include "Vtb_ha__Syms.h"
#include "Vtb_ha___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_ha___024root___eval_initial__TOP__Vtiming__0(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.tb_ha__DOT__a = 0U;
    vlSelfRef.tb_ha__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../rtl/tb_ha.v", 
                                         17);
    vlSelfRef.tb_ha__DOT__i = 1U;
    vlSelfRef.tb_ha__DOT__a = 0U;
    vlSelfRef.tb_ha__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../rtl/tb_ha.v", 
                                         17);
    vlSelfRef.tb_ha__DOT__i = 2U;
    vlSelfRef.tb_ha__DOT__a = 1U;
    vlSelfRef.tb_ha__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../rtl/tb_ha.v", 
                                         17);
    vlSelfRef.tb_ha__DOT__i = 3U;
    vlSelfRef.tb_ha__DOT__a = 1U;
    vlSelfRef.tb_ha__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../rtl/tb_ha.v", 
                                         17);
    vlSelfRef.tb_ha__DOT__i = 4U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ha___024root___dump_triggers__act(Vtb_ha___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ha___024root___eval_triggers__act(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___eval_triggers__act\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_ha__DOT__a) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__a__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_ha__DOT__b) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__b__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_ha__DOT__co) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__co__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_ha__DOT__sum) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__sum__0)));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__a__0 
        = vlSelfRef.tb_ha__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__b__0 
        = vlSelfRef.tb_ha__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__co__0 
        = vlSelfRef.tb_ha__DOT__co;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__sum__0 
        = vlSelfRef.tb_ha__DOT__sum;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ha___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_ha___024root___nba_sequent__TOP__0(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___nba_sequent__TOP__0\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%20#ns a=%b b=%b co=%b sum=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelfRef.tb_ha__DOT__a),
                     1,vlSelfRef.tb_ha__DOT__b,1,(IData)(vlSelfRef.tb_ha__DOT__co),
                     1,vlSelfRef.tb_ha__DOT__sum);
    }
}
