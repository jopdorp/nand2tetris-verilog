`include "./cpu_jopdorp_optimized.sv"
`include "rom_32K.sv"
`include "memory.sv"

`define computer 1

module computer(
    input  reset,
    input clock
);
  wire writeM;

  wire [15:0] cpuValueToMemory;
  
  wire [14:0] pc;
  wire [14:0] addressM;
  wire [15:0] instruction;
  wire [15:0] value_to_cpu;
  

  /* verilator lint_off UNUSED */
  reg[15:0] scancode /*verilator public*/;
  /* verilator lint_off UNDRIVEN */
  wire clk_vid;
  /* verilator lint_off UNUSED */
  wire r, g, b, hsync, vsync, display_on;
  /* verilator lint_off UNUSED */
  wire [9:0] hpos, vpos;

  memory memory(reset, cpuValueToMemory, !clock, writeM, addressM, value_to_cpu, scancode, clk_vid, r, g, b, hsync, vsync, display_on, hpos, vpos);

  rom_32K rom(pc, instruction);

  cpu_jopdorp_optimized cpu(value_to_cpu,
    instruction,
    reset,
    clock,
    cpuValueToMemory,
    writeM,
    addressM,
    pc);
endmodule