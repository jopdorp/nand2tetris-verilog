`ifndef mux_16
  `include "mux_16.sv"
`endif
`define mux_4_way_16 1

/**
 * 4-way 16-bit multiplexor.  
 * out = a if sel==00
 *       b if sel==01
 *       c if sel==10
 *       d if sel==11
 */
 
module mux_4_way_16(
    input  [15:0] a,
    input  [15:0] b,
    input  [15:0] c,
    input  [15:0] d,
    input  [1:0]  select,
    output [15:0] out
);

    // Put your code here

endmodule
