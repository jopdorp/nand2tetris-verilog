module dff(out, data, clk);
   input data, clk;
   output out;
   reg 	  out;

   always @(posedge clk)
	out <= data;
   
endmodule
