module or_16_tb();
   reg [15:0] a;
   reg [15:0] b;
   reg [15:0] expected;
   
   wire [15:0] c;
   

   or_16 u1(c, b, a);

   initial 
     begin
	a = 16'b0000000000000000;
	b = 16'b0000000000000000;
	expected = 16'b0000000000000000;

	#1 
        a[0] = 1;
	expected[0] = 1;

	#1 
        b[0] = 1;
	expected[0] = 1;

	#1 
        b[1] = 1;
	expected[1] = 1;

	#1
        a[1] = 1;
	expected[1] = 1;

	#1 
        a[2] = 1;
	expected[2] = 1;

	#1 
        b[2] = 1;
	expected[2] = 1;

	#1 
        b[3] = 1;
	expected[3] = 1;

	#1
        a[3] = 1;
	expected[3] = 1;
     end

   initial
     $monitor("or_16 %d %b %b (%b %b)", $time, a, b, c, expected);
   
endmodule
