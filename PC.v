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
module PC(nextInstAddr, clk, reset, en, instAddrResult);
	
	input clk, reset, en;
	input [15:0] nextInstAddr;
	
	output reg [15:0] instAddrResult;
	
	initial 
	begin
		instAddrResult = 16'h0000;
	end
	
	always @(posedge clk) 
	begin
		if (reset)
			instAddrResult = 16'h0000;
		else 
		begin
			if (en)
				instAddrResult = nextInstAddr;
		end
	end
	
endmodule
