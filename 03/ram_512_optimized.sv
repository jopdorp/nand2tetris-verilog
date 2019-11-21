`define ram_512_optimized 1

module ram_512_optimized(
    input  [15:0] in,
    input  [8:0]  address,
    input         load,
    input         clock,
    output [15:0] out
);

  reg[15:0] memory[0:2**9-1];
	
  assign out = memory[address];
	
  always @(posedge clock) begin
    if (load) memory[address] <= in;
  end
  
endmodule