`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:37:04 10/24/2020 
// Design Name: 
// Module Name:    PC 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Program counter 16-bit
// Input:		 16-bit next instruction address
// Output:		 16-bit instruction address
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module PC(
	nextInstAddr,
	clk, 
	hit, 
	instAddrResult
	 );
	
	input clk, hit;
	input [15:0] nextInstAddr;
	
	output reg [15:0] instAddrResult;
	
	initial 
	begin
		instAddrResult = 16'h0000;
	end
	
	always @(negedge clk) 
	begin
		if (hit)
			instAddrResult = nextInstAddr;
	end
	
endmodule
