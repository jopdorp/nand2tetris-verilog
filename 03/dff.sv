`define dff 1

module dff(input in, input clk, output reg out = 0);
    always @(posedge clk)
        begin
            out <= in;
        end
endmodule