// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/03/a/PC.hdl

/**
 * A 16-bit counter with load and reset control bits.
 * if      (reset[t] == 1) out[t+1] = 0
 * else if (load[t] == 1)  out[t+1] = in[t]
 * else if (inc[t] == 1)   out[t+1] = out[t] + 1  (integer addition)
 * else                    out[t+1] = out[t]
 */
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

    or_n2t or_load_or_inc(load, inc, load_or_inc);
    or_n2t or_load_or_inc_or_reset(load_or_inc, reset, load_or_inc_or_reset);
    
    register_n2t count(new_or_reset_value, load_or_inc_or_reset, clk, out);

endmodule