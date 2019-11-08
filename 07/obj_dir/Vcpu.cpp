// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu.h"              // For This
#include "Vcpu__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu) {
    Vcpu__Syms* __restrict vlSymsp = __VlSymsp = new Vcpu__Syms(this, name());
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT__cpu__DOT__select_m_or_a, Vcpu_mux_16);
    VL_CELL (__PVT__cpu__DOT__choose_address_source, Vcpu_mux_16);
    VL_CELL (__PVT__cpu__DOT__a_register, Vcpu_register_n2t);
    VL_CELL (__PVT__cpu__DOT__d_register, Vcpu_register_n2t);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__mux_x_notx, Vcpu_mux_16);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__mux_y_noty, Vcpu_mux_16);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__func, Vcpu_mux_16);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__alu_out, Vcpu_mux_16);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___1_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___2_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___3_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___4_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___5_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___6_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___7_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___8_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___9_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___10_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___11_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___12_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___13_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___14_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__calculations__DOT__sum__DOT___15_full_add, Vcpu_full_adder);
    VL_CELL (__PVT__cpu__DOT__program_counter__DOT__select_increment, Vcpu_mux_16);
    VL_CELL (__PVT__cpu__DOT__program_counter__DOT__select_load, Vcpu_mux_16);
    VL_CELL (__PVT__cpu__DOT__program_counter__DOT__select_reset, Vcpu_mux_16);
    VL_CELL (__PVT__cpu__DOT__program_counter__DOT__count, Vcpu_register_n2t);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu::__Vconfigure(Vcpu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu::~Vcpu() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vcpu::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu::eval\n"); );
    Vcpu__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vcpu::_eval_initial_loop(Vcpu__Syms* __restrict vlSymsp) {
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

void Vcpu::_settle__TOP__1(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__1\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	(0x7fffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction));
    vlTOPp->writeM = (1U & (((IData)(vlTOPp->instruction) 
			     >> 0xfU) & ((IData)(vlTOPp->instruction) 
					 >> 3U)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfffeU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (1U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfffdU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (2U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfffbU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (4U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfff7U & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (8U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xffefU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x10U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xffdfU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x20U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xffbfU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x40U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xff7fU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x80U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfeffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x100U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfdffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x200U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfbffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x400U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xf7ffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x800U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xefffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x1000U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xdfffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x2000U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xbfffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x4000U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (1U & (~ ((IData)(vlTOPp->instruction) 
		       >> 0xbU))));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (1U & (~ ((IData)(vlTOPp->instruction) 
		       >> 9U))));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (2U & ((~ ((IData)(vlTOPp->instruction) 
			>> 0xbU)) << 1U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (2U & ((~ ((IData)(vlTOPp->instruction) 
			>> 9U)) << 1U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (4U & ((~ ((IData)(vlTOPp->instruction) 
			>> 0xbU)) << 2U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (4U & ((~ ((IData)(vlTOPp->instruction) 
			>> 9U)) << 2U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (8U & ((~ ((IData)(vlTOPp->instruction) 
			>> 0xbU)) << 3U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (8U & ((~ ((IData)(vlTOPp->instruction) 
			>> 9U)) << 3U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x10U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 0xbU)) << 4U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x10U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 9U)) << 4U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x20U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 0xbU)) << 5U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x20U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 9U)) << 5U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x40U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 0xbU)) << 6U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x40U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 9U)) << 6U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x80U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 0xbU)) << 7U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x80U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 9U)) << 7U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x100U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 0xbU)) << 8U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x100U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 9U)) << 8U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x200U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 0xbU)) << 9U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x200U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 9U)) << 9U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x400U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 0xbU)) << 0xaU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x400U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 9U)) << 0xaU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x800U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 0xbU)) << 0xbU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x800U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 9U)) << 0xbU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x1000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 0xbU)) << 0xcU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x1000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 9U)) << 0xcU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x2000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 0xbU)) << 0xdU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x2000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 9U)) << 0xdU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x4000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 0xbU)) << 0xeU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x4000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 9U)) << 0xeU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x8000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 0xbU)) << 0xfU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x8000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 9U)) << 0xfU)));
    vlTOPp->cpu__DOT__should_load_a_register = (1U 
						& (~ 
						   ((~ 
						     ((IData)(vlTOPp->instruction) 
						      >> 5U)) 
						    & ((IData)(vlTOPp->instruction) 
						       >> 0xfU))));
    vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlTOPp->instruction) >> 0xfU) 
		    & ((IData)(vlTOPp->instruction) 
		       >> 4U))));
}

VL_INLINE_OPT void Vcpu::_combo__TOP__2(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_combo__TOP__2\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->writeM = (1U & (((IData)(vlTOPp->instruction) 
			     >> 0xfU) & ((IData)(vlTOPp->instruction) 
					 >> 3U)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfffeU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (1U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfffdU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (2U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfffbU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (4U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfff7U & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (8U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xffefU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x10U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xffdfU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x20U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xffbfU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x40U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xff7fU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x80U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfeffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x100U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfdffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x200U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xfbffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x400U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xf7ffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x800U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xefffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x1000U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xdfffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x2000U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__address_from_a_instruction = 
	((0xbfffU & (IData)(vlTOPp->cpu__DOT__address_from_a_instruction)) 
	 | (0x4000U & (IData)(vlTOPp->instruction)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (1U & (~ ((IData)(vlTOPp->instruction) 
		       >> 0xbU))));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (1U & (~ ((IData)(vlTOPp->instruction) 
		       >> 9U))));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (2U & ((~ ((IData)(vlTOPp->instruction) 
			>> 0xbU)) << 1U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (2U & ((~ ((IData)(vlTOPp->instruction) 
			>> 9U)) << 1U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (4U & ((~ ((IData)(vlTOPp->instruction) 
			>> 0xbU)) << 2U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (4U & ((~ ((IData)(vlTOPp->instruction) 
			>> 9U)) << 2U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (8U & ((~ ((IData)(vlTOPp->instruction) 
			>> 0xbU)) << 3U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (8U & ((~ ((IData)(vlTOPp->instruction) 
			>> 9U)) << 3U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x10U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 0xbU)) << 4U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x10U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 9U)) << 4U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x20U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 0xbU)) << 5U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x20U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 9U)) << 5U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x40U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 0xbU)) << 6U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x40U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 9U)) << 6U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x80U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 0xbU)) << 7U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x80U & ((~ ((IData)(vlTOPp->instruction) 
			   >> 9U)) << 7U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x100U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 0xbU)) << 8U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x100U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 9U)) << 8U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x200U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 0xbU)) << 9U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x200U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 9U)) << 9U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x400U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 0xbU)) << 0xaU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x400U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 9U)) << 0xaU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x800U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 0xbU)) << 0xbU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x800U & ((~ ((IData)(vlTOPp->instruction) 
			    >> 9U)) << 0xbU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x1000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 0xbU)) << 0xcU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x1000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 9U)) << 0xcU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x2000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 0xbU)) << 0xdU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x2000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 9U)) << 0xdU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x4000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 0xbU)) << 0xeU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x4000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 9U)) << 0xeU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zx_16 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16)) 
	   | (0x8000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 0xbU)) << 0xfU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_zy_16 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16)) 
	   | (0x8000U & ((~ ((IData)(vlTOPp->instruction) 
			     >> 9U)) << 0xfU)));
}

VL_INLINE_OPT void Vcpu::_sequent__TOP__3(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_sequent__TOP__3\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->pc = (0x7fffU & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (1U & (~ (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (2U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			     >> 1U)) & (~ (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out)))) 
		     & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			    >> 1U) & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out)))) 
		    << 1U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___1_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 1U) & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out))));
    vlTOPp->addressM = (0x7fffU & (IData)(vlSymsp->TOP__cpu__DOT__a_register.out));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (4U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			     >> 2U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___1_full_add__DOT__car__DOT__nand_a_b))) 
		     & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			    >> 2U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___1_full_add__DOT__car__DOT__nand_a_b))))) 
		    << 2U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___2_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 2U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___1_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (8U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			     >> 3U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___2_full_add__DOT__car__DOT__nand_a_b))) 
		     & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			    >> 3U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___2_full_add__DOT__car__DOT__nand_a_b))))) 
		    << 3U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___3_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 3U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___2_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x10U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 4U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___3_full_add__DOT__car__DOT__nand_a_b))) 
			& (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			       >> 4U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___3_full_add__DOT__car__DOT__nand_a_b))))) 
		       << 4U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___4_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 4U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___3_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x20U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 5U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___4_full_add__DOT__car__DOT__nand_a_b))) 
			& (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			       >> 5U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___4_full_add__DOT__car__DOT__nand_a_b))))) 
		       << 5U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___5_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 5U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___4_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x40U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 6U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___5_full_add__DOT__car__DOT__nand_a_b))) 
			& (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			       >> 6U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___5_full_add__DOT__car__DOT__nand_a_b))))) 
		       << 6U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___6_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 6U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___5_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x80U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 7U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___6_full_add__DOT__car__DOT__nand_a_b))) 
			& (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			       >> 7U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___6_full_add__DOT__car__DOT__nand_a_b))))) 
		       << 7U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___7_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 7U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___6_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x100U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 8U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___7_full_add__DOT__car__DOT__nand_a_b))) 
			 & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 8U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___7_full_add__DOT__car__DOT__nand_a_b))))) 
			<< 8U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___8_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 8U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___7_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x200U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 9U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___8_full_add__DOT__car__DOT__nand_a_b))) 
			 & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 9U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___8_full_add__DOT__car__DOT__nand_a_b))))) 
			<< 9U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___9_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 9U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___8_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x400U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xaU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___9_full_add__DOT__car__DOT__nand_a_b))) 
			 & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 0xaU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___9_full_add__DOT__car__DOT__nand_a_b))))) 
			<< 0xaU)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___10_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 0xaU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___9_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x800U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xbU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___10_full_add__DOT__car__DOT__nand_a_b))) 
			 & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 0xbU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___10_full_add__DOT__car__DOT__nand_a_b))))) 
			<< 0xbU)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___11_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 0xbU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___10_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x1000U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				  >> 0xcU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___11_full_add__DOT__car__DOT__nand_a_b))) 
			  & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xcU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___11_full_add__DOT__car__DOT__nand_a_b))))) 
			 << 0xcU)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___12_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 0xcU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___11_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x2000U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				  >> 0xdU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___12_full_add__DOT__car__DOT__nand_a_b))) 
			  & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xdU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___12_full_add__DOT__car__DOT__nand_a_b))))) 
			 << 0xdU)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___13_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 0xdU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___12_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x4000U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				  >> 0xeU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___13_full_add__DOT__car__DOT__nand_a_b))) 
			  & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xeU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___13_full_add__DOT__car__DOT__nand_a_b))))) 
			 << 0xeU)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___14_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 0xeU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___13_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x8000U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				  >> 0xfU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___14_full_add__DOT__car__DOT__nand_a_b))) 
			  & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xfU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___14_full_add__DOT__car__DOT__nand_a_b))))) 
			 << 0xfU)));
}

void Vcpu::_settle__TOP__4(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__4\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->pc = (0x7fffU & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (1U & (~ (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (2U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			     >> 1U)) & (~ (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out)))) 
		     & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			    >> 1U) & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out)))) 
		    << 1U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___1_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 1U) & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (1U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (2U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (4U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (8U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x10U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x20U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x40U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x80U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x100U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x200U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x400U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x800U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x1000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x2000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x4000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x8000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->addressM = (0x7fffU & (IData)(vlSymsp->TOP__cpu__DOT__a_register.out));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (4U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			     >> 2U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___1_full_add__DOT__car__DOT__nand_a_b))) 
		     & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			    >> 2U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___1_full_add__DOT__car__DOT__nand_a_b))))) 
		    << 2U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___2_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 2U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___1_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (1U & (~ (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx))));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (2U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			>> 1U)) << 1U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (4U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			>> 2U)) << 2U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (8U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			>> 3U)) << 3U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x10U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			   >> 4U)) << 4U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x20U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			   >> 5U)) << 5U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x40U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			   >> 6U)) << 6U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x80U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			   >> 7U)) << 7U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x100U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			    >> 8U)) << 8U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x200U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			    >> 9U)) << 9U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x400U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			    >> 0xaU)) << 0xaU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x800U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			    >> 0xbU)) << 0xbU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x1000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			     >> 0xcU)) << 0xcU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x2000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			     >> 0xdU)) << 0xdU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x4000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			     >> 0xeU)) << 0xeU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x8000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			     >> 0xfU)) << 0xfU)));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (8U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			     >> 3U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___2_full_add__DOT__car__DOT__nand_a_b))) 
		     & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			    >> 3U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___2_full_add__DOT__car__DOT__nand_a_b))))) 
		    << 3U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___3_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 3U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___2_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x10U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 4U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___3_full_add__DOT__car__DOT__nand_a_b))) 
			& (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			       >> 4U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___3_full_add__DOT__car__DOT__nand_a_b))))) 
		       << 4U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___4_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 4U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___3_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x20U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 5U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___4_full_add__DOT__car__DOT__nand_a_b))) 
			& (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			       >> 5U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___4_full_add__DOT__car__DOT__nand_a_b))))) 
		       << 5U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___5_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 5U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___4_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x40U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 6U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___5_full_add__DOT__car__DOT__nand_a_b))) 
			& (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			       >> 6U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___5_full_add__DOT__car__DOT__nand_a_b))))) 
		       << 6U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___6_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 6U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___5_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x80U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 7U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___6_full_add__DOT__car__DOT__nand_a_b))) 
			& (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
			       >> 7U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___6_full_add__DOT__car__DOT__nand_a_b))))) 
		       << 7U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___7_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 7U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___6_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x100U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 8U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___7_full_add__DOT__car__DOT__nand_a_b))) 
			 & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 8U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___7_full_add__DOT__car__DOT__nand_a_b))))) 
			<< 8U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___8_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 8U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___7_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x200U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 9U)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___8_full_add__DOT__car__DOT__nand_a_b))) 
			 & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 9U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___8_full_add__DOT__car__DOT__nand_a_b))))) 
			<< 9U)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___9_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 9U) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___8_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x400U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xaU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___9_full_add__DOT__car__DOT__nand_a_b))) 
			 & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 0xaU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___9_full_add__DOT__car__DOT__nand_a_b))))) 
			<< 0xaU)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___10_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 0xaU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___9_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x800U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xbU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___10_full_add__DOT__car__DOT__nand_a_b))) 
			 & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				>> 0xbU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___10_full_add__DOT__car__DOT__nand_a_b))))) 
			<< 0xbU)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___11_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 0xbU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___10_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x1000U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				  >> 0xcU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___11_full_add__DOT__car__DOT__nand_a_b))) 
			  & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xcU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___11_full_add__DOT__car__DOT__nand_a_b))))) 
			 << 0xcU)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___12_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 0xcU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___11_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x2000U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				  >> 0xdU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___12_full_add__DOT__car__DOT__nand_a_b))) 
			  & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xdU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___12_full_add__DOT__car__DOT__nand_a_b))))) 
			 << 0xdU)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___13_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 0xdU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___12_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x4000U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				  >> 0xeU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___13_full_add__DOT__car__DOT__nand_a_b))) 
			  & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xeU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___13_full_add__DOT__car__DOT__nand_a_b))))) 
			 << 0xeU)));
    vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___14_full_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
		     >> 0xeU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___13_full_add__DOT__car__DOT__nand_a_b)))));
    vlTOPp->cpu__DOT__program_counter__DOT__incremented 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__incremented)) 
	   | (0x8000U & (((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				  >> 0xfU)) & (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___14_full_add__DOT__car__DOT__nand_a_b))) 
			  & (~ (((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__count.out) 
				 >> 0xfU) & (~ (IData)(vlTOPp->cpu__DOT__program_counter__DOT__increment__DOT___14_full_add__DOT__car__DOT__nand_a_b))))) 
			 << 0xfU)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__5(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__5\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (1U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (2U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (4U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (8U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x10U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x20U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x40U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x80U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x100U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x200U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x400U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x800U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x1000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x2000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x4000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__y_after_zy 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy)) 
	   | (0x8000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zy_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__select_m_or_a.out))));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (1U & (~ (IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy))));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (2U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			>> 1U)) << 1U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (4U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			>> 2U)) << 2U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (8U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			>> 3U)) << 3U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x10U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			   >> 4U)) << 4U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x20U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			   >> 5U)) << 5U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x40U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			   >> 6U)) << 6U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x80U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			   >> 7U)) << 7U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x100U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			    >> 8U)) << 8U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x200U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			    >> 9U)) << 9U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x400U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			    >> 0xaU)) << 0xaU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x800U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			    >> 0xbU)) << 0xbU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x1000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			     >> 0xcU)) << 0xcU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x2000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			     >> 0xdU)) << 0xdU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x4000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			     >> 0xeU)) << 0xeU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_y_after_zy)) 
	   | (0x8000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__y_after_zy) 
			     >> 0xfU)) << 0xfU)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__6(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__6\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (1U & ((~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out)) 
		      & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)))) 
		  & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			& (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (1U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		  & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (2U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		  & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (4U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		  & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (8U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		  & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x10U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		     & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x20U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		     & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x40U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		     & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x80U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		     & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x100U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x200U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x400U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x800U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x1000U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x2000U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x4000U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_and_y = 
	((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_and_y)) 
	 | (0x8000U & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
    vlTOPp->cpu__DOT__calculations__DOT__sum__DOT__half_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out))));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__7(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__7\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (2U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
		       & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum__DOT__half_add__DOT__car__DOT__nand_a_b))) 
		   & (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			 & (~ (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum__DOT__half_add__DOT__car__DOT__nand_a_b))))) 
		  << 1U)));
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (4U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
		       & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add.carry)))) 
		   & (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add.carry)))) 
		  << 2U)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__8(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__8\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (8U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
		       & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add.carry)))) 
		   & (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add.carry)))) 
		  << 3U)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__9(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__9\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x10U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			  & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add.carry)))) 
		      & (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			    & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add.carry)))) 
		     << 4U)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__10(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__10\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x20U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			  & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add.carry)))) 
		      & (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			    & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add.carry)))) 
		     << 5U)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__11(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__11\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x40U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			  & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add.carry)))) 
		      & (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			    & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add.carry)))) 
		     << 6U)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__12(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__12\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x80U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			  & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add.carry)))) 
		      & (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			    & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add.carry)))) 
		     << 7U)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__13(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__13\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x100U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			   & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add.carry)))) 
		       & (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			     & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add.carry)))) 
		      << 8U)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__14(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__14\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x200U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			   & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add.carry)))) 
		       & (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			     & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add.carry)))) 
		      << 9U)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__15(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__15\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x400U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			   & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add.carry)))) 
		       & (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			     & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add.carry)))) 
		      << 0xaU)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__16(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__16\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x800U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			   & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add.carry)))) 
		       & (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			     & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add.carry)))) 
		      << 0xbU)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__17(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__17\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x1000U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			    & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add.carry)))) 
			& (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add.carry)))) 
		       << 0xcU)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__18(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__18\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x2000U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			    & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add.carry)))) 
			& (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add.carry)))) 
		       << 0xdU)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__19(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__19\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x4000U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			    & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add.carry)))) 
			& (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add.carry)))) 
		       << 0xeU)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__20(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__20\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__sum_x_y = 
	((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum_x_y)) 
	 | (0x8000U & (((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
			    & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add.carry)))) 
			& (~ ((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
			      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add.carry)))) 
		       << 0xfU)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__21(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__21\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (1U & (~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out))));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (2U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			>> 1U)) << 1U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (4U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			>> 2U)) << 2U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (8U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			>> 3U)) << 3U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x10U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			   >> 4U)) << 4U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x20U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			   >> 5U)) << 5U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x40U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			   >> 6U)) << 6U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x80U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			   >> 7U)) << 7U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x100U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			    >> 8U)) << 8U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x200U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			    >> 9U)) << 9U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x400U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			    >> 0xaU)) << 0xaU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x800U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			    >> 0xbU)) << 0xbU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x1000U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			     >> 0xcU)) << 0xcU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x2000U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			     >> 0xdU)) << 0xdU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x4000U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			     >> 0xeU)) << 0xeU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_function_output 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_function_output)) 
	   | (0x8000U & ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__func.out) 
			     >> 0xfU)) << 0xfU)));
}

VL_INLINE_OPT void Vcpu::_settle__TOP__22(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__22\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->outM = vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out;
    vlTOPp->cpu__DOT__jump_zero__DOT__nand_a_b = (1U 
						  & (~ 
						     (((IData)(vlTOPp->instruction) 
						       >> 1U) 
						      & (((((((((~ (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out)) 
								& (~ 
								   ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								    >> 1U))) 
							       & (~ 
								  ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								   >> 2U))) 
							      & (~ 
								 ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								  >> 3U))) 
							     & (~ 
								((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								 >> 4U))) 
							    & (~ 
							       ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								>> 5U))) 
							   & (~ 
							      ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							       >> 6U))) 
							  & (~ 
							     ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
							      >> 7U))) 
							 & ((((((((~ 
								   ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								    >> 8U)) 
								  & (~ 
								     ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								      >> 9U))) 
								 & (~ 
								    ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								     >> 0xaU))) 
								& (~ 
								   ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								    >> 0xbU))) 
							       & (~ 
								  ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								   >> 0xcU))) 
							      & (~ 
								 ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								  >> 0xdU))) 
							     & (~ 
								((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								 >> 0xeU))) 
							    & (~ 
							       ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
								>> 0xfU)))))));
    vlTOPp->cpu__DOT__alu_out_is_positive = (1U & (~ 
						   ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
						    >> 0xfU)));
    vlTOPp->cpu__DOT__is_c_and_should_jump__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlTOPp->instruction) >> 0xfU) 
		    & (~ (((~ ((IData)(vlTOPp->instruction) 
			       & ((IData)(vlTOPp->cpu__DOT__alu_out_is_not_zero) 
				  & (IData)(vlTOPp->cpu__DOT__alu_out_is_positive)))) 
			   & (~ (((IData)(vlTOPp->instruction) 
				  >> 2U) & ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
					    >> 0xfU)))) 
			  & (IData)(vlTOPp->cpu__DOT__jump_zero__DOT__nand_a_b))))));
}

VL_INLINE_OPT void Vcpu::_combo__TOP__23(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_combo__TOP__23\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b 
	= (1U & (~ (((IData)(vlTOPp->instruction) >> 0xfU) 
		    & ((IData)(vlTOPp->instruction) 
		       >> 4U))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (1U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (2U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (4U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (8U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		    & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x10U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x20U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x40U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x80U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
		       & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x100U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x200U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x400U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x800U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			& (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x1000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x2000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x4000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__calculations__DOT__x_after_zx 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx)) 
	   | (0x8000U & ((IData)(vlTOPp->cpu__DOT__calculations__DOT__not_zx_16) 
			 & (IData)(vlSymsp->TOP__cpu__DOT__d_register.out))));
    vlTOPp->cpu__DOT__should_load_a_register = (1U 
						& (~ 
						   ((~ 
						     ((IData)(vlTOPp->instruction) 
						      >> 5U)) 
						    & ((IData)(vlTOPp->instruction) 
						       >> 0xfU))));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfffeU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (1U & (~ (IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx))));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfffdU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (2U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			>> 1U)) << 1U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfffbU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (4U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			>> 2U)) << 2U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfff7U & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (8U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			>> 3U)) << 3U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xffefU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x10U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			   >> 4U)) << 4U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xffdfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x20U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			   >> 5U)) << 5U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xffbfU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x40U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			   >> 6U)) << 6U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xff7fU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x80U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			   >> 7U)) << 7U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfeffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x100U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			    >> 8U)) << 8U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfdffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x200U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			    >> 9U)) << 9U)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xfbffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x400U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			    >> 0xaU)) << 0xaU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xf7ffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x800U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			    >> 0xbU)) << 0xbU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xefffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x1000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			     >> 0xcU)) << 0xcU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xdfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x2000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			     >> 0xdU)) << 0xdU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0xbfffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x4000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			     >> 0xeU)) << 0xeU)));
    vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx 
	= ((0x7fffU & (IData)(vlTOPp->cpu__DOT__calculations__DOT__not_x_after_zx)) 
	   | (0x8000U & ((~ ((IData)(vlTOPp->cpu__DOT__calculations__DOT__x_after_zx) 
			     >> 0xfU)) << 0xfU)));
}

void Vcpu::_eval(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlSymsp->TOP__cpu__DOT__program_counter__DOT__count._sequent__TOP__cpu__DOT__program_counter__DOT__count__4(vlSymsp);
	vlSymsp->TOP__cpu__DOT__d_register._sequent__TOP__cpu__DOT__d_register__5(vlSymsp);
	vlSymsp->TOP__cpu__DOT__a_register._sequent__TOP__cpu__DOT__a_register__6(vlSymsp);
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment._sequent__TOP__cpu__DOT__program_counter__DOT__select_increment__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__23(vlSymsp);
    vlSymsp->TOP__cpu__DOT__select_m_or_a._settle__TOP__cpu__DOT__select_m_or_a__2(vlSymsp);
    vlSymsp->TOP__cpu__DOT__d_register._combo__TOP__cpu__DOT__d_register__10(vlSymsp);
    vlSymsp->TOP__cpu__DOT__a_register._combo__TOP__cpu__DOT__a_register__11(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx._settle__TOP__cpu__DOT__calculations__DOT__mux_x_notx__3(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty._settle__TOP__cpu__DOT__calculations__DOT__mux_y_noty__5(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add__1(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add__2(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add__3(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add__4(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add__5(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add__6(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add__7(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add__8(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add__9(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add__10(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add__11(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add__12(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add__13(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add__14(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add__15(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add__16(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add__17(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add__18(vlSymsp);
    vlTOPp->_settle__TOP__10(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add__19(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add__20(vlSymsp);
    vlTOPp->_settle__TOP__12(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add__21(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add__22(vlSymsp);
    vlTOPp->_settle__TOP__14(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add__23(vlSymsp);
    vlTOPp->_settle__TOP__15(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add__24(vlSymsp);
    vlTOPp->_settle__TOP__16(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add__25(vlSymsp);
    vlTOPp->_settle__TOP__17(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add__26(vlSymsp);
    vlTOPp->_settle__TOP__18(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add__27(vlSymsp);
    vlTOPp->_settle__TOP__19(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add__28(vlSymsp);
    vlTOPp->_settle__TOP__20(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__func._settle__TOP__cpu__DOT__calculations__DOT__func__6(vlSymsp);
    vlTOPp->_settle__TOP__21(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out._settle__TOP__cpu__DOT__calculations__DOT__alu_out__7(vlSymsp);
    vlTOPp->_settle__TOP__22(vlSymsp);
    vlSymsp->TOP__cpu__DOT__choose_address_source._settle__TOP__cpu__DOT__choose_address_source__8(vlSymsp);
    vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load._settle__TOP__cpu__DOT__program_counter__DOT__select_load__9(vlSymsp);
    vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset._settle__TOP__cpu__DOT__program_counter__DOT__select_reset__10(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vcpu::_eval_initial(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval_initial\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__cpu__DOT__program_counter__DOT__count._initial__TOP__cpu__DOT__a_register__3(vlSymsp);
    vlSymsp->TOP__cpu__DOT__d_register._initial__TOP__cpu__DOT__a_register__3(vlSymsp);
    vlSymsp->TOP__cpu__DOT__a_register._initial__TOP__cpu__DOT__a_register__3(vlSymsp);
}

void Vcpu::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::final\n"); );
    // Variables
    Vcpu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcpu::_eval_settle(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval_settle\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__cpu__DOT__program_counter__DOT__count._settle__TOP__cpu__DOT__program_counter__DOT__count__7(vlSymsp);
    vlSymsp->TOP__cpu__DOT__d_register._settle__TOP__cpu__DOT__d_register__8(vlSymsp);
    vlSymsp->TOP__cpu__DOT__a_register._settle__TOP__cpu__DOT__a_register__9(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlSymsp->TOP__cpu__DOT__select_m_or_a._settle__TOP__cpu__DOT__select_m_or_a__2(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx._settle__TOP__cpu__DOT__calculations__DOT__mux_x_notx__3(vlSymsp);
    vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_increment._sequent__TOP__cpu__DOT__program_counter__DOT__select_increment__1(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty._settle__TOP__cpu__DOT__calculations__DOT__mux_y_noty__5(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add__1(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add__2(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add__3(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add__4(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add__5(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add__6(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add__7(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add__8(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add__9(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add__10(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add__11(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add__12(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add__13(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add__14(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add__15(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add__16(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add__17(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add__18(vlSymsp);
    vlTOPp->_settle__TOP__10(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add__19(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add__20(vlSymsp);
    vlTOPp->_settle__TOP__12(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add__21(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add__22(vlSymsp);
    vlTOPp->_settle__TOP__14(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add__23(vlSymsp);
    vlTOPp->_settle__TOP__15(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add__24(vlSymsp);
    vlTOPp->_settle__TOP__16(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add__25(vlSymsp);
    vlTOPp->_settle__TOP__17(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add__26(vlSymsp);
    vlTOPp->_settle__TOP__18(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add__27(vlSymsp);
    vlTOPp->_settle__TOP__19(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add._settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add__28(vlSymsp);
    vlTOPp->_settle__TOP__20(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__func._settle__TOP__cpu__DOT__calculations__DOT__func__6(vlSymsp);
    vlTOPp->_settle__TOP__21(vlSymsp);
    vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out._settle__TOP__cpu__DOT__calculations__DOT__alu_out__7(vlSymsp);
    vlTOPp->_settle__TOP__22(vlSymsp);
    vlSymsp->TOP__cpu__DOT__choose_address_source._settle__TOP__cpu__DOT__choose_address_source__8(vlSymsp);
    vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_load._settle__TOP__cpu__DOT__program_counter__DOT__select_load__9(vlSymsp);
    vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset._settle__TOP__cpu__DOT__program_counter__DOT__select_reset__10(vlSymsp);
}

VL_INLINE_OPT QData Vcpu::_change_request(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_change_request\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcpu::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
}
#endif // VL_DEBUG

void Vcpu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_ctor_var_reset\n"); );
    // Body
    inM = VL_RAND_RESET_I(16);
    instruction = VL_RAND_RESET_I(16);
    reset = VL_RAND_RESET_I(1);
    clock = VL_RAND_RESET_I(1);
    outM = VL_RAND_RESET_I(16);
    writeM = VL_RAND_RESET_I(1);
    addressM = VL_RAND_RESET_I(15);
    pc = VL_RAND_RESET_I(15);
    cpu__DOT__address_from_a_instruction = VL_RAND_RESET_I(16);
    cpu__DOT__should_load_a_register = VL_RAND_RESET_I(1);
    cpu__DOT__alu_out_is_positive = VL_RAND_RESET_I(1);
    cpu__DOT__alu_out_is_not_zero = VL_RAND_RESET_I(1);
    cpu__DOT__calculations__DOT__not_zx_16 = VL_RAND_RESET_I(16);
    cpu__DOT__calculations__DOT__not_zy_16 = VL_RAND_RESET_I(16);
    cpu__DOT__calculations__DOT__x_after_zx = VL_RAND_RESET_I(16);
    cpu__DOT__calculations__DOT__not_x_after_zx = VL_RAND_RESET_I(16);
    cpu__DOT__calculations__DOT__not_y_after_zy = VL_RAND_RESET_I(16);
    cpu__DOT__calculations__DOT__y_after_zy = VL_RAND_RESET_I(16);
    cpu__DOT__calculations__DOT__sum_x_y = VL_RAND_RESET_I(16);
    cpu__DOT__calculations__DOT__x_and_y = VL_RAND_RESET_I(16);
    cpu__DOT__calculations__DOT__not_function_output = VL_RAND_RESET_I(16);
    cpu__DOT__calculations__DOT__sum__DOT__half_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__jump_zero__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__is_c_and_should_jump__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__incremented = VL_RAND_RESET_I(16);
    cpu__DOT__program_counter__DOT__increment__DOT___1_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___2_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___3_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___4_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___5_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___6_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___7_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___8_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___9_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___10_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___11_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___12_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___13_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    cpu__DOT__program_counter__DOT__increment__DOT___14_full_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
}
