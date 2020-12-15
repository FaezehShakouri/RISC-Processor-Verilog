`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:42:39 12/14/2020 
// Design Name: 
// Module Name:    MUX_3_bit 
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
module MUX_3_bit(input1, input0, select, out);
	
	input  select;						
	input	 [2:0] input1, input0;	
	
	output [2:0] out;				
	assign out = (select) ? input1 : input0;
endmodule
