// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper_picorv32_wrapper.h"

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___eval_initial__TOP__picorv32_wrapper(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___eval_initial__TOP__picorv32_wrapper\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h478d6083__0;
    // Body
    __Vtemp_h478d6083__0[0U] = 0x653d2573U;
    __Vtemp_h478d6083__0[1U] = 0x6d776172U;
    __Vtemp_h478d6083__0[2U] = 0x666972U;
    if ((! VL_VALUEPLUSARGS_INW(1024, VL_CVT_PACK_STR_NW(3, __Vtemp_h478d6083__0), 
                                vlSelf->__PVT__firmware_file))) {
        vlSelf->__PVT__firmware_file[0U] = 0x2e686578U;
        vlSelf->__PVT__firmware_file[1U] = 0x77617265U;
        vlSelf->__PVT__firmware_file[2U] = 0x6669726dU;
        vlSelf->__PVT__firmware_file[3U] = 0x6172652fU;
        vlSelf->__PVT__firmware_file[4U] = 0x69726d77U;
        vlSelf->__PVT__firmware_file[5U] = 0x66U;
        vlSelf->__PVT__firmware_file[6U] = 0U;
        vlSelf->__PVT__firmware_file[7U] = 0U;
        vlSelf->__PVT__firmware_file[8U] = 0U;
        vlSelf->__PVT__firmware_file[9U] = 0U;
        vlSelf->__PVT__firmware_file[0xaU] = 0U;
        vlSelf->__PVT__firmware_file[0xbU] = 0U;
        vlSelf->__PVT__firmware_file[0xcU] = 0U;
        vlSelf->__PVT__firmware_file[0xdU] = 0U;
        vlSelf->__PVT__firmware_file[0xeU] = 0U;
        vlSelf->__PVT__firmware_file[0xfU] = 0U;
        vlSelf->__PVT__firmware_file[0x10U] = 0U;
        vlSelf->__PVT__firmware_file[0x11U] = 0U;
        vlSelf->__PVT__firmware_file[0x12U] = 0U;
        vlSelf->__PVT__firmware_file[0x13U] = 0U;
        vlSelf->__PVT__firmware_file[0x14U] = 0U;
        vlSelf->__PVT__firmware_file[0x15U] = 0U;
        vlSelf->__PVT__firmware_file[0x16U] = 0U;
        vlSelf->__PVT__firmware_file[0x17U] = 0U;
        vlSelf->__PVT__firmware_file[0x18U] = 0U;
        vlSelf->__PVT__firmware_file[0x19U] = 0U;
        vlSelf->__PVT__firmware_file[0x1aU] = 0U;
        vlSelf->__PVT__firmware_file[0x1bU] = 0U;
        vlSelf->__PVT__firmware_file[0x1cU] = 0U;
        vlSelf->__PVT__firmware_file[0x1dU] = 0U;
        vlSelf->__PVT__firmware_file[0x1eU] = 0U;
        vlSelf->__PVT__firmware_file[0x1fU] = 0U;
    }
    VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(32, vlSelf->__PVT__firmware_file)
                 ,  &(vlSymsp->TOP__picorv32_wrapper__mem.memory)
                 , 0, ~0ULL);
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vpicorv32_wrapper__ConstPool__TABLE_hd63e190f_0;

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___stl_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___stl_sequent__TOP__picorv32_wrapper__0\n"); );
    // Init
    CData/*0:0*/ uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0;
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h868f6a60__0 = 0;
    CData/*3:0*/ uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0;
    uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hb387781a__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__irq = 0U;
    vlSelf->__PVT__irq = ((0xffffffcfU & vlSelf->__PVT__irq) 
                          | ((((IData)((0xffffU == (IData)(vlSelf->__PVT__count_cycle))) 
                               << 1U) | (0x1fffU == 
                                         (0x1fffU & (IData)(vlSelf->__PVT__count_cycle)))) 
                             << 4U));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready) 
           | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready));
    if ((0U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = 0xfU;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
    } else if ((1U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        if ((2U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = 0xcU;
            if ((2U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
                vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                    = (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                       >> 0x10U);
            }
        } else {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = 3U;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                = (0xffffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata);
        }
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                << 0x10U) | (0xffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2));
    } else if ((2U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb 
            = (0xfU & ((IData)(1U) << (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1)));
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                << 0x18U) | ((0xff0000U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                            << 8U)) 
                                | (0xffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2))));
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
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
            ? ((0x23U >= (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
                ? vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs
               [vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1]
                : 0U) : 0U);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2))
            ? ((0x23U >= (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2))
                ? vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs
               [vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2]
                : 0U) : 0U);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_write 
        = ((IData)(vlSymsp->TOP.resetn) & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state)))) 
                                           & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
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
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd;
    vlSelf->__PVT__mem_axi_rready = ((~ (IData)((0U 
                                                 != (IData)(vlSelf->__PVT__uut__DOT__mem_wstrb)))) 
                                     & (IData)(vlSelf->__PVT__uut__DOT__mem_valid));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state)) 
           & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
              & ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_delay) 
                 | ((~ (IData)((0U != ((~ vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask) 
                                       & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_pending)))) 
                    | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active)))));
    vlSelf->__PVT__mem_axi_bready = ((IData)(vlSelf->__PVT__uut__DOT__mem_valid) 
                                     & (0U != (IData)(vlSelf->__PVT__uut__DOT__mem_wstrb)));
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
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_ltu 
        = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           < vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(32, vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1, vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_eq 
        = (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           == vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
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
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_mem_ready 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid) 
           | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
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
    vlSelf->uut__DOT__picorv32_core__DOT____VdfgTmp_hed8d3454__0 
        = ((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
           | (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst));
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch) 
            & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store))
            ? (0xfffffffeU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_out)
            : vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc);
    vlSelf->__PVT__mem_axi_arvalid = ((~ (IData)(vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid)) 
                                      & (IData)(vlSelf->__PVT__mem_axi_rready));
    vlSelf->__PVT__mem_axi_awvalid = ((~ (IData)(vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid)) 
                                      & (IData)(vlSelf->__PVT__mem_axi_bready));
    vlSelf->__PVT__mem_axi_wvalid = ((~ (IData)(vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid)) 
                                     & (IData)(vlSelf->__PVT__mem_axi_bready));
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
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        if (vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q) {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr;
        } else {
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0xffffU & vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
                = (0x1fU & (IData)(vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd));
            vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr;
        }
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
