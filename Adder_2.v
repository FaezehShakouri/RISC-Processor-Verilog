`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:50:30 12/14/2020 
// Design Name: 
// Module Name:    Adder_2 
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
module Adder_2(
	addr_inp_1,
	addr_inp_2,
	addr_out
    );

	input [15:0] addr_inp_1, addr_inp_2;
	output reg [15:0] addr_out;
	
	always @ (addr_inp_1 || addr_inp_2)
	begin
		addr_out <= addr_inp_1 + addr_inp_2;
	end
endmodule
