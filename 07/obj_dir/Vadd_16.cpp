// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_16.h for the primary calling header

#include "Vadd_16.h"           // For This
#include "Vadd_16__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vadd_16) {
    Vadd_16__Syms* __restrict vlSymsp = __VlSymsp = new Vadd_16__Syms(this, name());
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT__add_16__DOT___1_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___2_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___3_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___4_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___5_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___6_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___7_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___8_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___9_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___10_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___11_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___12_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___13_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___14_full_add, Vadd_16_full_adder);
    VL_CELL (__PVT__add_16__DOT___15_full_add, Vadd_16_full_adder);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vadd_16::__Vconfigure(Vadd_16__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vadd_16::~Vadd_16() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vadd_16::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadd_16::eval\n"); );
    Vadd_16__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vadd_16::_eval_initial_loop(Vadd_16__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vadd_16::_combo__TOP__1(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__1\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xfffeU & (IData)(vlTOPp->out)) 
		   | (1U & ((~ ((~ (IData)(vlTOPp->a)) 
				& (~ (IData)(vlTOPp->b)))) 
			    & (~ ((IData)(vlTOPp->a) 
				  & (IData)(vlTOPp->b))))));
    vlTOPp->add_16__DOT__half_add__DOT__car__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->a) & (IData)(vlTOPp->b))));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__2(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__2\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xfffdU & (IData)(vlTOPp->out)) 
		   | (2U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___1_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				 & (IData)(vlTOPp->add_16__DOT__half_add__DOT__car__DOT__nand_a_b))) 
			     & (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___1_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
				   & (~ (IData)(vlTOPp->add_16__DOT__half_add__DOT__car__DOT__nand_a_b))))) 
			    << 1U)));
    vlTOPp->out = ((0xfffbU & (IData)(vlTOPp->out)) 
		   | (4U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___2_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				 & (~ (IData)(vlSymsp->TOP__add_16__DOT___1_full_add.carry)))) 
			     & (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___2_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
				   & (IData)(vlSymsp->TOP__add_16__DOT___1_full_add.carry)))) 
			    << 2U)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__3(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__3\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xfff7U & (IData)(vlTOPp->out)) 
		   | (8U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___3_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				 & (~ (IData)(vlSymsp->TOP__add_16__DOT___2_full_add.carry)))) 
			     & (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___3_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
				   & (IData)(vlSymsp->TOP__add_16__DOT___2_full_add.carry)))) 
			    << 3U)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__4(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__4\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xffefU & (IData)(vlTOPp->out)) 
		   | (0x10U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___4_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				    & (~ (IData)(vlSymsp->TOP__add_16__DOT___3_full_add.carry)))) 
				& (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___4_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
				      & (IData)(vlSymsp->TOP__add_16__DOT___3_full_add.carry)))) 
			       << 4U)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__5(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__5\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xffdfU & (IData)(vlTOPp->out)) 
		   | (0x20U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___5_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				    & (~ (IData)(vlSymsp->TOP__add_16__DOT___4_full_add.carry)))) 
				& (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___5_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
				      & (IData)(vlSymsp->TOP__add_16__DOT___4_full_add.carry)))) 
			       << 5U)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__6(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__6\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xffbfU & (IData)(vlTOPp->out)) 
		   | (0x40U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___6_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				    & (~ (IData)(vlSymsp->TOP__add_16__DOT___5_full_add.carry)))) 
				& (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___6_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
				      & (IData)(vlSymsp->TOP__add_16__DOT___5_full_add.carry)))) 
			       << 6U)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__7(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__7\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xff7fU & (IData)(vlTOPp->out)) 
		   | (0x80U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___7_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				    & (~ (IData)(vlSymsp->TOP__add_16__DOT___6_full_add.carry)))) 
				& (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___7_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
				      & (IData)(vlSymsp->TOP__add_16__DOT___6_full_add.carry)))) 
			       << 7U)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__8(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__8\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xfeffU & (IData)(vlTOPp->out)) 
		   | (0x100U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___8_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				     & (~ (IData)(vlSymsp->TOP__add_16__DOT___7_full_add.carry)))) 
				 & (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___8_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
				       & (IData)(vlSymsp->TOP__add_16__DOT___7_full_add.carry)))) 
				<< 8U)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__9(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__9\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xfdffU & (IData)(vlTOPp->out)) 
		   | (0x200U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___9_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				     & (~ (IData)(vlSymsp->TOP__add_16__DOT___8_full_add.carry)))) 
				 & (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___9_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
				       & (IData)(vlSymsp->TOP__add_16__DOT___8_full_add.carry)))) 
				<< 9U)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__10(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__10\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xfbffU & (IData)(vlTOPp->out)) 
		   | (0x400U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___10_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				     & (~ (IData)(vlSymsp->TOP__add_16__DOT___9_full_add.carry)))) 
				 & (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___10_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
				       & (IData)(vlSymsp->TOP__add_16__DOT___9_full_add.carry)))) 
				<< 0xaU)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__11(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__11\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xf7ffU & (IData)(vlTOPp->out)) 
		   | (0x800U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___11_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				     & (~ (IData)(vlSymsp->TOP__add_16__DOT___10_full_add.carry)))) 
				 & (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___11_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
				       & (IData)(vlSymsp->TOP__add_16__DOT___10_full_add.carry)))) 
				<< 0xbU)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__12(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__12\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xefffU & (IData)(vlTOPp->out)) 
		   | (0x1000U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___12_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				      & (~ (IData)(vlSymsp->TOP__add_16__DOT___11_full_add.carry)))) 
				  & (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___12_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					& (IData)(vlSymsp->TOP__add_16__DOT___11_full_add.carry)))) 
				 << 0xcU)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__13(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__13\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xdfffU & (IData)(vlTOPp->out)) 
		   | (0x2000U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___13_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				      & (~ (IData)(vlSymsp->TOP__add_16__DOT___12_full_add.carry)))) 
				  & (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___13_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					& (IData)(vlSymsp->TOP__add_16__DOT___12_full_add.carry)))) 
				 << 0xdU)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__14(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__14\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0xbfffU & (IData)(vlTOPp->out)) 
		   | (0x4000U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___14_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				      & (~ (IData)(vlSymsp->TOP__add_16__DOT___13_full_add.carry)))) 
				  & (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___14_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					& (IData)(vlSymsp->TOP__add_16__DOT___13_full_add.carry)))) 
				 << 0xeU)));
}

VL_INLINE_OPT void Vadd_16::_combo__TOP__15(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_combo__TOP__15\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((0x7fffU & (IData)(vlTOPp->out)) 
		   | (0x8000U & (((~ ((IData)(vlSymsp->TOP__add_16__DOT___15_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b) 
				      & (~ (IData)(vlSymsp->TOP__add_16__DOT___14_full_add.carry)))) 
				  & (~ ((~ (IData)(vlSymsp->TOP__add_16__DOT___15_full_add.__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					& (IData)(vlSymsp->TOP__add_16__DOT___14_full_add.carry)))) 
				 << 0xfU)));
}

void Vadd_16::_eval(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_eval\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlSymsp->TOP__add_16__DOT___15_full_add._combo__TOP__add_16__DOT___15_full_add__1(vlSymsp);
    vlSymsp->TOP__add_16__DOT___14_full_add._combo__TOP__add_16__DOT___14_full_add__2(vlSymsp);
    vlSymsp->TOP__add_16__DOT___13_full_add._combo__TOP__add_16__DOT___13_full_add__3(vlSymsp);
    vlSymsp->TOP__add_16__DOT___12_full_add._combo__TOP__add_16__DOT___12_full_add__4(vlSymsp);
    vlSymsp->TOP__add_16__DOT___11_full_add._combo__TOP__add_16__DOT___11_full_add__5(vlSymsp);
    vlSymsp->TOP__add_16__DOT___10_full_add._combo__TOP__add_16__DOT___10_full_add__6(vlSymsp);
    vlSymsp->TOP__add_16__DOT___9_full_add._combo__TOP__add_16__DOT___9_full_add__7(vlSymsp);
    vlSymsp->TOP__add_16__DOT___8_full_add._combo__TOP__add_16__DOT___8_full_add__8(vlSymsp);
    vlSymsp->TOP__add_16__DOT___7_full_add._combo__TOP__add_16__DOT___7_full_add__9(vlSymsp);
    vlSymsp->TOP__add_16__DOT___6_full_add._combo__TOP__add_16__DOT___6_full_add__10(vlSymsp);
    vlSymsp->TOP__add_16__DOT___5_full_add._combo__TOP__add_16__DOT___5_full_add__11(vlSymsp);
    vlSymsp->TOP__add_16__DOT___4_full_add._combo__TOP__add_16__DOT___4_full_add__12(vlSymsp);
    vlSymsp->TOP__add_16__DOT___3_full_add._combo__TOP__add_16__DOT___3_full_add__13(vlSymsp);
    vlSymsp->TOP__add_16__DOT___2_full_add._combo__TOP__add_16__DOT___2_full_add__14(vlSymsp);
    vlSymsp->TOP__add_16__DOT___1_full_add._combo__TOP__add_16__DOT___1_full_add__15(vlSymsp);
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlSymsp->TOP__add_16__DOT___2_full_add._combo__TOP__add_16__DOT___2_full_add__16(vlSymsp);
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlSymsp->TOP__add_16__DOT___3_full_add._combo__TOP__add_16__DOT___3_full_add__17(vlSymsp);
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlSymsp->TOP__add_16__DOT___4_full_add._combo__TOP__add_16__DOT___4_full_add__18(vlSymsp);
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlSymsp->TOP__add_16__DOT___5_full_add._combo__TOP__add_16__DOT___5_full_add__19(vlSymsp);
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlSymsp->TOP__add_16__DOT___6_full_add._combo__TOP__add_16__DOT___6_full_add__20(vlSymsp);
    vlTOPp->_combo__TOP__7(vlSymsp);
    vlSymsp->TOP__add_16__DOT___7_full_add._combo__TOP__add_16__DOT___7_full_add__21(vlSymsp);
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlSymsp->TOP__add_16__DOT___8_full_add._combo__TOP__add_16__DOT___8_full_add__22(vlSymsp);
    vlTOPp->_combo__TOP__9(vlSymsp);
    vlSymsp->TOP__add_16__DOT___9_full_add._combo__TOP__add_16__DOT___9_full_add__23(vlSymsp);
    vlTOPp->_combo__TOP__10(vlSymsp);
    vlSymsp->TOP__add_16__DOT___10_full_add._combo__TOP__add_16__DOT___10_full_add__24(vlSymsp);
    vlTOPp->_combo__TOP__11(vlSymsp);
    vlSymsp->TOP__add_16__DOT___11_full_add._combo__TOP__add_16__DOT___11_full_add__25(vlSymsp);
    vlTOPp->_combo__TOP__12(vlSymsp);
    vlSymsp->TOP__add_16__DOT___12_full_add._combo__TOP__add_16__DOT___12_full_add__26(vlSymsp);
    vlTOPp->_combo__TOP__13(vlSymsp);
    vlSymsp->TOP__add_16__DOT___13_full_add._combo__TOP__add_16__DOT___13_full_add__27(vlSymsp);
    vlTOPp->_combo__TOP__14(vlSymsp);
    vlSymsp->TOP__add_16__DOT___14_full_add._combo__TOP__add_16__DOT___14_full_add__28(vlSymsp);
    vlTOPp->_combo__TOP__15(vlSymsp);
}

void Vadd_16::_eval_initial(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_eval_initial\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vadd_16::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::final\n"); );
    // Variables
    Vadd_16__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vadd_16::_eval_settle(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_eval_settle\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlSymsp->TOP__add_16__DOT___15_full_add._combo__TOP__add_16__DOT___15_full_add__1(vlSymsp);
    vlSymsp->TOP__add_16__DOT___14_full_add._combo__TOP__add_16__DOT___14_full_add__2(vlSymsp);
    vlSymsp->TOP__add_16__DOT___13_full_add._combo__TOP__add_16__DOT___13_full_add__3(vlSymsp);
    vlSymsp->TOP__add_16__DOT___12_full_add._combo__TOP__add_16__DOT___12_full_add__4(vlSymsp);
    vlSymsp->TOP__add_16__DOT___11_full_add._combo__TOP__add_16__DOT___11_full_add__5(vlSymsp);
    vlSymsp->TOP__add_16__DOT___10_full_add._combo__TOP__add_16__DOT___10_full_add__6(vlSymsp);
    vlSymsp->TOP__add_16__DOT___9_full_add._combo__TOP__add_16__DOT___9_full_add__7(vlSymsp);
    vlSymsp->TOP__add_16__DOT___8_full_add._combo__TOP__add_16__DOT___8_full_add__8(vlSymsp);
    vlSymsp->TOP__add_16__DOT___7_full_add._combo__TOP__add_16__DOT___7_full_add__9(vlSymsp);
    vlSymsp->TOP__add_16__DOT___6_full_add._combo__TOP__add_16__DOT___6_full_add__10(vlSymsp);
    vlSymsp->TOP__add_16__DOT___5_full_add._combo__TOP__add_16__DOT___5_full_add__11(vlSymsp);
    vlSymsp->TOP__add_16__DOT___4_full_add._combo__TOP__add_16__DOT___4_full_add__12(vlSymsp);
    vlSymsp->TOP__add_16__DOT___3_full_add._combo__TOP__add_16__DOT___3_full_add__13(vlSymsp);
    vlSymsp->TOP__add_16__DOT___2_full_add._combo__TOP__add_16__DOT___2_full_add__14(vlSymsp);
    vlSymsp->TOP__add_16__DOT___1_full_add._combo__TOP__add_16__DOT___1_full_add__15(vlSymsp);
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlSymsp->TOP__add_16__DOT___2_full_add._combo__TOP__add_16__DOT___2_full_add__16(vlSymsp);
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlSymsp->TOP__add_16__DOT___3_full_add._combo__TOP__add_16__DOT___3_full_add__17(vlSymsp);
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlSymsp->TOP__add_16__DOT___4_full_add._combo__TOP__add_16__DOT___4_full_add__18(vlSymsp);
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlSymsp->TOP__add_16__DOT___5_full_add._combo__TOP__add_16__DOT___5_full_add__19(vlSymsp);
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlSymsp->TOP__add_16__DOT___6_full_add._combo__TOP__add_16__DOT___6_full_add__20(vlSymsp);
    vlTOPp->_combo__TOP__7(vlSymsp);
    vlSymsp->TOP__add_16__DOT___7_full_add._combo__TOP__add_16__DOT___7_full_add__21(vlSymsp);
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlSymsp->TOP__add_16__DOT___8_full_add._combo__TOP__add_16__DOT___8_full_add__22(vlSymsp);
    vlTOPp->_combo__TOP__9(vlSymsp);
    vlSymsp->TOP__add_16__DOT___9_full_add._combo__TOP__add_16__DOT___9_full_add__23(vlSymsp);
    vlTOPp->_combo__TOP__10(vlSymsp);
    vlSymsp->TOP__add_16__DOT___10_full_add._combo__TOP__add_16__DOT___10_full_add__24(vlSymsp);
    vlTOPp->_combo__TOP__11(vlSymsp);
    vlSymsp->TOP__add_16__DOT___11_full_add._combo__TOP__add_16__DOT___11_full_add__25(vlSymsp);
    vlTOPp->_combo__TOP__12(vlSymsp);
    vlSymsp->TOP__add_16__DOT___12_full_add._combo__TOP__add_16__DOT___12_full_add__26(vlSymsp);
    vlTOPp->_combo__TOP__13(vlSymsp);
    vlSymsp->TOP__add_16__DOT___13_full_add._combo__TOP__add_16__DOT___13_full_add__27(vlSymsp);
    vlTOPp->_combo__TOP__14(vlSymsp);
    vlSymsp->TOP__add_16__DOT___14_full_add._combo__TOP__add_16__DOT___14_full_add__28(vlSymsp);
    vlTOPp->_combo__TOP__15(vlSymsp);
}

VL_INLINE_OPT QData Vadd_16::_change_request(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_change_request\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vadd_16::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_eval_debug_assertions\n"); );
}
#endif // VL_DEBUG

void Vadd_16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_16::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(16);
    b = VL_RAND_RESET_I(16);
    out = VL_RAND_RESET_I(16);
    add_16__DOT__half_add__DOT__car__DOT__nand_a_b = VL_RAND_RESET_I(1);
}
