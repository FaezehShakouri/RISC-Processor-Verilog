`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:37:17 10/26/2020
// Design Name:   Instruction_Memory
// Module Name:   D:/Uni/Term 7/Architecture Lab/HW1/Codes/RISC_Processor/Instruction_Memory_Test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Instruction_Memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Instruction_Memory_Test;

	// Inputs
	reg [15:0] addr;
	reg clk;

	// Outputs
	wire [0:63] dataLine;

	// Instantiate the Unit Under Test (UUT)
	Instruction_Memory uut (
		.addr(addr), 
		.clk(clk), 
		.dataLine(dataLine)
	);
	
	initial begin
		forever begin
			clk = ~clk;
			#10;
		end
	end
	
	initial begin
		// Initialize Inputs
		addr = 16'h0000;
		clk=0;
		#100
		
		addr = 16'h0014;
		#100
		
		addr = 16'h0004;
	end
      
endmodule

