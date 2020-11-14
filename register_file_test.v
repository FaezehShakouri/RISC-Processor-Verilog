`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:12:11 11/11/2020
// Design Name:   Register_File
// Module Name:   D:/Uni/Term 7/Architecture Lab/CPU/RISC_Processor/register_file_test.v
// Project Name:  RISC_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Register_File
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module register_file_test;

	// Inputs
	reg clk;
	reg RegWrite;
	reg [2:0] read_reg_1;
	reg [2:0] read_reg_2;
	reg [2:0] write_reg;
	reg [15:0] write_data;

	// Outputs
	wire [15:0] read_data_1;
	wire [15:0] read_data_2;

	// Instantiate the Unit Under Test (UUT)
	Register_File uut (
		.clk(clk), 
		.RegWrite(RegWrite), 
		.read_reg_1(read_reg_1), 
		.read_reg_2(read_reg_2), 
		.write_reg(write_reg), 
		.write_data(write_data), 
		.read_data_1(read_data_1), 
		.read_data_2(read_data_2)
	);
	
	initial begin
		forever begin
			if (~clk)
				$display(read_data_1);
			#20;
			clk = ~clk;
		end
	end
	
	initial begin
		// Initialize Inputs
		clk = 0;
		RegWrite = 1;
		read_reg_1 = 4;
		read_reg_2 = 0;
		write_reg = 4;
		write_data = 20;
	

	end
      
endmodule

