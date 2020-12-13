`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:31:33 11/14/2020 
// Design Name: 
// Module Name:    IF-ID 
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
module IF_ID(clk, addr_in, instr_in, hit_fetch_in, addr_out, instr_out, hit_fetch_out);
	
	input clk;
	input [15:0] addr_in, instr_in;
	input hit_fetch_in;
	
	output reg [15:0] addr_out, instr_out;
	output reg hit_fetch_out;
	
	reg [15:0] addr_in_reg, instr_in_reg;
	reg hit_fetch_reg;
	
	//Write
	always @ (posedge clk)
	begin
		addr_in_reg	  <= addr_in;
		instr_in_reg  <= instr_in;
		hit_fetch_reg <= hit_fetch_in;
	end
	
	// Read
	always @ (negedge clk) 
	begin
		addr_out 	  <= addr_in_reg;
		instr_out 	  <= instr_in_reg;
		hit_fetch_out <= hit_fetch_reg;
	end
	
endmodule
