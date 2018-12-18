`include "mux_4_way_16.sv"
`include "mux_16.sv"

module mux_8_way_16(
    input  [15:0] a,
    input  [15:0] b,
    input  [15:0] c,
    input  [15:0] d,
    input  [15:0] e,
    input  [15:0] f,
    input  [15:0] g,
    input  [15:0] h,
    input  [2:0]  select,
    output [15:0] out
);
    wire[15:0] first_four_out;
    wire[15:0] second_four_out;

    mux_4_way_16  first_four(a,b,c,d, select[1:0], first_four_out);
    mux_4_way_16  second_four(e,f,g,h, select[1:0], second_four_out);
    mux_16  mux_8_way_16(first_four_out, second_four_out, select[2], out);
endmodule
