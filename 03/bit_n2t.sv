module bit_n2t(
    input  in,
    input  load,
    input  reset,
    input  clk,
    output out
);

    always @(posedge clock)
        begin
            mux mux(out, in, load, data);
            dff dff(data, clk, out);
        end

endmodule
