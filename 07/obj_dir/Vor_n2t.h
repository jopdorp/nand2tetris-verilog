// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vor_n2t_H_
#define _Vor_n2t_H_

#include "verilated.h"

class Vor_n2t__Syms;

//----------

VL_MODULE(Vor_n2t) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(out,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vor_n2t__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vor_n2t);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vor_n2t(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vor_n2t();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vor_n2t__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vor_n2t__Syms* symsp, bool first);
  private:
    static QData _change_request(Vor_n2t__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vor_n2t__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vor_n2t__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vor_n2t__Syms* __restrict vlSymsp);
    static void _eval_settle(Vor_n2t__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
