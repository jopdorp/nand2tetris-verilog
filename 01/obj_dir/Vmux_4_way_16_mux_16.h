// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux_4_way_16.h for the primary calling header

#ifndef _Vmux_4_way_16_mux_16_H_
#define _Vmux_4_way_16_mux_16_H_

#include "verilated.h"

class Vmux_4_way_16__Syms;

//----------

VL_MODULE(Vmux_4_way_16_mux_16) {
  public:
    
    // PORTS
    VL_IN8(select,0,0);
    VL_IN16(a,15,0);
    VL_IN16(b,15,0);
    VL_OUT16(out,15,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vmux_4_way_16__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmux_4_way_16_mux_16);  ///< Copying not allowed
  public:
    Vmux_4_way_16_mux_16(const char* name="TOP");
    ~Vmux_4_way_16_mux_16();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vmux_4_way_16__Syms* symsp, bool first);
    void _combo__TOP__mux_4_way_16__DOT__mux_16_ab__1(Vmux_4_way_16__Syms* __restrict vlSymsp);
    void _combo__TOP__mux_4_way_16__DOT__mux_16_cb__2(Vmux_4_way_16__Syms* __restrict vlSymsp);
    void _combo__TOP__mux_4_way_16__DOT__mux_combined__3(Vmux_4_way_16__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
} VL_ATTR_ALIGNED(128);

#endif // guard
