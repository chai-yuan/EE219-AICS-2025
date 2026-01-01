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
  wire inst_matrix_set_w;
  wire inst_matrix_set_x;
  wire inst_matrix_addr;
  wire inst_matrix_cal;

  // MAXPOOL
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

  // 矩阵计算相关控制信号
  wire xw_buffer_read;
  wire matrix_cal_ok; //计算完成信号

  assign inst_maxpool      = (opcode == 7'b1111011) && (fun3 == 3'b000);
  assign inst_matrix_set_w = (opcode == 7'b1111011) && (fun3 == 3'b011);
  assign inst_matrix_set_x = (opcode == 7'b1111011) && (fun3 == 3'b100);
  assign inst_matrix_addr  = (opcode == 7'b1111011) && (fun3 == 3'b101);
  assign inst_matrix_cal   = (opcode == 7'b1111011) && (fun3 == 3'b110);

  assign acc_ren = inst_maxpool ? 1'b1 : 1'b0;
  assign acc_wen = inst_maxpool ? 1'b1 : 1'b0;
  assign maxpool_wmask = inst_maxpool ? {{416'b0}, {96{1'b1}}} : 512'b0;
  assign acc_waddr = rs1_data;
  assign acc_raddr = rs2_data;


  // ===========================================================
  // maxpool Unit
  // ===========================================================

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

  // ===========================================================
  // 矩阵乘法 Unit
  // 目前得保证base地址低三位都是0,因为暂时不太好做处理
  // ===========================================================
  reg [63:0] x_width;
  reg [63:0] x_height;
  reg [63:0] w_width;
  reg [63:0] w_height; //equal to x_width
  reg [63:0] x_base;
  reg [63:0] w_base;
  reg [63:0] y_base;
  wire buffer_ren;
  wire y_wen;
  wire [511:0] y_wdata;
  wire [63:0] y_waddr;
  wire [31:0] y_waddr_offset;
  reg [511:0] y_wmask;

  wire [511:0] x_buffer;
  wire [511:0] w_buffer;
  reg [511:0] y_buffer;

  assign pc_stall = inst_matrix_cal ? !matrix_cal_ok : 0;

  always @(posedge clk) begin
    if (rst) begin
      x_height <= 0;
      x_width  <= 0;
      w_height <= 0;
      w_width  <= 0;
      x_base   <= 0;
      w_base   <= 0;
      y_base   <= 0;
    end else begin
      if (inst_matrix_set_x) begin
        x_height <= rs1_data;
        x_width <= rs2_data;
      end else if (inst_matrix_set_w) begin
        w_height <= rs1_data;
        w_width <= rs2_data;
      end else if (inst_matrix_addr) begin
        x_base <= rs2_data;
        w_base <= rs1_data;
      end else if (inst_matrix_cal) begin
        y_base <= rs1_data;
      end else begin
        x_height <= x_height;
        x_width  <= x_width ;
        w_height <= w_height;
        w_width  <= w_width ;
        x_base   <= x_base  ;
        w_base   <= w_base  ;
        y_base   <= y_base  ;
      end
    end
  end
  // assign x_height = inst_matrix_set_x ? rs1_data : 0;
  // assign x_width  = inst_matrix_set_x ? rs2_data : 0;
  // assign w_height = inst_matrix_set_w ? rs1_data : 0;
  // assign w_width  = inst_matrix_set_w ? rs2_data : 0;
  // assign x_base   = inst_matrix_addr ? rs2_data : 0;
  // assign w_base   = inst_matrix_addr ? rs1_data : 0;
  // assign y_base   = inst_matrix_cal ? rs1_data : 0;

  assign y_waddr = y_base + {32'b0, y_waddr_offset};

  always @(*) begin
    case (y_waddr[2])
      1'b0: begin
        y_buffer = y_wdata;
        y_wmask = {512{1'b1}};
      end
      1'b1: begin
        y_buffer = y_wdata << 32;
        y_wmask = {{480{1'b1}}, {32'b0}};
      end
    endcase
  end


  ram_buffer XY_BUFFER(
      .clk  (clk),
      .xw_width(x_width),
      .ren  (buffer_ren),
      .read_times(x_width[3:0]),
      .rIdx ((x_base - `PC_START) >> 2),
      .rdata(x_buffer),
      .wIdx ((y_waddr - `PC_START) >> 3),
      .wdata(y_buffer),
      .wmask(y_wmask),
      .wen  (y_wen)
  );
  ram_buffer W_BUFFER(
      .clk  (clk),
      .xw_width(w_width),
      .ren  (buffer_ren),
      .read_times(w_width[3:0]),
      .rIdx ((w_base - `PC_START) >> 2),
      .rdata(w_buffer),
      .wIdx (),
      .wdata(),
      .wmask(),
      .wen  ()
  );


  systolic_array MATRIX_CAL (
    .clk (clk),
    .rst_n(inst_matrix_cal), //start, inst_matrix_cal
    .M(x_height[31:0]),
    .N(x_width[31:0]),
    .K(w_width[31:0]),
    .X(x_buffer),
    .W(w_buffer),
    .Y(y_wdata),
    .buffer_ren(buffer_ren),
    .mem_w_en(y_wen),
    .mem_addr(y_waddr_offset), //从0开始,需要加上基地址,同时他也是32位的
    .done(matrix_cal_ok)
  );


endmodule
