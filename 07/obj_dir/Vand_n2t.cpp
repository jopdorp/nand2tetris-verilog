// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_n2t.h for the primary calling header

#include "Vand_n2t.h"          // For This
#include "Vand_n2t__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vand_n2t) {
    Vand_n2t__Syms* __restrict vlSymsp = __VlSymsp = new Vand_n2t__Syms(this, name());
    Vand_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vand_n2t::__Vconfigure(Vand_n2t__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vand_n2t::~Vand_n2t() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vand_n2t::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vand_n2t::eval\n"); );
    Vand_n2t__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vand_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vand_n2t::_eval_initial_loop(Vand_n2t__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vand_n2t::_combo__TOP__1(Vand_n2t__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_n2t::_combo__TOP__1\n"); );
    Vand_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((IData)(vlTOPp->a) & (IData)(vlTOPp->b));
}

void Vand_n2t::_eval(Vand_n2t__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_n2t::_eval\n"); );
    Vand_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vand_n2t::_eval_initial(Vand_n2t__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_n2t::_eval_initial\n"); );
    Vand_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vand_n2t::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_n2t::final\n"); );
    // Variables
    Vand_n2t__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vand_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vand_n2t::_eval_settle(Vand_n2t__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_n2t::_eval_settle\n"); );
    Vand_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vand_n2t::_change_request(Vand_n2t__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_n2t::_change_request\n"); );
    Vand_n2t* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vand_n2t::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_n2t::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a & 0xfeU))) {
	Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xfeU))) {
	Verilated::overWidthError("b");}
}
#endif // VL_DEBUG

void Vand_n2t::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_n2t::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
}
