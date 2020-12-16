`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:12:51 12/15/2020 
// Design Name: 
// Module Name:    MEM_WB 
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
module MEM_WB(
	input clk,
	input [15:0] read_data_mem_in,
	input [15:0] alu_result_in,
	input [2:0] mux_rd_rt_in,
	input MemToReg_in,
	input RegWrite_in,
	
	output reg [15:0] read_data_mem_out,
	output reg [15:0] alu_result_out,
	output reg [2:0] mux_rd_rt_out,
	output reg MemToReg_out,
	output reg RegWrite_out
    );
	
	initial MemToReg_out = 0;
	
	always @ (negedge clk)
	begin
		read_data_mem_out 	<= read_data_mem_in;
		alu_result_out		   <= alu_result_in;
		mux_rd_rt_out		   <= mux_rd_rt_in;
		MemToReg_out			<= MemToReg_in;
		RegWrite_out			<= RegWrite_in;
	end
endmodule
