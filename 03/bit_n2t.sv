`ifndef mux
    `include "../01/mux.sv"
`endif
`ifndef dff
    `include "dff.sv"
`endif
`define bit_n2t 1

/**
 * 1-bit register.
 * If load[t] == 1 then out[t+1] = in[t]
 *                 else out[t+1] = out[t] (no change)
 */
 
module bit_n2t(
    input  in,
    input  load,
    input  clk,
    output out
);

    // Put your code here

endmodule
