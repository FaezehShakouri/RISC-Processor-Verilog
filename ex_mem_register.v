`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:36:36 12/13/2020 
// Design Name: 
// Module Name:    ex_mem_register 
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
module ex_mem_register(
// :(((((((((
	input clk,
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
	
	reg [15:0] ALU_Result;
	reg Zero;
	reg [15:0] adder_result;
	reg [15:0] read_data_2;
	reg [2:0] mux_rd_rt;
	reg MemToReg;
	reg RegWrite;
	reg MemRead;
	reg MemWrite; 
	reg Branch;
	
	
	always @ (posedge clk)
	begin
		ALU_Result			<= ALU_Result_in;
		Zero					<= Zero_in;
		adder_result      <= adder_result_in;
		read_data_2			<= read_data_2_in;
		mux_rd_rt			<= mux_rd_rt_in;
		MemToReg				<= MemToReg_in;
		RegWrite				<= RegWrite_in;
		MemRead				<= MemRead_in;
		MemWrite				<= MemWrite_in; 
		Branch				<= Branch_in;
	end
	
	always @ (negedge clk)
	begin
		ALU_Result_out			<= ALU_Result;		
		Zero_out  				<= Zero;
		adder_result_out     <= adder_result;
		read_data_2_out		<= read_data_2;
		mux_rd_rt_out			<= mux_rd_rt;
		MemToReg_out			<= MemToReg;
		RegWrite_out			<= RegWrite;
		MemRead_out				<= MemRead;
		MemWrite_out			<= MemWrite; 
		Branch_out				<= Branch;
	end
	
	

endmodule
