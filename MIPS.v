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
	
	// IF/ID
	wire [15:0] IFID_instr_in, IFID_instr_out;
	wire [15:0] IFID_addr_in, IFID_addr_out;
	wire IFID_hit_in, IFID_hit_out;
	
	Instr_Fetch instr_fetch_stage (
    .clk(clk), 
    .branch_target(adder_result_EX_MEM_out), 
    .PC_src(PCSrc_mem_out), // from mem stage
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


	 /////// NEW DECODE//////
	 Decode decode_stage (
    .clk(clk), 
    .instruction(IFID_instr_out),
	 .write_data(mux_wb_out), 
    .write_register(mux_rd_rt_MEM_WB_out), 
    .RegWrite_out(RegWrite_MEM_WB_out), 	 
    .read_data_1(read_data_1), // outputs
    .read_data_2(read_data_2), 
    .sign_extended_immediate(sign_extended_immediate), 
    .rt(rt), 
    .rd(rd), 
    .RegDst(RegDst_decode_out), // first
    .ALUSrc(ALUSrc_decode_out), 
    .MemToReg(MemToReg_decode_out), 
    .RegWrite(RegWrite_decode_out), 
    .MemRead(MemRead_decode_out), 
    .MemWrite(MemWrite_decode_out), 
    .Branch(Branch_decode_out), 
    .ALUOp(ALUOp_decode_out)
    );
	 
	 // Decode Wires
	 wire [15:0] read_data_1, read_data_2, sign_extended_immediate;
	 wire [2:0] rt, rd;
	 wire RegDst_decode_out, ALUSrc_decode_out, MemToReg_decode_out, RegWrite_decode_out, MemRead_decode_out, MemWrite_decode_out,Branch_decode_out;
	 wire [1:0] ALUOp_decode_out;
	 
	
	id_ex_register ID_EX_Register (
    .clk(clk), 
    .addr_in(IFID_addr_out), 
    .read_data_1_in(read_data_1), 
    .read_data_2_in(read_data_2), 
    .sign_extended_immediate_in(sign_extended_immediate), 
    .rt_in(rt), 
    .rd_in(rd), 
    .hit_in(IFID_hit_out),
    .RegDst_in(RegDst_decode_out), 
    .ALUSrc_in(ALUSrc_decode_out), 
    .MemToReg_in(MemToReg_decode_out), 
    .RegWrite_in(RegWrite_decode_out), 
    .MemRead_in(MemRead_decode_out), 
    .MemWrite_in(MemWrite_decode_out), 
    .Branch_in(Branch_decode_out), 
    .ALUOp_in(ALUOp_decode_out),
    .addr_out(addr_out), // outputs
    .read_data_1_out(read_data_1_out), 
    .read_data_2_out(read_data_2_out), 
    .sign_extended_immediate_out(sign_extended_immediate_out), 
    .rt_out(rt_out), 
    .rd_out(rd_out), 
    .hit_out(hit_ID_EX_out),
	 .RegDst_out(RegDst_ID_EX_out),
    .ALUSrc_out(ALUSrc_ID_EX_out), 
    .MemToReg_out(MemToReg_ID_EX_out), 
    .RegWrite_out(RegWrite_ID_EX_out), 
    .MemRead_out(MemRead_ID_EX_out), 
    .MemWrite_out(MemWrite_ID_EX_out), 
    .Branch_out(Branch_ID_EX_out), 
    .ALUOp_out(ALUOp_ID_EX_out)
    );
	 
	 // ID/EX Wires
	 wire [15:0] addr_out, read_data_1_out, read_data_2_out, sign_extended_immediate_out;
	 wire [2:0] rt_out, rd_out;
	 wire hit_ID_EX_out;
	 wire RegDst_ID_EX_out, ALUSrc_ID_EX_out, MemToReg_ID_EX_out, RegWrite_ID_EX_out, MemRead_ID_EX_out, MemWrite_ID_EX_out, Branch_ID_EX_out;
	 wire [1:0] ALUOp_ID_EX_out;
	 
	 
	Execute_Stage execute_stage (
    .addr_in(addr_out), 
    .read_data_1_in(read_data_1_out), 
    .read_data_2_in(read_data_2_out), 
    .sign_extended_immediate_in(sign_extended_immediate_out), 
    .rt_in(rt_out), 
    .rd_in(rd_out), 
    .RegDst_in(RegDst_ID_EX_out), 
    .ALUSrc_in(ALUSrc_ID_EX_out), 
    .ALUOp_in(ALUOp_ID_EX_out), 
    .ALU_Result(ALU_Result_EXE_out), // outputs
    .addr_out(addr_result_EXE_out),
    .Zero(Zero_EXE_out),
	 .mux_rd_rt_out(mux_rd_rt_EXE_out)
    );
	 
	 // execute wires
	 wire [15:0] ALU_Result_EXE_out, addr_result_EXE_out;
	 wire Zero_EXE_out;
	 wire [2:0] mux_rd_rt_EXE_out;
	 
	 
	 // we hate it
	ex_mem_register EX_MEM_Register (
    .clk(clk), 
    .ALU_Result_in(ALU_Result_EXE_out), 
    .Zero_in(Zero_EXE_out), 
    .adder_result_in(adder_result_EXE_out), 
    .read_data_2_in(read_data_2_out), 
    .mux_rd_rt_in(mux_rd_rt_EXE_out), 
    .MemToReg_in(MemToReg_ID_EX_out), 
    .RegWrite_in(RegWrite_ID_EX_out), 
    .MemRead_in(MemRead_ID_EX_out), 
    .MemWrite_in(MemWrite_ID_EX_out), 
    .Branch_in(Branch_ID_EX_out), 
    .ALU_Result_out(ALU_Result_EX_MEM_out),  //outputs
    .Zero_out(Zero_EX_MEM_out), 
    .adder_result_out(adder_result_EX_MEM_out), 
    .read_data_2_out(read_data_2_EX_MEM_out), 
    .mux_rd_rt_out(mux_rd_rt_EX_MEM_out), 
    .MemToReg_out(MemToReg_EX_MEM_out), 
    .RegWrite_out(RegWrite_EX_MEM_out), 
    .MemRead_out(MemRead_EX_MEM_out), 
    .MemWrite_out(MemWrite_EX_MEM_out), 
    .Branch_out(Branch_EX_MEM_out)
    );
	
	// EX/MEM wires
	wire [15:0] ALU_Result_EX_MEM_out, adder_result_EX_MEM_out, read_data_2_EX_MEM_out;
	wire [2:0] mux_rd_rt_EX_MEM_out;
	wire Zero_EX_MEM_out;
	wire MemToReg_EX_MEM_out, RegWrite_EX_MEM_out, MemRead_EX_MEM_out, MemWrite_EX_MEM_out, Branch_EX_MEM_out;
	
	
	memory_stage Memory_Stage (
    .clk(clk), 
    .address(ALU_Result_EX_MEM_out), 
    .write_data(read_data_2_EX_MEM_out), 
    .MemWrite(MemWrite_EX_MEM_out), 
    .MemRead(MemRead_EX_MEM_out), 
    .Branch(Branch_EX_MEM_out), 
    .Zero(Zero_EX_MEM_out), 
    .read_data_mem(read_data_mem_out), // outputs
    .PCSrc_out(PCSrc_mem_out)
    );
	 
	// memory wires
	wire [15:0] read_data_mem_out;
	wire PCSrc_mem_out;
	 
	 
	mem_wb_register MEM_WB_Register (
    .clk(clk), 
    .read_data_mem_in(read_data_mem_out), 
    .alu_result_in(ALU_Result_EX_MEM_out), 
    .mux_rd_rt_in(mux_rd_rt_EX_MEM_out), 
    .MemToReg_in(MemToReg_EX_MEM_out), 
    .RegWrite_in(RegWrite_EX_MEM_out), 
    .read_data_mem_out(read_data_mem_MEM_WB_out), // outputs
    .alu_result_out(alu_result_MEM_WB_out), 
    .mux_rd_rt_out(mux_rd_rt_MEM_WB_out), 
    .MemToReg_out(MemToReg_MEM_WB_out), 
    .RegWrite_out(RegWrite_MEM_WB_out)
    );
	 
	// MEM/WB wires
	wire [15:0] read_data_mem_MEM_WB_out, alu_result_MEM_WB_out;
	wire [2:0] mux_rd_rt_MEM_WB_out;
	wire MemToReg_MEM_WB_out, RegWrite_MEM_WB_out;
	
	 
	write_back_stage Write_Back_Stage (
    .read_data_mem(read_data_mem_MEM_WB_out), 
    .alu_result(alu_result_MEM_WB_out), 
    .MemToReg(MemToReg_MEM_WB_out), 
    .mux_wb(mux_wb_out)
    );
	
	// write_back wires
	wire [2:0] mux_wb_out;             //// im done

endmodule
