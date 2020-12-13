`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:56:50 12/03/2020 
// Design Name: 
// Module Name:    Execute_Stage 
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
module Execute_Stage(addr_in, read_data_1_in, read_data_2_in, sign_extended_immediate_in, rt_in, rd_in, RegDst_in, ALUSrc_in, ALUOp_in, ALU_Result, addr_out, Zero, mux_rd_rt_out);

	input [15:0] addr_in;
	input [15:0] read_data_1_in, read_data_2_in;
	input [15:0] sign_extended_immediate_in;
	input [2:0] rt_in, rd_in;

	// Control unit
	input RegDst_in, ALUSrc_in;
	input [1:0] ALUOp_in;
	// 
	
	output reg [15:0] ALU_Result, addr_out;
	output reg Zero;
	output reg [2:0] mux_rd_rt_out;
	
	reg [2:0] ALU_Op_out;
	reg [15:0] mux_out_alu_in;
	
	
	Adder adder (
    .clk(clk), 
    .addr_inp_1(addr_in), 
    .addr_inp_2(sign_extended_immediate_in << 1), 
    .addr_out(addr_out)
    );
	 
	 
	ALU_Control alu_control (
    .func(sign_extended_immediate_in[15:12]), 
    .ALUOp(ALUOp_in), ////////
    .ALUOp_out(ALU_Op_out)
    );
	
	
	Mux mux_read2_sign (
    .input1(sign_extended_immediate_in), 
    .input0(read_data_2_in), 
    .select(ALUSrc_in), //////
    .out(mux_out_alu_in)
    );


	ALU alu (
	 .ALU_Control(ALU_Op_out), 
	 .data_1(read_data_1_in), 
	 .data_2(mux_out_alu_in), 
	 .ALU_Result(ALU_Result), 
	 .Zero(Zero)
	);


	Mux mux_rt_rd (
    .input1(rd_in), 
    .input0(rt_in), 
    .select(RegDst_in), 
    .out(mux_rd_rt_out)
    );
endmodule
