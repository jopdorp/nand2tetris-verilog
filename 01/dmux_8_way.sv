`ifndef dmux_4_way
  `include "dmux_4_way.sv"
`endif
`define dmux_8_way 1

/**
 * 8-way demultiplexor.  
 * {a,b,c,d,e,f,g,h} = {in,0,0,0,0,0,0,0} if sel==000
 *                     {0,in,0,0,0,0,0,0} if sel==001
 *                     etc.
 *                     {0,0,0,0,0,0,0,in} if sel==111
 */
 
module dmux_8_way(
    input       in,
    input [2:0] select,
    output      a,
    output      b,
    output      c,
    output      d,
    output      e,
    output      f,
    output      g,
    output      h
);

    // Put your code here

endmodule
