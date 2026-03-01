`ifndef bit_n2t
    `include "bit_n2t.sv"
`endif
`define register_n2t 1

/**
 * 16-Bit register. 
 * If load[t-1]=1 then out[t] = in[t-1]
 * else out does not change (out[t] = out[t-1])
 */
 
module register_n2t(
    input  [15:0] in,
    input         load,
    input         clk,
    output [15:0] out
);

    // Put your code here

endmodule