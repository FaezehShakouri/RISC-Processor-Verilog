`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:38:36 11/14/2020 
// Design Name: 
// Module Name:    MIPS 
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
module MIPS(clk);

	input clk;

	// Inputs of Fetch
	wire [15:0] branch_target;
	wire PC_src;
	
	// IF/ID
	wire [15:0] IFID_instr_in, IFID_instr_out;
	wire [15:0] IFID_addr_in, IFID_addr_out;
	wire IFID_hit_in, IFID_hit_out;
	
	Instr_Fetch instr_fetch_stage (
    .clk(clk), 
    .branch_target(branch_target), 
    .PC_src(PC_src), 
    .instr_fetch_out(IFID_instr_in), 
    .hit_fetch_out(IFID_hit_in), 
    .adder_out(IFID_addr_in)
    );

	
	IF_ID if_id_register (
    .clk(clk), 
    .addr_in(IFID_addr_in), 
    .instr_in(IFID_instr_in), 
    .hit_fetch_in(IFID_hit_in), 
    .addr_out(IFID_addr_out), 
    .instr_out(IFID_instr_out), 
    .hit_fetch_out(IFID_hit_out)
    );
	 
	
	Decode decode_stage (
    .clk(clk), 
    .instruction(IFID_instr_out), 
    .read_data_1(read_data_1), 
    .read_data_2(read_data_2), 
    .sign_extended_immediate(sign_extended_immediate), 
    .rt(rt), 
    .rd(rd)
    );
	 
	 
	id_ex_register ID_EX_Register (
	 .clk(clk), 
	 .addr_in(IFID_addr_out), 
	 .read_data_1_in(read_data_1), 
	 .read_data_2_in(read_data_2), 
	 .sign_extended_immediate_in(sign_extended_immediate), 
	 .rt_in(rt), 
	 .rd_in(rd), 
	 .hit_in(IFID_hit_out), 
	 .addr_out(addr_out), 
	 .read_data_1_out(read_data_1_out), 
	 .read_data_2_out(read_data_2_out), 
	 .sign_extended_immediate_out(sign_extended_immediate_out), 
	 .rt_out(rt_out), 
	 .rd_out(rd_out), 
	 .hit_out(hit_out)
	 );
	
	
	Execute_Stage execute_stage (
    .addr_in(addr_out), 
    .read_data_1_in(read_data_1_out), 
    .read_data_2_in(read_data_2_out), 
    .sign_extended_immediate_in(sign_extended_immediate_out), 
    .rt_in(rt_out), 
    .rd_in(rd_out), 
    .ALU_Result(ALU_Result), 
    .Zero(Zero)
    );
	
endmodule
