# 				verilog

------

#### 1.四选一多路选择器

```verilog
`timescale 1ns/1ns
module mux4_1(
    input [1:0] d0,d1,d2,d3,//注意是逗号
    input [1:0] sel,
    output [1:0] mux_out//注意最后一个没有逗号
);//注意存在分号
    reg [1:0] reg_mux_out;
    always @(*)begin//always赋值只能为register类型
        case(sel)//识记switch case语句
            2'b00:reg_mux_out=d3;
            2'b01:reg_mux_out=d2;
            2'b10:reg_mux_out=d1;
            2'b11:reg_mux_out=d0;
        endcase
    end
    assign mux_out=reg_mux_out;//assign 赋值语句

endmodule 
```

#### 2.异步复位串联D触发器

```verilog
`timescale 1ns/1ns
module Tff_2 (
input wire data, clk, rst,
output reg q  
);
reg q1;//中间状态
    always @ ( posedge clk or negedge rst)//本题复位信号低有效

        if (~rst) begin//~为按位取反
  q1 <= 1'b0;//注意使用阻塞赋值
  q <= 1'b0;
end 
else begin
    if (data) begin
    q1 <= !q1;//逻辑上的反，此处与~相同
	end
	if (q1) begin
  		q <= !q;
    end
end 
endmodule 
```

