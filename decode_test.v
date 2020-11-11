`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:49:09 11/12/2020
// Design Name:   Decode
// Module Name:   D:/Uni/Term 7/Architecture Lab/CPU/RISC_Processor/decode_test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Decode
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decode_test;

	// Inputs
	reg clk;
	reg [15:0] instruction;

	// Outputs
	wire [2:0] OpCode;
	wire [15:0] read_data_1;
	wire [15:0] read_data_2;
	wire [15:0] sign_extended_immediate;
	wire [2:0] rt;
	wire [2:0] rd;

	// Instantiate the Unit Under Test (UUT)
	Decode uut (
		.clk(clk), 
		.instruction(instruction), 
		.OpCode(OpCode), 
		.read_data_1(read_data_1), 
		.read_data_2(read_data_2), 
		.sign_extended_immediate(sign_extended_immediate), 
		.rt(rt), 
		.rd(rd)
	);
	
	initial begin
		forever begin
			#20;
			clk = ~clk;
		end
	end
	
	initial begin
		// Initialize Inputs
		clk = 0;
		instruction = 0;
		#100
		
		instruction = 16'b1010101010101010;
	end
      
endmodule

