// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ha.h for the primary calling header

#ifndef VERILATED_VTB_HA___024ROOT_H_
#define VERILATED_VTB_HA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_ha___024unit;


class Vtb_ha__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ha___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_ha___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ha__DOT__a;
    CData/*0:0*/ tb_ha__DOT__b;
    CData/*0:0*/ tb_ha__DOT__sum;
    CData/*0:0*/ tb_ha__DOT__co;
    CData/*2:0*/ tb_ha__DOT__i;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ha__DOT__a__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ha__DOT__b__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ha__DOT__co__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ha__DOT__sum__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ha__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ha___024root(Vtb_ha__Syms* symsp, const char* v__name);
    ~Vtb_ha___024root();
    VL_UNCOPYABLE(Vtb_ha___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
