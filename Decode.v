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
module Decode(
	input clk,
	input [15:0] instruction,
	input RegWrite_from_wb,
	input [2:0] write_reg,
	input [15:0] write_data,
	
	output [15:0] read_data_1,
	output [15:0] read_data_2,
	output [15:0] sign_extended_immediate,
	output [2:0] rt,
	output [2:0] rd,
	
	output Sig_RegDst, 
   output Sig_ALUSrc, 
   output Sig_MemToReg, 
   output Sig_RegWrite, 
   output Sig_MemRead, 
   output Sig_MemWrite, 
   output Sig_Branch, 
   output [1:0] Sig_ALUOp
	
 );
 
	assign rt = instruction[9:7];
	assign rd = instruction[6:4];
	
	Register_File register_file (
    .clk(clk), 
    .RegWrite(RegWrite_from_wb),
    .read_reg_1(instruction[12:10]),
    .read_reg_2(instruction[9:7]), 
    .write_reg(write_reg), 		// bdn byd ezafe bshe
    .write_data(write_data), 	   // bdn byd ezafe bshe
    .read_data_1(read_data_1), 
    .read_data_2(read_data_2)
    );
	
	Sign_Extend sign_extend (
    .immediate(instruction[6:0]), 
    .sign_extended_immediate(sign_extended_immediate)
    );
	 
	Control_Unit control_unit (
    .OpCode(instruction[15:13]), 
    .RegDst(Sig_RegDst), 
    .ALUSrc(Sig_ALUSrc), 
    .MemToReg(Sig_MemToReg), 
    .RegWrite(Sig_RegWrite), 
    .MemRead(Sig_MemRead), 
    .MemWrite(Sig_MemWrite), 
    .Branch(Sig_Branch), 
    .ALUOp(Sig_ALUOp)
    );
	 
endmodule
