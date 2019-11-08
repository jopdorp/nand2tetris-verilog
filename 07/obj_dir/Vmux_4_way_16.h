// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vmux_4_way_16_H_
#define _Vmux_4_way_16_H_

#include "verilated.h"

class Vmux_4_way_16__Syms;
class Vmux_4_way_16_mux_16;

//----------

VL_MODULE(Vmux_4_way_16) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vmux_4_way_16_mux_16*	__PVT__mux_4_way_16__DOT__mux_16_ab;
    Vmux_4_way_16_mux_16*	__PVT__mux_4_way_16__DOT__mux_16_cb;
    Vmux_4_way_16_mux_16*	__PVT__mux_4_way_16__DOT__mux_combined;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(select,1,0);
    VL_IN16(a,15,0);
    VL_IN16(b,15,0);
    VL_IN16(c,15,0);
    VL_IN16(d,15,0);
    VL_OUT16(out,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmux_4_way_16__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmux_4_way_16);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vmux_4_way_16(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmux_4_way_16();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vmux_4_way_16__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmux_4_way_16__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmux_4_way_16__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vmux_4_way_16__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vmux_4_way_16__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vmux_4_way_16__Syms* __restrict vlSymsp);
    static void _eval_settle(Vmux_4_way_16__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
