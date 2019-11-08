// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcpu__Syms.h"
#include "Vcpu.h"
#include "Vcpu_mux_16.h"
#include "Vcpu_register_n2t.h"
#include "Vcpu_full_adder.h"

// FUNCTIONS
Vcpu__Syms::Vcpu__Syms(Vcpu* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__cpu__DOT__a_register      (Verilated::catName(topp->name(),"cpu.a_register"))
	, TOP__cpu__DOT__calculations__DOT__alu_out (Verilated::catName(topp->name(),"cpu.calculations.alu_out"))
	, TOP__cpu__DOT__calculations__DOT__func (Verilated::catName(topp->name(),"cpu.calculations.func"))
	, TOP__cpu__DOT__calculations__DOT__mux_x_notx (Verilated::catName(topp->name(),"cpu.calculations.mux_x_notx"))
	, TOP__cpu__DOT__calculations__DOT__mux_y_noty (Verilated::catName(topp->name(),"cpu.calculations.mux_y_noty"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._10_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._11_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._12_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._13_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._14_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._15_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._1_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._2_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._3_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._4_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._5_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._6_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._7_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._8_full_add"))
	, TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add (Verilated::catName(topp->name(),"cpu.calculations.sum._9_full_add"))
	, TOP__cpu__DOT__choose_address_source (Verilated::catName(topp->name(),"cpu.choose_address_source"))
	, TOP__cpu__DOT__d_register      (Verilated::catName(topp->name(),"cpu.d_register"))
	, TOP__cpu__DOT__program_counter__DOT__count (Verilated::catName(topp->name(),"cpu.program_counter.count"))
	, TOP__cpu__DOT__program_counter__DOT__select_increment (Verilated::catName(topp->name(),"cpu.program_counter.select_increment"))
	, TOP__cpu__DOT__program_counter__DOT__select_load (Verilated::catName(topp->name(),"cpu.program_counter.select_load"))
	, TOP__cpu__DOT__program_counter__DOT__select_reset (Verilated::catName(topp->name(),"cpu.program_counter.select_reset"))
	, TOP__cpu__DOT__select_m_or_a   (Verilated::catName(topp->name(),"cpu.select_m_or_a"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__cpu__DOT__a_register  = &TOP__cpu__DOT__a_register;
    TOPp->__PVT__cpu__DOT__calculations__DOT__alu_out  = &TOP__cpu__DOT__calculations__DOT__alu_out;
    TOPp->__PVT__cpu__DOT__calculations__DOT__func  = &TOP__cpu__DOT__calculations__DOT__func;
    TOPp->__PVT__cpu__DOT__calculations__DOT__mux_x_notx  = &TOP__cpu__DOT__calculations__DOT__mux_x_notx;
    TOPp->__PVT__cpu__DOT__calculations__DOT__mux_y_noty  = &TOP__cpu__DOT__calculations__DOT__mux_y_noty;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___10_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___11_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___12_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___13_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___14_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___15_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___1_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___2_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___3_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___4_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___5_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___6_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___7_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___8_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add;
    TOPp->__PVT__cpu__DOT__calculations__DOT__sum__DOT___9_full_add  = &TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add;
    TOPp->__PVT__cpu__DOT__choose_address_source  = &TOP__cpu__DOT__choose_address_source;
    TOPp->__PVT__cpu__DOT__d_register  = &TOP__cpu__DOT__d_register;
    TOPp->__PVT__cpu__DOT__program_counter__DOT__count  = &TOP__cpu__DOT__program_counter__DOT__count;
    TOPp->__PVT__cpu__DOT__program_counter__DOT__select_increment  = &TOP__cpu__DOT__program_counter__DOT__select_increment;
    TOPp->__PVT__cpu__DOT__program_counter__DOT__select_load  = &TOP__cpu__DOT__program_counter__DOT__select_load;
    TOPp->__PVT__cpu__DOT__program_counter__DOT__select_reset  = &TOP__cpu__DOT__program_counter__DOT__select_reset;
    TOPp->__PVT__cpu__DOT__select_m_or_a  = &TOP__cpu__DOT__select_m_or_a;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__cpu__DOT__a_register.__Vconfigure(this, true);
    TOP__cpu__DOT__calculations__DOT__alu_out.__Vconfigure(this, true);
    TOP__cpu__DOT__calculations__DOT__func.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__mux_x_notx.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__mux_y_noty.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___10_full_add.__Vconfigure(this, true);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___11_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___12_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___13_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___14_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___15_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___1_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___2_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___3_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___4_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___5_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___6_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___7_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___8_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__calculations__DOT__sum__DOT___9_full_add.__Vconfigure(this, false);
    TOP__cpu__DOT__choose_address_source.__Vconfigure(this, false);
    TOP__cpu__DOT__d_register.__Vconfigure(this, false);
    TOP__cpu__DOT__program_counter__DOT__count.__Vconfigure(this, false);
    TOP__cpu__DOT__program_counter__DOT__select_increment.__Vconfigure(this, false);
    TOP__cpu__DOT__program_counter__DOT__select_load.__Vconfigure(this, false);
    TOP__cpu__DOT__program_counter__DOT__select_reset.__Vconfigure(this, false);
    TOP__cpu__DOT__select_m_or_a.__Vconfigure(this, false);
}
