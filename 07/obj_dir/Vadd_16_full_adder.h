// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadd_16.h for the primary calling header

#ifndef _Vadd_16_full_adder_H_
#define _Vadd_16_full_adder_H_

#include "verilated.h"

class Vadd_16__Syms;

//----------

VL_MODULE(Vadd_16_full_adder) {
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
    Vadd_16__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vadd_16_full_adder);  ///< Copying not allowed
  public:
    Vadd_16_full_adder(const char* name="TOP");
    ~Vadd_16_full_adder();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vadd_16__Syms* symsp, bool first);
    void _combo__TOP__add_16__DOT___10_full_add__24(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___10_full_add__6(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___11_full_add__25(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___11_full_add__5(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___12_full_add__26(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___12_full_add__4(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___13_full_add__27(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___13_full_add__3(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___14_full_add__2(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___14_full_add__28(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___15_full_add__1(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___1_full_add__15(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___2_full_add__14(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___2_full_add__16(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___3_full_add__13(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___3_full_add__17(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___4_full_add__12(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___4_full_add__18(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___5_full_add__11(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___5_full_add__19(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___6_full_add__10(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___6_full_add__20(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___7_full_add__21(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___7_full_add__9(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___8_full_add__22(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___8_full_add__8(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___9_full_add__23(Vadd_16__Syms* __restrict vlSymsp);
    void _combo__TOP__add_16__DOT___9_full_add__7(Vadd_16__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
} VL_ATTR_ALIGNED(128);

#endif // guard
