module accelerator (
    input clk,
    input rst,
    input [31:0] inst,
    input [63:0] rs1_data,
    input [63:0] rs2_data,
    output [4:0] rs1,
    output [4:0] rs2,
    output pc_stall
);
  // ===========================================================
  // Decode Unit
  // ===========================================================
  wire [6:0] opcode = inst[6:0];
  wire [2:0] fun3 = inst[14:12];
  assign rs1 = inst[19:15];
  assign rs2 = inst[24:20];

  wire inst_maxpool;
  wire [63:0] acc_raddr;
  wire [63:0] acc_waddr;
  wire [511:0] acc_rdata;
  reg  [511:0] acc_wdata; //为了使用always*,只能用reg,但实际还是wire
  wire acc_ren;
  wire acc_wen;
  wire [511:0] maxpool_wmask;
  reg [511:0] acc_wmask;

  reg [511:0] maxpool_rdata; //为了使用always*,只能用reg,但实际还是wire
  wire [511:0] maxpool_wdata;

  assign inst_maxpool = (opcode == 7'b1111011) && (fun3 == 3'b000);
  assign acc_ren = inst_maxpool ? 1'b1 : 1'b0;
  assign acc_wen = inst_maxpool ? 1'b1 : 1'b0;
  assign maxpool_wmask = inst_maxpool ? {{416'b0}, {96{1'b1}}} : 512'b0;
  assign acc_waddr = rs1_data;
  assign acc_raddr = rs2_data;

  assign pc_stall = 0;

  always @(*) begin
    case (acc_raddr[2:1])  // 提取第 1, 2 位作为选择信号
      2'b00:   maxpool_rdata = acc_rdata;
      2'b01:   maxpool_rdata = acc_rdata >> 16;
      2'b10:   maxpool_rdata = acc_rdata >> 32;
      2'b11:   maxpool_rdata = acc_rdata >> 48;
      default: maxpool_rdata = 512'b0;
    endcase
  end

  always @(*) begin
    case (acc_waddr[2:1])  // 提取第 1, 2 位作为选择信号
      2'b00: begin
        acc_wdata = maxpool_wdata;
        acc_wmask = maxpool_wmask;
      end
      2'b01: begin
        acc_wdata = maxpool_wdata << 16;
        acc_wmask = maxpool_wmask << 16;
      end
      2'b10: begin
        acc_wdata = maxpool_wdata << 32;
        acc_wmask = maxpool_wmask << 32;
      end
      2'b11: begin
        acc_wdata = maxpool_wdata << 64;
        acc_wmask = maxpool_wmask << 64;
      end
      default: begin
        acc_wdata = 512'b0;
        acc_wmask = 512'b0;
      end
    endcase
  end

  // 纯组合逻辑,可以立马取到值
  maxpool_24_6 MAXPOOL_24_6 (
      .raddr(acc_raddr),
      .waddr(acc_waddr),
      .rdata(maxpool_rdata[383:0]),
      .wdata(maxpool_wdata[95:0])
  );

  RAMVectorHelper RAM_ACC (
      .clk  (clk),
      .ren  (acc_ren),
      .rIdx ((acc_raddr - `PC_START) >> 3),
      .rdata(acc_rdata),
      .wIdx ((acc_waddr - `PC_START) >> 3),
      .wdata(acc_wdata),
      .wmask(acc_wmask),
      .wen  (acc_wen)
  );

endmodule
