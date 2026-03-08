`ifndef ram_4K
    `include "ram_4K.sv"
`endif
`ifndef dmux_4_way
    `include "../01/dmux_4_way.sv"
`endif
`ifndef mux_4_way_16
    `include "../01/mux_4_way_16.sv"
`endif
`define ram_16K 1

CHIP RAM16K {
    IN in[16], load, address[14];
    OUT out[16];

    PARTS:
    DMux4Way(in=load, sel=address[12..13], a=l0, b=l1, c=l2, d=l3);
    RAM4K(in=in, load=l0, address=address[0..11], out=out0);
    RAM4K(in=in, load=l1, address=address[0..11], out=out1);
    RAM4K(in=in, load=l2, address=address[0..11], out=out2);
    RAM4K(in=in, load=l3, address=address[0..11], out=out3);    
    Mux4Way16(a=out0, b=out1, c=out2, d=out3, sel=address[12..13], out=out);
}

module ram_16K(
    input  [15:0] in,
    input  [13:0] address,
    input         load,
    input         clock,
    output [15:0] out
);

    // Put your code here

endmodule
