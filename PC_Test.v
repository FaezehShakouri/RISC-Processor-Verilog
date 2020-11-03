`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:50:19 10/24/2020
// Design Name:   PC
// Module Name:   D:/Uni/Term 7/Architecture Lab/HW1/Codes/RISC_Processor/PC_Test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_Test;

	// Inputs
	reg [15:0] nextInstAddr;
	reg clk;
	reg reset;
	reg en;

	// Outputs
	wire [15:0] instAddrResult;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.nextInstAddr(nextInstAddr), 
		.clk(clk), 
		.reset(reset), 
		.en(en), 
		.instAddrResult(instAddrResult)
	);
		
	initial begin
		forever begin
			clk = ~clk; 
			#5;
		end
	end
	
	initial begin
		clk = 0;
		reset = 0;
		nextInstAddr = 123;
		en = 0;
		#10;
		
		nextInstAddr = 123;
		en = 1;
		#10;
		
		nextInstAddr = 456;
		#10;
		
		reset = 1;
		#10;
		
		reset = 0;
		nextInstAddr = 123;
		en = 1;
	end
      
endmodule

