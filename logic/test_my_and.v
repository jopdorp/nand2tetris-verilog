module test_my_and();
   reg a;
   reg b;
   reg expected;
   
   wire c;

   my_and  u1(c, a, b);

   initial 
     begin
	a = 0;
	b = 0;
	expected = 0;

	#1 a = 0;
	b = 1;
	expected = 0;
	
	#1 a = 1;
	b = 0;
	expected = 0;
	
	#1 a = 1;
	b = 1;
	expected = 1;
     end

   initial
     $monitor("my_and %d %b %b (%b %b)", $time, a, b, c, expected);
   
endmodule
