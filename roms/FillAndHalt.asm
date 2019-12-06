@i
M=0
@8192
D=A
@n
M=D


(DRAW)
@i
D=M
@n
D=D-M
@HALT
D;JEQ

@SCREEN
D=A
@i
A=D+M
M=-1

@i
M=M+1

@DRAW
0;JMP

(HALT)
@HALT
0;JMP
