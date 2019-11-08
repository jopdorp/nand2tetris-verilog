// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_4_way_16.h for the primary calling header

#include "Vmux_4_way_16_mux_16.h" // For This
#include "Vmux_4_way_16__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmux_4_way_16_mux_16) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vmux_4_way_16_mux_16::__Vconfigure(Vmux_4_way_16__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmux_4_way_16_mux_16::~Vmux_4_way_16_mux_16() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vmux_4_way_16_mux_16::_combo__TOP__mux_4_way_16__DOT__mux_16_ab__1(Vmux_4_way_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmux_4_way_16_mux_16::_combo__TOP__mux_4_way_16__DOT__mux_16_ab__1\n"); );
    Vmux_4_way_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & (~ 
						      ((~ 
							((IData)(vlTOPp->select) 
							 & (IData)(vlTOPp->b))) 
						       & (~ 
							  ((~ (IData)(vlTOPp->select)) 
							   & (IData)(vlTOPp->a)))))));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 1U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 1U))))) 
						      << 1U)));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 2U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 2U))))) 
						      << 2U)));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 3U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 3U))))) 
						      << 3U)));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 4U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 4U))))) 
						      << 4U)));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 5U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 5U))))) 
						      << 5U)));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 6U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 6U))))) 
						      << 6U)));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 7U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 7U))))) 
						      << 7U)));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 8U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 8U))))) 
						      << 8U)));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 9U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 9U))))) 
						      << 9U)));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 0xaU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 0xaU))))) 
						      << 0xaU)));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 0xbU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 0xbU))))) 
						      << 0xbU)));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 0xcU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 0xcU))))) 
						      << 0xcU)));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 0xdU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 0xdU))))) 
						      << 0xdU)));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 0xeU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 0xeU))))) 
						      << 0xeU)));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->b) 
							     >> 0xfU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->a) 
							       >> 0xfU))))) 
						      << 0xfU)));
}

VL_INLINE_OPT void Vmux_4_way_16_mux_16::_combo__TOP__mux_4_way_16__DOT__mux_16_cb__2(Vmux_4_way_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmux_4_way_16_mux_16::_combo__TOP__mux_4_way_16__DOT__mux_16_cb__2\n"); );
    Vmux_4_way_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & (~ 
						      ((~ 
							((IData)(vlTOPp->select) 
							 & (IData)(vlTOPp->d))) 
						       & (~ 
							  ((~ (IData)(vlTOPp->select)) 
							   & (IData)(vlTOPp->c)))))));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 1U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 1U))))) 
						      << 1U)));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 2U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 2U))))) 
						      << 2U)));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 3U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 3U))))) 
						      << 3U)));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 4U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 4U))))) 
						      << 4U)));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 5U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 5U))))) 
						      << 5U)));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 6U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 6U))))) 
						      << 6U)));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 7U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 7U))))) 
						      << 7U)));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 8U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 8U))))) 
						      << 8U)));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 9U))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 9U))))) 
						      << 9U)));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 0xaU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 0xaU))))) 
						      << 0xaU)));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 0xbU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 0xbU))))) 
						      << 0xbU)));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 0xcU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 0xcU))))) 
						      << 0xcU)));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 0xdU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 0xdU))))) 
						      << 0xdU)));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 0xeU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 0xeU))))) 
						      << 0xeU)));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & ((~ 
						       ((~ 
							 ((IData)(vlTOPp->select) 
							  & ((IData)(vlTOPp->d) 
							     >> 0xfU))) 
							& (~ 
							   ((~ (IData)(vlTOPp->select)) 
							    & ((IData)(vlTOPp->c) 
							       >> 0xfU))))) 
						      << 0xfU)));
}

VL_INLINE_OPT void Vmux_4_way_16_mux_16::_combo__TOP__mux_4_way_16__DOT__mux_combined__3(Vmux_4_way_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmux_4_way_16_mux_16::_combo__TOP__mux_4_way_16__DOT__mux_combined__3\n"); );
    Vmux_4_way_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & (~ 
						      ((~ 
							(((IData)(vlTOPp->select) 
							  >> 1U) 
							 & (IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out))) 
						       & (~ 
							  ((~ 
							    ((IData)(vlTOPp->select) 
							     >> 1U)) 
							   & (IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out)))))));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 1U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 1U))))) 
						      << 1U)));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 2U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 2U))))) 
						      << 2U)));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 3U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 3U))))) 
						      << 3U)));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 4U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 4U))))) 
						      << 4U)));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 5U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 5U))))) 
						      << 5U)));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 6U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 6U))))) 
						      << 6U)));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 7U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 7U))))) 
						      << 7U)));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 8U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 8U))))) 
						      << 8U)));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 9U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 9U))))) 
						      << 9U)));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 0xaU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 0xaU))))) 
						      << 0xaU)));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 0xbU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 0xbU))))) 
						      << 0xbU)));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 0xcU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 0xcU))))) 
						      << 0xcU)));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 0xdU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 0xdU))))) 
						      << 0xdU)));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 0xeU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 0xeU))))) 
						      << 0xeU)));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->select) 
							   >> 1U) 
							  & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_cb.out) 
							     >> 0xfU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->select) 
							      >> 1U)) 
							    & ((IData)(vlSymsp->TOP__mux_4_way_16__DOT__mux_16_ab.out) 
							       >> 0xfU))))) 
						      << 0xfU)));
}

void Vmux_4_way_16_mux_16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmux_4_way_16_mux_16::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(16);
    b = VL_RAND_RESET_I(16);
    select = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(16);
}
