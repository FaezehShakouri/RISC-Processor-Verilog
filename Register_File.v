`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:33:31 11/11/2020 
// Design Name: 
// Module Name:    Register_File 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Register_File(clk ,RegWrite, read_reg_1, read_reg_2, write_reg, write_data, read_data_1, read_data_2);
	input clk, RegWrite;
	
	// Write port
	input [2:0] write_reg;
	input [15:0] write_data;
	
	// Read ports
	input [2:0] read_reg_1;
	input [2:0] read_reg_2;
	
	output [15:0] read_data_1;
	output [15:0] read_data_2;
	
	reg [15:0] registers [7:0];
	
	initial begin
		//registers[0] = 0;
		$readmemh("register_file.txt", registers);
	end
	
	
	// Reading doesn't have clk
	assign read_data_1[15:0] = registers[read_reg_1];
	assign read_data_2[15:0] = registers[read_reg_2];
		
		
	// Write in register file must be done at posedge clk
	always @ (posedge clk)
	begin
		if (RegWrite && (write_reg != 0))	// can't write in registers[0]
		begin
			registers[write_reg] = write_data;
		end
	end

endmodule
