`define screen_8K 1

module screen_8K(
    input  [15:0] in,
    input  [12:0] address,
    input         load,
    input         clock,
    output [15:0] out
);
  reg[15:0] memory[0:2**13-1] /* verilator public */;

  assign out = memory[address];
	
  always @(posedge clock) begin
    if (load) memory[address] <= in;
  end
  
endmodule