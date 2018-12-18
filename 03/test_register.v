module test_register();
   reg [15:0] in;
   reg [15:0] exp_out;
   reg load, clk, reset;
   wire [15:0] out;

   register u1(out, in, load, reset, clk);
   
   initial
      begin
	 // initially; reset
	 in = 16'b0000000000000000; load = 0; clk = 0; reset = 1;
	 //exp_out = x;
	 
	 #1 in = 16'b0000000000000000; load = 0; clk = 1; exp_out = 16'b0000000000000000;
	 #1 in = 16'b0000000000000000; load = 1; clk = 0; exp_out = 16'b0000000000000000;
	 #1 in = 16'b0000000000000000; load = 1; clk = 1; exp_out = 16'b0000000000000000;

	 #1 in = 16'b1111111111111111; load = 0; clk = 0; exp_out = 16'b0000000000000000;
	 #1 in = 16'b1111111111111111; load = 0; clk = 1; exp_out = 16'b0000000000000000;

	 #1 in = 16'b1111111111111111; load = 1; clk = 0; exp_out = 16'b0000000000000000;
	 #1 in = 16'b1111111111111111; load = 1; clk = 1; exp_out = 16'b1111111111111111;

      end

   initial
     $monitor("register %d %b %b %b (%b %b)", $time, in, load, clk, out, exp_out);

endmodule
