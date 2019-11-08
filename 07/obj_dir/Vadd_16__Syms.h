// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vadd_16__Syms_H_
#define _Vadd_16__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vadd_16.h"
#include "Vadd_16_full_adder.h"

// SYMS CLASS
class Vadd_16__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vadd_16*                       TOPp;
    Vadd_16_full_adder             TOP__add_16__DOT___10_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___11_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___12_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___13_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___14_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___15_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___1_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___2_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___3_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___4_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___5_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___6_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___7_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___8_full_add;
    Vadd_16_full_adder             TOP__add_16__DOT___9_full_add;
    
    // CREATORS
    Vadd_16__Syms(Vadd_16* topp, const char* namep);
    ~Vadd_16__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
