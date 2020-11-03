`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:22:03 10/24/2020 
// Design Name: 
// Module Name:    Mux_2_To_1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 	 16-bit mux
// Input:			 Two 16-bit input
// Output:			 16-bit output
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Mux_2_To_1(input1, input0, select, out);
	
	input  select;						// 1 bit
	input	 [15:0] input1, input0;	// 16 bit
	
	output [15:0] out;				// 16 bit
	
	assign out = (select) ? input1 : input0;
	
endmodule
