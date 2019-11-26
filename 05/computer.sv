`include "./cpu_jopdorp_optimized.sv"
`include "rom_32K.sv"
`include "memory.sv"

`define computer 1

module computer(
    input  reset,
    input clock
);

  // Put your code here, hint: memory uses !clock.
  // memory must be named memory, it has integration in the verilator compile script: memory memory(...
  // rom_32K must be named rom, it has integration in the verilator compile script: rom_32K rom(...

endmodule