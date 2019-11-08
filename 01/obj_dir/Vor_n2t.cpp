// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor_n2t.h for the primary calling header

#include "Vor_n2t.h"           // For This
#include "Vor_n2t__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vor_n2t) {
    Vor_n2t__Syms* __restrict vlSymsp = __VlSymsp = new Vor_n2t__Syms(this, name());
    Vor_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vor_n2t::__Vconfigure(Vor_n2t__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vor_n2t::~Vor_n2t() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vor_n2t::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vor_n2t::eval\n"); );
    Vor_n2t__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vor_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vor_n2t::_eval_initial_loop(Vor_n2t__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vor_n2t::_combo__TOP__1(Vor_n2t__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_n2t::_combo__TOP__1\n"); );
    Vor_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = (1U & (~ ((~ (IData)(vlTOPp->a)) 
			    & (~ (IData)(vlTOPp->b)))));
}

void Vor_n2t::_eval(Vor_n2t__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_n2t::_eval\n"); );
    Vor_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vor_n2t::_eval_initial(Vor_n2t__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_n2t::_eval_initial\n"); );
    Vor_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vor_n2t::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_n2t::final\n"); );
    // Variables
    Vor_n2t__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vor_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vor_n2t::_eval_settle(Vor_n2t__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_n2t::_eval_settle\n"); );
    Vor_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vor_n2t::_change_request(Vor_n2t__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_n2t::_change_request\n"); );
    Vor_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vor_n2t::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_n2t::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a & 0xfeU))) {
	Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xfeU))) {
	Verilated::overWidthError("b");}
}
#endif // VL_DEBUG

void Vor_n2t::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_n2t::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
}
