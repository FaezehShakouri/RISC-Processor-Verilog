`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:10:57 11/04/2020 
// Design Name: 
// Module Name:    Instr_Fetch 
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
module Instr_Fetch(
	clk,
	branch_target,
	PC_src,
	instr_fetch_out,
	hit_fetch_out,
	adder_out
    );
	
	input clk, PC_src;
	input [15:0] branch_target;
	
	output [15:0] instr_fetch_out;
	output hit_fetch_out;
	output [15:0] adder_out;
	
	wire [15:0] mux_out;
	wire [15:0] pc_out;
	//wire [15:0] tmp_adder_out;
	wire [63:0] data_line;
	
	
	PC pc (
    .nextInstAddr(mux_out), 
    .clk(clk), 
    .hit(hit_fetch_out), 
    .instAddrResult(pc_out)
    );
	
	Adder adder (
    .clk(clk), 
    .addr_inp(pc_out), 
    .addr_out(adder_out)
    );

	Mux mux_2_to_1 (
    .input1(branch_target), 
    .input0(adder_out), 
    .select(PC_src), 
    .out(mux_out)
    );
	 
	Instruction_Memory instruction_memory (
    .addr(pc_out), 
    .clk(clk), 
    .dataLine(data_line)
    );
	 
	 Instruction_Cache instruction_cache (
    .clk(clk), 
    .addr(pc_out), 
    .dataLine(data_line), 
    .instruction_out(instr_fetch_out), 
    .hit(hit_fetch_out)
    );
endmodule
