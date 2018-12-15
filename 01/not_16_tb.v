module not_16_tb();
   reg [15:0] a;
   reg [15:0] expected;
   
   wire [15:0] b;
   

   not_16 u1(b, a);

   initial 
     begin
	a = 16'b0000000000000000;
	expected = 16'b1111111111111111;

	#1 
        a[0] = 1;
	expected[0] = 0;

	#1 
        a[1] = 1;
	expected[1] = 0;

	#1 
        a[2] = 1;
	expected[2] = 0;

	#1 
        a[3] = 1;
	expected[3] = 0;

	#1 
        a[4] = 1;
	expected[4] = 0;

	#1 
        a[5] = 1;
	expected[5] = 0;

	#1 
        a[6] = 1;
	expected[6] = 0;

	#1 
        a[7] = 1;
	expected[7] = 0;

	#1 
        a[8] = 1;
	expected[8] = 0;

	#1 
        a[9] = 1;
	expected[9] = 0;

	#1 
        a[10] = 1;
	expected[10] = 0;

	#1 
        a[11] = 1;
	expected[11] = 0;

	#1 
        a[12] = 1;
	expected[12] = 0;

	#1 
        a[13] = 1;
	expected[13] = 0;

	#1 
        a[14] = 1;
	expected[14] = 0;

	#1 
        a[15] = 1;
	expected[15] = 0;
     end

   initial
     $monitor("not_16 %d %b (%b %b)", $time, a, b, expected);
   
endmodule
