`include "my_mux.v"

module test_my_mux();
   reg a;
   reg b;
   reg s;
   reg expected;
   
   wire c;

   my_mux u1(c, a, b, s);

   initial 
     begin
	a = 0;
	b = 0;
	s = 0;
	expected = 0;

	#1 
	a = 0;
	b = 0;
	s = 1;
	expected = 0;
	
	#1 
	a = 0;
	b = 1;
	s = 0;
	expected = 0;
	
	#1 
	a = 0;
	b = 1;
	s = 1;
	expected = 1;

	#1
	a = 1;
	b = 0;
	s = 0;
	expected = 1;
	
	#1
	a = 1;
	b = 0;
	s = 1;
	expected = 0;
	
	#1
	a = 1;
	b = 1;
	s = 0;
	expected = 1;

	#1
	a = 1;
	b = 1;
	s = 1;
	expected = 1;
     end

   initial
     $monitor("my_mux %d %b %b %b (%b %b)", $time, a, b, s, c, expected);
   
endmodule
