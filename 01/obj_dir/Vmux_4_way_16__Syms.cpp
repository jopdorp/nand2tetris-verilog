// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmux_4_way_16__Syms.h"
#include "Vmux_4_way_16.h"
#include "Vmux_4_way_16_mux_16.h"

// FUNCTIONS
Vmux_4_way_16__Syms::Vmux_4_way_16__Syms(Vmux_4_way_16* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__mux_4_way_16__DOT__mux_16_ab (Verilated::catName(topp->name(),"mux_4_way_16.mux_16_ab"))
	, TOP__mux_4_way_16__DOT__mux_16_cb (Verilated::catName(topp->name(),"mux_4_way_16.mux_16_cb"))
	, TOP__mux_4_way_16__DOT__mux_combined (Verilated::catName(topp->name(),"mux_4_way_16.mux_combined"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__mux_4_way_16__DOT__mux_16_ab  = &TOP__mux_4_way_16__DOT__mux_16_ab;
    TOPp->__PVT__mux_4_way_16__DOT__mux_16_cb  = &TOP__mux_4_way_16__DOT__mux_16_cb;
    TOPp->__PVT__mux_4_way_16__DOT__mux_combined  = &TOP__mux_4_way_16__DOT__mux_combined;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__mux_4_way_16__DOT__mux_16_ab.__Vconfigure(this, true);
    TOP__mux_4_way_16__DOT__mux_16_cb.__Vconfigure(this, false);
    TOP__mux_4_way_16__DOT__mux_combined.__Vconfigure(this, false);
}
