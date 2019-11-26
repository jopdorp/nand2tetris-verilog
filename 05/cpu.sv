`include "../02/alu_optimized.sv"
`include "../03/pc.sv"
`ifndef and_16
  `include "../01/and_16.sv"
`endif

module cpu(
    input  [15:0] inM,
    input  [15:0] instruction,
    input         reset,
    input         clock,
    output [15:0] outM,
    output        writeM,
    output [15:0] addressM,
    output [15:0] pc
);

    // Put your code here, hint: a register and pc use !clock

endmodule
