/* ok, i'll confess that i have no idea how propagation delays work here, but
 * it looks like carry propagation happens instantaneously.
 * 
 * a more refined test should ensure that propagation follows realistic 
 * expectations.
 */

module test_add16();
   reg [15:0] a;
   reg [15:0] b;
   reg [15:0] ex_c;

   wire [15:0] c;

   add16 u1(c, a, b);
   
   initial
     begin
	a = 16'b0000000000000000;
	b = 16'b0000000000000000;
	ex_c = 16'b0000000000000000;

	#1
	$display("add16 %d %b %b (%b %b)", $time, a, b, c, ex_c);
	
	a = 16'b0000000000000001;
	b = 16'b0000000000000001;
	ex_c = 16'b0000000000000010;

	#1
	$display("add16 %d %b %b (%b %b)", $time, a, b, c, ex_c);

	a = 16'b0000000000000011;
	b = 16'b0000000000000001;
	ex_c = 16'b0000000000000100;

	#1
	$display("add16 %d %b %b (%b %b)", $time, a, b, c, ex_c);

	a = 16'b1111111111111111;
	b = 16'b0000000000000001;
	ex_c = 16'b0000000000000000;

	#1
	$display("add16 %d %b %b (%b %b)", $time, a, b, c, ex_c);

	a = 16'b1111111111111110;
	b = 16'b1111111111111110;
	ex_c = 16'b1111111111111100;

	#1
	$display("add16 %d %b %b (%b %b)", $time, a, b, c, ex_c);

	a = 16'b1010101010101010;
	b = 16'b0101010101010101;
	ex_c = 16'b1111111111111111;

	#1
	$display("add16 %d %b %b (%b %b)", $time, a, b, c, ex_c);

	a = 16'b0011110011000011;
	b = 16'b0000111111110000;
	ex_c = 16'b0100110010110011;

	#1
	$display("add16 %d %b %b (%b %b)", $time, a, b, c, ex_c);

	a = 16'b0001001000110100;
	b = 16'b1001100001110110;
	ex_c = 16'b1010101010101010;
     end
endmodule
