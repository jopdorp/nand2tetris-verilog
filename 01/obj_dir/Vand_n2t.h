// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vand_n2t_H_
#define _Vand_n2t_H_

#include "verilated.h"

class Vand_n2t__Syms;

//----------

VL_MODULE(Vand_n2t) {
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
    Vand_n2t__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vand_n2t);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vand_n2t(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vand_n2t();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vand_n2t__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vand_n2t__Syms* symsp, bool first);
  private:
    static QData _change_request(Vand_n2t__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vand_n2t__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vand_n2t__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vand_n2t__Syms* __restrict vlSymsp);
    static void _eval_settle(Vand_n2t__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
