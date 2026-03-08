`ifndef dmux
  `include "dmux.sv"
`endif
`define dmux_4_way 1

/**
 * 4-way demultiplexor.  
 * {a,b,c,d} = {in,0,0,0} if sel==00
 *             {0,in,0,0} if sel==01
 *             {0,0,in,0} if sel==10
 *             {0,0,0,in} if sel==11
 */
 
module dmux_4_way(
    input       in,
    input [1:0] sel,
    output      a,
    output      b,
    output      c,
    output      d
);

    // Put your code here

endmodule
