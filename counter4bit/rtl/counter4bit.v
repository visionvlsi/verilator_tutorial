`timescale 1ns/1ps
module counter4bit(
		   input clk,rst,
		   output reg [3:0]count
		   );
		   
always@(posedge clk)
if(rst)
count<=4'b0000;
else
count<=count+4'b0001;

endmodule
