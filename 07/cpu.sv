module cpu(
    input  [15:0] inM,
    input  [15:0] instruction,
    input         reset,
    input         clock,
    output [15:0] outM,
    output        writeM,
    output [14:0] addressM,
    output [14:0] pc
);

    // alu
    wire [15:0] a_register_out;
    wire [15:0] second_alu_input_value;
    mux_16 select_m_or_a(a_register_out, inM, instruction[12], second_alu_input_value);

    wire [15:0] d_register_out;
    wire [15:0] alu_out;
    wire alu_out_is_zero;
    wire alu_out_is_negative;
    alu calculations(
        d_register_out, 
        second_alu_input_value, 
        instruction[11],
        instruction[10],
        instruction[9],
        instruction[8],
        instruction[7],
        instruction[6],
        alu_out, 
        alu_out_is_zero, 
        alu_out_is_negative
    );

    // a register
    wire should_load_address_into_a_register;
    not_n2t not_opcode(instruction[15], should_load_address_into_a_register);

    wire [15:0] address_from_a_instruction;
    and_16 instruction_to_address(instruction, 16'b0111111111111111, address_from_a_instruction);

    wire [15:0] value_for_a_register;
    mux_16 choose_address_source(address_from_a_instruction, alu_out, instruction[15], value_for_a_register);

    wire should_load_a_register;
    or_n2t instruction_or_alu_into_a(instruction[5], should_load_address_into_a_register, should_load_a_register);

    register_n2t a_register(value_for_a_register, should_load_a_register, clock, a_register_out);

    // d register
    wire should_load_d_register;
    and_n2t c_instruction_and_dest_d(instruction[15], instruction[4], should_load_d_register);

    register_n2t d_register(alu_out, should_load_d_register, clock, d_register_out);

    // m
    and_n2t should_write_m(instruction[15], instruction[3], writeM);
    assign outM = alu_out;
    assign addressM = a_register_out[14:0];

    // pc

    // jump logic
    // greater than zero
    wire alu_out_is_positive;
    not_n2t not_negative(alu_out_is_negative, alu_out_is_positive);
    wire alu_out_is_not_zero;
    not_n2t not_zero(alu_out_is_negative, alu_out_is_positive);
    wire alu_out_is_positive_and_greater_than_zero;
    and_n2t and_alu_out_is_positive_and_greater_than_zero(alu_out_is_not_zero, alu_out_is_positive, alu_out_is_positive_and_greater_than_zero);
    wire jump_greater_than_zero;
    and_n2t and_greater_than_zero(instruction[0], alu_out_is_positive_and_greater_than_zero, jump_greater_than_zero);

    // negative
    wire jump_smaller_than_zero;
    and_n2t and_smaller_than_zero(instruction[2], alu_out_is_negative, jump_smaller_than_zero);

    // zero
    wire should_jump_zero;
    and_n2t jump_zero(instruction[1], alu_out_is_zero, should_jump_zero);

    wire should_jump_pos_neg;
    or_n2t or_should_jump_post_neg_zero(jump_greater_than_zero, jump_smaller_than_zero, should_jump_pos_neg);

    
    wire should_jump_for_c_instruction;
    or_n2t or_should_jump(should_jump_pos_neg, should_jump_zero, should_jump_for_c_instruction);

    wire should_jump;
    and_n2t is_c_and_should_jump(instruction[15], should_jump_for_c_instruction, should_jump);

    // pc itself
    wire [15:0] pc_out;
    pc program_counter(a_register_out, should_jump, 1'b1, reset, clock, pc_out);
    assign pc = pc_out[14:0];


endmodule
