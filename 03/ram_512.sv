`ifndef ram_64
    `include "ram_64.sv"
`endif
`define ram_512 1

module ram_512(
    input  [15:0] in,
    input  [8:0]  address,
    input         load,
    input         clock,
    output [15:0] out
);

    // Put your code here
    
endmodule
