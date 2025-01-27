// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ha.h for the primary calling header

#include "Vtb_ha__pch.h"
#include "Vtb_ha__Syms.h"
#include "Vtb_ha___024root.h"

void Vtb_ha___024root___ctor_var_reset(Vtb_ha___024root* vlSelf);

Vtb_ha___024root::Vtb_ha___024root(Vtb_ha__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_ha___024root___ctor_var_reset(this);
}

void Vtb_ha___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_ha___024root::~Vtb_ha___024root() {
}
