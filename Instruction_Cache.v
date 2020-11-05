`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:48:14 11/04/2020 
// Design Name: 
// Module Name:    Instruction_Cache 
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
module Instruction_Cache(
	clk,
	addr,
	dataLine,
	instruction_out,
	hit
    );

	input clk;
	input [15:0] addr;
	input [63:0] dataLine;
	output reg [15:0] instruction_out;
	output reg hit;
	
	reg [74:0] cache_mem [7:0];
	reg [74:0] cache_data;
	
	reg [2:0] counter;
	integer i;
	
	initial
	begin
		for(i = 0 ; i<8 ; i = i + 1)
		begin 
			cache_mem[i][73:0] = 74'bx;	
 			cache_mem[i][74] = 0;			// Valid bit
		end
		
		instruction_out = 16'bx;
		hit = 0;
		cache_data = 75'b0;
		counter = 0;
	end
	
	always@(posedge clk)
	begin
		cache_data = cache_mem[addr[5:3]][74:0];
		
		if (cache_data[74] && (addr[15:6] == cache_data[73:64]))
		begin
			hit = 1;
			case (addr[2:1])
				2'b00: instruction_out = cache_data[63:48];
				2'b01: instruction_out = cache_data[47:32];		
				2'b10: instruction_out = cache_data[31:16];
				2'b11: instruction_out = cache_data[15:0];		
			endcase
		end
		
		else if ( !cache_data[74] || (addr[15:6] != cache_data[73:64]))
		begin
			instruction_out = 16'bx;
			hit = 0;
			/*
			if (counter == 5)
			begin 
				cache_mem[addr[5:3]][63:0]  <= dataLine;
				cache_mem[addr[5:3]][73:64] <= addr[15:6];
				cache_mem[addr[5:3]][74] 	 <= 1;
				counter <= 0;
			end
			counter = counter + 1;
			*/
		end
	end
	
	always @ (dataLine)
	begin
		if (dataLine !== 64'bx)
		begin
			cache_mem[addr[5:3]][63:0]  <= dataLine;
			cache_mem[addr[5:3]][73:64] <= addr[15:6];
			cache_mem[addr[5:3]][74] 	 <= 1;
		end
	end

endmodule
