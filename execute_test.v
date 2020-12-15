`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:33:27 12/15/2020
// Design Name:   Execute
// Module Name:   D:/Uni/Term 7/Architecture Lab/CPU/RISC-Processor-Verilog/execute_test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Execute
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module execute_test;

	// Inputs
	reg [15:0] adder_address;
	reg [15:0] read_data_1;
	reg [15:0] read_data_2;
	reg [15:0] sign_extended_immediate;
	reg [2:0] rt;
	reg [2:0] rd;
	reg RegDst_in;
	reg ALUSrc_in;
	reg [1:0] ALUOp_in;

	// Outputs
	wire [15:0] ALU_Result;
	wire [15:0] adder_result;
	wire Zero;
	wire [2:0] mux_rd_rt_out;

	// Instantiate the Unit Under Test (UUT)
	Execute uut (
		.adder_address(adder_address), 
		.read_data_1(read_data_1), 
		.read_data_2(read_data_2), 
		.sign_extended_immediate(sign_extended_immediate), 
		.rt(rt), 
		.rd(rd), 
		.RegDst_in(RegDst_in), 
		.ALUSrc_in(ALUSrc_in), 
		.ALUOp_in(ALUOp_in), 
		.ALU_Result(ALU_Result), 
		.adder_result(adder_result), 
		.Zero(Zero), 
		.mux_rd_rt_out(mux_rd_rt_out)
	);

	initial begin
		// Initialize Inputs
		adder_address = 0;
		read_data_1 = 0;
		read_data_2 = 0;
		sign_extended_immediate = 0;
		rt = 0;
		rd = 0;
		RegDst_in = 0;
		ALUSrc_in = 0;
		ALUOp_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

