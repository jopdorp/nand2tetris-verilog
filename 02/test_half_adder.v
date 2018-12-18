module test_half_adder();
   reg a, b;
   reg exp_ca, exp_s;
   wire ca, s;

   half_adder u1(a, b, ca, s);
   
   initial
     begin
	a = 0;
	b = 0;
	exp_ca = 0;
	exp_s = 0;

	#1
	a = 0;
	b = 1;
	exp_ca = 0;
	exp_s = 1;

	#1
	a = 1;
	b = 0;
	exp_ca = 0;
	exp_s = 1;

	#1
	a = 1;
	b = 1;
	exp_ca = 1;
	exp_s = 0;
     end

   initial
     $monitor("half_adder %d %b %b (%b %b) (%b %b)", $time, a, b, ca, exp_ca, s, exp_s);
   
endmodule
