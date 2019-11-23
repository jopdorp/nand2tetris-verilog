`include "cpu.sv"
`include "screen_8K.sv"
`include "rom_32K.sv"
`include "../03/ram_16K_optimized.sv"
`ifndef mux_4_way_16
  `include "../01/mux_4_way_16.sv"
`endif
`ifndef dmux
  `include "../01/dmux.sv"
`endif

`define computer 1

module computer(
    input  reset,
    input clock
);
  wire [15:0] screenToCpu;
  wire writeM /*verilator public*/;
  wire writeScreen /*verilator public*/;
  wire writeRam /*verilator public*/;

  dmux ram_screen_dmux(writeM, addressM[14], writeRam, writeScreen);

  screen_8K screen(cpuValueToMemory, addressM[12:0], writeScreen, clock, screenToCpu);
  
  wire [15:0] pc /*verilator public*/;
  wire [15:0] instruction /*verilator public*/;
  rom_32K rom(pc[14:0], instruction);

  wire [15:0] cpuValueToMemory /*verilator public*/;
  wire [15:0] memoryToCpu;
  wire [15:0] addressM /*verilator public*/;
  ram_16K_optimized ram(cpuValueToMemory, addressM[13:0], writeRam, clock, memoryToCpu);

  
  reg [15:0] scancode /*verilator public*/;
  wire [15:0] value_to_cpu /*verilator public*/;
  mux_4_way_16 select_value_to_cpu(memoryToCpu, memoryToCpu, screenToCpu, scancode, addressM[14:13], value_to_cpu);
  
  cpu cpu(value_to_cpu,
    instruction,
    reset,
    clock,
    cpuValueToMemory,
    writeM,
    addressM,
    pc);
endmodule