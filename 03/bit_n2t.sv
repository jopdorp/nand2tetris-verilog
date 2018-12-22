module bit_n2t(
    input  in,
    input  load,
    input  reset,
    input  clk,
    output out
);

    mux mux(out, in, load, data);
    dff dff(data, clk, out);

endmodule
