`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:31:51 11/04/2020
// Design Name:   Instr_Fetch
// Module Name:   D:/Uni/Term 7/Architecture Lab/CPU/RISC_Processor/Instr_Fetch_Test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Instr_Fetch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Instr_Fetch_Test;

	// Inputs
	reg clk;
	reg [15:0] branch_target;
	reg PC_src;

	// Outputs
	wire [15:0] instr_fetch_out;
	wire hit_fetch_out;

	// Instantiate the Unit Under Test (UUT)
	Instr_Fetch uut (
		.clk(clk), 
		.branch_target(branch_target), 
		.PC_src(PC_src), 
		.instr_fetch_out(instr_fetch_out), 
		.hit_fetch_out(hit_fetch_out)
	);
	
	initial begin
		clk = 0;
		branch_target = 0;
		PC_src = 0;
		#20;
	end
	
	initial begin
		forever begin
			clk = ~clk;
			#10;
		end
	end
      
endmodule

