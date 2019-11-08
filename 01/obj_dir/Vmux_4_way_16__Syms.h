// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vmux_4_way_16__Syms_H_
#define _Vmux_4_way_16__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vmux_4_way_16.h"
#include "Vmux_4_way_16_mux_16.h"

// SYMS CLASS
class Vmux_4_way_16__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vmux_4_way_16*                 TOPp;
    Vmux_4_way_16_mux_16           TOP__mux_4_way_16__DOT__mux_16_ab;
    Vmux_4_way_16_mux_16           TOP__mux_4_way_16__DOT__mux_16_cb;
    Vmux_4_way_16_mux_16           TOP__mux_4_way_16__DOT__mux_combined;
    
    // CREATORS
    Vmux_4_way_16__Syms(Vmux_4_way_16* topp, const char* namep);
    ~Vmux_4_way_16__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
