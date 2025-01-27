`timescale 1ns/1ps
module tb_ha;

reg a,b;
wire sum,co;

reg [2:0]i;

ha dut(a,b,sum,co);

initial 
	begin
	$monitor($time,"ns a=%b b=%b co=%b sum=%b",a,b,co,sum);
	for(i=0;i<=3;i=i+1) 
		begin
		{a,b}=i[1:0];
		#5;
		end
	end

endmodule
