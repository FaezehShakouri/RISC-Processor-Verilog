`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:51:14 12/13/2020
// Design Name:   MIPS
// Module Name:   D:/Uni/Term 7/Architecture Lab/CPU/RISC_Processor/mips_test_2.v
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

module mips_test_2;

	// Inputs
	reg clk;

	// Instantiate the Unit Under Test (UUT)
	MIPS uut (
		.clk(clk)
	);
	
	initial begin
		forever begin
			clk = ~clk;
			#10;
		end
	end
	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish

        
		// Add stimulus here

	end
      
endmodule

