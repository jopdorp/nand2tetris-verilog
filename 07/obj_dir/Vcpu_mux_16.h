// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef _Vcpu_mux_16_H_
#define _Vcpu_mux_16_H_

#include "verilated.h"

class Vcpu__Syms;

//----------

VL_MODULE(Vcpu_mux_16) {
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
    Vcpu__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcpu_mux_16);  ///< Copying not allowed
  public:
    Vcpu_mux_16(const char* name="TOP");
    ~Vcpu_mux_16();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _sequent__TOP__cpu__DOT__program_counter__DOT__select_increment__1(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__alu_out__7(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__func__6(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__mux_x_notx__3(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__mux_y_noty__5(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__choose_address_source__8(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__program_counter__DOT__select_load__9(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__program_counter__DOT__select_reset__10(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__select_m_or_a__2(Vcpu__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
