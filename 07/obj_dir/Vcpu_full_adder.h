// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef _Vcpu_full_adder_H_
#define _Vcpu_full_adder_H_

#include "verilated.h"

class Vcpu__Syms;

//----------

VL_MODULE(Vcpu_full_adder) {
  public:
    
    // PORTS
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(c,0,0);
    VL_OUT8(carry,0,0);
    VL_OUT8(sum,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b,0,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vcpu__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcpu_full_adder);  ///< Copying not allowed
  public:
    Vcpu_full_adder(const char* name="TOP");
    ~Vcpu_full_adder();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add__24(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add__6(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add__25(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add__5(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add__26(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add__4(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add__27(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add__3(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add__2(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add__28(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add__1(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add__15(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add__14(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add__16(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add__13(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add__17(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add__12(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add__18(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add__11(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add__19(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add__10(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add__20(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add__21(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add__9(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add__22(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add__8(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add__23(Vcpu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add__7(Vcpu__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
