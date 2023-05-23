// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper___024root.h"

void Vpicorv32_wrapper___024root___eval_act(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_act\n"); );
}

void Vpicorv32_wrapper___024root___eval_triggers__ico(Vpicorv32_wrapper___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__ico(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vpicorv32_wrapper___024root___eval_ico(Vpicorv32_wrapper___024root* vlSelf);
void Vpicorv32_wrapper___024root___eval_triggers__act(Vpicorv32_wrapper___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__act(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__nba(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vpicorv32_wrapper___024root___eval_nba(Vpicorv32_wrapper___024root* vlSelf);

void Vpicorv32_wrapper___024root___eval(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vpicorv32_wrapper___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vpicorv32_wrapper___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("testbench.v", 67, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vpicorv32_wrapper___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vpicorv32_wrapper___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vpicorv32_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("testbench.v", 67, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vpicorv32_wrapper___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vpicorv32_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("testbench.v", 67, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vpicorv32_wrapper___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vpicorv32_wrapper___024root___eval_debug_assertions(Vpicorv32_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG
