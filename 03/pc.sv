`ifndef inc_16
    `include "../02/inc_16.sv"
`endif
`ifndef mux_16
    `include "../01/mux_16.sv"
`endif
`ifndef or_n2t
    `include "../01/or_n2t.sv"
`endif
`ifndef register
    `include "register.sv"
`endif
`define pc 1

module pc(
    input  [15:0] in,
    input         load,
    input         inc,
    input         reset,
    input         clk,
    output [15:0] out
);
    wire [15:0] incremented;
    wire [15:0] select_in_incremented;
    wire [15:0] select_load_in_incremented;
    wire [15:0] new_or_reset_value;
    wire load_or_inc;
    wire load_or_inc_or_reset;

    inc_16 increment(out, incremented);
    
    mux_16 select_increment(in, incremented, inc, select_in_incremented);
    mux_16 select_load(select_in_incremented, in, load, select_load_in_incremented);
    mux_16 select_reset(select_load_in_incremented, 16'b0, reset, new_or_reset_value);

    or_n2t load_or_inc_or(load, inc, load_or_inc);
    or_n2t load_or_inc_or_reset_or(load_or_inc, reset, load_or_inc_or_reset);
    
    register count(new_or_reset_value, load_or_inc_or_reset, clk, out);

endmodule