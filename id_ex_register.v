`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:24:00 12/03/2020 
// Design Name: 
// Module Name:    id_ex_register 
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
module id_ex_register(clk, addr_in, read_data_1_in, read_data_2_in, sign_extended_immediate_in, rt_in, rd_in, hit_in, addr_out, read_data_1_out, read_data_2_out, sign_extended_immediate_out, rt_out, rd_out, hit_out);
	
	input clk;
	input [15:0] addr_in;
	input [15:0] read_data_1_in, read_data_2_in;
	input [15:0] sign_extended_immediate_in;
	input [2:0] rt_in, rd_in;
	input hit_in;
	
	output reg [15:0] addr_out;
	output reg [15:0] read_data_1_out, read_data_2_out;
	output reg [15:0] sign_extended_immediate_out;
	output reg [2:0] rt_out, rd_out;
	output reg hit_out;
	
	reg [15:0] addr;
	reg [15:0] read_data_1, read_data_2;
	reg [15:0] sign_extended_immediate;
	reg [2:0]  rt, rd;
	reg hit;

	
	//Write
	always @ (posedge clk)
	begin
		addr 							<= addr_in;
		read_data_1 				<= read_data_1_in;
		read_data_2 				<= read_data_2_in;
		sign_extended_immediate <= sign_extended_immediate_in;
		rt 							<= rt_in; 
		rd 							<= rd_in;
		hit 							<= hit_in;
	end
	
	
	//Read
	always @ (negedge clk)
	begin
		addr_out 						 <= addr;
		read_data_1_out				 <= read_data_1;
		read_data_2_out 				 <= read_data_2;
		sign_extended_immediate_out <= sign_extended_immediate;
		rt_out 							 <= rt; 
		rd_out 							 <= rd;
		hit_out 							 <= hit;
	end
	
endmodule
