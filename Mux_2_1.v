`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:58:08 12/14/2020 
// Design Name: 
// Module Name:    Mux_2_1 
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
module Mux_2_1(input1, input0, select, out);
	
	input  select;						// 1 bit
	input	 [15:0] input1, input0;	// 16 bit
	
	output [15:0] out;				// 16 bit
	
	assign out = (select) ? input1 : input0;
	
endmodule
