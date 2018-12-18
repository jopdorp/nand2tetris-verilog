module test_full_adder();
   reg a, b, c;
   wire ca, s;

   reg 	ex_ca, ex_s;

   full_adder u1(ca, s, a, b, c);
   
   initial
     begin
	a = 0;
	b = 0;
	c = 0;
	ex_ca = 0;
	ex_s = 0;

	#1
	a = 1;
	b = 0;
	c = 0;
	ex_ca = 0;
	ex_s = 1;

	#1
	a = 0;
	b = 1;
	c = 0;
	ex_ca = 0;
	ex_s = 1;

	#1
	a = 1;
	b = 1;
	c = 0;
	ex_ca = 1;
	ex_s = 0;

	#1
	a = 0;
	b = 0;
	c = 1;
	ex_ca = 0;
	ex_s = 1;

	#1
	a = 1;
	b = 0;
	c = 1;
	ex_ca = 1;
	ex_s = 0;

	#1
	a = 0;
	b = 1;
	c = 1;
	ex_ca = 1;
	ex_s = 0;

	#1
	a = 1;
	b = 1;
	c = 1;
	ex_ca = 1;
	ex_s = 1;
     end

   initial
     $monitor("full_adder %d %b %b %b (%b %b) (%b %b)", $time, a, b, c, ca, ex_ca, s, ex_s);
   
endmodule
