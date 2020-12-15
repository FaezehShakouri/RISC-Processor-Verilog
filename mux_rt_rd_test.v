`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:18:43 12/14/2020
// Design Name:   MUX_3_bit
// Module Name:   D:/Uni/Term 7/Architecture Lab/CPU/RISC-Processor-Verilog/mux_rt_rd_test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MUX_3_bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_rt_rd_test;

	// Inputs
	reg [2:0] input1;
	reg [2:0] input0;
	reg select;

	// Outputs
	wire [2:0] out;

	// Instantiate the Unit Under Test (UUT)
	MUX_3_bit uut (
		.input1(input1), 
		.input0(input0), 
		.select(select), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		input1 = 0;
		input0 = 1;
		select = 0;

		// Wait 100 ns for global reset to finish
		#100;
        select = 1;
		// Add stimulus here

	end
      
endmodule

