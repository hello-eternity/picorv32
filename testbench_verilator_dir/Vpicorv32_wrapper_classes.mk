# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vpicorv32_wrapper.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vpicorv32_wrapper \
	Vpicorv32_wrapper___024root__DepSet_h3139ae09__0 \
	Vpicorv32_wrapper___024root__DepSet_h8446a20b__0 \
	Vpicorv32_wrapper_picorv32_wrapper__DepSet_haddc77af__0 \
	Vpicorv32_wrapper_axi4_memory__DepSet_h9e3ae459__0 \
	Vpicorv32_wrapper_axi4_memory__DepSet_h1d476bdb__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vpicorv32_wrapper__ConstPool_0 \
	Vpicorv32_wrapper___024root__Slow \
	Vpicorv32_wrapper___024root__DepSet_h3139ae09__0__Slow \
	Vpicorv32_wrapper___024root__DepSet_h8446a20b__0__Slow \
	Vpicorv32_wrapper_picorv32_wrapper__Slow \
	Vpicorv32_wrapper_picorv32_wrapper__DepSet_haddc77af__0__Slow \
	Vpicorv32_wrapper_picorv32_wrapper__DepSet_hf129db65__0__Slow \
	Vpicorv32_wrapper_axi4_memory__Slow \
	Vpicorv32_wrapper_axi4_memory__DepSet_h1d476bdb__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vpicorv32_wrapper__Dpi \
	Vpicorv32_wrapper__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vpicorv32_wrapper__Syms \
	Vpicorv32_wrapper__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
