`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:23:10 11/04/2020 
// Design Name: 
// Module Name:    Adder 
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
module Adder(
	clk,
	addr_inp_1,
	addr_inp_2,
	addr_out
    );

	input clk;
	input [15:0] addr_inp_1;
	input [15:0] addr_inp_2;
	output reg [15:0] addr_out;
	
	always @ (addr_inp_1 || addr_inp_2)
	begin
		addr_out <= addr_inp_1 + addr_inp_2;
	end
	
endmodule
