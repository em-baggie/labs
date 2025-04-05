// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/4/Fill.asm

// Runs an infinite loop that listens to the keyboard input. 
// When a key is pressed (any key), the program blackens the screen,
// i.e. writes "black" in every pixel. When no key is pressed, 
// the screen should be cleared.

(RESET)
//set addr location to start of SCREEN
@SCREEN
D=A
@addr
M=D
(FILL) //If keyboard=0, go to unfill loop
@KBD
D=M
@UNFILL
D;JEQ
//set value at addr to -1 (all black)
@addr
A=M
M=-1
//if reached end of screen, reset
@24575
D=A
@addr
D=D-M
@RESET
D;JEQ
//set addr to next value
@addr
M=M+1
//loop
@FILL
0;JMP
(UNFILL)
//If keyboard not equl 0, go to fill loop
@KBD
D=M
@FILL
D;JNE
//set value at addr to 0 (all white)
@addr
A=M
M=0
//if reached end of screen, reset
@24575
D=A
@addr
D=D-M
@RESET
D;JEQ
//set addr to next value
@addr
M=M+1
@UNFILL
0;JMP