// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu_full_adder.h"   // For This
#include "Vcpu__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_full_adder) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_full_adder::__Vconfigure(Vcpu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_full_adder::~Vcpu_full_adder() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add__15(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add__15\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 1U)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					  >> 1U)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 1U)))));
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 1U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (~ (IData)(vlTOPp->cpu__DOT__calculations__DOT__sum__DOT__half_add__DOT__car__DOT__nand_a_b)))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add__14(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add__14\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 2U)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					  >> 2U)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 2U)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add__16(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add__16\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 2U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add__13(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add__13\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 3U)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					  >> 3U)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 3U)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add__17(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add__17\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 3U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add__12(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add__12\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 4U)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					  >> 4U)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 4U)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add__18(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add__18\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 4U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add__11(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add__11\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 5U)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					  >> 5U)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 5U)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add__19(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add__19\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 5U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add__10(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add__10\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 6U)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					  >> 6U)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 6U)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add__20(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add__20\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 6U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add__9(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add__9\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 7U)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					  >> 7U)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 7U)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add__21(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add__21\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 7U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add__8(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add__8\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 8U)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					  >> 8U)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 8U)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add__22(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add__22\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 8U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add__7(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add__7\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 9U)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					  >> 9U)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 9U)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add__23(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add__23\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 9U)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
					      & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add__6(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add__6\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 0xaU)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					    >> 0xaU)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 0xaU)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add__24(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add__24\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 0xaU)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
						& (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add__5(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add__5\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 0xbU)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					    >> 0xbU)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 0xbU)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add__25(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add__25\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 0xbU)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
						& (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add__4(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add__4\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 0xcU)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					    >> 0xcU)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 0xcU)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add__26(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add__26\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 0xcU)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
						& (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add__3(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add__3\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 0xdU)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					    >> 0xdU)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 0xdU)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add__27(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add__27\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 0xdU)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
						& (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add__2(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add__2\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 0xeU)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					    >> 0xeU)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 0xeU)))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add__28(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add__28\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->carry = (1U & (~ ((~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
				 & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
				>> 0xeU)) & (~ ((~ (IData)(this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b)) 
						& (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add.carry))))));
}

VL_INLINE_OPT void Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add__1(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_settle__TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add__1\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b 
	= (1U & (~ ((~ ((~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			    >> 0xfU)) & (~ ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out) 
					    >> 0xfU)))) 
		    & (~ (((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_y_noty.out) 
			   & (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__mux_x_notx.out)) 
			  >> 0xfU)))));
}

void Vcpu_full_adder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcpu_full_adder::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    carry = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(1);
    __PVT__sum_ab__DOT__add__DOT__xor_n2t__DOT__nand_a_b = VL_RAND_RESET_I(1);
}
