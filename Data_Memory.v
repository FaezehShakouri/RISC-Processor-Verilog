`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:50:36 12/15/2020 
// Design Name: 
// Module Name:    Data_Memory 
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
module Data_Memory(
	input clk,
	input [15:0] address,
	input [15:0] write_data,
	input MemWrite,
	input MemRead,
	
	output reg [15:0] read_data_mem
    );

	reg [7:0] data_memory [1023:0];
	
	initial $readmemh("data_memory.txt", data_memory);
		
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
	
endmodule
