`ifndef or_8_way
  `include "../01/or_8_way.sv"
`endif
`ifndef mux_16
  `include "../01/mux_16.sv"
`endif
`ifndef add_16
  `include "add_16.sv"
`endif
`ifndef and_16
  `include "and_16.sv"
`endif
`ifndef not_16
  `include "not_16.sv"
`endif
`define alu 1

module alu(
    input  [15:0] x,
    input  [15:0] y,
    input         zx,
    input         nx,
    input         zy,
    input         ny,
    input         f,
    input         no,
    output [15:0] out,
    output        zr,
    output        ng
);
   
       // Put your code here

endmodule
