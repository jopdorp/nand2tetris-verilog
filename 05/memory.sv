`ifndef mux_16
  `include "../01/mux_16.sv"
`endif
`include "../03/ram_16K_optimized.sv"
`include "screen_8K.sv"

module memory(input[15:0] in, input clock, load, input[14:0] address, output[15:0] out);
  reg [15:0] scancode /*verilator public*/;

    // Put your code here

endmodule