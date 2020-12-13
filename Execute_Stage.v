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
module Execute_Stage(addr_in, read_data_1_in, read_data_2_in, sign_extended_immediate_in, rt_in, rd_in, ALU_Result, Zero);

	input [15:0] addr_in;
	input [15:0] read_data_1_in, read_data_2_in;
	input [15:0] sign_extended_immediate_in;
	input [2:0] rt_in, rd_in;
	
	output reg [15:0] ALU_Result;
	output reg Zero;
	
	reg [2:0] ALU_Op_out;
	reg [15:0] mux_out_alu_in;
	
	ALU_Control alu_control (
    .func(addr_in[15:12]), 
    .ALUOp(2'b00), 
    .ALUOp_out(ALU_Op_out)
    );
	
	
	Mux mux_read2_sign (
    .input1(sign_extended_immediate_in), 
    .input0(read_data_2_in), 
    .select(1), 
    .out(mux_out_alu_in)
    );


	ALU alu (
	 .ALU_Control(ALU_Op_out), 
	 .data_1(read_data_1_in), 
	 .data_2(mux_out_alu_in), 
	 .ALU_Result(ALU_Result), 
	 .Zero(Zero)
	);


endmodule
