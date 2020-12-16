`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:02:54 12/15/2020 
// Design Name: 
// Module Name:    Memory 
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
module Memory(
	input clk,
	input [15:0] address,
	input [15:0] write_data,
	input MemWrite,
	input MemRead,
	input Branch,
	input Zero,
	
	output [15:0] read_data_mem,
	output PCSrc_out
    );
	
	
	And and_branch_zero (
    .Branch(Branch), 
    .Zero(Zero), 
    .PCSrc(PCSrc_out)
    );
	 
	 
	Data_Memory data_memory (
    .clk(clk), 
    .address(address), 
    .write_data(write_data), 
    .MemWrite(MemWrite), 
    .MemRead(MemRead), 
    .read_data_mem(read_data_mem)
    );
	
endmodule
