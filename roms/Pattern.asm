// set asmsyntax=hack

  @offset
  M=0

(FILL)
  @offset
  D=M
  @SCREEN
  A=D+A
  D=A

  M=A

(INC_OFFSET)
  @offset
  MD=M+1
  @8192
  D=D-A

  @FILL
  D;JNE

(RESET_OFFSET)
  @RESET_OFFSET
  0;JMP
