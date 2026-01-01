`include "v_defines.v"

module v_execute #(
  parameter VALUOP_DW = 8,
  parameter VREG_DW   = `VREG_WIDTH   // 512
)(
  input  [VALUOP_DW-1:0] valu_opcode_i,
  input  [VREG_DW-1:0]   operand_v1_i,
  input  [VREG_DW-1:0]   operand_v2_i,
  input  [2:0]           vsew_i,

  output reg [VREG_DW-1:0] valu_result_o,
  output reg [63:0]        scalar_o          // for VMV_X_S
);

  // =============================
  // opcode definition
  // =============================
  localparam VALU_OP_NOP        = 8'd0;
  localparam VALU_OP_VADD       = 8'd1;
  localparam VALU_OP_VMUL       = 8'd2;
  localparam VALU_OP_VSUB       = 8'd3;
  localparam VALU_OP_VMIN       = 8'd4;
  localparam VALU_OP_VMAX       = 8'd5;
  localparam VALU_OP_VSRA       = 8'd6;
  localparam VALU_OP_VREDSUM_VS = 8'd7;
  localparam VALU_OP_VREDMAX_VS = 8'd8;
  localparam VALU_OP_VMV_V_X    = 8'd9;
  localparam VALU_OP_VMV_X_S    = 8'd10;
  localparam VALU_OP_VDIV       = 8'd11;

  localparam LANES = 8;

  integer i;

  // =============================
  // lane storage (64-bit fixed)
  // =============================
  reg [63:0] lane_v1 [0:LANES-1];
  reg [63:0] lane_v2 [0:LANES-1];
  reg [63:0] lane_out[0:LANES-1];

  // =============================
  // unpack (VREG → lanes)
  // =============================
  always @(*) begin
    for (i = 0; i < LANES; i = i + 1) begin
      lane_v1[i]  = 64'b0;
      lane_v2[i]  = 64'b0;
      lane_out[i] = 64'b0;
    end

    case (vsew_i)
      3'b000: begin // e8
        for (i = 0; i < LANES; i = i + 1) begin
          lane_v1[i][7:0] = operand_v1_i[i*8  +: 8];
          lane_v2[i][7:0] = operand_v2_i[i*8  +: 8];
        end
      end

      3'b001: begin // e16
        for (i = 0; i < LANES; i = i + 1) begin
          lane_v1[i][15:0] = operand_v1_i[i*16 +: 16];
          lane_v2[i][15:0] = operand_v2_i[i*16 +: 16];
        end
      end

      3'b010: begin // e32
        for (i = 0; i < LANES; i = i + 1) begin
          lane_v1[i][31:0] = operand_v1_i[i*32 +: 32];
          lane_v2[i][31:0] = operand_v2_i[i*32 +: 32];
        end
      end

      3'b011: begin // e64
        for (i = 0; i < LANES; i = i + 1) begin
          lane_v1[i] = operand_v1_i[i*64 +: 64];
          lane_v2[i] = operand_v2_i[i*64 +: 64];
        end
      end

      default:begin
        for (i = 0; i < LANES; i = i + 1) begin
          lane_v1[i]  = 64'b0;
          lane_v2[i]  = 64'b0;
          lane_out[i] = 64'b0;
        end
      end
    endcase
  end

  // =============================
  // execute (64-bit unified ALU)
  // =============================
  reg [63:0] op1, op2, res;

  always @(*) begin
    scalar_o = 64'b0;

    for (i = 0; i < LANES; i = i + 1) begin
      // ---- sign extension ----
      case (vsew_i)
        3'b000: begin
          op1 = {{56{lane_v1[i][7]}},  lane_v1[i][7:0]};
          op2 = {{56{lane_v2[i][7]}},  lane_v2[i][7:0]};
        end
        3'b001: begin
          op1 = {{48{lane_v1[i][15]}}, lane_v1[i][15:0]};
          op2 = {{48{lane_v2[i][15]}}, lane_v2[i][15:0]};
        end
        3'b010: begin
          op1 = {{32{lane_v1[i][31]}}, lane_v1[i][31:0]};
          op2 = {{32{lane_v2[i][31]}}, lane_v2[i][31:0]};
        end
        default: begin
          op1 = lane_v1[i];
          op2 = lane_v2[i];
        end
      endcase

      // ---- ALU ----
      case (valu_opcode_i)
        VALU_OP_NOP:  res = op1;

        VALU_OP_VADD: res = op1 + op2;
        VALU_OP_VSUB: res = op1 - op2;
        VALU_OP_VMUL: res = op1 * op2;
        VALU_OP_VDIV: res = (op2 == 0) ? 64'b0 : $signed(op1) / $signed(op2);

        VALU_OP_VMIN: res = ($signed(op1) < $signed(op2)) ? op1 : op2;
        VALU_OP_VMAX: res = ($signed(op1) > $signed(op2)) ? op1 : op2;

        VALU_OP_VSRA: begin
          case (vsew_i)
            3'b000: res = $signed(op2) >>> op1[2:0];
            3'b001: res = $signed(op2) >>> op1[3:0];
            3'b010: res = $signed(op2) >>> op1[4:0];
            default:res = $signed(op2) >>> op1[5:0];
          endcase
        end

        VALU_OP_VMV_V_X: res = op1;

        default: res = 64'b0;
      endcase

      // ---- truncate back ----
      case (vsew_i)
        3'b000: lane_out[i] = {56'b0, res[7:0]};
        3'b001: lane_out[i] = {48'b0, res[15:0]};
        3'b010: lane_out[i] = {32'b0, res[31:0]};
        default:lane_out[i] = res;
      endcase
    end

    // ---- reduction ----
    if (valu_opcode_i == VALU_OP_VREDSUM_VS) begin
      res = lane_v1[0];
      for (i = 0; i < LANES; i = i + 1)
        res = res + lane_v2[i];
      lane_out[0] = res;
    end

    if (valu_opcode_i == VALU_OP_VREDMAX_VS) begin
      res = lane_v1[0];
      for (i = 0; i < LANES; i = i + 1)
        if ($signed(lane_v2[i]) > $signed(res))
          res = lane_v2[i];
      lane_out[0] = res;
    end

    if (valu_opcode_i == VALU_OP_VMV_X_S)
      scalar_o = lane_v1[0];
  end

  // =============================
  // pack back (lanes → VREG)
  // =============================
  always @(*) begin
    valu_result_o = {VREG_DW{1'b0}};

    case (vsew_i)
      3'b000:
        for (i = 0; i < LANES; i = i + 1)
          valu_result_o[i*8  +: 8]  = lane_out[i][7:0];

      3'b001:
        for (i = 0; i < LANES; i = i + 1)
          valu_result_o[i*16 +: 16] = lane_out[i][15:0];

      3'b010:
        for (i = 0; i < LANES; i = i + 1)
          valu_result_o[i*32 +: 32] = lane_out[i][31:0];

      default:
        for (i = 0; i < LANES; i = i + 1)
          valu_result_o[i*64 +: 64] = lane_out[i];
    endcase
  end

endmodule
