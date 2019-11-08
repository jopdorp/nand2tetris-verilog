// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vcpu__Syms_H_
#define _Vcpu__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vcpu.h"
#include "Vcpu_mux_16.h"
#include "Vcpu_register_n2t.h"
#include "Vcpu_full_adder.h"

// SYMS CLASS
class Vcpu__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vcpu*                          TOPp;
    Vcpu_register_n2t              TOP__cpu__DOT__a_register;
    Vcpu_mux_16                    TOP__cpu__DOT__calculations__DOT__alu_out;
    Vcpu_mux_16                    TOP__cpu__DOT__calculations__DOT__func;
    Vcpu_mux_16                    TOP__cpu__DOT__calculations__DOT__mux_x_notx;
    Vcpu_mux_16                    TOP__cpu__DOT__calculations__DOT__mux_y_noty;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add;
    Vcpu_full_adder                TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add;
    Vcpu_mux_16                    TOP__cpu__DOT__choose_address_source;
    Vcpu_register_n2t              TOP__cpu__DOT__d_register;
    Vcpu_register_n2t              TOP__cpu__DOT__program_counter__DOT__count;
    Vcpu_mux_16                    TOP__cpu__DOT__program_counter__DOT__select_increment;
    Vcpu_mux_16                    TOP__cpu__DOT__program_counter__DOT__select_load;
    Vcpu_mux_16                    TOP__cpu__DOT__program_counter__DOT__select_reset;
    Vcpu_mux_16                    TOP__cpu__DOT__select_m_or_a;
    
    // CREATORS
    Vcpu__Syms(Vcpu* topp, const char* namep);
    ~Vcpu__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
