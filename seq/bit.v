module bit(out, in, load, reset, clk);
   input in, load, clk, reset;
   output out;
   reg 	  out;
   
   always @(posedge clk) begin
      if (load)
	out <= in;
      else if (reset)
	out <= 0;
      else
	out <= out;
   end

endmodule
