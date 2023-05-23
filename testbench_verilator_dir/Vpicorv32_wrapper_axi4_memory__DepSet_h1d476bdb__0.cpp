// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper_axi4_memory.h"

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__1(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__1\n"); );
    // Body
    vlSelf->__Vdlyvset__memory__v4 = 0U;
    vlSelf->__Vdlyvset__memory__v5 = 0U;
    vlSelf->__Vdlyvset__memory__v6 = 0U;
    vlSelf->__Vdlyvset__memory__v7 = 0U;
    vlSelf->__Vdlyvset__memory__v0 = 0U;
    vlSelf->__Vdlyvset__memory__v1 = 0U;
    vlSelf->__Vdlyvset__memory__v2 = 0U;
    vlSelf->__Vdlyvset__memory__v3 = 0U;
}

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__2(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__2\n"); );
    // Body
    vlSelf->__Vdly__fast_wdata = vlSelf->__PVT__fast_wdata;
    vlSelf->__Vdly__fast_waddr = vlSelf->__PVT__fast_waddr;
    vlSelf->__Vdly__fast_raddr = vlSelf->__PVT__fast_raddr;
    vlSelf->__Vdly__mem_axi_wready = vlSelf->__PVT__mem_axi_wready;
    vlSelf->__Vdly__mem_axi_awready = vlSelf->__PVT__mem_axi_awready;
    vlSelf->__Vdly__mem_axi_arready = vlSelf->__PVT__mem_axi_arready;
    vlSelf->__Vdly__mem_axi_bvalid = vlSelf->__PVT__mem_axi_bvalid;
    vlSelf->__Vdly__mem_axi_rvalid = vlSelf->__PVT__mem_axi_rvalid;
}

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__5(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__5\n"); );
    // Body
    vlSelf->__PVT__mem_axi_arready = vlSelf->__Vdly__mem_axi_arready;
    vlSelf->__PVT__mem_axi_awready = vlSelf->__Vdly__mem_axi_awready;
    vlSelf->__PVT__mem_axi_wready = vlSelf->__Vdly__mem_axi_wready;
    vlSelf->__PVT__fast_raddr = vlSelf->__Vdly__fast_raddr;
    vlSelf->__PVT__fast_waddr = vlSelf->__Vdly__fast_waddr;
    vlSelf->__PVT__fast_wdata = vlSelf->__Vdly__fast_wdata;
    vlSelf->__PVT__mem_axi_rvalid = vlSelf->__Vdly__mem_axi_rvalid;
    vlSelf->__PVT__mem_axi_bvalid = vlSelf->__Vdly__mem_axi_bvalid;
}

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__6(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__6\n"); );
    // Body
    if (vlSelf->__Vdlyvset__memory__v0) {
        vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__memory__v0))) 
                & vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__memory__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__memory__v0))));
    }
    if (vlSelf->__Vdlyvset__memory__v1) {
        vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__memory__v1))) 
                & vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__memory__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__memory__v1))));
    }
    if (vlSelf->__Vdlyvset__memory__v2) {
        vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__memory__v2))) 
                & vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__memory__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__memory__v2))));
    }
    if (vlSelf->__Vdlyvset__memory__v3) {
        vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__memory__v3))) 
                & vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__memory__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__memory__v3))));
    }
    if (vlSelf->__Vdlyvset__memory__v4) {
        vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v4] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__memory__v4))) 
                & vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v4]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__memory__v4) 
                                   << (IData)(vlSelf->__Vdlyvlsb__memory__v4))));
    }
    if (vlSelf->__Vdlyvset__memory__v5) {
        vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v5] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__memory__v5))) 
                & vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v5]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__memory__v5) 
                                   << (IData)(vlSelf->__Vdlyvlsb__memory__v5))));
    }
    if (vlSelf->__Vdlyvset__memory__v6) {
        vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v6] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__memory__v6))) 
                & vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v6]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__memory__v6) 
                                   << (IData)(vlSelf->__Vdlyvlsb__memory__v6))));
    }
    if (vlSelf->__Vdlyvset__memory__v7) {
        vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v7] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__memory__v7))) 
                & vlSelf->memory[vlSelf->__Vdlyvdim0__memory__v7]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__memory__v7) 
                                   << (IData)(vlSelf->__Vdlyvlsb__memory__v7))));
    }
}
