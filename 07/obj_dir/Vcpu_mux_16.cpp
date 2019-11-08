// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu_mux_16.h"       // For This
#include "Vcpu__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_mux_16) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_mux_16::__Vconfigure(Vcpu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_mux_16::~Vcpu_mux_16() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_mux_16::_settle__TOP__cpu__DOT__select_m_or_a__2(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_mux_16::_settle__TOP__cpu__DOT__select_m_or_a__2\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & (~ 
						      ((~ 
							(((IData)(vlTOPp->instruction) 
							  >> 0xcU) 
							 & (IData)(vlTOPp->inM))) 
						       & (~ 
							  ((~ 
							    ((IData)(vlTOPp->instruction) 
							     >> 0xcU)) 
							   & (IData)(vlSymsp->TOP__cpu__DOT__a_register.out)))))));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 1U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 1U))))) 
						      << 1U)));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 2U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 2U))))) 
						      << 2U)));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 3U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 3U))))) 
						      << 3U)));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 4U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 4U))))) 
						      << 4U)));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 5U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 5U))))) 
						      << 5U)));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 6U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 6U))))) 
						      << 6U)));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 7U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 7U))))) 
						      << 7U)));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 8U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 8U))))) 
						      << 8U)));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 9U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 9U))))) 
						      << 9U)));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 0xaU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 0xaU))))) 
						      << 0xaU)));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 0xbU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 0xbU))))) 
						      << 0xbU)));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   & (IData)(vlTOPp->inM)) 
							  >> 0xcU)) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 0xcU))))) 
						      << 0xcU)));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 0xdU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 0xdU))))) 
						      << 0xdU)));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 0xeU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 0xeU))))) 
						      << 0xeU)));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xcU) 
							  & ((IData)(vlTOPp->inM) 
							     >> 0xfU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xcU)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							       >> 0xfU))))) 
						      << 0xfU)));
}

VL_INLINE_OPT void Vcpu_mux_16::_settle__TOP__cpu__DOT__choose_address_source__8(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_mux_16::_settle__TOP__cpu__DOT__choose_address_source__8\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & (~ 
						      ((~ 
							(((IData)(vlTOPp->instruction) 
							  >> 0xfU) 
							 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out))) 
						       & (~ 
							  ((~ 
							    ((IData)(vlTOPp->instruction) 
							     >> 0xfU)) 
							   & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)))))));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 1U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 1U))))) 
						      << 1U)));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 2U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 2U))))) 
						      << 2U)));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 3U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 3U))))) 
						      << 3U)));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 4U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 4U))))) 
						      << 4U)));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 5U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 5U))))) 
						      << 5U)));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 6U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 6U))))) 
						      << 6U)));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 7U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 7U))))) 
						      << 7U)));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 8U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 8U))))) 
						      << 8U)));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 9U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 9U))))) 
						      << 9U)));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 0xaU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 0xaU))))) 
						      << 0xaU)));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 0xbU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 0xbU))))) 
						      << 0xbU)));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 0xcU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 0xcU))))) 
						      << 0xcU)));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 0xdU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 0xdU))))) 
						      << 0xdU)));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xfU) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							     >> 0xeU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 0xeU))))) 
						      << 0xeU)));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out)) 
							  >> 0xfU)) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xfU)) 
							    & ((IData)(vlTOPp->cpu__DOT__address_from_a_instruction) 
							       >> 0xfU))))) 
						      << 0xfU)));
}

VL_INLINE_OPT void Vcpu_mux_16::_settle__TOP__cpu__DOT__calculations__DOT__mux_x_notx__3(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_mux_16::_settle__TOP__cpu__DOT__calculations__DOT__mux_x_notx__3\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & (~ 
						      ((~ 
							(((IData)(vlTOPp->instruction) 
							  >> 0xaU) 
							 & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx))) 
						       & (~ 
							  ((~ 
							    ((IData)(vlTOPp->instruction) 
							     >> 0xaU)) 
							   & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)))))));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 1U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 1U))))) 
						      << 1U)));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 2U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 2U))))) 
						      << 2U)));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 3U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 3U))))) 
						      << 3U)));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 4U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 4U))))) 
						      << 4U)));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 5U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 5U))))) 
						      << 5U)));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 6U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 6U))))) 
						      << 6U)));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 7U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 7U))))) 
						      << 7U)));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 8U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 8U))))) 
						      << 8U)));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 9U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 9U))))) 
						      << 9U)));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
							  >> 0xaU)) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 0xaU))))) 
						      << 0xaU)));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 0xbU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 0xbU))))) 
						      << 0xbU)));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 0xcU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 0xcU))))) 
						      << 0xcU)));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 0xdU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 0xdU))))) 
						      << 0xdU)));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 0xeU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 0xeU))))) 
						      << 0xeU)));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 0xaU) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx) 
							     >> 0xfU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 0xaU)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
							       >> 0xfU))))) 
						      << 0xfU)));
}

VL_INLINE_OPT void Vcpu_mux_16::_settle__TOP__cpu__DOT__calculations__DOT__mux_y_noty__5(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_mux_16::_settle__TOP__cpu__DOT__calculations__DOT__mux_y_noty__5\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & (~ 
						      ((~ 
							(((IData)(vlTOPp->instruction) 
							  >> 8U) 
							 & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy))) 
						       & (~ 
							  ((~ 
							    ((IData)(vlTOPp->instruction) 
							     >> 8U)) 
							   & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)))))));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 1U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 1U))))) 
						      << 1U)));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 2U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 2U))))) 
						      << 2U)));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 3U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 3U))))) 
						      << 3U)));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 4U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 4U))))) 
						      << 4U)));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 5U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 5U))))) 
						      << 5U)));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 6U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 6U))))) 
						      << 6U)));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 7U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 7U))))) 
						      << 7U)));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
							  >> 8U)) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 8U))))) 
						      << 8U)));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 9U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 9U))))) 
						      << 9U)));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 0xaU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 0xaU))))) 
						      << 0xaU)));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 0xbU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 0xbU))))) 
						      << 0xbU)));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 0xcU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 0xcU))))) 
						      << 0xcU)));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 0xdU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 0xdU))))) 
						      << 0xdU)));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 0xeU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 0xeU))))) 
						      << 0xeU)));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 8U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy) 
							     >> 0xfU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 8U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
							       >> 0xfU))))) 
						      << 0xfU)));
}

VL_INLINE_OPT void Vcpu_mux_16::_settle__TOP__cpu__DOT__calculations__DOT__func__6(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_mux_16::_settle__TOP__cpu__DOT__calculations__DOT__func__6\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & (~ 
						      ((~ 
							(((IData)(vlTOPp->instruction) 
							  >> 7U) 
							 & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y))) 
						       & (~ 
							  ((~ 
							    ((IData)(vlTOPp->instruction) 
							     >> 7U)) 
							   & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)))))));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 1U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 1U))))) 
						      << 1U)));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 2U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 2U))))) 
						      << 2U)));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 3U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 3U))))) 
						      << 3U)));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 4U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 4U))))) 
						      << 4U)));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 5U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 5U))))) 
						      << 5U)));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 6U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 6U))))) 
						      << 6U)));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
							  >> 7U)) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 7U))))) 
						      << 7U)));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 8U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 8U))))) 
						      << 8U)));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 9U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 9U))))) 
						      << 9U)));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 0xaU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 0xaU))))) 
						      << 0xaU)));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 0xbU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 0xbU))))) 
						      << 0xbU)));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 0xcU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 0xcU))))) 
						      << 0xcU)));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 0xdU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 0xdU))))) 
						      << 0xdU)));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 0xeU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 0xeU))))) 
						      << 0xeU)));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 7U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y) 
							     >> 0xfU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 7U)) 
							    & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y) 
							       >> 0xfU))))) 
						      << 0xfU)));
}

VL_INLINE_OPT void Vcpu_mux_16::_settle__TOP__cpu__DOT__calculations__DOT__alu_out__7(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_mux_16::_settle__TOP__cpu__DOT__calculations__DOT__alu_out__7\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & (~ 
						      ((~ 
							(((IData)(vlTOPp->instruction) 
							  >> 6U) 
							 & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output))) 
						       & (~ 
							  ((~ 
							    ((IData)(vlTOPp->instruction) 
							     >> 6U)) 
							   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out)))))));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 1U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 1U))))) 
						      << 1U)));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 2U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 2U))))) 
						      << 2U)));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 3U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 3U))))) 
						      << 3U)));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 4U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 4U))))) 
						      << 4U)));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 5U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 5U))))) 
						      << 5U)));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
							  >> 6U)) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 6U))))) 
						      << 6U)));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 7U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 7U))))) 
						      << 7U)));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 8U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 8U))))) 
						      << 8U)));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 9U))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 9U))))) 
						      << 9U)));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 0xaU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 0xaU))))) 
						      << 0xaU)));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 0xbU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 0xbU))))) 
						      << 0xbU)));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 0xcU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 0xcU))))) 
						      << 0xcU)));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 0xdU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 0xdU))))) 
						      << 0xdU)));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 0xeU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 0xeU))))) 
						      << 0xeU)));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & ((~ 
						       ((~ 
							 (((IData)(vlTOPp->instruction) 
							   >> 6U) 
							  & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output) 
							     >> 0xfU))) 
							& (~ 
							   ((~ 
							     ((IData)(vlTOPp->instruction) 
							      >> 6U)) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
							       >> 0xfU))))) 
						      << 0xfU)));
}

VL_INLINE_OPT void Vcpu_mux_16::_sequent__TOP__cpu__DOT__program_counter__DOT__select_increment__1(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_mux_16::_sequent__TOP__cpu__DOT__program_counter__DOT__select_increment__1\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)));
}

VL_INLINE_OPT void Vcpu_mux_16::_settle__TOP__cpu__DOT__program_counter__DOT__select_load__9(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_mux_16::_settle__TOP__cpu__DOT__program_counter__DOT__select_load__9\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & (~ 
						      ((~ 
							((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							 & (IData)(vlSymsp->TOP__cpu__DOT__a_register.out))) 
						       & (~ 
							  ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							   & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out)))))));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 1U))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 1U))))) 
						      << 1U)));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 2U))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 2U))))) 
						      << 2U)));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 3U))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 3U))))) 
						      << 3U)));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 4U))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 4U))))) 
						      << 4U)));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 5U))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 5U))))) 
						      << 5U)));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 6U))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 6U))))) 
						      << 6U)));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 7U))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 7U))))) 
						      << 7U)));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 8U))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 8U))))) 
						      << 8U)));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 9U))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 9U))))) 
						      << 9U)));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 0xaU))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 0xaU))))) 
						      << 0xaU)));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 0xbU))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 0xbU))))) 
						      << 0xbU)));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 0xcU))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 0xcU))))) 
						      << 0xcU)));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 0xdU))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 0xdU))))) 
						      << 0xdU)));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 0xeU))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 0xeU))))) 
						      << 0xeU)));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & ((~ 
						       ((~ 
							 ((~ (IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b)) 
							  & ((IData)(vlSymsp->TOP__cpu__DOT__a_register.out) 
							     >> 0xfU))) 
							& (~ 
							   ((IData)(vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b) 
							    & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment.out) 
							       >> 0xfU))))) 
						      << 0xfU)));
}

VL_INLINE_OPT void Vcpu_mux_16::_settle__TOP__cpu__DOT__program_counter__DOT__select_reset__10(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_mux_16::_settle__TOP__cpu__DOT__program_counter__DOT__select_reset__10\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (1U 
						   & ((~ (IData)(vlTOPp->reset)) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xfffdU & (IData)(this->out)) | (2U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 1U) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xfffbU & (IData)(this->out)) | (4U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 2U) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xfff7U & (IData)(this->out)) | (8U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 3U) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xffefU & (IData)(this->out)) | (0x10U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 4U) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xffdfU & (IData)(this->out)) | (0x20U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 5U) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xffbfU & (IData)(this->out)) | (0x40U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 6U) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xff7fU & (IData)(this->out)) | (0x80U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 7U) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xfeffU & (IData)(this->out)) | (0x100U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 8U) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xfdffU & (IData)(this->out)) | (0x200U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 9U) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xfbffU & (IData)(this->out)) | (0x400U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 0xaU) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xf7ffU & (IData)(this->out)) | (0x800U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 0xbU) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xefffU & (IData)(this->out)) | (0x1000U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 0xcU) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xdfffU & (IData)(this->out)) | (0x2000U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 0xdU) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0xbfffU & (IData)(this->out)) | (0x4000U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 0xeU) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
    this->out = ((0x7fffU & (IData)(this->out)) | (0x8000U 
						   & (((~ (IData)(vlTOPp->reset)) 
						       << 0xfU) 
						      & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load.out))));
}

void Vcpu_mux_16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_mux_16::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(16);
    b = VL_RAND_RESET_I(16);
    select = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(16);
}
