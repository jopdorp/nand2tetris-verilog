// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_16.h for the primary calling header

#include "Vadd_16_full_adder.h" // For This
#include "Vadd_16__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vadd_16_full_adder) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vadd_16_full_adder::__Vconfigure(Vadd_16__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vadd_16_full_adder::~Vadd_16_full_adder() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___1_full_add__15(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___1_full_add__15\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 1U)) 
			& (~ ((IData)(vlTOPp->b) >> 1U)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 1U)))));
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 1U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (~ (IData)(vlTOPp->add_16__DOT__half_add__DOT__car__DOT__nand_a_b)))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___2_full_add__14(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___2_full_add__14\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 2U)) 
			& (~ ((IData)(vlTOPp->b) >> 2U)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 2U)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___2_full_add__16(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___2_full_add__16\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 2U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__add_16__DOT___1_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___3_full_add__13(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___3_full_add__13\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 3U)) 
			& (~ ((IData)(vlTOPp->b) >> 3U)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 3U)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___3_full_add__17(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___3_full_add__17\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 3U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__add_16__DOT___2_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___4_full_add__12(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___4_full_add__12\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 4U)) 
			& (~ ((IData)(vlTOPp->b) >> 4U)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 4U)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___4_full_add__18(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___4_full_add__18\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 4U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__add_16__DOT___3_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___5_full_add__11(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___5_full_add__11\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 5U)) 
			& (~ ((IData)(vlTOPp->b) >> 5U)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 5U)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___5_full_add__19(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___5_full_add__19\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 5U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__add_16__DOT___4_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___6_full_add__10(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___6_full_add__10\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 6U)) 
			& (~ ((IData)(vlTOPp->b) >> 6U)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 6U)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___6_full_add__20(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___6_full_add__20\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 6U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__add_16__DOT___5_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___7_full_add__9(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___7_full_add__9\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 7U)) 
			& (~ ((IData)(vlTOPp->b) >> 7U)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 7U)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___7_full_add__21(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___7_full_add__21\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 7U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__add_16__DOT___6_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___8_full_add__8(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___8_full_add__8\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 8U)) 
			& (~ ((IData)(vlTOPp->b) >> 8U)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 8U)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___8_full_add__22(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___8_full_add__22\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 8U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__add_16__DOT___7_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___9_full_add__7(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___9_full_add__7\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 9U)) 
			& (~ ((IData)(vlTOPp->b) >> 9U)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 9U)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___9_full_add__23(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___9_full_add__23\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 9U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__add_16__DOT___8_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___10_full_add__6(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___10_full_add__6\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 0xaU)) 
			& (~ ((IData)(vlTOPp->b) >> 0xaU)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 0xaU)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___10_full_add__24(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___10_full_add__24\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 0xaU)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
						& (IData)(vlSymsp->TOP__add_16__DOT___9_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___11_full_add__5(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___11_full_add__5\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 0xbU)) 
			& (~ ((IData)(vlTOPp->b) >> 0xbU)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 0xbU)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___11_full_add__25(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___11_full_add__25\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 0xbU)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
						& (IData)(vlSymsp->TOP__add_16__DOT___10_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___12_full_add__4(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___12_full_add__4\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 0xcU)) 
			& (~ ((IData)(vlTOPp->b) >> 0xcU)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 0xcU)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___12_full_add__26(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___12_full_add__26\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 0xcU)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
						& (IData)(vlSymsp->TOP__add_16__DOT___11_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___13_full_add__3(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___13_full_add__3\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 0xdU)) 
			& (~ ((IData)(vlTOPp->b) >> 0xdU)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 0xdU)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___13_full_add__27(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___13_full_add__27\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 0xdU)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
						& (IData)(vlSymsp->TOP__add_16__DOT___12_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___14_full_add__2(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___14_full_add__2\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 0xeU)) 
			& (~ ((IData)(vlTOPp->b) >> 0xeU)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 0xeU)))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___14_full_add__28(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___14_full_add__28\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlTOPp->a) 
				 & (IData)(vlTOPp->b)) 
				>> 0xeU)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
						& (IData)(vlSymsp->TOP__add_16__DOT___13_full_add.carry))))));
}

VL_INLINE_OPT void Vadd_16_full_adder::_combo__TOP__add_16__DOT___15_full_add__1(Vadd_16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_combo__TOP__add_16__DOT___15_full_add__1\n"); );
    Vadd_16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlTOPp->a) >> 0xfU)) 
			& (~ ((IData)(vlTOPp->b) >> 0xfU)))) 
		    & (~ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
			  >> 0xfU)))));
}

void Vadd_16_full_adder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadd_16_full_adder::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    carry = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(1);
    __PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b = VL_RAND_RESET_I(1);
}
