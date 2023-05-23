// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper___024root.h"

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___eval_static__TOP__picorv32_wrapper(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);
VL_ATTR_COLD void Vpicorv32_wrapper_axi4_memory___eval_static__TOP__picorv32_wrapper__mem(Vpicorv32_wrapper_axi4_memory* vlSelf);

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_static(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_static\n"); );
    // Body
    Vpicorv32_wrapper_picorv32_wrapper___eval_static__TOP__picorv32_wrapper((&vlSymsp->TOP__picorv32_wrapper));
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vpicorv32_wrapper_axi4_memory___eval_static__TOP__picorv32_wrapper__mem((&vlSymsp->TOP__picorv32_wrapper__mem));
}

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___eval_initial__TOP__picorv32_wrapper(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);
VL_ATTR_COLD void Vpicorv32_wrapper_axi4_memory___eval_initial__TOP__picorv32_wrapper__mem(Vpicorv32_wrapper_axi4_memory* vlSelf);

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_initial(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_initial\n"); );
    // Body
    Vpicorv32_wrapper_picorv32_wrapper___eval_initial__TOP__picorv32_wrapper((&vlSymsp->TOP__picorv32_wrapper));
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vpicorv32_wrapper_axi4_memory___eval_initial__TOP__picorv32_wrapper__mem((&vlSymsp->TOP__picorv32_wrapper__mem));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__stl(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_triggers__stl(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32_wrapper___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root___stl_sequent__TOP__0(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->trace_data = vlSymsp->TOP__picorv32_wrapper.trace_data;
    vlSelf->trace_valid = vlSymsp->TOP__picorv32_wrapper.trace_valid;
    vlSelf->trap = vlSymsp->TOP__picorv32_wrapper.trap;
}

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___stl_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_stl(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vpicorv32_wrapper___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vpicorv32_wrapper_picorv32_wrapper___stl_sequent__TOP__picorv32_wrapper__0((&vlSymsp->TOP__picorv32_wrapper));
    }
}
