module test_ram8();
   reg [15:0] in;
   reg [15:0] exp_out;
   reg [2:0]  addr;
   reg 	      load, clk;

   wire [15:0] out;

   ram8 u1(out, in, addr, load, clk);
   
   initial
     begin
	// load in data
	exp_out = 16'bzzzzzzzzzzzzzzzz; // indicates we don't care about value
	load = 1;
        in = 16'b0000000000000000; addr = 3'b000; clk = 0; // addr 0
        #1 clk = 1;

        #1 in = 16'b1111111111111111; addr = 3'b001; clk = 0; // addr 1
        #1 clk = 1;

        #1 in = 16'b0000000011111111; addr = 3'b010; clk = 0; // addr 2
        #1 clk = 1;

        #1 in = 16'b1111111100000000; addr = 3'b011; clk = 0; // addr 3
        #1 clk = 1;

        #1 in = 16'b0000111100001111; addr = 3'b100; clk = 0; // addr 4
        #1 clk = 1;

        #1 in = 16'b1111000011110000; addr = 3'b101; clk = 0; // addr 5
        #1 clk = 1;

        #1 in = 16'b0011001100110011; addr = 3'b110; clk = 0; // addr 6
        #1 clk = 1;

        #1 in = 16'b1100110011001100; addr = 3'b111; clk = 0; // addr 7
        #1 clk = 1;

	// read out data
	#1
	load = 0;

	#1 addr = 3'b000; clk = 0; exp_out = 16'bzzzzzzzzzzzzzzzz; // addr 0
	#1 clk = 1; exp_out = 16'b0000000000000000;
	
	#1 addr = 3'b001; clk = 0; exp_out = 16'bzzzzzzzzzzzzzzzz; // addr 1
	#1 clk = 1; exp_out = 16'b1111111111111111;
	
	#1 addr = 3'b010; clk = 0; exp_out = 16'bzzzzzzzzzzzzzzzz; // addr 2
	#1 clk = 1; exp_out = 16'b0000000011111111;
	
	#1 addr = 3'b011; clk = 0; exp_out = 16'bzzzzzzzzzzzzzzzz; // addr 3
	#1 clk = 1; exp_out = 16'b1111111100000000;
	
	#1 addr = 3'b100; clk = 0; exp_out = 16'bzzzzzzzzzzzzzzzz; // addr 4
	#1 clk = 1; exp_out = 16'b0000111100001111;
	
	#1 addr = 3'b101; clk = 0; exp_out = 16'bzzzzzzzzzzzzzzzz; // addr 5
	#1 clk = 1; exp_out = 16'b1111000011110000;
	
	#1 addr = 3'b110; clk = 0; exp_out = 16'bzzzzzzzzzzzzzzzz; // addr 6
	#1 clk = 1; exp_out = 16'b0011001100110011;
	
	#1 addr = 3'b111; clk = 0; exp_out = 16'bzzzzzzzzzzzzzzzz; // addr 7
	#1 clk = 1; exp_out = 16'b1100110011001100;
     end
   
   initial
     $monitor("ram8 %d %b %b %b %b (%b %b)", $time, in, addr, load, clk, out, exp_out);

endmodule
