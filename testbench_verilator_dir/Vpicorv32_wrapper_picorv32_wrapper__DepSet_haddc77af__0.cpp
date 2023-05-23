// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper_picorv32_wrapper.h"

VL_INLINE_OPT void Vpicorv32_wrapper_picorv32_wrapper___ico_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___ico_sequent__TOP__picorv32_wrapper__0\n"); );
    // Body
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_write 
        = ((IData)(vlSymsp->TOP.resetn) & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state)))) 
                                           & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word)))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch) 
                | (0U != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state))) 
               | (~ (IData)(vlSymsp->TOP.resetn))))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = 1U;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword) 
           & ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word)) 
              & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer 
        = (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_mem_ready) 
            & (IData)(vlSelf->__PVT__uut__DOT__mem_valid)) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word) 
              & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)));
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_xfer 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                ? (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                : (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
            = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
    } else {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_xfer = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)
            ? (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer)
            : ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword)
                ? ((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                    << 0x10U) | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer))
                : ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)
                    ? (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                       >> 0x10U) : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done 
        = ((IData)(vlSymsp->TOP.resetn) & ((((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                             & ((0U 
                                                 != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state)) 
                                                & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                                   | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                                      | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata))))) 
                                            | ((3U 
                                                == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state)) 
                                               & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst))) 
                                           & ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)) 
                                              | ((~ (IData)(
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) 
                                                 & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer)))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlSymsp->TOP.resetn) & (((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state)))) 
                                               & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                                  | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                                     | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata))))) 
                                           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_xfer) 
                                              & ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword)) 
                                                 & (3U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))))));
}

VL_INLINE_OPT void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__0\n"); );
    // Init
    CData/*0:0*/ uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0;
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 = 0;
    CData/*3:0*/ uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0;
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 = 0;
    IData/*31:0*/ __Vdly__cycle_counter;
    __Vdly__cycle_counter = 0;
    CData/*1:0*/ __Vdly__uut__DOT__picorv32_core__DOT__mem_state;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword = 0;
    CData/*5:0*/ __Vdlyvdim0__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    __Vdlyvdim0__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    __Vdlyvval__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    __Vdlyvset__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    CData/*4:0*/ __Vdly__uut__DOT__picorv32_core__DOT__reg_sh;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__uut__DOT__picorv32_core__DOT__reg_out;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__uut__DOT__picorv32_core__DOT__count_cycle;
    __Vdly__uut__DOT__picorv32_core__DOT__count_cycle = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq;
    __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq = 0;
    CData/*6:0*/ __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = 0;
    // Body
    __Vdlyvset__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 0U;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelf->__Vdly__uut__DOT__pcpi_valid = vlSelf->__PVT__uut__DOT__pcpi_valid;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__count_instr 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_instr;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_rd;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu;
    __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__do_waitirq;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__timer 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__timer;
    __Vdly__uut__DOT__picorv32_core__DOT__count_cycle 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_cycle;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_sh;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_active 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_compr 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_compr;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_pc 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_pc;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_mask 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state;
    __Vdly__cycle_counter = vlSelf->__PVT__cycle_counter;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_state 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_out = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_out;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst;
    vlSelf->__Vdly__uut__DOT__mem_instr = vlSelf->__PVT__uut__DOT__mem_instr;
    vlSelf->__Vdly__uut__DOT__mem_wstrb = vlSelf->__PVT__uut__DOT__mem_wstrb;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_state 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword;
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_rd)))) {
        vlSelf->uut__DOT__picorv32_core__DOT____Vlvbound_h464dd531__0 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata;
        if ((0x23U >= (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_rd))) {
            __Vdlyvval__uut__DOT__picorv32_core__DOT__cpuregs__v0 
                = vlSelf->uut__DOT__picorv32_core__DOT____Vlvbound_h464dd531__0;
            __Vdlyvset__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 1U;
            __Vdlyvdim0__uut__DOT__picorv32_core__DOT__cpuregs__v0 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_rd;
        }
    }
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0U;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0U;
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0U;
    if (((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelf->__PVT__uut__DOT__pcpi_valid)) 
          & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready))) 
         & (0x2000033U == (0xfe00007fU & vlSelf->__PVT__uut__DOT__pcpi_insn)))) {
        if ((4U != (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((5U == (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                              >> 0xcU)))) {
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 1U;
            }
            if ((5U != (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((6U == (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 1U;
                }
            }
        }
        if ((4U == (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 1U;
        }
    }
    if (vlSymsp->TOP.resetn) {
        vlSelf->__PVT__count_cycle = (0xffffU & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__count_cycle)));
        __Vdly__cycle_counter = ((IData)(1U) + vlSelf->__PVT__cycle_counter);
    } else {
        vlSelf->__PVT__count_cycle = 0U;
        __Vdly__cycle_counter = 0U;
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelf->trap)))) {
        VL_WRITEF("TRAP after %1d clock cycles\n",32,
                  vlSelf->__PVT__cycle_counter);
        if (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__tests_passed) {
            VL_WRITEF("ALL TESTS PASSED.\n");
            VL_FINISH_MT("testbench.v", 266, "");
        } else {
            VL_WRITEF("ERROR!\n");
            if (VL_UNLIKELY(VL_TESTPLUSARGS_I(std::string{"noerror"}))) {
                VL_FINISH_MT("testbench.v", 270, "");
            }
            VL_STOP_MT("testbench.v", 271, "");
        }
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_wait_2 = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_wait = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_next = 1U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_pc;
    } else {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_next = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait) 
           & (IData)(vlSymsp->TOP.resetn));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready = 0U;
    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlSymsp->TOP.resetn))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr = 1U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready = 1U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd 
            = (IData)(((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                        ? (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                           >> 0x20U) : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd));
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode))
                ? vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode
                : (0xffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd 
            = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1 
            = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2 
            = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
    }
    if (__Vdlyvset__uut__DOT__picorv32_core__DOT__cpuregs__v0) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs[__Vdlyvdim0__uut__DOT__picorv32_core__DOT__cpuregs__v0] 
            = __Vdlyvval__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    }
    vlSelf->__PVT__cycle_counter = __Vdly__cycle_counter;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 0U;
    if (vlSymsp->TOP.resetn) {
        if ((1U & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)))) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword;
        }
        if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready) 
             & (IData)(vlSelf->__PVT__mem_axi_awvalid))) {
            vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = 1U;
        }
        if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready) 
             & (IData)(vlSelf->__PVT__mem_axi_arvalid))) {
            vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid = 1U;
        }
        if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready) 
             & (IData)(vlSelf->__PVT__mem_axi_wvalid))) {
            vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid = 1U;
        }
        if ((1U & ((IData)(vlSelf->__PVT__uut__DOT__axi_adapter__DOT__xfer_done) 
                   | (~ (IData)(vlSelf->__PVT__uut__DOT__mem_valid))))) {
            vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = 0U;
            vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid = 0U;
            vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid = 0U;
        }
        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                    | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu))
                    ? VL_EXTENDS_QI(64,32, vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    : (QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh)
                    ? VL_EXTENDS_QI(64,32, vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                    : (QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2)));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd = 0ULL;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = 0ULL;
            __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                    ? 0x3eU : 0x1eU);
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting 
                = (1U & (~ ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
                            & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait))));
        } else {
            __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = (0x7fU & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter) 
                            - (IData)(1U)));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2;
            if ((0x40U & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 1U;
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
            }
        }
        vlSelf->__PVT__uut__DOT__axi_adapter__DOT__xfer_done 
            = ((IData)(vlSelf->__PVT__uut__DOT__mem_valid) 
               & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_mem_ready));
    } else {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg = 0U;
        vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched;
    }
    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
            = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 0xfU));
        if ((IData)((0xbU == (0xfe00007fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                = (0x20U | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1));
        }
        if ((IData)((0x400000bU == (0xfe00007fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 0x20U;
        }
        if ((3U != (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 0U;
            if ((0U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 2U;
                } else if ((2U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xdU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                        = (0x3fU & ((IData)(8U) + (7U 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 7U))));
                } else if ((6U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xdU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                        = (0x3fU & ((IData)(8U) + (7U 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 7U))));
                }
            } else if ((1U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0x8000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                    if ((0x4000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                            = (0x3fU & ((0x2000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)
                                         ? ((IData)(8U) 
                                            + (7U & 
                                               (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U)))
                                         : ((IData)(8U) 
                                            + (7U & 
                                               (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U)))));
                    } else if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xdU)))) {
                        if ((IData)((0U == (0x1800U 
                                            & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                = (0x3fU & ((IData)(8U) 
                                            + (7U & 
                                               (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))));
                        }
                        if ((2U == (3U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xaU)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                = (0x3fU & ((IData)(8U) 
                                            + (7U & 
                                               (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))));
                        }
                        if ((3U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xaU)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                = (0x3fU & ((IData)(8U) 
                                            + (7U & 
                                               (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))));
                        }
                    }
                } else if ((0x4000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                    if ((0x2000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((IData)((0U != (0x107cU 
                                            & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                = ((2U == (0x1fU & 
                                           (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 7U)))
                                    ? (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))
                                    : 0U);
                        }
                    } else {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 0U;
                    }
                } else if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xdU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                        = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                    >> 7U));
                }
            } else if ((2U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xcU)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                            = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                        >> 7U));
                    }
                } else if ((2U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xdU)))) {
                    if ((0U != (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 7U)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 2U;
                    }
                } else if ((4U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xdU)))) {
                    if ((IData)(((0U == (0x107cU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
                                 & (0U != (0x1fU & 
                                           (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 7U)))))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                            = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                        >> 7U));
                    }
                    if (((~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                             >> 0xcU)) & (0U != (0x1fU 
                                                 & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                    >> 2U))))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 0U;
                    }
                    if ((IData)(((0x1000U == (0x107cU 
                                              & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
                                 & (0U != (0x1fU & 
                                           (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 7U)))))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                            = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                        >> 7U));
                    }
                    if (((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                          >> 0xcU) & (0U != (0x1fU 
                                             & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 2U))))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                            = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                        >> 7U));
                    }
                } else if ((6U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xdU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 2U;
                }
            }
        }
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid 
        = ((IData)(vlSymsp->TOP.resetn) & ((IData)(vlSelf->__PVT__uut__DOT__mem_valid) 
                                           & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_mem_ready))));
    if ((1U & ((~ (IData)(vlSymsp->TOP.resetn)) | (IData)(vlSelf->trap)))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn = 0U;
        if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
            __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP.resetn)) 
                   | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_mem_ready)))) {
            vlSelf->__PVT__uut__DOT__mem_valid = 0U;
        }
        __Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    } else {
        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn = 1U;
        }
        if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_write))) {
            vlSelf->__Vdly__uut__DOT__mem_wstrb = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb) 
                                                   & (- (IData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
            if ((((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                  | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)) 
                 | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata))) {
                vlSelf->__PVT__uut__DOT__mem_valid 
                    = (1U & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)));
                vlSelf->__Vdly__uut__DOT__mem_instr 
                    = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                       | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst));
                vlSelf->__Vdly__uut__DOT__mem_wstrb = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 1U;
            }
            if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata) {
                vlSelf->__PVT__uut__DOT__mem_valid = 1U;
                vlSelf->__Vdly__uut__DOT__mem_instr = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
                if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_read) {
                    vlSelf->__PVT__uut__DOT__mem_valid = 1U;
                    __Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword = 1U;
                    if ((1U & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer 
                            = (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                               >> 0x10U);
                    }
                } else {
                    vlSelf->__PVT__uut__DOT__mem_valid = 0U;
                    if ((1U & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata)))) {
                        if ((1U & ((~ (IData)((3U == 
                                               (3U 
                                                & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata)))) 
                                   | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer 
                                = (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                   >> 0x10U);
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = 1U;
                        } else {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
                        }
                    }
                    __Vdly__uut__DOT__picorv32_core__DOT__mem_state 
                        = (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                            | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata))
                            ? 0U : 3U);
                    __Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
                }
            }
        } else if ((2U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
                vlSelf->__PVT__uut__DOT__mem_valid = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) {
                __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 0U;
            }
        }
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
        = ((1U & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1))
            ? vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2
            : 0ULL);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = 0ULL;
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd)) 
                   + (0xfU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx))) 
                  + (0xfU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2))) 
                 >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
                    + (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx)) 
                   + (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffffff7ULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 3U));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffff0ULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | (IData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 4U))) + (0xfU 
                                                & (IData)(
                                                          (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 4U)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 4U)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 4U)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 4U))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 4U))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffffff7fULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 7U));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffffff0fULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 8U))) + (0xfU 
                                                & (IData)(
                                                          (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 8U)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 8U)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 8U)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 8U))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 8U))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffff7ffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0xbU));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffff0ffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 8U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0xcU))) + (0xfU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                             >> 0xcU)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0xcU)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0xcU)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                  >> 0xcU))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0xcU))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffff7fffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0xfU));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffff0fffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0xcU));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x10U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x10U)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x10U)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x10U)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x10U))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x10U))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffff7ffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x13U));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffff0ffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x10U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x14U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x14U)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x14U)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x14U)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x14U))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x14U))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffff7fffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x17U));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffff0fffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x14U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x18U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x18U)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x18U)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x18U)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x18U))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x18U))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffff7ffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x1bU));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffff0ffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x18U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x1cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x1cU)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x1cU)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x1cU)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x1cU))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x1cU))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffff7fffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x1fU));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffff0fffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x1cU));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x20U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x20U)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x20U)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x20U)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x20U))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x20U))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffff7ffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x23U));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffff0ffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x20U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x24U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x24U)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x24U)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x24U)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x24U))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x24U))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffff7fffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x27U));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffff0fffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x24U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x28U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x28U)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x28U)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x28U)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x28U))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x28U))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffff7ffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x2bU));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffff0ffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x28U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x2cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x2cU)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x2cU)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x2cU)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x2cU))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x2cU))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffff7fffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x2fU));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffff0fffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x2cU));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x30U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x30U)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x30U)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x30U)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x30U))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x30U))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfff7ffffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x33U));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfff0ffffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x30U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x34U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x34U)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x34U)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x34U)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x34U))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x34U))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xff7fffffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x37U));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xff0fffffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x34U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x38U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x38U)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x38U)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x38U)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x38U))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x38U))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xf7ffffffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x3bU));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xf0ffffffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x38U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 
        = (1U & ((((0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x3cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x3cU)))) 
                  + (0xfU & (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x3cU)))) >> 4U));
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 
        = (0xfU & (((IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x3cU)) + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x3cU))) 
                   + (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x3cU))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0x7fffffffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0)) 
              << 0x3fU));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffffULL & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0)) 
              << 0x3cU));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
           << 1U);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
           >> 1U);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
           << 1U);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 0U;
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelf->__PVT__uut__DOT__pcpi_valid)) 
         & (0x2000033U == (0xfe00007fU & vlSelf->__PVT__uut__DOT__pcpi_insn)))) {
        if ((0U != (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((1U != (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((2U != (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    if ((3U == (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                                      >> 0xcU)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 1U;
                    }
                }
                if ((2U == (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 1U;
                }
            }
            if ((1U == (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                              >> 0xcU)))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 1U;
            }
        }
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1;
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1));
        } else {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0xffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1));
        }
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state 
        = __Vdly__uut__DOT__picorv32_core__DOT__mem_state;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword 
        = __Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword;
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vpicorv32_wrapper__ConstPool__TABLE_hd63e190f_0;

VL_INLINE_OPT void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__1(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vdly__uut__DOT__picorv32_core__DOT__reg_sh;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__uut__DOT__picorv32_core__DOT__reg_out;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__uut__DOT__picorv32_core__DOT__count_cycle;
    __Vdly__uut__DOT__picorv32_core__DOT__count_cycle = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq;
    __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq = 0;
    // Body
    vlSelf->__PVT__uut__DOT__mem_instr = vlSelf->__Vdly__uut__DOT__mem_instr;
    vlSelf->__PVT__uut__DOT__mem_wstrb = vlSelf->__Vdly__uut__DOT__mem_wstrb;
    vlSelf->__PVT__mem_axi_rready = ((~ (IData)((0U 
                                                 != (IData)(vlSelf->__PVT__uut__DOT__mem_wstrb)))) 
                                     & (IData)(vlSelf->__PVT__uut__DOT__mem_valid));
    vlSelf->__PVT__mem_axi_bready = ((IData)(vlSelf->__PVT__uut__DOT__mem_valid) 
                                     & (0U != (IData)(vlSelf->__PVT__uut__DOT__mem_wstrb)));
    if ((1U & (~ ((~ (IData)(vlSymsp->TOP.resetn)) 
                  | (IData)(vlSelf->trap))))) {
        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_write) {
            vlSelf->__PVT__uut__DOT__mem_wdata = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_write))) {
            vlSelf->__PVT__uut__DOT__mem_addr = ((IData)(vlSelf->uut__DOT__picorv32_core__DOT____VdfgTmp_hed8d3454__0)
                                                  ? 
                                                 (((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_pc 
                                                    >> 2U) 
                                                   + (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_xfer)) 
                                                  << 2U)
                                                  : 
                                                 (0xfffffffcU 
                                                  & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1));
        }
    }
    vlSelf->__PVT__mem_axi_arvalid = ((~ (IData)(vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid)) 
                                      & (IData)(vlSelf->__PVT__mem_axi_rready));
    vlSelf->__PVT__mem_axi_awvalid = ((~ (IData)(vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid)) 
                                      & (IData)(vlSelf->__PVT__mem_axi_bready));
    vlSelf->__PVT__mem_axi_wvalid = ((~ (IData)(vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid)) 
                                     & (IData)(vlSelf->__PVT__mem_axi_bready));
    vlSelf->trap = 0U;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh = 0U;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_out = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata = 0U;
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 0U;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_pending;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
           & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0U;
    __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq = 0U;
    vlSelf->trace_valid = 0U;
    if ((0U != vlSelf->__PVT__uut__DOT__picorv32_core__DOT__timer)) {
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__timer 
            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__timer 
               - (IData)(1U));
    }
    if (vlSymsp->TOP.resetn) {
        __Vdly__uut__DOT__picorv32_core__DOT__count_cycle 
            = (1ULL + vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
                | (8U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
               | (4U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
              | (2U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
             | (1U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                vlSelf->trap = 1U;
            } else if ((0x40U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__do_waitirq))));
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu = 0U;
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh = 0U;
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb = 0U;
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                    = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc;
                if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_stalu)
                                               ? vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_q
                                               : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_out))
                            : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc);
                } else if ((1U & (~ ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store) 
                                     & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch)))))) {
                    if ((1U & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc = 0x10U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_active = 1U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                    } else if ((2U & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                               & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask);
                        vlSelf->__PVT__uut__DOT__eoi 
                            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                               & (~ vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask));
                    }
                }
                if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_trace) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_trace = 0U;
                    vlSelf->trace_valid = 1U;
                    vlSelf->trace_data = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch)
                                           ? (0x100000000ULL 
                                              | (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                                   ? 0x800000000ULL
                                                   : 0ULL) 
                                                 | (0xfffffffeULL 
                                                    & (QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc)))))
                                           : (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                                ? 0x800000000ULL
                                                : 0ULL) 
                                              | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_stalu)
                                                  ? (QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_q))
                                                  : (QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_out)))));
                }
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_pc 
                    = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc;
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                    = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc;
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 0U;
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_stalu = 0U;
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 0U;
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
                    = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd;
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_compr 
                    = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__compressed_instr;
                if ((((((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
                        & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active))) 
                       & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_delay))) 
                      & (0U != (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                                & (~ vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask)))) 
                     | (0U != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state)))) {
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_state 
                        = ((0U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state))
                            ? 1U : ((1U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state))
                                     ? 2U : 0U));
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_compr 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_compr;
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
                        = (0x3fU & (0x20U | (1U & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state))));
                } else if ((((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
                             | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__do_waitirq)) 
                            & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq))) {
                    if ((0U != vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_pending)) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_pending;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                               + ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__compressed_instr)
                                   ? 2U : 4U));
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                    } else {
                        __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq = 1U;
                    }
                } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) {
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__count_instr 
                        = (1ULL + vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_instr);
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_delay 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                        = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                           + ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__compressed_instr)
                               ? 2U : 4U));
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_trace = 1U;
                    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jal) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                               + vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j);
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 1U;
                    } else {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_retirq))));
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 = 0U;
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 = 0U;
                if (((((((((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_trap) 
                           | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                          | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal)) 
                         | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_getq)) 
                        | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_setq)) 
                       | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_retirq)) 
                      | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq)) 
                     | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_timer))) {
                    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_trap) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        vlSelf->__Vdly__uut__DOT__pcpi_valid = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                            = (0x1fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2);
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready) {
                            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            vlSelf->__Vdly__uut__DOT__pcpi_valid = 0U;
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd;
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store 
                                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr;
                            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout) 
                                    | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak))) {
                            vlSelf->__Vdly__uut__DOT__pcpi_valid = 0U;
                            if ((1U & ((~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                                           >> 1U)) 
                                       & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                                    = (2U | vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
                                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                            } else {
                                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
                            }
                        }
                    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_cycle);
                        } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_instr);
                        } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = (IData)((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lui)
                                ? 0U : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_pc);
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_getq) {
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_setq) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
                            = (0x20U | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_rd));
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_retirq) {
                        vlSelf->__PVT__uut__DOT__eoi = 0U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_active = 0U;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 1U;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = (0xfffffffeU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1);
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_mask 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    } else {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__timer;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__timer 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_trap)))) {
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 1U;
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai) {
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                        = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2));
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 4U;
                } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                } else {
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                        = (0x1fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2);
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 2U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 4U;
                    } else {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                    = (0x1fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2);
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                    = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val 
                    = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_trap) {
                    vlSelf->__Vdly__uut__DOT__pcpi_valid = 1U;
                    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                        vlSelf->__Vdly__uut__DOT__pcpi_valid = 0U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd;
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout) 
                                | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak))) {
                        vlSelf->__Vdly__uut__DOT__pcpi_valid = 0U;
                        if ((1U & ((~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                                       >> 1U)) & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                                = (2U | vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
                            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        } else {
                            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
                        }
                    }
                } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 2U;
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 4U;
                } else {
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                    = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_pc 
                       + vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm);
                if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_rd = 0U;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
                    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_stalu = 1U;
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_sh))) {
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1;
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_sh))) {
                    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slli) 
                         | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sll))) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               << 4U);
                    } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srli) 
                                | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srl))) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               >> 4U);
                    } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srai) 
                                | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sra))) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1, 4U);
                    }
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_sh) 
                                    - (IData)(4U)));
                } else {
                    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slli) 
                         | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sll))) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               << 1U);
                    } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srli) 
                                | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srl))) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               >> 1U);
                    } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srai) 
                                | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sra))) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1, 1U);
                    }
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_sh) 
                                    - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                    = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
                if ((1U & ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata = 1U;
                        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sb) {
                            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                        } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sh) {
                            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                        } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sw) {
                            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                        }
                        vlSelf->trace_valid = 1U;
                        vlSelf->trace_data = (0x200000000ULL 
                                              | (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                                   ? 0x800000000ULL
                                                   : 0ULL) 
                                                 | (0xffffffffULL 
                                                    & ((QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) 
                                                       + (QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm))))));
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               + vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm);
                    }
                    if (((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
                        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word;
                        } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word));
                        } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word));
                        }
                        __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lb) 
                             | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lbu))) {
                            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lh) 
                                    | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lhu))) {
                            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                        } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lw) {
                            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                        }
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lh;
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb 
                            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lb;
                        vlSelf->trace_valid = 1U;
                        vlSelf->trace_data = (0x200000000ULL 
                                              | (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                                   ? 0x800000000ULL
                                                   : 0ULL) 
                                                 | (0xffffffffULL 
                                                    & ((QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) 
                                                       + (QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm))))));
                        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               + vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm);
                    }
                }
            }
        }
    } else {
        __Vdly__uut__DOT__picorv32_core__DOT__count_cycle = 0ULL;
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__count_instr = 0ULL;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending = 0U;
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_pc = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_stalu = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_trace = 0U;
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu = 0U;
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh = 0U;
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb = 0U;
        vlSelf->__Vdly__uut__DOT__pcpi_valid = 0U;
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_active = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_delay = 0U;
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_mask = 0xffffffffU;
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_state = 0U;
        vlSelf->__PVT__uut__DOT__eoi = 0U;
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__timer = 0U;
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
        = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
           | vlSelf->__PVT__irq);
    if ((0U != vlSelf->__PVT__uut__DOT__picorv32_core__DOT__timer)) {
        if ((0U == (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__timer 
                    - (IData)(1U)))) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                = (1U | vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
        }
    }
    if (((IData)(vlSymsp->TOP.resetn) & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                         | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)))) {
            if ((1U & ((~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                    = (4U | vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
            } else {
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
            }
        }
        if (((1U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize)) 
             & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
            if ((1U & ((~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                    = (4U | vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
            } else {
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
            }
        }
    }
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)) 
         & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_pc)) {
        if ((1U & ((~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                       >> 2U)) & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                = (4U | vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
        } else {
            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
        }
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.resetn)) | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done)))) {
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch = 0U;
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata = 0U;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst) {
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata = 1U;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata = 1U;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc = 0U;
    vlSelf->__PVT__irq = 0U;
    vlSelf->__PVT__irq = ((0xffffffcfU & vlSelf->__PVT__irq) 
                          | ((((IData)((0xffffU == (IData)(vlSelf->__PVT__count_cycle))) 
                               << 1U) | (0x1fffU == 
                                         (0x1fffU & (IData)(vlSelf->__PVT__count_cycle)))) 
                             << 4U));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_sh 
        = __Vdly__uut__DOT__picorv32_core__DOT__reg_sh;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_cycle 
        = __Vdly__uut__DOT__picorv32_core__DOT__count_cycle;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__timer 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__timer;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__do_waitirq 
        = __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_instr 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__count_instr;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
            ? ((0x23U >= (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
                ? vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs
               [vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1]
                : 0U) : 0U);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_rd 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_rd;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_active;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_pc 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_pc;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_compr 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_compr;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_mask;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_state;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_out 
        = __Vdly__uut__DOT__picorv32_core__DOT__reg_out;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_write 
        = ((IData)(vlSymsp->TOP.resetn) & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state)))) 
                                           & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)));
    __Vtableidx1 = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[0U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_hd63e190f_0
        [__Vtableidx1][0U];
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[1U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_hd63e190f_0
        [__Vtableidx1][1U];
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[2U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_hd63e190f_0
        [__Vtableidx1][2U];
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[3U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_hd63e190f_0
        [__Vtableidx1][3U];
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_q 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word)))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch) 
                | (0U != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state))) 
               | (~ (IData)(vlSymsp->TOP.resetn))))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = 1U;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch) 
            & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store))
            ? (0xfffffffeU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_out)
            : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc);
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelf->__PVT__uut__DOT__pcpi_valid)) 
         & (~ ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
               | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait))))) {
        if ((0U != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter))) {
            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter 
                = (0xfU & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter) 
                           - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter = 0xfU;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter)))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lbu) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lhu) 
              | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lw)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_pc 
                   + ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store) 
                    & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch)))) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_stalu)
                    ? vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_q
                    : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_out);
        } else if ((1U & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                   | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                   & (~ vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask));
        }
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd;
    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__compressed_instr = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
            = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 7U));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
            = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 0x14U));
        if ((3U != (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__compressed_instr = 1U;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd = 0U;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 = 0U;
            if ((0U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                        = (0x3fU & ((IData)(8U) + (7U 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))));
                } else if ((2U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xdU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                        = (0x3fU & ((IData)(8U) + (7U 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))));
                }
                if ((0U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    if ((2U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        if ((6U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                = (0x3fU & ((IData)(8U) 
                                            + (7U & 
                                               (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 2U))));
                        }
                    }
                }
            } else if ((1U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0x8000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                    if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xeU)))) {
                        if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                            if ((IData)((0U == (0x1800U 
                                                & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) {
                                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                    = (0x3fU & ((IData)(8U) 
                                                + (7U 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 7U))));
                            }
                            if ((2U == (3U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xaU)))) {
                                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                    = (0x3fU & ((IData)(8U) 
                                                + (7U 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 7U))));
                            }
                            if ((3U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xaU)))) {
                                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                    = (0x3fU & ((IData)(8U) 
                                                + (7U 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 7U))));
                            }
                        }
                    }
                    if ((0x4000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 = 0U;
                    } else if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xdU)))) {
                        if ((IData)((0U == (0x1800U 
                                            & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                = ((0x20U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 7U)) 
                                   | (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                               >> 2U)));
                        }
                        if ((3U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xaU)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                = (0x3fU & ((IData)(8U) 
                                            + (7U & 
                                               (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 2U))));
                        }
                    }
                } else if ((0x4000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                    if ((0x2000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((IData)((0U != (0x107cU 
                                            & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                = ((2U == (0x1fU & 
                                           (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 7U)))
                                    ? (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))
                                    : (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U)));
                        }
                    } else {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                            = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                        >> 7U));
                    }
                } else {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                        = ((0x2000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)
                            ? 1U : (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 7U)));
                }
            } else if ((2U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xcU)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                            = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                        >> 7U));
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                            = ((0x20U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 7U)) | 
                               (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 2U)));
                    }
                } else {
                    if ((2U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        if ((0U != (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 7U)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 7U));
                        }
                    } else if ((4U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 0xdU)))) {
                        if ((IData)(((0U == (0x107cU 
                                             & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 7U)))))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd = 0U;
                        }
                        if (((~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                 >> 0xcU)) & (0U != 
                                              (0x1fU 
                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U))))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 7U));
                        }
                        if ((IData)(((0x1000U == (0x107cU 
                                                  & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 7U)))))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd = 1U;
                        }
                        if (((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                              >> 0xcU) & (0U != (0x1fU 
                                                 & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                    >> 2U))))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 7U));
                        }
                    }
                    if ((2U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        if ((4U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if (((~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xcU)) & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                    = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 2U));
                            }
                            if (((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xcU) & (0U != 
                                              (0x1fU 
                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U))))) {
                                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                    = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 2U));
                            }
                        } else if ((6U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 0xdU)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                = (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 2U));
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2))
            ? ((0x23U >= (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2))
                ? vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs
               [vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2]
                : 0U) : 0U);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2;
    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak 
            = ((((0x73U == (0x7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
                 & (~ (IData)((0U != (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                      >> 0x15U))))) 
                & (~ (IData)((0U != (0x1fffU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                >> 7U)))))) 
               | (0x9002U == (0xffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_getq 
            = (IData)((0xbU == (0xfe00007fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_setq 
            = (IData)((0x200000bU == (0xfe00007fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq 
            = (IData)((0x600000bU == (0xfe00007fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_timer 
            = (IData)((0xa00000bU == (0xfe00007fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait 
        = (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
            | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
               | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                  | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu)))) 
           & (IData)(vlSymsp->TOP.resetn));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) 
              | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jal)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) 
              | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jal) 
                 | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
                    | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_addi) 
                       | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_add) 
                          | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sub)))))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slti) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_blt) 
              | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slt)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bltu) 
              | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltu)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_compare 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slti) 
              | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slt) 
                 | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) 
                    | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltu)))));
    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_beq 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bne 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x1000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_blt 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x4000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bge 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x5000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bltu 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x6000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x7000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lb 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lh 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x1000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lw 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x2000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lbu 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x4000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lhu 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x5000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sb 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sh 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0x1000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sw 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0x2000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_addi 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slti 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x2000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x3000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xori 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x4000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ori 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x6000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_andi 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x7000U == (0x7000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slli 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x1000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srli 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x5000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srai 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))))));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
               | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_compare = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jal)
                ? vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j
                : (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
                    | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_auipc))
                    ? (0xfffff000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)
                    : (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
                        | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((0x1000U 
                                              & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                         >> 7U))))))
                            : ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_compare = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_beq = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bne = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_blt = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bge = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bltu = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_addi = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slti = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xori = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ori = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_andi = 0U;
    }
    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq 
            = (IData)((0x800000bU == (0xfe00007fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_retirq 
            = (IData)((0x400000bU == (0xfe00007fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xbU)))));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            << 2U)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                               >> 0xbU)))));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        if ((3U != (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm 
                        = (0U != (0xffU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                           >> 5U)));
                }
                if ((0U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    if ((2U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu = 1U;
                    }
                    if ((2U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        if ((6U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw = 1U;
                        }
                    }
                }
            } else {
                if ((1U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0x8000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xeU)))) {
                            if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                                if ((IData)((0U == 
                                             (0x1800U 
                                              & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) {
                                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                                }
                                if ((2U == (3U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                                }
                            }
                        }
                    } else if ((0x4000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((0x2000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                            if ((IData)((0U != (0x107cU 
                                                & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) {
                                if ((2U == (0x1fU & 
                                            (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 7U)))) {
                                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                                }
                            }
                        } else {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                        }
                    } else if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xdU)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                    }
                } else if ((2U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xcU)))) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                        }
                    }
                }
                if ((1U != (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((2U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                        if ((0U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((2U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if ((0U != (0x1fU & 
                                            (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 7U)))) {
                                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu = 1U;
                                }
                            }
                            if ((2U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if ((4U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xdU)))) {
                                    if ((6U == (7U 
                                                & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 0xdU)))) {
                                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0x7ffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0xfffff800U & VL_EXTENDS_II(32,12, 
                                                  (0xffeU 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 1U)))));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xffffffefU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x10U & (VL_EXTENDS_II(32,12, 
                                             (0xffeU 
                                              & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 1U))) 
                               >> 6U)));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xfffffcffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x300U & VL_EXTENDS_II(32,12, 
                                             (0xffeU 
                                              & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 1U)))));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xfffffbffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x400U & (VL_EXTENDS_II(32,12, 
                                              (0xffeU 
                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 1U))) 
                                << 3U)));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xffffffbfU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x40U & VL_EXTENDS_II(32,12, 
                                            (0xffeU 
                                             & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 1U)))));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xffffff7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x80U & (VL_EXTENDS_II(32,12, 
                                             (0xffeU 
                                              & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 1U))) 
                               << 2U)));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xfffffff1U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0xeU & (VL_EXTENDS_II(32,12, 
                                            (0xffeU 
                                             & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 1U))) 
                              >> 1U)));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xffffffdfU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x20U & (VL_EXTENDS_II(32,12, 
                                             (0xffeU 
                                              & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 1U))) 
                               << 4U)));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xfffffffeU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (1U & VL_EXTENDS_II(1,12, (0xffeU 
                                                & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 1U)))));
            if ((0U != (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((1U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0x8000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((0x4000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
    }
    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_add 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sub 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sll 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x1000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slt 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x2000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltu 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x3000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xor 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x4000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srl 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x5000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sra 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_or 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x6000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_and 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x7000U == (0xfe007000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))))));
    }
    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lui 
            = (0x37U == (0x7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr 
            = (IData)((0x67U == (0x707fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        if ((3U != (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U != (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((1U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xfU)))) {
                        if ((0x4000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                            if ((0x2000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                                if ((IData)((0U != 
                                             (0x107cU 
                                              & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) {
                                    if ((2U != (0x1fU 
                                                & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 7U)))) {
                                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lui = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x8000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xeU)))) {
                            if ((0x2000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jal = 1U;
                            }
                            if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                                if ((3U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xeU)))) {
                        if ((0x2000U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jal = 1U;
                        }
                    }
                } else if ((2U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        if ((2U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((4U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if (((~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xcU)) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U))))) {
                                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg = 1U;
                                }
                                if (((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xcU) & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg = 1U;
                                }
                            }
                        }
                    }
                }
                if ((1U != (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((2U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                        if ((0U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((2U != (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if ((4U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xdU)))) {
                                    if ((IData)(((0U 
                                                  == 
                                                  (0x107cU 
                                                   & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                        >> 7U)))))) {
                                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr = 1U;
                                    }
                                    if ((IData)(((0x1000U 
                                                  == 
                                                  (0x107cU 
                                                   & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                        >> 7U)))))) {
                                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_add = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sub = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sll = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slt = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltu = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xor = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srl = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sra = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_or = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_and = 0U;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 0U;
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelf->__PVT__uut__DOT__pcpi_valid)) 
         & (0x2000033U == (0xfe00007fU & vlSelf->__PVT__uut__DOT__pcpi_insn)))) {
        if ((0U == (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 1U;
        }
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 0U;
    if (((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelf->__PVT__uut__DOT__pcpi_valid)) 
          & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready))) 
         & (0x2000033U == (0xfe00007fU & vlSelf->__PVT__uut__DOT__pcpi_insn)))) {
        if ((4U != (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((5U != (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((6U != (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    if ((7U == (7U & (vlSelf->__PVT__uut__DOT__pcpi_insn 
                                      >> 0xcU)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 1U;
                    }
                }
            }
        }
    }
    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelf->__PVT__uut__DOT__pcpi_insn = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm;
    vlSelf->__PVT__uut__DOT__pcpi_valid = vlSelf->__Vdly__uut__DOT__pcpi_valid;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd = 0U;
    if (vlSymsp->TOP.resetn) {
        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = 1U;
            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                = ((((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                       >> 0x1fU)) ? (- vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1);
            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & (((((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                                               | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                                              & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                                 >> 0x1fU))
                                              ? (- (QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2)))
                                              : (QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2))) 
                                            << 0x1fU));
            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0U;
            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0x80000000U;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign 
                = ((((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     & ((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                         >> 0x1fU) != (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                       >> 0x1fU))) 
                    & (0U != vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2)) 
                   | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                      & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                         >> 0x1fU)));
        } else if (((~ (IData)((0U != vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk))) 
                    & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running))) {
            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready = 1U;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr = 1U;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd 
                = (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                    | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu))
                    ? ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                        : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                    : ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend)
                        : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend));
        } else {
            if ((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                 <= (QData)((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend)))) {
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                    = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                       - (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor));
                vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                    = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                       | vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk);
            }
            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                   >> 1U);
            vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                   >> 1U);
        }
    } else {
        vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
                    | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) 
                       | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jal) 
                          | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
                             | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_beq) 
                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bne) 
                                   | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_blt) 
                                      | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bge) 
                                         | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bltu) 
                                            | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) 
                                               | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lb) 
                                                  | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lh) 
                                                     | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lw) 
                                                        | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lbu) 
                                                           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lhu) 
                                                              | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sb) 
                                                                 | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sh) 
                                                                    | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sw) 
                                                                       | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_addi) 
                                                                          | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slti) 
                                                                             | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xori) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ori) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_andi) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slli) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srli) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srai) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_add) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sub) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sll) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slt) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xor) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srl) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sra) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_or) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_and) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_getq) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_setq) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_timer) 
                                                                                | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq)))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0ULL;
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lui) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c7569ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6175697063ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jal) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6a616cULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6a616c72ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_beq) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x626571ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bne) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x626e65ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_blt) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x626c74ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bge) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x626765ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bltu) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x626c7475ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x62676575ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lb) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c62ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lh) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c68ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lw) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c77ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lbu) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c6275ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lhu) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c6875ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sb) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x7362ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sh) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x7368ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sw) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x7377ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_addi) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x61646469ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slti) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c7469ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c746975ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xori) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x786f7269ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ori) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6f7269ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_andi) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x616e6469ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slli) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c6c69ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srli) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x73726c69ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srai) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x73726169ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_add) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x616464ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sub) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x737562ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sll) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c6cULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slt) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c74ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltu) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c7475ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xor) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x786f72ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srl) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x73726cULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sra) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x737261ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_or) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6f72ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_and) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x616e64ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x72646379636c65ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x7264696e737472ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_getq) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x67657471ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_setq) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x73657471ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_retirq) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x726574697271ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x6d61736b697271ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x77616974697271ULL;
    }
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_timer) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x74696d6572ULL;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger 
        = __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr;
        } else {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr;
        }
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready) 
           | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd = 0U;
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd;
    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state)) 
           & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
              & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_delay) 
                 | ((~ (IData)((0U != ((~ vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask) 
                                       & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_pending)))) 
                    | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active)))));
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched;
    }
    if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done) 
         & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
            | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)))) {
        if ((0U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                              >> 0xdU)))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0xfffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | ((0x3c000000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          << 0x13U)) 
                          | ((0x3000000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            << 0xdU)) 
                             | ((0x800000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              << 0x12U)) 
                                | (0x400000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                << 0x10U))))));
            } else if ((2U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xdU)))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0xfffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | ((0x4000000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         << 0x15U)) 
                          | ((0x3800000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            << 0xdU)) 
                             | (0x400000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             << 0x10U)))));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0x2000U | (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
            } else if ((6U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xdU)))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0x1ffffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | ((0x4000000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         << 0x15U)) 
                          | (0x2000000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                           << 0xdU))));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0xfffff07fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | ((0xc00U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                          | (0x200U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                       << 3U))));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0x2000U | (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
            }
        } else if ((1U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                              >> 0xdU)))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0xfffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | (VL_EXTENDS_II(12,6, ((0x20U 
                                                & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 7U)) 
                                               | (0x1fU 
                                                  & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                     >> 2U)))) 
                          << 0x14U));
            } else if ((2U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xdU)))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0xfffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | (VL_EXTENDS_II(12,6, ((0x20U 
                                                & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 7U)) 
                                               | (0x1fU 
                                                  & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                     >> 2U)))) 
                          << 0x14U));
            } else if ((3U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xdU)))) {
                if ((2U == (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 7U)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = ((0xfffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                           | (VL_EXTENDS_II(12,10, 
                                            ((0x200U 
                                              & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 3U)) 
                                             | ((0x180U 
                                                 & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                    << 4U)) 
                                                | ((0x40U 
                                                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                       << 1U)) 
                                                   | ((0x20U 
                                                       & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                          << 3U)) 
                                                      | (0x10U 
                                                         & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                            >> 2U))))))) 
                              << 0x14U));
                } else {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = ((0xfffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                           | (VL_EXTENDS_II(20,6, (
                                                   (0x20U 
                                                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                       >> 7U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                         >> 2U)))) 
                              << 0xcU));
                }
            } else if ((4U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xdU)))) {
                if ((0U == (3U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xaU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0x1ffffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0x5000U | (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                }
                if ((1U == (3U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xaU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0x40000000U | (0x1ffffffU 
                                          & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0x5000U | (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                }
                if ((2U == (3U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xaU)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0x7000U | vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = ((0xfffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                           | (VL_EXTENDS_II(12,6, (
                                                   (0x20U 
                                                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                       >> 7U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                         >> 2U)))) 
                              << 0x14U));
                }
                if ((3U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xaU)))) {
                    if ((0U == (3U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 5U)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                            = (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                    }
                    if ((1U == (3U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 5U)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                            = (0x4000U | (0xffff8fffU 
                                          & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                    }
                    if ((2U == (3U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 5U)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                            = (0x6000U | (0xffff8fffU 
                                          & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                    }
                    if ((3U == (3U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 5U)))) {
                        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                            = (0x7000U | vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                    }
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = ((0x1ffffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                           | (((0U == (3U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 5U)))
                                ? 0x20U : 0U) << 0x19U));
                }
            } else if ((6U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xdU)))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0x7fffffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | (0x80000000U & (VL_EXTENDS_II(12,8, 
                                                       ((0x80U 
                                                         & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                            >> 5U)) 
                                                        | ((0x60U 
                                                            & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                           | ((0x10U 
                                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                  << 2U)) 
                                                              | ((0xcU 
                                                                  & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                     >> 8U)) 
                                                                 | (3U 
                                                                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                       >> 3U))))))) 
                                         << 0x14U)));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0xffffff7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | (0x80U & (VL_EXTENDS_II(12,8, 
                                                 ((0x80U 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 5U)) 
                                                  | ((0x60U 
                                                      & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                     | ((0x10U 
                                                         & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                            << 2U)) 
                                                        | ((0xcU 
                                                            & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                               >> 8U)) 
                                                           | (3U 
                                                              & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                 >> 3U))))))) 
                                   >> 3U)));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0x81ffffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | (0x7e000000U & (VL_EXTENDS_II(12,8, 
                                                       ((0x80U 
                                                         & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                            >> 5U)) 
                                                        | ((0x60U 
                                                            & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                           | ((0x10U 
                                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                  << 2U)) 
                                                              | ((0xcU 
                                                                  & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                     >> 8U)) 
                                                                 | (3U 
                                                                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                       >> 3U))))))) 
                                         << 0x15U)));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0xfffff0ffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | (0xf00U & (VL_EXTENDS_II(12,8, 
                                                  ((0x80U 
                                                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                       >> 5U)) 
                                                   | ((0x60U 
                                                       & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                      | ((0x10U 
                                                          & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                             << 2U)) 
                                                         | ((0xcU 
                                                             & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                >> 8U)) 
                                                            | (3U 
                                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                  >> 3U))))))) 
                                    << 8U)));
            } else if ((7U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xdU)))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0x1000U | (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0x7fffffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | (0x80000000U & (VL_EXTENDS_II(12,8, 
                                                       ((0x80U 
                                                         & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                            >> 5U)) 
                                                        | ((0x60U 
                                                            & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                           | ((0x10U 
                                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                  << 2U)) 
                                                              | ((0xcU 
                                                                  & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                     >> 8U)) 
                                                                 | (3U 
                                                                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                       >> 3U))))))) 
                                         << 0x14U)));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0xffffff7fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | (0x80U & (VL_EXTENDS_II(12,8, 
                                                 ((0x80U 
                                                   & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 5U)) 
                                                  | ((0x60U 
                                                      & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                     | ((0x10U 
                                                         & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                            << 2U)) 
                                                        | ((0xcU 
                                                            & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                               >> 8U)) 
                                                           | (3U 
                                                              & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                 >> 3U))))))) 
                                   >> 3U)));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0x81ffffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | (0x7e000000U & (VL_EXTENDS_II(12,8, 
                                                       ((0x80U 
                                                         & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                            >> 5U)) 
                                                        | ((0x60U 
                                                            & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                           | ((0x10U 
                                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                  << 2U)) 
                                                              | ((0xcU 
                                                                  & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                     >> 8U)) 
                                                                 | (3U 
                                                                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                       >> 3U))))))) 
                                         << 0x15U)));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0xfffff0ffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | (0xf00U & (VL_EXTENDS_II(12,8, 
                                                  ((0x80U 
                                                    & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                       >> 5U)) 
                                                   | ((0x60U 
                                                       & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                      | ((0x10U 
                                                          & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                             << 2U)) 
                                                         | ((0xcU 
                                                             & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                >> 8U)) 
                                                            | (3U 
                                                               & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                  >> 3U))))))) 
                                    << 8U)));
            }
        } else if ((2U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                              >> 0xdU)))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0x1ffffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0x1000U | (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
            } else if ((2U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xdU)))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0xfffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | ((0xc000000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         << 0x18U)) 
                          | ((0x2000000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            << 0xdU)) 
                             | (0x1c00000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              << 0x12U)))));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0x2000U | (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
            } else if ((4U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xdU)))) {
                if ((IData)((0U == (0x107cU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0xfffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                }
                if (((~ (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                         >> 0xcU)) & (0U != (0x1fU 
                                             & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 2U))))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0x1ffffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                }
                if ((IData)(((0x1000U == (0x107cU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
                             & (0U != (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U)))))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0xfffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                }
                if (((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                      >> 0xcU) & (0U != (0x1fU & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U))))) {
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0xffff8fffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0x1ffffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                }
            } else if ((6U == (7U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                     >> 0xdU)))) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0x1ffffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | ((0xc000000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         << 0x13U)) 
                          | (0x2000000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                           << 0xdU))));
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0x2000U | ((0xffff807fU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                  | (0xe00U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)));
            }
        }
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op2;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst 
        = vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst;
    if ((0U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = 0xfU;
    } else if ((1U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                << 0x10U) | (0xffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb 
            = ((2U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                ? 0xcU : 3U);
    } else if ((2U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                << 0x18U) | ((0xff0000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                            << 8U)) 
                                | (0xffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2))));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb 
            = (0xfU & ((IData)(1U) << (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)));
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_ltu 
        = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           < vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(32, vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1, vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_eq 
        = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           == vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSelf->uut__DOT__picorv32_core__DOT____VdfgTmp_hed8d3454__0 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
           | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 = 0U;
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_beq) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_eq;
    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bne) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_eq)));
    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bge) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_lts)));
    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_ltu)));
    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_lts;
    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_ltu;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out = 0U;
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sub)
                ? (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                   - vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                : (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                   + vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2));
    } else if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_compare) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
    } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xori) 
                | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xor))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
               ^ vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ori) 
                | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_or))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
               | vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    } else if (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_andi) 
                | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_and))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
               & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword 
        = ((IData)(vlSelf->uut__DOT__picorv32_core__DOT____VdfgTmp_hed8d3454__0) 
           & ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword)) 
              & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_pc 
                 >> 1U)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword) 
           & ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word)) 
              & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word)));
}

VL_INLINE_OPT void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__2(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__2\n"); );
    // Body
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_mem_ready 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid) 
           | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
}

VL_INLINE_OPT void Vpicorv32_wrapper_picorv32_wrapper___nba_comb__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___nba_comb__TOP__picorv32_wrapper__0\n"); );
    // Body
    if ((0U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
    } else if ((1U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        if ((2U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
            if ((2U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                    = (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                       >> 0x10U);
            }
        } else {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                = (0xffffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata);
        }
    } else if ((2U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
            = ((2U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                ? ((1U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    ? (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                       >> 0x18U) : (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                             >> 0x10U)))
                : ((1U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    ? (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                >> 8U)) : (0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata)));
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer 
        = (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_mem_ready) 
            & (IData)(vlSelf->__PVT__uut__DOT__mem_valid)) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word) 
              & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)));
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_xfer 
            = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                ? (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                : (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
            = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
    } else {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_xfer = 0U;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q;
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)
            ? (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer)
            : ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword)
                ? ((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                    << 0x10U) | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer))
                : ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)
                    ? (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                       >> 0x10U) : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done 
        = ((IData)(vlSymsp->TOP.resetn) & ((((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                             & ((0U 
                                                 != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state)) 
                                                & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                                   | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                                      | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata))))) 
                                            | ((3U 
                                                == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state)) 
                                               & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst))) 
                                           & ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)) 
                                              | ((~ (IData)(
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) 
                                                 & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer)))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlSymsp->TOP.resetn) & (((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state)))) 
                                               & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                                  | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                                     | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata))))) 
                                           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_xfer) 
                                              & ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword)) 
                                                 & (3U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))))));
}
