// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_counter4bit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_counter4bit::Vtb_counter4bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_counter4bit__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_counter4bit::Vtb_counter4bit(const char* _vcname__)
    : Vtb_counter4bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_counter4bit::~Vtb_counter4bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_counter4bit___024root___eval_debug_assertions(Vtb_counter4bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_counter4bit___024root___eval_static(Vtb_counter4bit___024root* vlSelf);
void Vtb_counter4bit___024root___eval_initial(Vtb_counter4bit___024root* vlSelf);
void Vtb_counter4bit___024root___eval_settle(Vtb_counter4bit___024root* vlSelf);
void Vtb_counter4bit___024root___eval(Vtb_counter4bit___024root* vlSelf);

void Vtb_counter4bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_counter4bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_counter4bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_counter4bit___024root___eval_static(&(vlSymsp->TOP));
        Vtb_counter4bit___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_counter4bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_counter4bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_counter4bit::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_counter4bit::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_counter4bit::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_counter4bit::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_counter4bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_counter4bit___024root___eval_final(Vtb_counter4bit___024root* vlSelf);

VL_ATTR_COLD void Vtb_counter4bit::final() {
    Vtb_counter4bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_counter4bit::hierName() const { return vlSymsp->name(); }
const char* Vtb_counter4bit::modelName() const { return "Vtb_counter4bit"; }
unsigned Vtb_counter4bit::threads() const { return 1; }
void Vtb_counter4bit::prepareClone() const { contextp()->prepareClone(); }
void Vtb_counter4bit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_counter4bit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_counter4bit___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_counter4bit___024root__trace_init_top(Vtb_counter4bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_counter4bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_counter4bit___024root*>(voidSelf);
    Vtb_counter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_counter4bit___024root__trace_decl_types(tracep);
    Vtb_counter4bit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_counter4bit___024root__trace_register(Vtb_counter4bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_counter4bit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_counter4bit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_counter4bit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
