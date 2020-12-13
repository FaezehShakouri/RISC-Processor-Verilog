`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:36:39 12/13/2020 
// Design Name: 
// Module Name:    memory_stage 
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
module memory_stage(
	input clk,
	input [15:0] address,
	input [15:0] write_data,
	input MemWrite,
	input MemRead,
	input Branch,
	input Zero,
	
	
	output reg [15:0] read_data_mem,
	output reg PCSrc_out
    );
	
	reg [7:0] data_memory [1023:0];
	
	always @ (posedge clk)
	begin
		if (MemRead) begin
			read_data_mem[15:8] <= data_memory[address];
			read_data_mem[7:0]  <= data_memory[address + 1];
		end
		
		if (MemWrite) begin
			data_memory[address] <= write_data[15:8];
			data_memory[address + 1] <= write_data[7:0];
		end	
	end
	
	assign PCSrc_out = Branch && Zero;

endmodule
