`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:00:41 12/15/2020 
// Design Name: 
// Module Name:    And 
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
module And(
	input Branch,
	input Zero,
	output PCSrc
    );
	 
	assign PCSrc = Branch && Zero;
	
endmodule
