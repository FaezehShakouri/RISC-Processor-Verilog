`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:14:28 12/13/2020 
// Design Name: 
// Module Name:    mem_wb_register 
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
module mem_wb_register(
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
	 
	
	reg [15:0] read_data_mem;
	reg [15:0] alu_result;
	reg [2:0] mux_rd_rt;
	reg MemToReg;
	reg RegWrite;
	 
	always @ (posedge clk)
	begin
		read_data_mem 	<= read_data_mem_in;
		alu_result		<= alu_result_in;
		mux_rd_rt		<= mux_rd_rt_in;
		MemToReg			<= MemToReg_in;
		RegWrite			<= RegWrite_in;
	end
	
	always @ (negedge clk)
	begin
		read_data_mem_out 	<= read_data_mem;
		alu_result_out		   <= alu_result;
		mux_rd_rt_out		   <= mux_rd_rt;
		MemToReg_out			<= MemToReg;
		RegWrite_out			<= RegWrite;
	end

endmodule
