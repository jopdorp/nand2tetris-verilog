// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef _Vcpu_register_n2t_H_
#define _Vcpu_register_n2t_H_

#include "verilated.h"

class Vcpu__Syms;

//----------

VL_MODULE(Vcpu_register_n2t) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(load,0,0);
    VL_IN16(in,15,0);
    VL_OUT16(out,15,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__genblk1__BRA__0__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__1__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__2__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__3__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__4__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__5__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__6__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__7__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__8__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__9__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__10__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__11__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__12__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__13__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__14__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    VL_SIG8(__PVT__genblk1__BRA__15__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b,0,0);
    
    // LOCAL VARIABLES
    VL_SIG8(genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    VL_SIG8(genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4,0,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcpu_register_n2t);  ///< Copying not allowed
  public:
    Vcpu_register_n2t(const char* name="TOP");
    ~Vcpu_register_n2t();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu__Syms* symsp, bool first);
    void _combo__TOP__cpu__DOT__a_register__11(Vcpu__Syms* __restrict vlSymsp);
    void _combo__TOP__cpu__DOT__d_register__10(Vcpu__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    void _initial__TOP__cpu__DOT__a_register__3(Vcpu__Syms* __restrict vlSymsp);
    void _sequent__TOP__cpu__DOT__a_register__6(Vcpu__Syms* __restrict vlSymsp);
    void _sequent__TOP__cpu__DOT__d_register__5(Vcpu__Syms* __restrict vlSymsp);
    void _sequent__TOP__cpu__DOT__program_counter__DOT__count__4(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__a_register__9(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__d_register__8(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__program_counter__DOT__count__7(Vcpu__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
