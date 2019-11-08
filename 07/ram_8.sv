module ram_8(
    input  [15:0] in,
    input  [2:0]  address,
    input         load,
    input         clock,
    output [15:0] out
);

    wire [15:0] out_0, out_1, out_2, out_3, out_4, out_5, out_6, out_7;

    dmux_8_way dmux_8_way(
        1'b1,
        address,
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

    register_n2t register_0(in, load_0, clock, out_0);
    register_n2t register_1(in, load_1, clock, out_1);
    register_n2t register_2(in, load_2, clock, out_2);
    register_n2t register_3(in, load_3, clock, out_3);
    register_n2t register_4(in, load_4, clock, out_4);
    register_n2t register_5(in, load_5, clock, out_5);
    register_n2t register_6(in, load_6, clock, out_6);
    register_n2t register_7(in, load_7, clock, out_7);

    mux_8_way_16 mux(out_0, out_1, out_2, out_3, out_4, out_5, out_6, out_7, address, out);
    
endmodule
