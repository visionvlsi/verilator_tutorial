// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ha.h for the primary calling header

#ifndef VERILATED_VTB_HA___024UNIT_H_
#define VERILATED_VTB_HA___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ha__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ha___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vtb_ha__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ha___024unit(Vtb_ha__Syms* symsp, const char* v__name);
    ~Vtb_ha___024unit();
    VL_UNCOPYABLE(Vtb_ha___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
