`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:09:12 11/12/2020 
// Design Name: 
// Module Name:    Decode 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Decode(clk, instruction, read_data_1, read_data_2, sign_extended_immediate, rt, rd);
	
	input clk;
	input [15:0] instruction;
	
	//output [2:0] OpCode;
	output [15:0] read_data_1, read_data_2;
	output [15:0] sign_extended_immediate;
	output [2:0] rt, rd;
	
	assign rt = instruction[9:7];
	assign rd = instruction[6:4];
	
	Register_File register_file (
    .clk(clk), 
    .RegWrite(0), 		// bdn byd ezafe bshe
    .read_reg_1(instruction[12:10]), 
    .read_reg_2(instruction[9:7]), 
    .write_reg(0), 		// bdn byd ezafe bshe
    .write_data(0), 	   // bdn byd ezafe bshe
    .read_data_1(read_data_1), 
    .read_data_2(read_data_2)
    );
	
	Sign_Extend sign_extend (
    .immediate(instruction[6:0]), 
    .sign_extended_immediate(sign_extended_immediate)
    );
	 
	Control_Unit control_unit (
    .OpCode(instruction[15:13]), 
    .RegDst(RegDst), 
    .ALUSrc(ALUSrc), 
    .MemToReg(MemToReg), 
    .RegWrite(RegWrite), 
    .MemRead(MemRead), 
    .MemWrite(MemWrite), 
    .Branch(Branch), 
    .ALUOp(ALUOp)
    );
	 
endmodule
