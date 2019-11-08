// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu_register_n2t.h" // For This
#include "Vcpu__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_register_n2t) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_register_n2t::__Vconfigure(Vcpu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_register_n2t::~Vcpu_register_n2t() {
}

//--------------------
// Internal Methods

void Vcpu_register_n2t::_initial__TOP__cpu__DOT__a_register__3(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_register_n2t::_initial__TOP__cpu__DOT__a_register__3\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at dff.sv:1
    this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
    // INITIAL at dff.sv:1
    this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4 = 0U;
}

VL_INLINE_OPT void Vcpu_register_n2t::_sequent__TOP__cpu__DOT__a_register__6(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_register_n2t::_sequent__TOP__cpu__DOT__a_register__6\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& (IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out))) 
		    & (IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 1U))) & (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 2U))) & (IData)(this->__PVT__genblk1__BRA__2__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 3U))) & (IData)(this->__PVT__genblk1__BRA__3__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 4U))) & (IData)(this->__PVT__genblk1__BRA__4__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 5U))) & (IData)(this->__PVT__genblk1__BRA__5__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 6U))) & (IData)(this->__PVT__genblk1__BRA__6__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 7U))) & (IData)(this->__PVT__genblk1__BRA__7__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 8U))) & (IData)(this->__PVT__genblk1__BRA__8__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 9U))) & (IData)(this->__PVT__genblk1__BRA__9__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 0xaU))) & (IData)(this->__PVT__genblk1__BRA__10__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 0xbU))) & (IData)(this->__PVT__genblk1__BRA__11__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 0xcU))) & (IData)(this->__PVT__genblk1__BRA__12__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 0xdU))) & (IData)(this->__PVT__genblk1__BRA__13__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 0xeU))) & (IData)(this->__PVT__genblk1__BRA__14__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((IData)(vlTOPp->cpu__DOT__should_load_a_register) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__choose_address_source.out) 
			   >> 0xfU))) & (IData)(this->__PVT__genblk1__BRA__15__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    this->out = ((0xfffeU & (IData)(this->out)) | (IData)(this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4));
    this->out = ((0xfffdU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 1U));
    this->out = ((0xfffbU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 2U));
    this->out = ((0xfff7U & (IData)(this->out)) | ((IData)(this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 3U));
    this->out = ((0xffefU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 4U));
    this->out = ((0xffdfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 5U));
    this->out = ((0xffbfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 6U));
    this->out = ((0xff7fU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 7U));
    this->out = ((0xfeffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 8U));
    this->out = ((0xfdffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 9U));
    this->out = ((0xfbffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xaU));
    this->out = ((0xf7ffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xbU));
    this->out = ((0xefffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xcU));
    this->out = ((0xdfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xdU));
    this->out = ((0xbfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xeU));
    this->out = ((0x7fffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xfU));
}

void Vcpu_register_n2t::_settle__TOP__cpu__DOT__a_register__9(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_register_n2t::_settle__TOP__cpu__DOT__a_register__9\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__BRA__0__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfffeU & (IData)(this->out)) | (IData)(this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4));
    this->__PVT__genblk1__BRA__1__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfffdU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 1U));
    this->__PVT__genblk1__BRA__2__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfffbU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 2U));
    this->__PVT__genblk1__BRA__3__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfff7U & (IData)(this->out)) | ((IData)(this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 3U));
    this->__PVT__genblk1__BRA__4__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xffefU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 4U));
    this->__PVT__genblk1__BRA__5__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xffdfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 5U));
    this->__PVT__genblk1__BRA__6__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xffbfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 6U));
    this->__PVT__genblk1__BRA__7__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xff7fU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 7U));
    this->__PVT__genblk1__BRA__8__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfeffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 8U));
    this->__PVT__genblk1__BRA__9__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfdffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 9U));
    this->__PVT__genblk1__BRA__10__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfbffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xaU));
    this->__PVT__genblk1__BRA__11__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xf7ffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xbU));
    this->__PVT__genblk1__BRA__12__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xefffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xcU));
    this->__PVT__genblk1__BRA__13__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xdfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xdU));
    this->__PVT__genblk1__BRA__14__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xbfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xeU));
    this->__PVT__genblk1__BRA__15__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0x7fffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xfU));
}

VL_INLINE_OPT void Vcpu_register_n2t::_combo__TOP__cpu__DOT__a_register__11(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_register_n2t::_combo__TOP__cpu__DOT__a_register__11\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__BRA__0__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__1__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__2__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__3__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__4__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__5__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__6__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__7__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__8__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__9__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__10__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__11__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__12__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__13__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__14__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__15__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((~ (IData)(vlTOPp->cpu__DOT__should_load_a_register)) 
		    & (IData)(this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
}

VL_INLINE_OPT void Vcpu_register_n2t::_sequent__TOP__cpu__DOT__d_register__5(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_register_n2t::_sequent__TOP__cpu__DOT__d_register__5\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& (IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out))) 
		    & (IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 1U))) & (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 2U))) & (IData)(this->__PVT__genblk1__BRA__2__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 3U))) & (IData)(this->__PVT__genblk1__BRA__3__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 4U))) & (IData)(this->__PVT__genblk1__BRA__4__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 5U))) & (IData)(this->__PVT__genblk1__BRA__5__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 6U))) & (IData)(this->__PVT__genblk1__BRA__6__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 7U))) & (IData)(this->__PVT__genblk1__BRA__7__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 8U))) & (IData)(this->__PVT__genblk1__BRA__8__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 9U))) & (IData)(this->__PVT__genblk1__BRA__9__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 0xaU))) & (IData)(this->__PVT__genblk1__BRA__10__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 0xbU))) & (IData)(this->__PVT__genblk1__BRA__11__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 0xcU))) & (IData)(this->__PVT__genblk1__BRA__12__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 0xdU))) & (IData)(this->__PVT__genblk1__BRA__13__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 0xeU))) & (IData)(this->__PVT__genblk1__BRA__14__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (~ ((~ ((~ (IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b)) 
			& ((IData)(vlSymsp->TOP__cpu__DOT__calculations__DOT__alu_out.out) 
			   >> 0xfU))) & (IData)(this->__PVT__genblk1__BRA__15__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b))));
    this->out = ((0xfffeU & (IData)(this->out)) | (IData)(this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4));
    this->out = ((0xfffdU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 1U));
    this->out = ((0xfffbU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 2U));
    this->out = ((0xfff7U & (IData)(this->out)) | ((IData)(this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 3U));
    this->out = ((0xffefU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 4U));
    this->out = ((0xffdfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 5U));
    this->out = ((0xffbfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 6U));
    this->out = ((0xff7fU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 7U));
    this->out = ((0xfeffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 8U));
    this->out = ((0xfdffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 9U));
    this->out = ((0xfbffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xaU));
    this->out = ((0xf7ffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xbU));
    this->out = ((0xefffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xcU));
    this->out = ((0xdfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xdU));
    this->out = ((0xbfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xeU));
    this->out = ((0x7fffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xfU));
}

void Vcpu_register_n2t::_settle__TOP__cpu__DOT__d_register__8(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_register_n2t::_settle__TOP__cpu__DOT__d_register__8\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__BRA__0__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfffeU & (IData)(this->out)) | (IData)(this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4));
    this->__PVT__genblk1__BRA__1__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfffdU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 1U));
    this->__PVT__genblk1__BRA__2__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfffbU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 2U));
    this->__PVT__genblk1__BRA__3__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfff7U & (IData)(this->out)) | ((IData)(this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 3U));
    this->__PVT__genblk1__BRA__4__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xffefU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 4U));
    this->__PVT__genblk1__BRA__5__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xffdfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 5U));
    this->__PVT__genblk1__BRA__6__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xffbfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 6U));
    this->__PVT__genblk1__BRA__7__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xff7fU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 7U));
    this->__PVT__genblk1__BRA__8__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfeffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 8U));
    this->__PVT__genblk1__BRA__9__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfdffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 9U));
    this->__PVT__genblk1__BRA__10__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xfbffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xaU));
    this->__PVT__genblk1__BRA__11__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xf7ffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xbU));
    this->__PVT__genblk1__BRA__12__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xefffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xcU));
    this->__PVT__genblk1__BRA__13__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xdfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xdU));
    this->__PVT__genblk1__BRA__14__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0xbfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xeU));
    this->__PVT__genblk1__BRA__15__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->out = ((0x7fffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xfU));
}

VL_INLINE_OPT void Vcpu_register_n2t::_combo__TOP__cpu__DOT__d_register__10(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_register_n2t::_combo__TOP__cpu__DOT__d_register__10\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__BRA__0__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__1__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__2__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__3__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__4__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__5__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__6__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__7__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__8__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__9__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__10__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__11__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__12__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__13__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__14__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
    this->__PVT__genblk1__BRA__15__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b 
	= (1U & (~ ((IData)(vlTOPp->cpu__DOT__c_instruction_and_dest_d__DOT__nand_a_b) 
		    & (IData)(this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4))));
}

VL_INLINE_OPT void Vcpu_register_n2t::_sequent__TOP__cpu__DOT__program_counter__DOT__count__4(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_register_n2t::_sequent__TOP__cpu__DOT__program_counter__DOT__count__4\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & (IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 1U));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 2U));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 3U));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 4U));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 5U));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 6U));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 7U));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 8U));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 9U));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 0xaU));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 0xbU));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 0xcU));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 0xdU));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 0xeU));
    // ALWAYS at dff.sv:2
    this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4 
	= (1U & ((IData)(vlSymsp->TOP__cpu__DOT__program_counter__DOT__select_reset.out) 
		 >> 0xfU));
    this->out = ((0xfffeU & (IData)(this->out)) | (IData)(this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4));
    this->out = ((0xfffdU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 1U));
    this->out = ((0xfffbU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 2U));
    this->out = ((0xfff7U & (IData)(this->out)) | ((IData)(this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 3U));
    this->out = ((0xffefU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 4U));
    this->out = ((0xffdfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 5U));
    this->out = ((0xffbfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 6U));
    this->out = ((0xff7fU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 7U));
    this->out = ((0xfeffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 8U));
    this->out = ((0xfdffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 9U));
    this->out = ((0xfbffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xaU));
    this->out = ((0xf7ffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xbU));
    this->out = ((0xefffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xcU));
    this->out = ((0xdfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xdU));
    this->out = ((0xbfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xeU));
    this->out = ((0x7fffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xfU));
}

void Vcpu_register_n2t::_settle__TOP__cpu__DOT__program_counter__DOT__count__7(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_register_n2t::_settle__TOP__cpu__DOT__program_counter__DOT__count__7\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0xfffeU & (IData)(this->out)) | (IData)(this->genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4));
    this->out = ((0xfffdU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 1U));
    this->out = ((0xfffbU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 2U));
    this->out = ((0xfff7U & (IData)(this->out)) | ((IData)(this->genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 3U));
    this->out = ((0xffefU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 4U));
    this->out = ((0xffdfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 5U));
    this->out = ((0xffbfU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 6U));
    this->out = ((0xff7fU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 7U));
    this->out = ((0xfeffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 8U));
    this->out = ((0xfdffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 9U));
    this->out = ((0xfbffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xaU));
    this->out = ((0xf7ffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xbU));
    this->out = ((0xefffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xcU));
    this->out = ((0xdfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xdU));
    this->out = ((0xbfffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xeU));
    this->out = ((0x7fffU & (IData)(this->out)) | ((IData)(this->genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4) 
						   << 0xfU));
}

void Vcpu_register_n2t::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcpu_register_n2t::_ctor_var_reset\n"); );
    // Body
    in = VL_RAND_RESET_I(16);
    load = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(16);
    genblk1__BRA__0__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT____Vcellout__bit_n2t____pinNumber4 = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__0__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__1__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__2__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__3__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__4__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__5__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__6__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__7__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__8__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__9__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__10__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__11__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__12__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__13__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__14__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__15__KET____DOT__bit_n2t__DOT__mux_load__DOT__not_sel_not_a__DOT__nand_a_b = VL_RAND_RESET_I(1);
}
