`ifndef full_adder
   `include "full_adder.sv"
`endif
`define add_16 1

/*
 * Adds two 16-bit values.
 * The most significant carry bit is ignored.
 */
 
module add_16(
    input  [15:0] a,
    input  [15:0] b,
    output [15:0] out
);

    // Put your code here
    
endmodule