module register(out, in, load, reset, clk);
   input [15:0] in;
   input load, clk, reset;
   output [15:0] out;
   reg 	  [15:0] out;
   
   always @(posedge clk) begin
      if (load)
	out <= in;
      else if (reset)
	out <= 16'b0000000000000000;
      else
	out <= out;
   end

endmodule
