`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:28:03 12/15/2020 
// Design Name: 
// Module Name:    Write_Back 
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
module Write_Back(
   input [15:0] read_data_mem,
	input [15:0] alu_result,
	input MemToReg,
	
	output reg [15:0] mux_wb
    );
	 
	 
	Mux_2_1 mux_2_1 (
    .input1(read_data_mem), 
    .input0(alu_result), 
    .select(MemToReg), 
    .out(mux_wb)
    );
endmodule
