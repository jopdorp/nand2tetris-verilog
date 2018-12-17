module or_tb();
   reg a;
   reg b;
   reg expected;
   
   wire c;

   or u1(c, a, b);

   initial 
     begin
	a = 0;
	b = 0;
	expected = 0;

	#1 a = 0;
	b = 1;
	expected = 1;
	
	#1 a = 1;
	b = 0;
	expected = 1;
	
	#1 a = 1;
	b = 1;
	expected = 1;
     end

   initial
     $monitor("or %d %b %b (%b %b)", $time, a, b, c, expected);
   
endmodule
