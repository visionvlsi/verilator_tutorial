// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_counter4bit__Syms.h"


VL_ATTR_COLD void Vtb_counter4bit___024root__trace_init_sub__TOP__0(Vtb_counter4bit___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root__trace_init_sub__TOP__0\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_counter4bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_counter4bit___024root__trace_init_top(Vtb_counter4bit___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root__trace_init_top\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_counter4bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_counter4bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_counter4bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_counter4bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_counter4bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_counter4bit___024root__trace_register(Vtb_counter4bit___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root__trace_register\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_counter4bit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_counter4bit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_counter4bit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_counter4bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_counter4bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root__trace_const_0\n"); );
    // Init
    Vtb_counter4bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_counter4bit___024root*>(voidSelf);
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_counter4bit___024root__trace_full_0_sub_0(Vtb_counter4bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_counter4bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root__trace_full_0\n"); );
    // Init
    Vtb_counter4bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_counter4bit___024root*>(voidSelf);
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_counter4bit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_counter4bit___024root__trace_full_0_sub_0(Vtb_counter4bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter4bit___024root__trace_full_0_sub_0\n"); );
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_counter4bit__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_counter4bit__DOT__rst));
    bufp->fullCData(oldp+3,(vlSelfRef.tb_counter4bit__DOT__count),4);
}
