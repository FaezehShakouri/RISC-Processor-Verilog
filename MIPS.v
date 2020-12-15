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
	
	// Fetch
	wire [15:0] fetch_adder_pc_out;
	wire [15:0] fetch_instruction;
	wire hit;
	
	// IF/ID
	wire [15:0] IFID_instruction;
	wire [15:0] IFID_adder_pc;
	
	// Decode
	wire [15:0] decode_read_data_1;
	wire [15:0] decode_read_data_2;
	wire [15:0] decode_sign_extended_immediate;
	wire [2:0] decode_rt;
	wire [2:0] decode_rd;
	wire decode_Sig_RegDst; 
   wire decode_Sig_ALUSrc;
   wire decode_Sig_MemToReg; 
   wire decode_Sig_RegWrite; 
   wire decode_Sig_MemRead; 
   wire decode_Sig_MemWrite; 
   wire decode_Sig_Branch;
   wire [1:0] decode_Sig_ALUOp;
	
	// ID/EX
	wire [15:0] IDEX_adder_pc_out;
   wire [15:0] IDEX_read_data_1_out;
   wire [15:0] IDEX_read_data_2_out; 
   wire [15:0] IDEX_sign_extended_immediate_out;
   wire [2:0] IDEX_rt_out;
   wire [2:0] IDEX_rd_out;
   wire IDEX_RegDst_out; 
   wire IDEX_ALUSrc_out; 
   wire IDEX_MemToReg_out; 
   wire IDEX_RegWrite_out; 
   wire IDEX_MemRead_out; 
   wire IDEX_MemWrite_out; 
   wire IDEX_Branch_out;
   wire [1:0] IDEX_ALUOp_out;
	
	
	// Execute
	wire [15:0] EXE_ALU_Result; 
   wire [15:0] EXE_adder_result;
   wire EXE_Zero;
   wire [2:0] EXE_mux_rd_rt_out;
	
	
	// EX/MEM
	wire [15:0] EX_MEM_ALU_Result_out; 
   wire EX_MEM_Zero_out;
   wire [15:0] EX_MEM_adder_result_out;
   wire [15:0] EX_MEM_read_data_2_out; 
   wire [2:0] EX_MEM_mux_rd_rt_out;
   wire EX_MEM_MemToReg_out;
   wire EX_MEM_RegWrite_out; 
   wire EX_MEM_MemRead_out; 
   wire EX_MEM_MemWrite_out; 
   wire EX_MEM_Branch_out;
	
	
	// Memory
	wire [15:0] MEM_read_data_mem; 
   wire MEM_PCSrc_out;
	
	
	// MEM/WB
	wire [15:0] MEM_WB_read_data_mem_out; 
   wire [15:0] MEM_WB_alu_result_out; 
   wire [2:0] MEM_WB_mux_rd_rt_out; 
   wire MEM_WB_MemToReg_out; 
   wire MEM_WB_RegWrite_out;
	
	
	// Write_Back
	wire [15:0] WRITE_BACK_mux_wb;
	
	
	Instr_Fetch instr_fetch_stage (
    .clk(clk), 
    .branch_target(EX_MEM_adder_result_out),
    .PC_src(MEM_PCSrc_out),
    .instr_fetch_out(fetch_instruction), 
    .hit_fetch_out(hit), 
    .adder_out(fetch_adder_pc_out)
    );
	 
	 
	IF_ID if_id_register (
    .clk(clk), 
    .addr_in(fetch_adder_pc_out), 
    .instr_in(fetch_instruction), 
    .hit_fetch_in(hit), 
    .addr_out(IFID_adder_pc), 
    .instr_out(IFID_instruction)
    );


	Decode decode_stage (
    .clk(clk), 
    .instruction(IFID_instruction),
	 .RegWrite_from_wb(MEM_WB_RegWrite_out), 
    .write_reg(MEM_WB_mux_rd_rt_out), 
    .write_data(WRITE_BACK_mux_wb), 
    .read_data_1(decode_read_data_1), 
    .read_data_2(decode_read_data_2), 
    .sign_extended_immediate(decode_sign_extended_immediate), 
    .rt(decode_rt), 
    .rd(decode_rd),
	 .Sig_RegDst(decode_Sig_RegDst), 
    .Sig_ALUSrc(decode_Sig_ALUSrc), 
    .Sig_MemToReg(decode_Sig_MemToReg), 
    .Sig_RegWrite(decode_Sig_RegWrite), 
    .Sig_MemRead(decode_Sig_MemRead), 
    .Sig_MemWrite(decode_Sig_MemWrite), 
    .Sig_Branch(decode_Sig_Branch), 
    .Sig_ALUOp(decode_Sig_ALUOp)
    );
	
	
	ID_EX id_ex_register (
    .clk(clk), 
    .adder_pc_in(IFID_adder_pc), 
    .read_data_1_in(decode_read_data_1), 
    .read_data_2_in(decode_read_data_2), 
    .sign_extended_immediate_in(decode_sign_extended_immediate), 
    .rt_in(decode_rt), 
    .rd_in(decode_rd), 
    .hit(hit), 
    .RegDst_in(decode_Sig_RegDst), 
    .ALUSrc_in(decode_Sig_ALUSrc), 
    .MemToReg_in(decode_Sig_MemToReg), 
    .RegWrite_in(decode_Sig_RegWrite), 
    .MemRead_in(decode_Sig_MemRead), 
    .MemWrite_in(decode_Sig_MemWrite), 
    .Branch_in(decode_Sig_Branch), 
    .ALUOp_in(decode_Sig_ALUOp), 
    .adder_pc_out(IDEX_adder_pc_out), 
    .read_data_1_out(IDEX_read_data_1_out), 
    .read_data_2_out(IDEX_read_data_2_out), 
    .sign_extended_immediate_out(IDEX_sign_extended_immediate_out), 
    .rt_out(IDEX_rt_out), 
    .rd_out(IDEX_rd_out), 
    .RegDst_out(IDEX_RegDst_out), 
    .ALUSrc_out(IDEX_ALUSrc_out), 
    .MemToReg_out(IDEX_MemToReg_out), 
    .RegWrite_out(IDEX_RegWrite_out), 
    .MemRead_out(IDEX_MemRead_out), 
    .MemWrite_out(IDEX_MemWrite_out), 
    .Branch_out(IDEX_Branch_out), 
    .ALUOp_out(IDEX_ALUOp_out)
    );
	
	
	Execute execute_stage (
    .adder_address(IDEX_adder_pc_out), 
    .read_data_1(IDEX_read_data_1_out), 
    .read_data_2(IDEX_read_data_2_out), 
    .sign_extended_immediate(IDEX_sign_extended_immediate_out), 
    .rt(IDEX_rt_out),
    .rd(IDEX_rd_out), 
    .RegDst_in(IDEX_RegDst_out), 
    .ALUSrc_in(IDEX_ALUSrc_out), 
    .ALUOp_in(IDEX_ALUOp_out), 
    .ALU_Result(EXE_ALU_Result), 
    .adder_result(EXE_adder_result), 
    .Zero(EXE_Zero), 
    .mux_rd_rt_out(EXE_mux_rd_rt_out)
    );
	 
	
	EX_MEM ex_mem_resigter (
    .clk(clk), 
    .hit(hit), 
    .ALU_Result_in(EXE_ALU_Result), 
    .Zero_in(EXE_Zero), 
    .adder_result_in(EXE_adder_result), 
    .read_data_2_in(IDEX_read_data_2_out), 
    .mux_rd_rt_in(EXE_mux_rd_rt_out), 
    .MemToReg_in(IDEX_MemToReg_out), 
    .RegWrite_in(IDEX_RegWrite_out), 
    .MemRead_in(IDEX_MemRead_out), 
    .MemWrite_in(IDEX_MemWrite_out), 
    .Branch_in(IDEX_Branch_out), 
    .ALU_Result_out(EX_MEM_ALU_Result_out), 
    .Zero_out(EX_MEM_Zero_out), 
    .adder_result_out(EX_MEM_adder_result_out), 
    .read_data_2_out(EX_MEM_read_data_2_out), 
    .mux_rd_rt_out(EX_MEM_mux_rd_rt_out), 
    .MemToReg_out(EX_MEM_MemToReg_out), 
    .RegWrite_out(EX_MEM_RegWrite_out), 
    .MemRead_out(EX_MEM_MemRead_out), 
    .MemWrite_out(EX_MEM_MemWrite_out), 
    .Branch_out(EX_MEM_Branch_out)
    );
	 
	 
	Memory memory_stage (
    .clk(clk), 
    .address(EX_MEM_ALU_Result_out), 
    .write_data(EX_MEM_read_data_2_out), 
    .MemWrite(EX_MEM_MemWrite_out), 
    .MemRead(EX_MEM_MemRead_out), 
    .Branch(EX_MEM_Branch_out), 
    .Zero(EX_MEM_Zero_out), 
    .read_data_mem(MEM_read_data_mem), 
    .PCSrc_out(MEM_PCSrc_out)
    );
	 
	 
	MEM_WB mem_wb_register (
    .clk(clk), 
    .read_data_mem_in(MEM_read_data_mem), 
    .alu_result_in(EX_MEM_ALU_Result_out), 
    .mux_rd_rt_in(EX_MEM_mux_rd_rt_out), 
    .MemToReg_in(EX_MEM_MemToReg_out), 
    .RegWrite_in(EX_MEM_RegWrite_out), 
    .read_data_mem_out(MEM_WB_read_data_mem_out), 
    .alu_result_out(MEM_WB_alu_result_out), 
    .mux_rd_rt_out(MEM_WB_mux_rd_rt_out), 
    .MemToReg_out(MEM_WB_MemToReg_out), 
    .RegWrite_out(MEM_WB_RegWrite_out)
    );

	
	Write_Back write_back_stage (
    .read_data_mem(MEM_WB_read_data_mem_out), 
    .alu_result(MEM_WB_alu_result_out), 
    .MemToReg(MEM_WB_MemToReg_out), 
    .mux_wb(WRITE_BACK_mux_wb)
    );
endmodule
