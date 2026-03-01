`ifndef inc_16
    `include "../02/inc_16.sv"
`endif
`ifndef mux_16
    `include "../01/mux_16.sv"
`endif
`ifndef or_n2t
    `include "../01/or_n2t.sv"
`endif
`ifndef register_n2t
    `include "register_n2t.sv"
`endif
`define pc 1

/**
 * 16-bit counter with load and reset controls.
 *
 * If reset(t-1) then out(t) = 0
 *    else if load(t-1) then out(t) = in(t-1)
 *         else if inc(t-1) then out(t) = out(t-1) + 1 (integer addition)
 *              else out(t) = out(t-1)
 */
 
module pc(
    input  [15:0] in,
    input         load,
    input         inc,
    input         reset,
    input         clk,
    output [15:0] out
);

    // Put your code here

endmodule