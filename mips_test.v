`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:35:23 12/14/2020
// Design Name:   MIPS
// Module Name:   D:/Uni/Term 7/Architecture Lab/CPU/RISC-Processor-Verilog/mips_test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MIPS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_test;

	// Inputs
	reg clk;

	// Instantiate the Unit Under Test (UUT)
	MIPS uut (
		.clk(clk)
	);
	
	always #10 clk = !clk;
	initial begin
		// Initialize Inputs
		clk = 1;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
      
endmodule

