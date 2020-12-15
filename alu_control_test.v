`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:32:41 12/14/2020
// Design Name:   ALU_Control
// Module Name:   D:/Uni/Term 7/Architecture Lab/CPU/RISC-Processor-Verilog/alu_control_test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU_Control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_control_test;

	// Inputs
	reg [3:0] func;
	reg [1:0] ALUOp;

	// Outputs
	wire [2:0] ALUOp_out;

	// Instantiate the Unit Under Test (UUT)
	ALU_Control uut (
		.func(func), 
		.ALUOp(ALUOp), 
		.ALUOp_out(ALUOp_out)
	);

	initial begin
		// Initialize Inputs
		func = 0;
		ALUOp = 0;

		// Wait 100 ns for global reset to finish
		#100;
      func = 2;  
		// Add stimulus here
		
		#100;
		ALUOp = 2'b10;
	end
      
endmodule

