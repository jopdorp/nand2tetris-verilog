`ifndef ram_8
    `include "ram_8.sv"
`endif
`define ram_64 1

module ram_64(
    input  [15:0] in,
    input  [5:0]  address,
    input         load,
    input         clock,
    output [15:0] out
);

    // Put your code here
    
endmodule
