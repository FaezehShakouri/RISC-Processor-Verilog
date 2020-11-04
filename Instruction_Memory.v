`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:45:26 10/24/2020 
// Design Name: 
// Module Name:    Instruction_Memory 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description:	16-bit instruction memory.
//	Input: 			16-bit address input.
// Output: 			64-bit address output.
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Instruction_Memory(
	addr, 
	clk, 
	dataLine
	 );
	
	input clk;
	input [15:0] addr;
	
	output reg[0:63] dataLine;
	
	// Instruction Memory. 512 instructions in mem;
	reg [7:0] memory[0:1023];
	
	// Counter for cycles;
	reg [2:0] counter;
	reg reset;
	
	
	initial begin
		counter = 0;
		reset = 0;
		dataLine = 64'bx;
		
		$readmemh("instruction_mem.txt", memory);
		
	end
	
	always @(addr[15:3])
	begin
		if (counter != 0)	
			reset = 1;
			dataLine = 64'bx;
	end
	
	always @(posedge clk)
	begin
		if (reset) 
		begin
			counter <= 1;
			reset = 0;
		end
		else 
			counter <= counter + 1;
	end

	always @(posedge clk)
	begin
		// dataLine must be fill at fifth posedge of clock
		if (counter == 4) 
		begin			
			dataLine[0:7]	 <= memory[{addr[15:3], 3'b000}];
			dataLine[7:15]	 <= memory[{addr[15:3], 3'b001}];
			
			dataLine[16:23] <= memory[{addr[15:3], 3'b010}];
			dataLine[24:31] <= memory[{addr[15:3], 3'b011}];
			
			dataLine[32:39] <= memory[{addr[15:3], 3'b100}];
			dataLine[40:47] <= memory[{addr[15:3], 3'b101}];
			
			dataLine[48:55] <= memory[{addr[15:3], 3'b110}];
			dataLine[56:63] <= memory[{addr[15:3], 3'b111}];
		end
	end
	
	
endmodule
