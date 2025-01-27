// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter4bit.h for the primary calling header

#include "Vtb_counter4bit__pch.h"
#include "Vtb_counter4bit___024root.h"

VL_ATTR_COLD void Vtb_counter4bit___024root___eval_initial__TOP(Vtb_counter4bit___024root* vlSelf);
VlCoroutine Vtb_counter4bit___024root___eval_initial__TOP__Vtiming__0(Vtb_counter4bit___024root* vlSelf);
VlCoroutine Vtb_counter4bit___024root___eval_initial__TOP__Vtiming__1(Vtb_counter4bit___024root* vlSelf);

void Vtb_counter4bit___024root___eval_initial(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_initial\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_counter4bit___024root___eval_initial__TOP(vlSelf);
    Vtb_counter4bit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_counter4bit___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_counter4bit__DOT__clk__0 
        = vlSelfRef.tb_counter4bit__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_counter4bit___024root___eval_initial__TOP__Vtiming__0(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_counter4bit__DOT__clk = 0U;
    vlSelfRef.tb_counter4bit__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h079056ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter4bit.clk)", 
                                                         "../rtl/tb_counter4bit.v", 
                                                         14);
    co_await vlSelfRef.__VtrigSched_h079056ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter4bit.clk)", 
                                                         "../rtl/tb_counter4bit.v", 
                                                         14);
    vlSelfRef.tb_counter4bit__DOT__rst = 1U;
    co_await vlSelfRef.__VtrigSched_h079056ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter4bit.clk)", 
                                                         "../rtl/tb_counter4bit.v", 
                                                         17);
    co_await vlSelfRef.__VtrigSched_h079056ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter4bit.clk)", 
                                                         "../rtl/tb_counter4bit.v", 
                                                         17);
    vlSelfRef.tb_counter4bit__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h079056ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter4bit.clk)", 
                                                         "../rtl/tb_counter4bit.v", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h079056ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter4bit.clk)", 
                                                         "../rtl/tb_counter4bit.v", 
                                                         20);
    co_await vlSelfRef.__VdlySched.delay(0x493e0ULL, 
                                         nullptr, "../rtl/tb_counter4bit.v", 
                                         21);
    VL_FINISH_MT("../rtl/tb_counter4bit.v", 22, "");
}

VL_INLINE_OPT VlCoroutine Vtb_counter4bit___024root___eval_initial__TOP__Vtiming__1(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "../rtl/tb_counter4bit.v", 
                                             25);
        vlSelfRef.tb_counter4bit__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.tb_counter4bit__DOT__clk)));
    }
}

void Vtb_counter4bit___024root___eval_act(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_act\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_counter4bit___024root___nba_sequent__TOP__0(Vtb_counter4bit___024root* vlSelf);

void Vtb_counter4bit___024root___eval_nba(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_nba\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_counter4bit___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_counter4bit___024root___nba_sequent__TOP__0(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___nba_sequent__TOP__0\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_counter4bit__DOT__count = ((IData)(vlSelfRef.tb_counter4bit__DOT__rst)
                                             ? 0U : 
                                            (0xfU & 
                                             ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_counter4bit__DOT__count))));
}

void Vtb_counter4bit___024root___timing_resume(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___timing_resume\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h079056ed__0.resume(
                                                   "@(posedge tb_counter4bit.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_counter4bit___024root___timing_commit(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___timing_commit\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h079056ed__0.commit(
                                                   "@(posedge tb_counter4bit.clk)");
    }
}

void Vtb_counter4bit___024root___eval_triggers__act(Vtb_counter4bit___024root* vlSelf);

bool Vtb_counter4bit___024root___eval_phase__act(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_phase__act\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_counter4bit___024root___eval_triggers__act(vlSelf);
    Vtb_counter4bit___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_counter4bit___024root___timing_resume(vlSelf);
        Vtb_counter4bit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_counter4bit___024root___eval_phase__nba(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_phase__nba\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_counter4bit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_counter4bit___024root___dump_triggers__nba(Vtb_counter4bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_counter4bit___024root___dump_triggers__act(Vtb_counter4bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_counter4bit___024root___eval(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_counter4bit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtl/tb_counter4bit.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_counter4bit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtl/tb_counter4bit.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_counter4bit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_counter4bit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_counter4bit___024root___eval_debug_assertions(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_debug_assertions\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
