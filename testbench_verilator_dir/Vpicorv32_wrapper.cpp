// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpicorv32_wrapper.h"
#include "Vpicorv32_wrapper__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vpicorv32_wrapper::Vpicorv32_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpicorv32_wrapper__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetn{vlSymsp->TOP.resetn}
    , trap{vlSymsp->TOP.trap}
    , trace_valid{vlSymsp->TOP.trace_valid}
    , trace_data{vlSymsp->TOP.trace_data}
    , picorv32_wrapper{vlSymsp->TOP.picorv32_wrapper}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpicorv32_wrapper::Vpicorv32_wrapper(const char* _vcname__)
    : Vpicorv32_wrapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpicorv32_wrapper::~Vpicorv32_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpicorv32_wrapper___024root___eval_debug_assertions(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vpicorv32_wrapper___024root___eval_static(Vpicorv32_wrapper___024root* vlSelf);
void Vpicorv32_wrapper___024root___eval_initial(Vpicorv32_wrapper___024root* vlSelf);
void Vpicorv32_wrapper___024root___eval_settle(Vpicorv32_wrapper___024root* vlSelf);
void Vpicorv32_wrapper___024root___eval(Vpicorv32_wrapper___024root* vlSelf);

void Vpicorv32_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpicorv32_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpicorv32_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpicorv32_wrapper___024root___eval_static(&(vlSymsp->TOP));
        Vpicorv32_wrapper___024root___eval_initial(&(vlSymsp->TOP));
        Vpicorv32_wrapper___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpicorv32_wrapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpicorv32_wrapper::eventsPending() { return false; }

uint64_t Vpicorv32_wrapper::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpicorv32_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpicorv32_wrapper___024root___eval_final(Vpicorv32_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vpicorv32_wrapper::final() {
    Vpicorv32_wrapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpicorv32_wrapper::hierName() const { return vlSymsp->name(); }
const char* Vpicorv32_wrapper::modelName() const { return "Vpicorv32_wrapper"; }
unsigned Vpicorv32_wrapper::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vpicorv32_wrapper::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpicorv32_wrapper___024root__trace_init_top(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpicorv32_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_wrapper___024root*>(voidSelf);
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vpicorv32_wrapper___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_register(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpicorv32_wrapper::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpicorv32_wrapper::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpicorv32_wrapper___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
