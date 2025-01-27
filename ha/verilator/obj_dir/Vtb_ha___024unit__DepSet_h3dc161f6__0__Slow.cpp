// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ha.h for the primary calling header

#include "Vtb_ha__pch.h"
#include "Vtb_ha___024unit.h"

VL_ATTR_COLD void Vtb_ha___024unit___ctor_var_reset(Vtb_ha___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_ha___024unit___ctor_var_reset\n"); );
    Vtb_ha__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
