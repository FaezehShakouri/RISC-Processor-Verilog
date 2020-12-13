`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:57:45 12/03/2020 
// Design Name: 
// Module Name:    ALU_Control 
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
module ALU_Control(func, ALUOp, ALUOp_out);

	input [3:0] func;
	input [1:0] ALUOp;
	
	output [2:0] ALUOp_out;
	
	
	assign ALUOp_out = (ALUOp == 2'b00 & func == 4'b0000) ? 3'b000
						  : (ALUOp == 2'b00 & func == 4'b0001) ? 3'b001
						  : (ALUOp == 2'b00 & func == 4'b0010) ? 3'b101
						  : (ALUOp == 2'b00 & func == 4'b0011) ? 3'b110
						  : (ALUOp == 2'b00 & func == 4'b0100) ? 3'b111
						  : (ALUOp == 2'b00 & func == 4'b0101) ? 3'b011
						  : (ALUOp == 2'b00 & func == 4'b0110) ? 3'b100
						  : (ALUOp == 2'b00 & func == 4'b0111) ? 3'b010
				        : (ALUOp == 2'b01) ? 3'b001
						  : (ALUOp == 2'b10) ? 3'b111
						  : (ALUOp == 2'b11) ? 3'b000
												   : 3'bxxx;
						  
endmodule
