// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ha.h for the primary calling header

#include "Vtb_ha__pch.h"
#include "Vtb_ha___024root.h"

VlCoroutine Vtb_ha___024root___eval_initial__TOP__Vtiming__0(Vtb_ha___024root* vlSelf);

void Vtb_ha___024root___eval_initial(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___eval_initial\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ha___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__a__0 
        = vlSelfRef.tb_ha__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__b__0 
        = vlSelfRef.tb_ha__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__co__0 
        = vlSelfRef.tb_ha__DOT__co;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ha__DOT__sum__0 
        = vlSelfRef.tb_ha__DOT__sum;
}

void Vtb_ha___024root___act_sequent__TOP__0(Vtb_ha___024root* vlSelf);

void Vtb_ha___024root___eval_act(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___eval_act\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_ha___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ha___024root___act_sequent__TOP__0(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___act_sequent__TOP__0\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ha__DOT__co = ((IData)(vlSelfRef.tb_ha__DOT__a) 
                                & (IData)(vlSelfRef.tb_ha__DOT__b));
    vlSelfRef.tb_ha__DOT__sum = ((IData)(vlSelfRef.tb_ha__DOT__a) 
                                 ^ (IData)(vlSelfRef.tb_ha__DOT__b));
}

void Vtb_ha___024root___nba_sequent__TOP__0(Vtb_ha___024root* vlSelf);

void Vtb_ha___024root___eval_nba(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___eval_nba\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ha___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_ha___024root___timing_resume(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___timing_resume\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ha___024root___eval_triggers__act(Vtb_ha___024root* vlSelf);

bool Vtb_ha___024root___eval_phase__act(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___eval_phase__act\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ha___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_ha___024root___timing_resume(vlSelf);
        Vtb_ha___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ha___024root___eval_phase__nba(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___eval_phase__nba\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ha___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ha___024root___dump_triggers__nba(Vtb_ha___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ha___024root___dump_triggers__act(Vtb_ha___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ha___024root___eval(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___eval\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_ha___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtl/tb_ha.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_ha___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtl/tb_ha.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_ha___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_ha___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ha___024root___eval_debug_assertions(Vtb_ha___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ha___024root___eval_debug_assertions\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
