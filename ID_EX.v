`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:00:24 12/14/2020 
// Design Name: 
// Module Name:    ID_EX 
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
module ID_EX(
	input clk,
	input [15:0] adder_pc_in,
	input [15:0] read_data_1_in, 
	input [15:0] read_data_2_in,
	input [15:0] sign_extended_immediate_in,
	input [2:0] rt_in, 
	input [2:0] rd_in,
	input hit,
	// Control Unit Input
	input RegDst_in, 
	input ALUSrc_in, 
	input MemToReg_in, 
	input RegWrite_in, 
	input MemRead_in, 
	input MemWrite_in, 
	input Branch_in,
	input [1:0] ALUOp_in,
	
	output reg [15:0] adder_pc_out,
	output reg [15:0] read_data_1_out, 
	output reg [15:0] read_data_2_out,
	output reg [15:0] sign_extended_immediate_out,
	output reg [2:0] rt_out, 
	output reg [2:0] rd_out,
	// Control Unit Output
	output reg RegDst_out, 
	output reg ALUSrc_out, 
	output reg MemToReg_out, 
	output reg RegWrite_out, 
	output reg MemRead_out, 
	output reg MemWrite_out, 
	output reg Branch_out,
	output reg [1:0] ALUOp_out
    );
	
	
	initial begin 
		Branch_out = 0;
		MemToReg_out = 0;
	end
	
	
	//Read
	always @ (negedge clk)
	begin
		if (hit) begin
			adder_pc_out 					 <= adder_pc_in;
			read_data_1_out				 <= read_data_1_in;
			read_data_2_out 				 <= read_data_2_in;
			sign_extended_immediate_out <= sign_extended_immediate_in;
			rt_out 							 <= rt_in; 
			rd_out 							 <= rd_in;
			RegDst_out						 <= RegDst_in;
			ALUSrc_out						 <= ALUSrc_in;
			MemToReg_out					 <= MemToReg_in;
			RegWrite_out				    <= RegWrite_in;
			MemRead_out						 <= MemRead_in;
			MemWrite_out					 <= MemWrite_in;
			Branch_out						 <= Branch_in;
			ALUOp_out						 <= ALUOp_in;
		end
	end
endmodule
