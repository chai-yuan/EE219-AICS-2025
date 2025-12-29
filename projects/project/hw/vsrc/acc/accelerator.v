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
  wire [511:0] acc_wdata;
  wire acc_ren;
  wire acc_wen;
  wire [511:0] acc_wmask;

  assign inst_maxpool = (opcode == 7'b1111011) && (fun3 == 3'b000);
  assign acc_ren = inst_maxpool ? 1'b1 : 1'b0;
  assign acc_wen = inst_maxpool ? 1'b1 : 1'b0;
  assign acc_wmask = inst_maxpool ? {{416'b0}, {96{1'b1}}} : 512'b0;
  assign acc_waddr = rs1_data;
  assign acc_raddr = rs2_data;

  assign pc_stall = 0; //TODO: 待完善
  // 纯组合逻辑,可以立马取到值
  maxpool_24_6 MAXPOOL_24_6 (
    .raddr(acc_raddr),
    .waddr(acc_waddr),
    .rdata(acc_rdata[383:0]),
    .wdata(acc_wdata[95:0])
  );

  RAMVectorHelper RAM_ACC(
    .clk              (clk),
    .ren              (acc_ren),
    .rIdx             ((acc_raddr - `PC_START) >> 3),
    .rdata            (acc_rdata),
    .wIdx             ((acc_waddr - `PC_START) >> 3),
    .wdata            (acc_wdata),
    .wmask            (acc_wmask),
    .wen              (acc_wen)
  );

endmodule
