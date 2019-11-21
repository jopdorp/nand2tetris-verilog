// `include "cpu.sv"
// `include "rom_32K.sv"
// `include "Memory.sv"


// `define computer 1

`include "cpu.sv"
`include "screen_8K.sv"
`include "rom_32K.sv"
`include "../03/ram_16K_optimized.sv"
`ifndef mux_16
  `include "../01/mux_16.sv"
`endif

`define computer 1

module computer(
    input  reset,
    input clock
);
  wire writeM;
  wire [15:0] screenToCpu;
  wire writeScreen = addressM[14] && writeM;

  screen_8K screen(cpuValueToMemory, addressM[12:0], writeScreen, clock, screenToCpu);
  
  wire [14:0] pc;
  wire [15:0] instruction;
  rom_32K rom(pc, instruction);

  wire [15:0] cpuValueToMemory;
  wire [15:0] memoryToCpu;
  wire [14:0] addressM;
  wire writeRam = addressM[14] && writeM;
  ram_16K_optimized ram(cpuValueToMemory, addressM[13:0], writeRam, clock, memoryToCpu);

  
  wire [15:0] value_ram_or_screen;
  mux_16 select_ram_or_screen(memoryToCpu, screenToCpu, addressM[14], value_ram_or_screen);
  
  wire [15:0] value_to_cpu;
  wire keyboard_selected = addressM == 15'b110000000000000;
  reg [15:0] scancode /*verilator public*/;
  mux_16 select_memory_or_keyboard(value_ram_or_screen, scancode, keyboard_selected, value_to_cpu);

  cpu cpu(value_to_cpu,
    instruction,
    reset,
    clock,
    cpuValueToMemory,
    writeM,
    addressM,
    pc);
endmodule