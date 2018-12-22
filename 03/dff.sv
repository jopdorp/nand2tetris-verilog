module dff(input in, input clock, output reg out);
    always @(posedge clock)
        begin
            out <= in;
        end
endmodule