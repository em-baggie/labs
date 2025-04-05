// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/4/Mult.asm

// Multiplies R0 and R1 and stores the result in R2.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)
// The algorithm is based on repetitive addition.

// Set R2 value to 0
@R2
M=0
//begin loop
(LOOP)
@R1
D=M
//End if value in R1 <=0
@END
D;JLE
//Add value of R0 to R2 and store in R2
@R0
D=M
@R2
M=D+M
//Minus 1 from R1 value
@R1
M=M-1
//Jump back to start of loop
@LOOP
0;JMP
(END)
@END
0;JMP