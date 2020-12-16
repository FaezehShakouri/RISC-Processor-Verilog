`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:34:39 12/15/2020 
// Design Name: 
// Module Name:    EX_MEM 
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
module EX_MEM(
	input clk,
	input hit,
	input [15:0] ALU_Result_in,
	input Zero_in,
	input [15:0] adder_result_in,
	input [15:0] read_data_2_in,
	input [2:0] mux_rd_rt_in,
	input MemToReg_in,
	input RegWrite_in,
	input MemRead_in, 
	input MemWrite_in, 
	input Branch_in,
	output reg [15:0] ALU_Result_out,
	output reg Zero_out,
	output reg [15:0] adder_result_out,
	output reg [15:0] read_data_2_out,
	output reg [2:0] mux_rd_rt_out,
	output reg MemToReg_out,
	output reg RegWrite_out,
	output reg MemRead_out, 
	output reg MemWrite_out, 
	output reg Branch_out
    );
	
	
	initial begin
		Branch_out = 0;
		MemToReg_out = 0;
	end
	
	always @ (negedge clk)
	begin
		if (hit) begin
			ALU_Result_out			<= ALU_Result_in;		
			Zero_out  				<= Zero_in;
			adder_result_out     <= adder_result_in;
			read_data_2_out		<= read_data_2_in;
			mux_rd_rt_out			<= mux_rd_rt_in;
			MemToReg_out			<= MemToReg_in;
			RegWrite_out			<= RegWrite_in;
			MemRead_out				<= MemRead_in;
			MemWrite_out			<= MemWrite_in; 
			Branch_out				<= Branch_in;
		end
	end
endmodule
