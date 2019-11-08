module alu(
    input  [15:0] x,
    input  [15:0] y,
    input         zx,
    input         nx,
    input         zy,
    input         ny,
    input         f,
    input         no,
    output [15:0] out,
    output        zr,
    output        ng
);
    wire        not_zx, not_zy;
    wire [15:0] not_zx_16, not_zy_16;
    wire [15:0] x_after_zx, y_after_ny;
    wire [15:0] not_x_after_zx, not_y_after_zy;
    wire [15:0] x_after_nx, y_after_zy;

    wire [15:0] sum_x_y;
    wire [15:0] x_and_y;

    wire [15:0] function_output;
    wire [15:0] not_function_output;

    generate
        genvar i;
        for (i = 0; i <= 15; i = i+1) begin
            assign not_zx_16[i] = not_zx;
            assign not_zy_16[i] = not_zy;
        end
    endgenerate

    not_n2t notzx(zx, not_zx);
    not_n2t notzy(zy, not_zy);

    and_16 zero_x(not_zx_16, x, x_after_zx);
    not_16 notx(x_after_zx, not_x_after_zx);
    mux_16 mux_x_notx(x_after_zx, not_x_after_zx, nx, x_after_nx);

    and_16 zero_y(not_zy_16, y, y_after_zy);
    not_16 noty(y_after_zy, not_y_after_zy);
    mux_16 mux_y_noty(y_after_zy, not_y_after_zy, ny, y_after_ny);

    add_16 sum(y_after_ny, x_after_nx, sum_x_y);
    and_16 and_xy(y_after_ny, x_after_nx, x_and_y);
    mux_16 func(x_and_y, sum_x_y, f, function_output);

    not_16 not_func(function_output, not_function_output);
    mux_16 alu_out(function_output, not_function_output, no, out);

    assign ng = out[15];

    wire or_first;
    or_8_way or_first_byte(out[7:0], or_first);
    wire or_second;
    or_8_way or_second_byte(out[15:8], or_second);
    wire not_zero;
    or_n2t is_not_zero(or_first, or_second, not_zero);
    not_n2t is_zero(not_zero, zr);

endmodule
