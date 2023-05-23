// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper_axi4_memory.h"

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__3(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__3\n"); );
    // Body
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
          & (~ ((IData)(vlSelf->__PVT__latched_raddr_en) 
                | (IData)(vlSelf->__PVT__fast_raddr)))) 
         & (IData)(vlSelf->__PVT__async_axi_transaction))) {
        vlSelf->__PVT__latched_raddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelf->__PVT__latched_rinsn = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                                                ? 4U
                                                : 0U) 
                                              >> 2U));
        vlSelf->__PVT__latched_raddr_en = 1U;
        vlSelf->__Vdly__mem_axi_arready = 1U;
        vlSelf->__Vdly__fast_raddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
          & (~ ((IData)(vlSelf->__PVT__latched_waddr_en) 
                | (IData)(vlSelf->__PVT__fast_waddr)))) 
         & ((IData)(vlSelf->__PVT__async_axi_transaction) 
            >> 1U))) {
        vlSelf->__PVT__latched_waddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelf->__PVT__latched_waddr_en = 1U;
        vlSelf->__Vdly__mem_axi_awready = 1U;
        vlSelf->__Vdly__fast_waddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
          & (~ ((IData)(vlSelf->__PVT__latched_wdata_en) 
                | (IData)(vlSelf->__PVT__fast_wdata)))) 
         & ((IData)(vlSelf->__PVT__async_axi_transaction) 
            >> 2U))) {
        vlSelf->__PVT__latched_wdata = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSelf->__PVT__latched_wstrb = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSelf->__PVT__latched_wdata_en = 1U;
        vlSelf->__Vdly__mem_axi_wready = 1U;
        vlSelf->__Vdly__fast_wdata = 1U;
    }
    if ((((~ (IData)(vlSelf->__PVT__mem_axi_rvalid)) 
          & (IData)(vlSelf->__PVT__latched_raddr_en)) 
         & ((IData)(vlSelf->__PVT__async_axi_transaction) 
            >> 3U))) {
        if (VL_UNLIKELY(vlSelf->__PVT__verbose)) {
            VL_WRITEF("RD: ADDR=%08x DATA=%08x%s\n",
                      32,vlSelf->__PVT__latched_raddr,
                      32,vlSelf->memory[(0x7fffU & 
                                         (vlSelf->__PVT__latched_raddr 
                                          >> 2U))],
                      40,((IData)(vlSelf->__PVT__latched_rinsn)
                           ? 0x20494e534eULL : 0ULL));
        }
        if (VL_LIKELY((0x20000U > vlSelf->__PVT__latched_raddr))) {
            vlSelf->__PVT__latched_raddr_en = 0U;
            vlSelf->__PVT__mem_axi_rdata = vlSelf->memory
                [(0x7fffU & (vlSelf->__PVT__latched_raddr 
                             >> 2U))];
            vlSelf->__Vdly__mem_axi_rvalid = 1U;
        } else {
            VL_WRITEF("OUT-OF-BOUNDS MEMORY READ FROM %08x\n",
                      32,vlSelf->__PVT__latched_raddr);
            VL_FINISH_MT("testbench.v", 392, "");
        }
    }
    if (((((~ (IData)(vlSelf->__PVT__mem_axi_bvalid)) 
           & (IData)(vlSelf->__PVT__latched_waddr_en)) 
          & (IData)(vlSelf->__PVT__latched_wdata_en)) 
         & ((IData)(vlSelf->__PVT__async_axi_transaction) 
            >> 4U))) {
        if (VL_UNLIKELY(vlSelf->__PVT__verbose)) {
            VL_WRITEF("WR: ADDR=%08x DATA=%08x STRB=%04b\n",
                      32,vlSelf->__PVT__latched_waddr,
                      32,vlSelf->__PVT__latched_wdata,
                      4,(IData)(vlSelf->__PVT__latched_wstrb));
        }
        vlSelf->__PVT__latched_waddr_en = 0U;
        vlSelf->__PVT__latched_wdata_en = 0U;
        if ((0x20000U > vlSelf->__PVT__latched_waddr)) {
            if ((1U & (IData)(vlSelf->__PVT__latched_wstrb))) {
                vlSelf->__Vdlyvval__memory__v4 = (0xffU 
                                                  & vlSelf->__PVT__latched_wdata);
                vlSelf->__Vdlyvset__memory__v4 = 1U;
                vlSelf->__Vdlyvlsb__memory__v4 = 0U;
                vlSelf->__Vdlyvdim0__memory__v4 = (0x7fffU 
                                                   & (vlSelf->__PVT__latched_waddr 
                                                      >> 2U));
            }
            if ((2U & (IData)(vlSelf->__PVT__latched_wstrb))) {
                vlSelf->__Vdlyvval__memory__v5 = (0xffU 
                                                  & (vlSelf->__PVT__latched_wdata 
                                                     >> 8U));
                vlSelf->__Vdlyvset__memory__v5 = 1U;
                vlSelf->__Vdlyvlsb__memory__v5 = 8U;
                vlSelf->__Vdlyvdim0__memory__v5 = (0x7fffU 
                                                   & (vlSelf->__PVT__latched_waddr 
                                                      >> 2U));
            }
            if ((4U & (IData)(vlSelf->__PVT__latched_wstrb))) {
                vlSelf->__Vdlyvval__memory__v6 = (0xffU 
                                                  & (vlSelf->__PVT__latched_wdata 
                                                     >> 0x10U));
                vlSelf->__Vdlyvset__memory__v6 = 1U;
                vlSelf->__Vdlyvlsb__memory__v6 = 0x10U;
                vlSelf->__Vdlyvdim0__memory__v6 = (0x7fffU 
                                                   & (vlSelf->__PVT__latched_waddr 
                                                      >> 2U));
            }
            if ((8U & (IData)(vlSelf->__PVT__latched_wstrb))) {
                vlSelf->__Vdlyvval__memory__v7 = (vlSelf->__PVT__latched_wdata 
                                                  >> 0x18U);
                vlSelf->__Vdlyvset__memory__v7 = 1U;
                vlSelf->__Vdlyvlsb__memory__v7 = 0x18U;
                vlSelf->__Vdlyvdim0__memory__v7 = (0x7fffU 
                                                   & (vlSelf->__PVT__latched_waddr 
                                                      >> 2U));
            }
        } else if ((0x10000000U == vlSelf->__PVT__latched_waddr)) {
            if (VL_LIKELY(vlSelf->__PVT__verbose)) {
                if (((0x20U <= vlSelf->__PVT__latched_wdata) 
                     & (0x80U > vlSelf->__PVT__latched_wdata))) {
                    VL_WRITEF("OUT: '%c'\n",8,(0xffU 
                                               & vlSelf->__PVT__latched_wdata));
                } else {
                    VL_WRITEF("OUT: %3#\n",32,vlSelf->__PVT__latched_wdata);
                }
            } else {
                VL_WRITEF("%c",8,(0xffU & vlSelf->__PVT__latched_wdata));
            }
        } else if (VL_LIKELY((0x20000000U == vlSelf->__PVT__latched_waddr))) {
            if ((0x75bcd15U == vlSelf->__PVT__latched_wdata)) {
                vlSelf->__PVT__tests_passed = 1U;
            }
        } else {
            VL_WRITEF("OUT-OF-BOUNDS MEMORY WRITE TO %08x\n",
                      32,vlSelf->__PVT__latched_waddr);
            VL_FINISH_MT("testbench.v", 423, "");
        }
        vlSelf->__Vdly__mem_axi_bvalid = 1U;
    }
}

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__4(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__4\n"); );
    // Body
    vlSelf->__Vdly__mem_axi_arready = 0U;
    vlSelf->__Vdly__mem_axi_awready = 0U;
    vlSelf->__Vdly__mem_axi_wready = 0U;
    vlSelf->__Vdly__fast_raddr = 0U;
    vlSelf->__Vdly__fast_waddr = 0U;
    vlSelf->__Vdly__fast_wdata = 0U;
    if (((IData)(vlSelf->__PVT__mem_axi_rvalid) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_rready))) {
        vlSelf->__Vdly__mem_axi_rvalid = 0U;
    }
    if (((IData)(vlSelf->__PVT__mem_axi_bvalid) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_bready))) {
        vlSelf->__Vdly__mem_axi_bvalid = 0U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
          & (IData)(vlSelf->__PVT__mem_axi_arready)) 
         & (~ (IData)(vlSelf->__PVT__fast_raddr)))) {
        vlSelf->__PVT__latched_raddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelf->__PVT__latched_rinsn = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                                                ? 4U
                                                : 0U) 
                                              >> 2U));
        vlSelf->__PVT__latched_raddr_en = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
          & (IData)(vlSelf->__PVT__mem_axi_awready)) 
         & (~ (IData)(vlSelf->__PVT__fast_waddr)))) {
        vlSelf->__PVT__latched_waddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelf->__PVT__latched_waddr_en = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
          & (IData)(vlSelf->__PVT__mem_axi_wready)) 
         & (~ (IData)(vlSelf->__PVT__fast_wdata)))) {
        vlSelf->__PVT__latched_wdata = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSelf->__PVT__latched_wstrb = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSelf->__PVT__latched_wdata_en = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
          & (~ ((IData)(vlSelf->__PVT__latched_raddr_en) 
                | (IData)(vlSelf->__PVT__fast_raddr)))) 
         & (~ (IData)(vlSelf->__PVT__delay_axi_transaction)))) {
        vlSelf->__PVT__latched_raddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelf->__PVT__latched_rinsn = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                                                ? 4U
                                                : 0U) 
                                              >> 2U));
        vlSelf->__PVT__latched_raddr_en = 1U;
        vlSelf->__Vdly__mem_axi_arready = 1U;
        vlSelf->__Vdly__fast_raddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
          & (~ ((IData)(vlSelf->__PVT__latched_waddr_en) 
                | (IData)(vlSelf->__PVT__fast_waddr)))) 
         & (~ ((IData)(vlSelf->__PVT__delay_axi_transaction) 
               >> 1U)))) {
        vlSelf->__PVT__latched_waddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelf->__PVT__latched_waddr_en = 1U;
        vlSelf->__Vdly__mem_axi_awready = 1U;
        vlSelf->__Vdly__fast_waddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
          & (~ ((IData)(vlSelf->__PVT__latched_wdata_en) 
                | (IData)(vlSelf->__PVT__fast_wdata)))) 
         & (~ ((IData)(vlSelf->__PVT__delay_axi_transaction) 
               >> 2U)))) {
        vlSelf->__PVT__latched_wdata = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSelf->__PVT__latched_wstrb = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSelf->__PVT__latched_wdata_en = 1U;
        vlSelf->__Vdly__mem_axi_wready = 1U;
        vlSelf->__Vdly__fast_wdata = 1U;
    }
    if ((((~ (IData)(vlSelf->__PVT__mem_axi_rvalid)) 
          & (IData)(vlSelf->__PVT__latched_raddr_en)) 
         & (~ ((IData)(vlSelf->__PVT__delay_axi_transaction) 
               >> 3U)))) {
        if (VL_UNLIKELY(vlSelf->__PVT__verbose)) {
            VL_WRITEF("RD: ADDR=%08x DATA=%08x%s\n",
                      32,vlSelf->__PVT__latched_raddr,
                      32,vlSelf->memory[(0x7fffU & 
                                         (vlSelf->__PVT__latched_raddr 
                                          >> 2U))],
                      40,((IData)(vlSelf->__PVT__latched_rinsn)
                           ? 0x20494e534eULL : 0ULL));
        }
        if (VL_LIKELY((0x20000U > vlSelf->__PVT__latched_raddr))) {
            vlSelf->__PVT__latched_raddr_en = 0U;
            vlSelf->__PVT__mem_axi_rdata = vlSelf->memory
                [(0x7fffU & (vlSelf->__PVT__latched_raddr 
                             >> 2U))];
            vlSelf->__Vdly__mem_axi_rvalid = 1U;
        } else {
            VL_WRITEF("OUT-OF-BOUNDS MEMORY READ FROM %08x\n",
                      32,vlSelf->__PVT__latched_raddr);
            VL_FINISH_MT("testbench.v", 392, "");
        }
    }
    if (((((~ (IData)(vlSelf->__PVT__mem_axi_bvalid)) 
           & (IData)(vlSelf->__PVT__latched_waddr_en)) 
          & (IData)(vlSelf->__PVT__latched_wdata_en)) 
         & (~ ((IData)(vlSelf->__PVT__delay_axi_transaction) 
               >> 4U)))) {
        if (VL_UNLIKELY(vlSelf->__PVT__verbose)) {
            VL_WRITEF("WR: ADDR=%08x DATA=%08x STRB=%04b\n",
                      32,vlSelf->__PVT__latched_waddr,
                      32,vlSelf->__PVT__latched_wdata,
                      4,(IData)(vlSelf->__PVT__latched_wstrb));
        }
        vlSelf->__PVT__latched_waddr_en = 0U;
        vlSelf->__PVT__latched_wdata_en = 0U;
        if ((0x20000U > vlSelf->__PVT__latched_waddr)) {
            if ((1U & (IData)(vlSelf->__PVT__latched_wstrb))) {
                vlSelf->__Vdlyvval__memory__v0 = (0xffU 
                                                  & vlSelf->__PVT__latched_wdata);
                vlSelf->__Vdlyvset__memory__v0 = 1U;
                vlSelf->__Vdlyvlsb__memory__v0 = 0U;
                vlSelf->__Vdlyvdim0__memory__v0 = (0x7fffU 
                                                   & (vlSelf->__PVT__latched_waddr 
                                                      >> 2U));
            }
            if ((2U & (IData)(vlSelf->__PVT__latched_wstrb))) {
                vlSelf->__Vdlyvval__memory__v1 = (0xffU 
                                                  & (vlSelf->__PVT__latched_wdata 
                                                     >> 8U));
                vlSelf->__Vdlyvset__memory__v1 = 1U;
                vlSelf->__Vdlyvlsb__memory__v1 = 8U;
                vlSelf->__Vdlyvdim0__memory__v1 = (0x7fffU 
                                                   & (vlSelf->__PVT__latched_waddr 
                                                      >> 2U));
            }
            if ((4U & (IData)(vlSelf->__PVT__latched_wstrb))) {
                vlSelf->__Vdlyvval__memory__v2 = (0xffU 
                                                  & (vlSelf->__PVT__latched_wdata 
                                                     >> 0x10U));
                vlSelf->__Vdlyvset__memory__v2 = 1U;
                vlSelf->__Vdlyvlsb__memory__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__memory__v2 = (0x7fffU 
                                                   & (vlSelf->__PVT__latched_waddr 
                                                      >> 2U));
            }
            if ((8U & (IData)(vlSelf->__PVT__latched_wstrb))) {
                vlSelf->__Vdlyvval__memory__v3 = (vlSelf->__PVT__latched_wdata 
                                                  >> 0x18U);
                vlSelf->__Vdlyvset__memory__v3 = 1U;
                vlSelf->__Vdlyvlsb__memory__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__memory__v3 = (0x7fffU 
                                                   & (vlSelf->__PVT__latched_waddr 
                                                      >> 2U));
            }
        } else if ((0x10000000U == vlSelf->__PVT__latched_waddr)) {
            if (VL_LIKELY(vlSelf->__PVT__verbose)) {
                if (((0x20U <= vlSelf->__PVT__latched_wdata) 
                     & (0x80U > vlSelf->__PVT__latched_wdata))) {
                    VL_WRITEF("OUT: '%c'\n",8,(0xffU 
                                               & vlSelf->__PVT__latched_wdata));
                } else {
                    VL_WRITEF("OUT: %3#\n",32,vlSelf->__PVT__latched_wdata);
                }
            } else {
                VL_WRITEF("%c",8,(0xffU & vlSelf->__PVT__latched_wdata));
            }
        } else if (VL_LIKELY((0x20000000U == vlSelf->__PVT__latched_waddr))) {
            if ((0x75bcd15U == vlSelf->__PVT__latched_wdata)) {
                vlSelf->__PVT__tests_passed = 1U;
            }
        } else {
            VL_WRITEF("OUT-OF-BOUNDS MEMORY WRITE TO %08x\n",
                      32,vlSelf->__PVT__latched_waddr);
            VL_FINISH_MT("testbench.v", 423, "");
        }
        vlSelf->__Vdly__mem_axi_bvalid = 1U;
    }
    if (vlSelf->__PVT__axi_test) {
        vlSelf->__PVT__xorshift64_state = (vlSelf->__PVT__xorshift64_state 
                                           ^ (vlSelf->__PVT__xorshift64_state 
                                              << 0xdU));
        vlSelf->__PVT__xorshift64_state = (vlSelf->__PVT__xorshift64_state 
                                           ^ (vlSelf->__PVT__xorshift64_state 
                                              >> 7U));
        vlSelf->__PVT__xorshift64_state = (vlSelf->__PVT__xorshift64_state 
                                           ^ (vlSelf->__PVT__xorshift64_state 
                                              << 0x11U));
        vlSelf->__PVT__fast_axi_transaction = (7U & (IData)(
                                                            (vlSelf->__PVT__xorshift64_state 
                                                             >> 0xaU)));
        vlSelf->__PVT__async_axi_transaction = (0x1fU 
                                                & (IData)(
                                                          (vlSelf->__PVT__xorshift64_state 
                                                           >> 5U)));
        vlSelf->__PVT__delay_axi_transaction = (0x1fU 
                                                & (IData)(vlSelf->__PVT__xorshift64_state));
    }
}
