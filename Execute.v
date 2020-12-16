`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:52:25 12/14/2020 
// Design Name: 
// Module Name:    Execute 
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
module Execute(
	input [15:0] adder_address,
	input [15:0] read_data_1, 
	input [15:0] read_data_2,
	input [15:0] sign_extended_immediate,
	input [2:0] rt,
	input [2:0] rd,
	// Control unit
	input RegDst_in, 
	input ALUSrc_in,
	input [1:0] ALUOp_in,

	output [15:0] ALU_Result, 
	output [15:0] adder_result,
	output Zero,
	output [2:0] mux_rd_rt_out
    );
	
	wire [2:0] ALU_Op_out;
	wire [15:0] mux_out_alu_in;
	
	wire [15:0] shift_sign_extended;
	assign shift_sign_extended = sign_extended_immediate << 1;
	
	
	Adder_2 adder (
    .addr_inp_1(adder_address), 
    .addr_inp_2(shift_sign_extended), 
    .addr_out(adder_result)
    );
	 
	 
	ALU_Control alu_control (
    .func(sign_extended_immediate[3:0]), 
    .ALUOp(ALUOp_in), 
    .ALUOp_out(ALU_Op_out)
    ); 
	
	
	Mux_2_1 mux_read2_sign (
    .input1(sign_extended_immediate), 
    .input0(read_data_2), 
    .select(ALUSrc_in), 
    .out(mux_out_alu_in)
    );
	 
	 
	ALU alu (
    .ALU_Control(ALU_Op_out), 
    .data_1(read_data_1), 
    .data_2(mux_out_alu_in), 
    .ALU_Result(ALU_Result), 
    .Zero(Zero)
    );
	 
	 
	MUX_3_bit mux_rt_rd (
    .input1(rd), 
    .input0(rt), 
    .select(RegDst_in), 
    .out(mux_rd_rt_out)
    );
endmodule
