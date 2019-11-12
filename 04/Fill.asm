// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Fill.asm

// Runs an infinite loop that listens to the keyboard input.
// When a key is pressed (any key), the program blackens the screen,
// i.e. writes "black" in every pixel;
// the screen should remain fully black as long as the key is pressed. 
// When no key is pressed, the program clears the screen, i.e. writes
// "white" in every pixel;
// the screen should remain fully clear as long as no key is pressed.

// Put your code here.
@8160
D=A
@ScreensizeInRegisters
M=D


(START)

    // set the row iterator to 0
    @i
    M=0

(STARTDRAW)
    // Set D register to ScreensizeInRegisters-i
    @ScreensizeInRegisters
    D=M
    @i
    D=D-M

    // If D register is zero, Go back to the beginning to start at the beginning of the screen
    @START
    D;JEQ


        @KBD
        D=M

        @WHITE
        D;JEQ

        @SCREEN
        D=A
        @i
        D=D+M
        A=D
        M=-1

        @AFTERDRAW
        0;JMP

        (WHITE)
        @SCREEN
        D=A
        @i
        D=D+M
        A=D
        M=0

(AFTERDRAW)
    //up the iterator
    @i
    D=M
    D=D+1
    M=D
    @STARTDRAW
    0;JMP