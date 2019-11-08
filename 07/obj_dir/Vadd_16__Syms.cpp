// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vadd_16__Syms.h"
#include "Vadd_16.h"
#include "Vadd_16_full_adder.h"

// FUNCTIONS
Vadd_16__Syms::Vadd_16__Syms(Vadd_16* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__add_16__DOT___10_full_add (Verilated::catName(topp->name(),"add_16._10_full_add"))
	, TOP__add_16__DOT___11_full_add (Verilated::catName(topp->name(),"add_16._11_full_add"))
	, TOP__add_16__DOT___12_full_add (Verilated::catName(topp->name(),"add_16._12_full_add"))
	, TOP__add_16__DOT___13_full_add (Verilated::catName(topp->name(),"add_16._13_full_add"))
	, TOP__add_16__DOT___14_full_add (Verilated::catName(topp->name(),"add_16._14_full_add"))
	, TOP__add_16__DOT___15_full_add (Verilated::catName(topp->name(),"add_16._15_full_add"))
	, TOP__add_16__DOT___1_full_add  (Verilated::catName(topp->name(),"add_16._1_full_add"))
	, TOP__add_16__DOT___2_full_add  (Verilated::catName(topp->name(),"add_16._2_full_add"))
	, TOP__add_16__DOT___3_full_add  (Verilated::catName(topp->name(),"add_16._3_full_add"))
	, TOP__add_16__DOT___4_full_add  (Verilated::catName(topp->name(),"add_16._4_full_add"))
	, TOP__add_16__DOT___5_full_add  (Verilated::catName(topp->name(),"add_16._5_full_add"))
	, TOP__add_16__DOT___6_full_add  (Verilated::catName(topp->name(),"add_16._6_full_add"))
	, TOP__add_16__DOT___7_full_add  (Verilated::catName(topp->name(),"add_16._7_full_add"))
	, TOP__add_16__DOT___8_full_add  (Verilated::catName(topp->name(),"add_16._8_full_add"))
	, TOP__add_16__DOT___9_full_add  (Verilated::catName(topp->name(),"add_16._9_full_add"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__add_16__DOT___10_full_add  = &TOP__add_16__DOT___10_full_add;
    TOPp->__PVT__add_16__DOT___11_full_add  = &TOP__add_16__DOT___11_full_add;
    TOPp->__PVT__add_16__DOT___12_full_add  = &TOP__add_16__DOT___12_full_add;
    TOPp->__PVT__add_16__DOT___13_full_add  = &TOP__add_16__DOT___13_full_add;
    TOPp->__PVT__add_16__DOT___14_full_add  = &TOP__add_16__DOT___14_full_add;
    TOPp->__PVT__add_16__DOT___15_full_add  = &TOP__add_16__DOT___15_full_add;
    TOPp->__PVT__add_16__DOT___1_full_add  = &TOP__add_16__DOT___1_full_add;
    TOPp->__PVT__add_16__DOT___2_full_add  = &TOP__add_16__DOT___2_full_add;
    TOPp->__PVT__add_16__DOT___3_full_add  = &TOP__add_16__DOT___3_full_add;
    TOPp->__PVT__add_16__DOT___4_full_add  = &TOP__add_16__DOT___4_full_add;
    TOPp->__PVT__add_16__DOT___5_full_add  = &TOP__add_16__DOT___5_full_add;
    TOPp->__PVT__add_16__DOT___6_full_add  = &TOP__add_16__DOT___6_full_add;
    TOPp->__PVT__add_16__DOT___7_full_add  = &TOP__add_16__DOT___7_full_add;
    TOPp->__PVT__add_16__DOT___8_full_add  = &TOP__add_16__DOT___8_full_add;
    TOPp->__PVT__add_16__DOT___9_full_add  = &TOP__add_16__DOT___9_full_add;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__add_16__DOT___10_full_add.__Vconfigure(this, true);
    TOP__add_16__DOT___11_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___12_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___13_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___14_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___15_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___1_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___2_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___3_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___4_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___5_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___6_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___7_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___8_full_add.__Vconfigure(this, false);
    TOP__add_16__DOT___9_full_add.__Vconfigure(this, false);
}
