`timescale 1ns/1ps
module tb_counter4bit;

reg clk,rst;
wire [3:0]count;

counter4bit dut(clk,rst,count);
		   
initial
	begin
	clk=1'b0;
	rst=1'b0;
	repeat(2)
	@(posedge clk);
	rst=1'b1;
	repeat(2)
	@(posedge clk);
	rst=1'b0;
	repeat(2)
	@(posedge clk);
	#300;
	$finish;
	end
	
always #5 clk=~clk;

initial
	begin
	$dumpfile("counter.vcd");
	$dumpvars(1);
	end
	
endmodule
		   
