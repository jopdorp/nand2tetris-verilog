`ifndef ram_512_optimized
    `include "ram_512_optimized.sv"
`endif
`ifndef mux_8_way_16
    `include "mux_8_way_16.sv"
`endif
`ifndef dmux_8_way
    `include "dmux_8_way.sv"
`endif
`define ram_4K

module ram_4K(
    input  [15:0] in,
    input  [11:0]  address,
    input         load,
    input         clock,
    output [15:0] out
);

    // Put your code here, use ram_512_optimized
    
endmodule
