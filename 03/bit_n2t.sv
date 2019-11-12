`ifndef mux
    `include "../01/mux.sv"
`endif
`ifndef dff
    `include "dff.sv"
`endif
`define bit_n2t 1

module bit_n2t(
    input  in,
    input  load,
    input  clk,
    output out
);
    wire data;
    mux mux_load(out, in, load, data);
    dff dff(data, clk, out);

endmodule
