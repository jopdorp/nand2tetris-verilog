module dff(input in, input clk, output reg out);
    always @(posedge clk)
        begin
            out <= in;
        end
endmodule