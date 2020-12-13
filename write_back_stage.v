`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:25:48 12/13/2020 
// Design Name: 
// Module Name:    write_back_stage 
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
module write_back_stage(
	input [15:0] read_data_mem,
	input [15:0] alu_result,
	input MemToReg,
	
	output reg [15:0] mux_wb
    );

	Mux instance_name (
    .input1(read_data_mem), 
    .input0(alu_result), 
    .select(MemToReg), 
    .out(mux_wb)
    );
	
endmodule
