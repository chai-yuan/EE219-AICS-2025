`include "v_defines.v"
module v_execute #(
  parameter VALUOP_DW = 8,
  parameter VREG_DW   = `VREG_WIDTH,
  parameter VREG_AW   = 5,
  parameter REG_DW    = 64
)(
  input                   clk,
  input                   rst,
  input [VALUOP_DW-1:0]   valu_opcode_i,
  input [VREG_DW-1:0]     operand_v1_i,
  input [VREG_DW-1:0]     operand_v2_i,
  output reg[VREG_DW-1:0]     valu_result_o
);

  localparam VALU_OP_NOP        = 8'd0  ;
  localparam VALU_OP_VADD       = 8'd1  ;
  localparam VALU_OP_VMUL       = 8'd2  ;
  localparam VALU_OP_VSUB       = 8'd3  ;
  localparam VALU_OP_VMIN       = 8'd4  ;
  localparam VALU_OP_VMAX       = 8'd5  ;
  localparam VALU_OP_VSRA       = 8'd6  ;
  localparam VALU_OP_VREDSUM_VS = 8'd7  ;
  localparam VALU_OP_VREDMAX_VS = 8'd8  ;
  localparam VALU_OP_VMV_V_X    = 8'd9  ;
  localparam VALU_OP_VMV_X_S    = 8'd10 ;
  localparam VALU_OP_VDIV       = 8'd11 ; 

  integer i;
  reg [`SEW-1:0] lane_v1 [0:`VLMAX-1];
  reg [`SEW-1:0] lane_v2 [0:`VLMAX-1];
  reg [`SEW-1:0] lane_out[0:`VLMAX-1];
  
always@(*)begin
  for(i = 0; i < `VLMAX; i=i+1) begin
      lane_v1[i] = operand_v1_i[i*`SEW +: `SEW];
      lane_v2[i] = operand_v2_i[i*`SEW +: `SEW];
      lane_out[i] = 0;
    end
    
  case(valu_opcode_i)
    VALU_OP_VADD:begin
      for(i=0;i<`VLMAX;i=i+1) begin
        lane_out[i] = lane_v2[i] + lane_v1[0];  // vadd.vi: 所有lane加同一个立即数
      end
    end
    VALU_OP_VMUL:begin
      for(i=0;i<`VLMAX;i=i+1) lane_out[i] = lane_v2[i] * lane_v1[i];
    end
    VALU_OP_VSUB:begin
      for(i=0;i<`VLMAX;i=i+1) lane_out[i] = lane_v2[i] - lane_v1[i];
    end
    VALU_OP_VDIV:begin
      for(i=0;i<`VLMAX;i=i+1) lane_out[i] = (lane_v1[i] != 0)? lane_v2[i] / lane_v1[i] : 0;
    end
    VALU_OP_VMV_V_X:begin
      for(i=0;i<`VLMAX;i=i+1) lane_out[i] = 0;
    end
    VALU_OP_VMV_X_S:begin
      for(i=0;i<`VLMAX;i=i+1) lane_out[i] = 0;
    end
    VALU_OP_VMIN:begin
      for(i=0;i<`VLMAX;i=i+1) lane_out[i] = ($signed(lane_v1[i]) < $signed(lane_v2[i]))  ? lane_v1[i] : lane_v2[i];
    end
    VALU_OP_VMAX:begin
      for(i=0;i<`VLMAX;i=i+1) lane_out[i] = ($signed(lane_v1[i]) > $signed(lane_v2[i])) ? lane_v1[i] : lane_v2[i];
    end
    VALU_OP_VSRA:begin
      for(i=0;i<`VLMAX;i=i+1) begin
        lane_out[i] = $signed(lane_v2[i]) >>> lane_v1[i];
      end
    end
    VALU_OP_VREDSUM_VS:begin
      lane_out[0] = lane_v1[0];
      for(i=0;i<`VLMAX;i=i+1) begin
        lane_out[0] = lane_out[0] + lane_v2[i];
      end
      for(i=1;i<`VLMAX;i=i+1) lane_out[i] = 0;
    end
    VALU_OP_VREDMAX_VS:begin
      lane_out[0] = lane_v1[0];
      for(i=0;i<`VLMAX;i=i+1) begin
        if ($signed(lane_v2[i]) > $signed(lane_out[0])) begin
          lane_out[0] = lane_v2[i];
        end
      end
      for(i=1;i<`VLMAX;i=i+1) lane_out[i] = 0;
    end
    default:begin
      for(i=0;i<`VLMAX;i=i+1) lane_out[i] = 0;
    end
  endcase
end  

always @(*) begin
  for(i = 0; i < `VLMAX; i=i+1)
    valu_result_o[i*`SEW +: `SEW] = lane_out[i];
end

endmodule