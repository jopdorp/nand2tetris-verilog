// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vcpu_H_
#define _Vcpu_H_

#include "verilated.h"

class Vcpu__Syms;
class Vcpu_mux_16;
class Vcpu_register_n2t;
class Vcpu_full_adder;

//----------

VL_MODULE(Vcpu) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vcpu_mux_16*       	__PVT__cpu__DOT__select_m_or_a;
    Vcpu_mux_16*       	__PVT__cpu__DOT__choose_address_source;
    Vcpu_register_n2t* 	__PVT__cpu__DOT__a_register;
    Vcpu_register_n2t* 	__PVT__cpu__DOT__d_register;
    Vcpu_mux_16*       	__PVT__cpu__DOT__calculations__DOT__mux_x_notx;
    Vcpu_mux_16*       	__PVT__cpu__DOT__calculations__DOT__mux_y_noty;
    Vcpu_mux_16*       	__PVT__cpu__DOT__calculations__DOT__func;
    Vcpu_mux_16*       	__PVT__cpu__DOT__calculations__DOT__alu_out;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___1_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___2_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___3_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___4_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___5_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___6_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___7_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___8_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___9_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___10_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___11_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___12_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___13_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___14_full_add;
    Vcpu_full_adder*   	__PVT__cpu__DOT__calculations__DOT__sum__DOT___15_full_add;
    Vcpu_mux_16*       	__PVT__cpu__DOT__program_counter__DOT__select_increment;
    Vcpu_mux_16*       	__PVT__cpu__DOT__program_counter__DOT__select_load;
    Vcpu_mux_16*       	__PVT__cpu__DOT__program_counter__DOT__select_reset;
    Vcpu_register_n2t* 	__PVT__cpu__DOT__program_counter__DOT__count;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(writeM,0,0);
    VL_IN16(inM,15,0);
    VL_IN16(instruction,15,0);
    VL_OUT16(outM,15,0);
    VL_OUT16(addressM,14,0);
    VL_OUT16(pc,14,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(cpu__DOT__should_load_a_register,0,0);
    VL_SIG8(cpu__DOT__alu_out_is_positive,0,0);
    VL_SIG8(cpu__DOT__alu_out_is_not_zero,0,0);
    VL_SIG8(cpu__DOT__calculations__DOT__sum__DOT__half_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__jump_zero__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__is_c_and_should_jump__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___1_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___2_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___3_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___4_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___5_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___6_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___7_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___8_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___9_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___10_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___11_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___12_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___13_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG8(cpu__DOT__program_counter__DOT__increment__DOT___14_full_add__DOT__car__DOT__nand_a_b,0,0);
    VL_SIG16(cpu__DOT__address_from_a_instruction,15,0);
    VL_SIG16(cpu__DOT__calculations__DOT__not_zx_16,15,0);
    VL_SIG16(cpu__DOT__calculations__DOT__not_zy_16,15,0);
    VL_SIG16(cpu__DOT__calculations__DOT__x_after_zx,15,0);
    VL_SIG16(cpu__DOT__calculations__DOT__not_x_after_zx,15,0);
    VL_SIG16(cpu__DOT__calculations__DOT__not_y_after_zy,15,0);
    VL_SIG16(cpu__DOT__calculations__DOT__y_after_zy,15,0);
    VL_SIG16(cpu__DOT__calculations__DOT__sum_x_y,15,0);
    VL_SIG16(cpu__DOT__calculations__DOT__x_and_y,15,0);
    VL_SIG16(cpu__DOT__calculations__DOT__not_function_output,15,0);
    VL_SIG16(cpu__DOT__program_counter__DOT__incremented,15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcpu__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcpu);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vcpu(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcpu();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcpu__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcpu__Syms* symsp, bool first);
  private:
    static QData _change_request(Vcpu__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vcpu__Syms* __restrict vlSymsp);
    static void _combo__TOP__23(Vcpu__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vcpu__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vcpu__Syms* __restrict vlSymsp);
    static void _eval_settle(Vcpu__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__10(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__11(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__12(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__13(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__14(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__15(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__16(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__17(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__18(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__19(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__20(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__21(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__22(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__6(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__7(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__8(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__9(Vcpu__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
