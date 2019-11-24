`include "cpu_jopdorp_optimized.sv"

module cpu_tb();
    reg  [15:0] inM;
    reg  [15:0] instruction;
    reg         reset;
    reg         clock;
    wire [15:0] outM;
    wire        writeM;
    wire [14:0] addressM;
    wire [14:0] pc;

    cpu_jopdorp_optimized u1(inM, instruction, reset, clock, outM, writeM, addressM, pc);

    task assert_else_error(
            reg [15:0] exp_outM, 
            reg exp_writeM, 
            reg[14:0] exp_addressM, 
            reg[14:0] exp_pc,
            reg[15:0] exp_d_register_out
        );
        assert (outM ==? exp_outM &&
          writeM ==? exp_writeM &&
          (addressM ==? exp_addressM || addressM === exp_addressM) &&
          pc ==? exp_pc &&
          (u1.d ==? exp_d_register_out ||
          u1.d === exp_d_register_out)) else begin
            $error("clock %b, inM %b instruction %b reset %b (real exp, \noutM %b %b \nwriteM %b %b \naddressM %b %b \npc %b %b \nd_register_out %b %b \n)",
                clock,
                inM, 
                instruction, 
                reset, 
                outM,
                exp_outM,
                writeM,
                exp_writeM,
                addressM,
                exp_addressM,
                pc,
                exp_pc,
                u1.d,
                exp_d_register_out,
             );
        end
    endtask

    initial
        begin
            // 0+
            #1 instruction = 16'b0011000000111001;  // @12345
            inM = 0; 
            reset = 0;
            #1 clock = 1;


            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                12345, //addressM
                1, //pc
                16'bx // d_register
            );       

            // 1+
            #1 instruction = 16'b1110110000010000; // D=A
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                12345, //addressM
                1, //pc
                12345 // d_register
            ); 

            // 2
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                12345, //addressM
                2, //pc
                12345 // d_register
            ); 
                        
            // 2+
            #1 instruction = 16'b0101101110100000; // @23456
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                12345, //addressM
                2, //pc
                12345 // d_register
            ); 

            // 3
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                23456, //addressM
                3, //pc
                12345 // d_register
            ); 

            // 3+
            #1 instruction = 16'b1110000111010000; // D=A-D
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                23456, //addressM
                3, //pc
                11111 // d_register
            ); 

            // 4
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                23456, //addressM
                4, //pc
                11111 // d_register
            ); 

            // 4+
            #1 instruction = 16'b0000001111101000; // @1000
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                23456, //addressM
                4, //pc
                11111 // d_register
            ); 
            
            // 5
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                5, //pc
                11111 // d_register
            );  

            // 5+
            #1 instruction = 16'b1110001100001000; // M=D
            #1 clock = 1;
            #1 assert_else_error(
                11111,//outM
                1, //writeM
                1000, //addressM
                5, //pc
                11111 // d_register
            ); 

            // 6
            #1 clock = 0;
            #1 assert_else_error(
                11111,//outM
                1, //writeM
                1000, //addressM
                6, //pc
                11111 // d_register
            ); 

            // 6+
            #1 instruction = 16'b0000001111101001; // @1001
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                6, //pc
                11111 // d_register
            ); 

            // 7
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1001, //addressM
                7, //pc
                11111 // d_register
            ); 

            // 7+
            #1 instruction = 16'b1110001110011000;  // MD=D-1
            #1 clock = 1;
            #1 assert_else_error(
                11109,//outM
                1, //writeM
                1001, //addressM
                7, //pc
                11110 // d_register
            ); 

            // 8
            #1 clock = 0;
            #1 assert_else_error(
                11109,//outM
                1, //writeM
                1001, //addressM
                8, //pc
                11110 // d_register
            ); 

            // 8+
            #1 instruction = 16'b0000001111101000;  // @1000
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1001, //addressM
                8, //pc
                11110 // d_register
            ); 

            // 9
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                9, //pc
                11110 // d_register
            ); 

            // 9+
            #1 instruction = 16'b1111010011010000; // D=D-M
            inM = 11111;
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                9, //pc
                -1 // d_register
            ); 

            // 10
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                10, //pc
                -1 // d_register
            );

            // 10+
            #1 instruction = 16'b0000000000001110;  // @14
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                10, //pc
                -1 // d_register
            ); 

            // 11
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                14, //addressM
                11, //pc
                -1 // d_register
            ); 

            // 11+
            #1 instruction = 16'b1110001100000100;  // D;jlt
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                14, //addressM
                11, //pc
                -1 // d_register
            ); 

            // 12
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                14, //addressM
                14, //pc
                -1 // d_register
            ); 
            
            // 12+
            #1 instruction = 16'b0000001111100111;  // @999
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                14, //addressM
                14, //pc
                -1 // d_register
            ); 
            
            // 13
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                999, //addressM
                15, //pc
                -1 // d_register
            ); 

            // 13+
            #1 instruction = 16'b1110110111100000;  // A=A+1
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                999, //addressM
                15, //pc
                -1 // d_register
            );

            // 14
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                16, //pc
                -1 // d_register
            ); 

            // 14+
            #1 instruction = 16'b1110001100001000; // M=D
            #1 clock = 1;
            #1 assert_else_error(
                -1,//outM
                1, //writeM
                1000, //addressM
                16, //pc
                -1 // d_register
            );

            
            // 15
            #1 clock = 0;
            #1 assert_else_error(
                -1,//outM
                1, //writeM
                1000, //addressM
                17, //pc
                -1 // d_register
            ); 

            // 15+
            #1 instruction = 16'b0000000000010101;  // @21
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                17, //pc
                -1 // d_register
            ); 

            
            // 16
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                21, //addressM
                18, //pc
                -1 // d_register
            ); 

            // 16+
            #1 instruction = 16'b1110011111000010;  // D+1;jeq
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                21, //addressM
                18, //pc
                -1 // d_register
            ); 
     
            #1 clock = 0;
            // 17
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                21, //addressM
                21, //pc
                -1 // d_register
            ); 

            // 17+
            #1 instruction = 16'b0000000000000010;  // @2
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                21, //addressM
                21, //pc
                -1 // d_register
            ); 

            // 18
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                2, //addressM
                22, //pc
                -1 // d_register
            ); 

            // 18+
            #1 instruction = 16'b1110000010010000;  // D=D+A
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                2, //addressM
                22, //pc
                1 // d_register
            ); 

            // 19
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                2, //addressM
                23, //pc
                1 // d_register
            ); 

            // 19+
            #1 instruction = 16'b0000001111101000;  // @1000
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                2, //addressM
                23, //pc
                1 // d_register
            );

            // 20
            #1 clock = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                24, //pc
                1 // d_register
            ); 

            // 20+
            #1 instruction = 16'b1110111010010000; // D=-1
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                24, //pc
                -1 // d_register
            ); 

            // 21+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000001; // D;JGT
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                25, //pc
                -1 // d_register
            ); 

            // 22+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000010; // D;JEQ
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                26, //pc
                -1 // d_register
            ); 

            // 23+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000011; // D;JGE
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                27, //pc
                -1 // d_register
            ); 
            
            // 24+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000100; // D;JLT
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                28, //pc
                -1 // d_register
            );
            
            // 25+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000101; // D;JNE
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                -1 // d_register
            );

            // 26+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000110; // D;JNE
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                -1 // d_register
            );

            // 27+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000111; // D;JMP
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                -1 // d_register
            );

            // 28+
            #1 clock = 0;
            #1 instruction = 16'b1110101010010000; //  D=0
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                0 // d_register
            );

            // 29+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000001; // D;JGT
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1001, //pc
                0 // d_register
            );

            // 30+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000010; // D;JEQ
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1002, //pc
                0 // d_register
            );

            // 31+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000011; // D;JGE
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                0 // d_register
            );

            // 32+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000100; // D;JLT
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                0 // d_register
            );

            // 33+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000101; // D;JNE
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1001, //pc
                0 // d_register
            );

            // 34+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000110; // D;JLE
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1002, //pc
                0 // d_register
            );

            // 35+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000111; // D;JMP
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                0 // d_register
            );

            
            // 36+
            #1 clock = 0;
            #1 instruction = 16'b1110111111010000; // D=1
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                1 // d_register
            );

               
            // 37+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000001; // D;JGT
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1001, //pc
                1 // d_register
            );
               
            // 38+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000010; // D;JEQ
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                1 // d_register
            );
               
            // 39+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000011; // D;JGE
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1001, //pc
                1 // d_register
            );
               
            // 40 +
            #1 clock = 0;
            #1 instruction = 16'b1110001100000100; // D;JGE
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                1 // d_register
            );
               
            // 41+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000101; // D;JGE
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1001, //pc
                1 // d_register
            );
               
            // 42+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000110; // D;JGE
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                1 // d_register
            );
               
            // 43+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000111; // D;JGE
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1001, //pc
                1 // d_register
            );
               
            // 44+
            #1 clock = 0;
            #1 instruction = 16'b1110001100000111; // D;JGE
            reset = 1;
            #1 clock = 1;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                1000, //pc
                1 // d_register
            );
               
            // 45+
            #1 clock = 0;
            #1 instruction = 16'b0111111111111111; // D;JGE
            #1 clock = 1;
            reset = 0;
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                1000, //addressM
                0, //pc
                1 // d_register
            );
               
            // 46+
            #1 clock = 0;
            #1 instruction = 16'b0111111111111111; // D;JGE
            #1 assert_else_error(
                16'bx,//outM
                0, //writeM
                32767, //addressM
                1, //pc
                1 // d_register
            );
        end
endmodule
