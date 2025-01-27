// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter4bit.h for the primary calling header

#include "Vtb_counter4bit__pch.h"
#include "Vtb_counter4bit__Syms.h"
#include "Vtb_counter4bit___024root.h"

void Vtb_counter4bit___024root___ctor_var_reset(Vtb_counter4bit___024root* vlSelf);

Vtb_counter4bit___024root::Vtb_counter4bit___024root(Vtb_counter4bit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_counter4bit___024root___ctor_var_reset(this);
}

void Vtb_counter4bit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_counter4bit___024root::~Vtb_counter4bit___024root() {
}
