`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:41:23 11/12/2020
// Design Name:   Sign_Extend
// Module Name:   D:/Uni/Term 7/Architecture Lab/CPU/RISC_Processor/sign_extend_test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Sign_Extend
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sign_extend_test;

	// Inputs
	reg [6:0] immediate;

	// Outputs
	wire [15:0] sign_extended_immediate;

	// Instantiate the Unit Under Test (UUT)
	Sign_Extend uut (
		.immediate(immediate), 
		.sign_extended_immediate(sign_extended_immediate)
	);

	initial begin
		// Initialize Inputs
		immediate = 7'b1000000;
		#100;
		
		immediate = 7'b0111111;
		#100;
		
		immediate = 7'b0000000;
	end
      
endmodule

