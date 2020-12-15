`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:55:46 12/15/2020
// Design Name:   Data_Memory
// Module Name:   D:/Uni/Term 7/Architecture Lab/CPU/RISC-Processor-Verilog/data_memory_test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Data_Memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module data_memory_test;

	// Inputs
	reg clk;
	reg [15:0] address;
	reg [15:0] write_data;
	reg MemWrite;
	reg MemRead;

	// Outputs
	wire [15:0] read_data_mem;

	// Instantiate the Unit Under Test (UUT)
	Data_Memory uut (
		.clk(clk), 
		.address(address), 
		.write_data(write_data), 
		.MemWrite(MemWrite), 
		.MemRead(MemRead), 
		.read_data_mem(read_data_mem)
	);
	always #10 clk = !clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		address = 0;
		write_data = 0;
		MemWrite = 0;
		MemRead = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		address = 2;
		write_data = 16'b1111000011110000;
		MemWrite = 1;
		MemRead = 0;
		#100;
		
		MemWrite = 0;
		MemRead = 1;
	end
      
endmodule

