// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__ico(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vpicorv32_wrapper___024root___eval_triggers__ico(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32_wrapper___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vpicorv32_wrapper_picorv32_wrapper___ico_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);

void Vpicorv32_wrapper___024root___eval_ico(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vpicorv32_wrapper_picorv32_wrapper___ico_sequent__TOP__picorv32_wrapper__0((&vlSymsp->TOP__picorv32_wrapper));
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__act(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vpicorv32_wrapper___024root___eval_triggers__act(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clk) 
                                      ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)) 
                                     | ((~ (IData)(vlSelf->clk)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->clk) 
                                     ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32_wrapper___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vpicorv32_wrapper___024root___nba_sequent__TOP__0(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->trap = vlSymsp->TOP__picorv32_wrapper.trap;
    vlSelf->trace_valid = vlSymsp->TOP__picorv32_wrapper.trace_valid;
    vlSelf->trace_data = vlSymsp->TOP__picorv32_wrapper.trace_data;
}

void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__1(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__2(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__3(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__4(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__1(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__5(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__2(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__6(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_picorv32_wrapper___nba_comb__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);

void Vpicorv32_wrapper___024root___eval_nba(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__0((&vlSymsp->TOP__picorv32_wrapper));
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__1((&vlSymsp->TOP__picorv32_wrapper__mem));
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__2((&vlSymsp->TOP__picorv32_wrapper__mem));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__3((&vlSymsp->TOP__picorv32_wrapper__mem));
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__4((&vlSymsp->TOP__picorv32_wrapper__mem));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__1((&vlSymsp->TOP__picorv32_wrapper));
        Vpicorv32_wrapper___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__5((&vlSymsp->TOP__picorv32_wrapper__mem));
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__2((&vlSymsp->TOP__picorv32_wrapper));
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__6((&vlSymsp->TOP__picorv32_wrapper__mem));
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpicorv32_wrapper_picorv32_wrapper___nba_comb__TOP__picorv32_wrapper__0((&vlSymsp->TOP__picorv32_wrapper));
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}
