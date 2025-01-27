// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_counter4bit.h for the primary calling header

#ifndef VERILATED_VTB_COUNTER4BIT___024ROOT_H_
#define VERILATED_VTB_COUNTER4BIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_counter4bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_counter4bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_counter4bit__DOT__clk;
    CData/*0:0*/ tb_counter4bit__DOT__rst;
    CData/*3:0*/ tb_counter4bit__DOT__count;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_counter4bit__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerScheduler __VtrigSched_h079056ed__0;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_counter4bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_counter4bit___024root(Vtb_counter4bit__Syms* symsp, const char* v__name);
    ~Vtb_counter4bit___024root();
    VL_UNCOPYABLE(Vtb_counter4bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
