// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vand_n2t__Syms_H_
#define _Vand_n2t__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vand_n2t.h"

// SYMS CLASS
class Vand_n2t__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vand_n2t*                      TOPp;
    
    // CREATORS
    Vand_n2t__Syms(Vand_n2t* topp, const char* namep);
    ~Vand_n2t__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
