// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter4bit.h for the primary calling header

#include "Vtb_counter4bit__pch.h"
#include "Vtb_counter4bit___024root.h"

VL_ATTR_COLD void Vtb_counter4bit___024root___eval_static(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_static\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_counter4bit___024root___eval_final(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_final\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_counter4bit___024root___eval_settle(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___eval_settle\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_counter4bit___024root___dump_triggers__act(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___dump_triggers__act\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_counter4bit.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_counter4bit___024root___dump_triggers__nba(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___dump_triggers__nba\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_counter4bit.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_counter4bit___024root___ctor_var_reset(Vtb_counter4bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root___ctor_var_reset\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_counter4bit__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_counter4bit__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_counter4bit__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_counter4bit__DOT__clk__0 = VL_RAND_RESET_I(1);
}
