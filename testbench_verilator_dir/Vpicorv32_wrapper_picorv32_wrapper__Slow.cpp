// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper_picorv32_wrapper.h"

void Vpicorv32_wrapper_picorv32_wrapper___ctor_var_reset(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);

Vpicorv32_wrapper_picorv32_wrapper::Vpicorv32_wrapper_picorv32_wrapper(Vpicorv32_wrapper__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpicorv32_wrapper_picorv32_wrapper___ctor_var_reset(this);
}

void Vpicorv32_wrapper_picorv32_wrapper::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpicorv32_wrapper_picorv32_wrapper::~Vpicorv32_wrapper_picorv32_wrapper() {
}
