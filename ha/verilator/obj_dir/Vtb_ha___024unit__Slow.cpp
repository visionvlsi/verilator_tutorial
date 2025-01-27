// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ha.h for the primary calling header

#include "Vtb_ha__pch.h"
#include "Vtb_ha__Syms.h"
#include "Vtb_ha___024unit.h"

void Vtb_ha___024unit___ctor_var_reset(Vtb_ha___024unit* vlSelf);

Vtb_ha___024unit::Vtb_ha___024unit(Vtb_ha__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_ha___024unit___ctor_var_reset(this);
}

void Vtb_ha___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_ha___024unit::~Vtb_ha___024unit() {
}
