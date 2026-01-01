module v_csr #(
  parameter VREG_WIDTH = `VREG_WIDTH
)(
  input        clk,
  input        rst,

  // vsetvl 接口
  input        vsetvl_en,
  input [2:0]  vsew_req,   // 00:e8 01:e16 10:e32 11:e64

  output [2:0] csr_vsew
);
reg [2:0] vsew_reg;
  always @(posedge clk) begin
    if (rst) begin
      vsew_reg <= 3'b11; // 默认 e64
    end else if (vsetvl_en) begin
      vsew_reg <= vsew_req;
    end
  end
assign csr_vsew = vsew_reg;
endmodule
