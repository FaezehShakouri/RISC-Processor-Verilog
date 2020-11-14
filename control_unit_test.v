`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:00:47 11/13/2020
// Design Name:   Control_Unit
// Module Name:   D:/Uni/Term 7/Architecture Lab/CPU/RISC_Processor/control_unit_test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Control_Unit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module control_unit_test;

	// Inputs
	reg [2:0] OpCode;

	// Outputs
	wire RegDst;
	wire ALUSrc;
	wire MemToReg;
	wire RegWrite;
	wire MemRead;
	wire MemWrite;
	wire Branch;
	wire [1:0] ALUOp;

	// Instantiate the Unit Under Test (UUT)
	Control_Unit uut (
		.OpCode(OpCode), 
		.RegDst(RegDst), 
		.ALUSrc(ALUSrc), 
		.MemToReg(MemToReg), 
		.RegWrite(RegWrite), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.Branch(Branch), 
		.ALUOp(ALUOp)
	);

	initial begin
		// Initialize Inputs
		OpCode = 0;
		#100;
		
		OpCode = 3'b100;
		#100;
		
		OpCode = 3'b111;

	end
      
endmodule

