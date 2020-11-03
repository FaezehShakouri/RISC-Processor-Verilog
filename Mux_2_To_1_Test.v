`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:30:49 10/24/2020
// Design Name:   Mux_2_To_1
// Module Name:   D:/Uni/Term 7/Architecture Lab/HW1/Codes/RISC_Processor/Mux_2_To_1_Test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux_2_To_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mux_2_To_1_Test;

	// Inputs
	reg [15:0] input1;
	reg [15:0] input0;
	reg select;

	// Outputs
	wire [15:0] out;

	// Instantiate the Unit Under Test (UUT)
	Mux_2_To_1 uut (
		.input1(input1), 
		.input0(input0), 
		.select(select), 
		.out(out)
	);

	initial begin
		input0 = 123;
		input1 = 456;
		select = 0;
		#100;
		
		select = 1;
		
	end
      
endmodule

