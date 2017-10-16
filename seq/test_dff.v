module test_dff();
   reg clk, data;
   reg exp_out;
   wire out;

   dff u1(out, data, clk);

   initial
     begin
           clk = 0; data = 0; //exp_out = x;
	#1 clk = 1; data = 0; exp_out = 0;
	#1 clk = 0; data = 1; exp_out = 0;
	#1 clk = 1; data = 1; exp_out = 1;
	#1 clk = 0; data = 0; exp_out = 1;
	#1 clk = 1; data = 0; exp_out = 0;
	#1 clk = 0; data = 1; exp_out = 0;
	#1 clk = 1; data = 1; exp_out = 1;
     end
	
   initial
     $monitor("dff %d %b %b (%b %b)", $time, clk, data, out, exp_out);
endmodule
