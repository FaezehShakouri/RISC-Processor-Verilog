`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:08:09 12/03/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(ALU_Control, data_1, data_2, ALU_Result, Zero);
	
	input [2:0] ALU_Control;
	input [15:0] data_1, data_2;
	
	output [15:0] ALU_Result; 
	output Zero;
	
	
	assign ALU_Result = ALU_Control == 3'b000 ? data_1 + data_2
							: ALU_Control == 3'b001 ? data_1 - data_2
							: ALU_Control == 3'b010 ? !data_1
							: ALU_Control == 3'b011 ? data_1 << data_2
							: ALU_Control == 3'b100 ? data_1 >> data_2
							: ALU_Control == 3'b101 ? data_1 & data_2
							: ALU_Control == 3'b110 ? data_1 | data_2
							: (ALU_Control == 3'b111 & data_1 < data_2) ? 1 : 0; 
	
	assign Zero = ALU_Result ? 0 : 1;

endmodule
