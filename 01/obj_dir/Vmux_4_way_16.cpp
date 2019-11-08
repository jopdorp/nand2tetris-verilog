// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_4_way_16.h for the primary calling header

#include "Vmux_4_way_16.h"     // For This
#include "Vmux_4_way_16__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmux_4_way_16) {
    Vmux_4_way_16__Syms* __restrict vlSymsp = __VlSymsp = new Vmux_4_way_16__Syms(this, name());
    Vmux_4_way_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT__mux_4_way_16__DOT__mux_16_ab, Vmux_4_way_16_mux_16);
    VL_CELL (__PVT__mux_4_way_16__DOT__mux_16_cb, Vmux_4_way_16_mux_16);
    VL_CELL (__PVT__mux_4_way_16__DOT__mux_combined, Vmux_4_way_16_mux_16);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmux_4_way_16::__Vconfigure(Vmux_4_way_16__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmux_4_way_16::~Vmux_4_way_16() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vmux_4_way_16::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux_4_way_16::eval\n"); );
    Vmux_4_way_16__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmux_4_way_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vmux_4_way_16::_eval_initial_loop(Vmux_4_way_16__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vmux_4_way_16::_combo__TOP__1(Vmux_4_way_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4_way_16::_combo__TOP__1\n"); );
    Vmux_4_way_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = vlSymsp->TOP__mux_4_way_16__DOT__mux_combined.out;
}

void Vmux_4_way_16::_eval(Vmux_4_way_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4_way_16::_eval\n"); );
    Vmux_4_way_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab._combo__TOP__mux_4_way_16__DOT__mux_16_ab__1(vlSymsp);
    vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb._combo__TOP__mux_4_way_16__DOT__mux_16_cb__2(vlSymsp);
    vlSymsp->TOP__mux_4_way_16__DOT__mux_combined._combo__TOP__mux_4_way_16__DOT__mux_combined__3(vlSymsp);
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vmux_4_way_16::_eval_initial(Vmux_4_way_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4_way_16::_eval_initial\n"); );
    Vmux_4_way_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmux_4_way_16::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4_way_16::final\n"); );
    // Variables
    Vmux_4_way_16__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmux_4_way_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmux_4_way_16::_eval_settle(Vmux_4_way_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4_way_16::_eval_settle\n"); );
    Vmux_4_way_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab._combo__TOP__mux_4_way_16__DOT__mux_16_ab__1(vlSymsp);
    vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb._combo__TOP__mux_4_way_16__DOT__mux_16_cb__2(vlSymsp);
    vlSymsp->TOP__mux_4_way_16__DOT__mux_combined._combo__TOP__mux_4_way_16__DOT__mux_combined__3(vlSymsp);
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vmux_4_way_16::_change_request(Vmux_4_way_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4_way_16::_change_request\n"); );
    Vmux_4_way_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmux_4_way_16::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4_way_16::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((select & 0xfcU))) {
	Verilated::overWidthError("select");}
}
#endif // VL_DEBUG

void Vmux_4_way_16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4_way_16::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(16);
    b = VL_RAND_RESET_I(16);
    c = VL_RAND_RESET_I(16);
    d = VL_RAND_RESET_I(16);
    select = VL_RAND_RESET_I(2);
    out = VL_RAND_RESET_I(16);
}
