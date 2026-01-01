`include "v_defines.v"
`include "define_rv32v.v"
module v_inst_decode #(
  parameter VALUOP_DW = 8,
  parameter VMEM_DW   = `VLEN,
  parameter VMEM_AW   = `SEW,
  parameter VREG_DW   = `VREG_WIDTH,
  parameter VREG_AW   = 5,
  parameter INST_DW   = 32,
  parameter REG_DW    = `SEW,
  parameter REG_AW    = 5
) (
  input                   clk,
  input                   rst,

  input   [INST_DW-1:0]   inst_i,

  output  reg                 rs1_en_o,
  output  reg [REG_AW-1:0]    rs1_addr_o,
  input   [REG_DW-1:0]        rs1_dout_i,

  output  reg               rd_w_en_o,
  output  reg [REG_AW-1:0]    rd_addr_o,
  
  output  reg                vs1_en_o,
  output  reg [VREG_AW-1:0]   vs1_addr_o,
  input   [VREG_DW-1:0]     vs1_dout_i,

  output  reg                vs2_en_o,
  output  reg [VREG_AW-1:0]   vs2_addr_o,
  input   [VREG_DW-1:0]   vs2_dout_i,

  output  reg [VALUOP_DW-1:0] valu_opcode_o,
  output  reg [VREG_DW-1:0]   operand_v1_o,
  output  reg [VREG_DW-1:0]   operand_v2_o,

  output  reg                vmem_ren_o,
  output  reg                vmem_wen_o,
  output  reg [VMEM_AW-1:0]   vmem_r_addr_o,
  output  reg [VMEM_AW-1:0]   vmem_w_addr_o,
  output  reg [VMEM_DW-1:0]   vmem_din_o,

  output  reg                vid_wb_en_o,
  output  reg                vid_wb_sel_o,
  output  reg [VREG_AW-1:0]   vid_wb_addr_o,

  output  reg                vid_wb_from_rs1,
  output  reg                vsetvl_en_o,
  output  reg [2:0]          vsew_req_o
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

//split
wire [6:0] opcode;
wire [4:0] vd;
wire [4:0] vs3;
wire [4:0] rd;
wire [2:0] funct3;
wire [2:0] width;
wire [4:0] vs1;
wire [4:0] rs1;
wire [4:0] imm4_0;
wire [4:0] vs2;
wire [4:0] sumop;
wire vm;
wire [5:0] funct6;
wire [1:0] mop;
wire mew;
wire [2:0] nf;
assign opcode=inst_i[6:0];
assign vd=inst_i[11:7];
assign rd=vd;
assign vs3=vd;
assign funct3=inst_i[14:12];
assign width=funct3;
assign vs1=inst_i[19:15];
assign imm4_0=vs1;
assign rs1=vs1;
assign vs2=inst_i[24:20];
assign sumop=vs2;
assign vm=inst_i[25];
assign funct6=inst_i[31:26];
assign mop=inst_i[27:26];
assign mew=inst_i[28];
assign nf=inst_i[31:29];
wire [11:0] vtypei=inst_i[31:20];
wire [2:0] vtype_vsew=vtypei[8:6];

//
always @(*) begin
  rs1_en_o=1'b0;
  rs1_addr_o={REG_AW{1'b0}};

  rd_w_en_o=1'b0;
  rd_addr_o={REG_AW{1'b0}};

  vs1_en_o=1'b0;
  vs1_addr_o={VREG_AW{1'b0}};

  vs2_en_o=1'b0;
  vs2_addr_o={VREG_AW{1'b0}};

  valu_opcode_o={VALUOP_DW{1'b0}};
  operand_v1_o={VREG_DW{1'b0}};
  operand_v2_o={VREG_DW{1'b0}};

  vmem_ren_o=1'b0;
  vmem_wen_o=1'b0;
  vmem_r_addr_o={VMEM_AW{1'b0}};
  vmem_w_addr_o={VMEM_AW{1'b0}};
  vmem_din_o={VMEM_DW{1'b0}};

  vid_wb_en_o=1'b0;
  vid_wb_sel_o=1'b0;
  vid_wb_addr_o={REG_AW{1'b0}};

  vid_wb_from_rs1=1'b0;

  vsetvl_en_o=1'b0;
  case(opcode)
    `OPCODE_VEC:begin
      case(funct3)
        `FUNCT3_IVV:begin//vadd.vv vsub.vv 
          vs1_en_o=1'b1;
          vs1_addr_o=vs1;
          vs2_en_o=1'b1;
          vs2_addr_o=vs2;
          //alu
          operand_v1_o=vs1_dout_i;
          operand_v2_o=vs2_dout_i;
          //wb
          vid_wb_en_o=1'b1;
          vid_wb_sel_o=1'b0; //alu
          vid_wb_addr_o=vd;
          case(funct6)
            `FUNCT6_VADD:begin
              valu_opcode_o=VALU_OP_VADD;
            end
            `FUNCT6_VSUB:begin
              valu_opcode_o=VALU_OP_VSUB;
            end
            `FUNCT6_VMIN:begin
              valu_opcode_o=VALU_OP_VMIN;
            end
            `FUNCT6_VMX:begin
              valu_opcode_o=VALU_OP_VMAX;
            end
            `FUNCT6_VSRA:begin
              valu_opcode_o=VALU_OP_VSRA;
            end
            
            default:begin
            end
          endcase
        end
        `FUNCT3_SETVI:begin
              vsetvl_en_o=1'b1;
              vsew_req_o=vtype_vsew;
            end
        `FUNCT3_MVV:begin //vmul.vv vdiv.vv vmv.x.s
          vs1_en_o=1'b1;
          vs1_addr_o=vs1;
          vs2_en_o=1'b1;
          vs2_addr_o=vs2;
          //alu
          operand_v1_o=vs1_dout_i;
          operand_v2_o=vs2_dout_i;
          case(funct6)
            `FUNCT6_VMUL:begin
              //wb
              vid_wb_en_o=1'b1;
              vid_wb_sel_o=1'b0; //alu
              vid_wb_addr_o=vd;
              valu_opcode_o=VALU_OP_VMUL;
            end
            `FUNCT6_VDIV:begin
              //wb
              vid_wb_en_o=1'b1;
              vid_wb_sel_o=1'b0; //alu
              vid_wb_addr_o=vd;
              valu_opcode_o=VALU_OP_VDIV;
            end
            `FUNCT6_VMV_X_S:begin
              //scarlar
              rd_w_en_o=1'b1;
              rd_addr_o=rd;
              valu_opcode_o=VALU_OP_VMV_X_S;
            end
            `FUNCT6_VREDSUM:begin
              //wb
              vid_wb_en_o=1'b1;
              vid_wb_sel_o=1'b0; //alu
              vid_wb_addr_o=vd;
              valu_opcode_o=VALU_OP_VREDSUM_VS;
            end
            `FUNCT6_VREDMAX:begin
              //wb
              vid_wb_en_o=1'b1;
              vid_wb_sel_o=1'b0; //alu
              vid_wb_addr_o=vd;
              valu_opcode_o=VALU_OP_VREDMAX_VS;
            end
            default:begin
            end
          endcase
        end
        `FUNCT3_IVI:begin//vadd.vi
          vs2_en_o=1'b1;
          vs2_addr_o=vs2;
          //alu
          operand_v2_o=vs2_dout_i;
          //wb
          vid_wb_en_o=1'b1;
          vid_wb_sel_o=1'b0; //alu
          vid_wb_addr_o=vd;
          case(funct6)
            `FUNCT6_VADD:begin
              operand_v1_o={`VLMAX{{59{imm4_0[4]}},imm4_0}};
              valu_opcode_o=VALU_OP_VADD;
            end
            `FUNCT6_VSRA:begin
              operand_v1_o={`VLMAX{{59{1'b0}},imm4_0}};
              valu_opcode_o=VALU_OP_VSRA;
            end
            default:begin
            end
          endcase
        end
        `FUNCT3_IVX:begin//vadd.vx vsub.vx vmv.v.x
          vs2_en_o=1'b1;
          vs2_addr_o=vs2;
          rs1_en_o=1'b1;
          rs1_addr_o=rs1;
          //alu
          operand_v1_o={`VLMAX{rs1_dout_i}};
          operand_v2_o=vs2_dout_i;
          //wb
          vid_wb_en_o=1'b1;
          vid_wb_sel_o=1'b0; //alu
          vid_wb_addr_o=vd;
          case(funct6)
            `FUNCT6_VADD:begin
              valu_opcode_o=VALU_OP_VADD;
            end
            `FUNCT6_VSUB:begin
              valu_opcode_o=VALU_OP_VSUB;
            end
            `FUNCT6_VMV_V_X:begin
              vid_wb_from_rs1=1'b1;
              valu_opcode_o=VALU_OP_VMV_V_X;
            end
            `FUNCT6_VMIN:begin
              valu_opcode_o=VALU_OP_VMIN;
            end
            `FUNCT6_VMX:begin
              valu_opcode_o=VALU_OP_VMAX;
            end
            `FUNCT6_VSRA:begin
              valu_opcode_o=VALU_OP_VSRA;
            end
            default:begin
            end
          endcase
        end
        `FUNCT3_MVX:begin//vmul.vx vdiv.vx 
          vs2_en_o=1'b1;
          vs2_addr_o=vs2;
          rs1_en_o=1'b1;
          rs1_addr_o=rs1;
          //alu
          operand_v1_o={`VLMAX{rs1_dout_i}};
          operand_v2_o=vs2_dout_i;
          //wb
          vid_wb_en_o=1'b1;
          vid_wb_sel_o=1'b0; //alu
          vid_wb_addr_o=vd;
          case(funct6)
            `FUNCT6_VMUL:begin
              valu_opcode_o=VALU_OP_VMUL;
            end
            `FUNCT6_VDIV:begin
              valu_opcode_o=VALU_OP_VDIV;
            end
            default:begin
            end
          endcase
        end
        default:begin
            end
      endcase
    end
    `OPCODE_VL:begin
      rs1_en_o=1'b1;
      rs1_addr_o=rs1;
      //wb
      vid_wb_en_o=1'b1;
      vid_wb_sel_o=1'b1; //mem
      vid_wb_addr_o=vd;
      if(width==`WIDTH_VLE32 && funct6==`FUNCT6_VLE32)begin
        vmem_ren_o =1'b1;
        vmem_r_addr_o = rs1_dout_i;
      end
      else begin
      end
    end
    `OPCODE_VS:begin
      rs1_en_o=1'b1;
      rs1_addr_o=rs1;
      vs2_en_o=1'b1;
      vs2_addr_o=vs3;
      //mem
      if(width==`WIDTH_VSE32 && funct6==`FUNCT6_VSE32)begin
        vmem_din_o=vs2_dout_i;
        vmem_wen_o =1'b1;
        vmem_w_addr_o=rs1_dout_i;
      end
      else begin
      end
    end
    default:begin
            end
  endcase
end
endmodule

