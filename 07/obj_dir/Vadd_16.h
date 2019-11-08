// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vadd_16_H_
#define _Vadd_16_H_

#include "verilated.h"

class Vadd_16__Syms;
class Vadd_16_full_adder;

//----------

VL_MODULE(Vadd_16) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vadd_16_full_adder*	__PVT__add_16__DOT___1_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___2_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___3_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___4_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___5_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___6_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___7_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___8_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___9_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___10_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___11_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___12_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___13_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___14_full_add;
    Vadd_16_full_adder*	__PVT__add_16__DOT___15_full_add;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN16(a,15,0);
    VL_IN16(b,15,0);
    VL_OUT16(out,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(add_16__DOT__half_add__DOT__car__DOT__nand_a_b,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vadd_16__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vadd_16);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vadd_16(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vadd_16();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vadd_16__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vadd_16__Syms* symsp, bool first);
  private:
    static QData _change_request(Vadd_16__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__10(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__11(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__12(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__13(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__14(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__15(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__2(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__3(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__4(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__6(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__7(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__8(Vadd_16__Syms* __restrict vlSymsp);
    static void _combo__TOP__9(Vadd_16__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vadd_16__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vadd_16__Syms* __restrict vlSymsp);
    static void _eval_settle(Vadd_16__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
