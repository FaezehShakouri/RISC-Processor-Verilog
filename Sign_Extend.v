`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:23:03 11/12/2020 
// Design Name: 
// Module Name:    Sign_Extend 
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
module Sign_Extend(immediate, sign_extended_immediate);
	
	input [6:0] immediate;
	output reg [15:0] sign_extended_immediate;
	
	always @ (immediate)
		sign_extended_immediate <= {{9{immediate[6]}} ,immediate};

endmodule
