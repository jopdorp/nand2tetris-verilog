module ram_64(
    input  [15:0] in,
    input  [5:0]  address,
    input         load,
    input         clock,
    output [15:0] out
);

    wire [15:0] out_0, out_1, out_2, out_3, out_4, out_5, out_6, out_7;

    dmux_8_way dmux_8_way(
        1'b1,
        address[5:3],
        selected_0,
        selected_1,
        selected_2,
        selected_3,
        selected_4,
        selected_5,
        selected_6,
        selected_7
    );

    and_n2t and_0(load, selected_0, load_0);
    and_n2t and_1(load, selected_1, load_1);
    and_n2t and_2(load, selected_2, load_2);
    and_n2t and_3(load, selected_3, load_3);
    and_n2t and_4(load, selected_4, load_4);
    and_n2t and_5(load, selected_5, load_5);
    and_n2t and_6(load, selected_6, load_6);
    and_n2t and_7(load, selected_7, load_7);

    ram_8 ram_8_0(in, address[2:0], load_0, clock, out_0);
    ram_8 ram_8_1(in, address[2:0], load_1, clock, out_1);
    ram_8 ram_8_2(in, address[2:0], load_2, clock, out_2);
    ram_8 ram_8_3(in, address[2:0], load_3, clock, out_3);
    ram_8 ram_8_4(in, address[2:0], load_4, clock, out_4);
    ram_8 ram_8_5(in, address[2:0], load_5, clock, out_5);
    ram_8 ram_8_6(in, address[2:0], load_6, clock, out_6);
    ram_8 ram_8_7(in, address[2:0], load_7, clock, out_7);

    mux_8_way_16 mux(out_0, out_1, out_2, out_3, out_4, out_5, out_6, out_7, address[5:3], out);
    
endmodule
