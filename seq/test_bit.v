module test_bit();
   reg in, load, exp_out;
   reg clk, reset;
   wire out;

   bit 	u1(out, in, load, reset, clk);
   
   initial
      begin
	 // initially; reset
	 in = 0; load = 0; clk = 0; reset = 1;
	 //exp_out = x;
	 
	 #1 in = 0; load = 0; clk = 1; exp_out = 0;

	 #1 in = 0; load = 1; clk = 0; exp_out = 0;
	 #1 in = 0; load = 1; clk = 1; exp_out = 0;

	 #1 in = 1; load = 0; clk = 0; exp_out = 0;
	 #1 in = 1; load = 0; clk = 1; exp_out = 0;

	 #1 in = 1; load = 1; clk = 0; exp_out = 0;
	 #1 in = 1; load = 1; clk = 1; exp_out = 1;

	 #1 in = 0; load = 1; clk = 0; exp_out = 1;
	 #1 in = 0; load = 1; clk = 1; exp_out = 0;

	 #1 in = 0; load = 0; clk = 0; exp_out = 0;
	 #1 in = 0; load = 0; clk = 1; exp_out = 0;

	 #1 in = 1; load = 0; clk = 0; exp_out = 0;
	 #1 in = 1; load = 0; clk = 1; exp_out = 0;

	 #1 in = 0; load = 1; clk = 0; exp_out = 0;
	 #1 in = 0; load = 1; clk = 1; exp_out = 0;

	 #1 in = 1; load = 1; clk = 0; exp_out = 0;
	 #1 in = 1; load = 1; clk = 1; exp_out = 1;
      end

   initial
     $monitor("bit %d %b %b %b (%b %b)", $time, in, load, clk, out, exp_out);

endmodule
