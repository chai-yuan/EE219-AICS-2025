`timescale 1ns / 1ps

module systolic_array#(
  parameter ARRAY_SIZE_M_MAX         = 16,
  parameter ARRAY_SIZE_N_MAX         = 16,
  parameter ARRAY_SIZE_K_MAX         = 16,
  parameter DATA_WIDTH  = 32
) (
  input                                     clk,
  input                                     rst_n,
  input  [31:0]                             M,
  input  [31:0]                             N,
  input  [31:0]                             K,
  input  [DATA_WIDTH*ARRAY_SIZE_M_MAX-1:0]  X,
  input  [DATA_WIDTH*ARRAY_SIZE_K_MAX-1:0]  W,
  output [DATA_WIDTH*ARRAY_SIZE_K_MAX-1:0]  Y,
  output                                    mem_w_en,
  output reg                                buffer_ren,
  output [31:0]                             mem_addr,
  output                                    done
);
  // 定义内部连线，用于连接 PE 单元
  wire [DATA_WIDTH*ARRAY_SIZE_M_MAX-1:0] x_wires [ARRAY_SIZE_K_MAX:0]; // 边界是第0个,水平连线, 还需有个边界线，所以是K+1行
  wire [DATA_WIDTH*ARRAY_SIZE_K_MAX-1:0] w_wires [ARRAY_SIZE_M_MAX:0]; // 边界是第0个,垂直连线
  wire [DATA_WIDTH*ARRAY_SIZE_K_MAX-1:0] y_outputs [ARRAY_SIZE_M_MAX-1:0];

  wire [DATA_WIDTH*ARRAY_SIZE_M_MAX-1:0] x_inputs; //边界输入, 做好了skew
  wire [DATA_WIDTH*ARRAY_SIZE_K_MAX-1:0] w_inputs; //边界输入
  assign x_wires[0] = x_inputs;
  assign w_wires[0] = w_inputs;

  wire y_output_en;
  genvar i,j;
  generate
      for (i = 0; i < ARRAY_SIZE_M_MAX; i = i + 1) begin: ROW
          for (j = 0; j < ARRAY_SIZE_K_MAX; j = j + 1) begin: COL
            pe pe_ij (
              .clk(clk),
              .rst_n(rst_n),
              .output_en(y_output_en),
              .bypass( (i >= M) || (j >= K) ) , // 超出矩阵范围的PE单元直接旁路
              .x_in(x_wires[j][DATA_WIDTH*(i+1) -1 : DATA_WIDTH*i]),
              .w_in(w_wires[i][DATA_WIDTH*(j+1) -1 : DATA_WIDTH*j]),
              .y_in(0),
              .x_out(x_wires[j+1][DATA_WIDTH*(i+1) -1 : DATA_WIDTH*i]),
              .w_out(w_wires[i+1][DATA_WIDTH*(j+1) -1 : DATA_WIDTH*j]),
              .y_out(y_outputs[i][DATA_WIDTH*(j+1) -1 : DATA_WIDTH*j])
            );
          end
      end
  endgenerate
  // =====================================
  // Y 输出逻辑
  // =====================================
  reg [31:0] mem_addr_r;
  reg mem_w_en_r;
  reg [31:0] y_out_count;
  always @(posedge clk) begin
    if (!rst_n) begin
      mem_w_en_r <= 1'b0;
      mem_addr_r <= 32'b0;
      y_out_count <= 32'b0;
    end else begin
      if (state == S_WRITE) begin
        if (y_out_count < M) begin
          mem_w_en_r <= 1'b1;
          mem_addr_r <= y_out_count;
          y_out_count <= y_out_count + 1;
        end else begin
          mem_w_en_r <= 1'b0;
          mem_addr_r <= mem_addr_r;
          y_out_count <= y_out_count;
        end
      end
    end
  end
  // assign mem_addr = (state == S_WRITE) ? (cycle_count - (N + M + 2)) : 0;
  // assign mem_w_en = (cycle_count - (N+M+1) > 0) ? 1'b1 : 1'b0;
  assign mem_addr = mem_addr_r;
  assign mem_w_en = mem_w_en_r; 
  assign y_output_en = (state == S_WRITE) ? 1'b1 : 1'b0;
  assign Y = y_outputs[mem_addr];
  assign done = (state == S_DONE) ? 1'b1 : 1'b0;
  // ======================================
  // 状态机
  // ======================================
  
  reg [1:0] state;
  localparam S_IDLE = 2'b00,
             S_COMPUTE = 2'b01,
             S_WRITE = 2'b10,
              S_DONE = 2'b11;
  always @(posedge clk) begin
    if (!rst_n) begin
      state <= S_IDLE;
      buffer_ren <= 0;
    end else begin
      case (state)
        S_IDLE: begin
          state <= S_COMPUTE;
          buffer_ren <= 1;
        end
        S_COMPUTE: begin
          // +1是因为我的第一行的inputs，并不是立马加载，而是延迟了一个周期
          if (cycle_count >= N + M + 2 + K) begin
            state <= S_WRITE;
            buffer_ren <= 0;
          end else begin
            state <= S_COMPUTE;
          end
        end
        S_WRITE: begin
          if (y_out_count >= M) begin
            state <= S_DONE;
          end else begin
            state <= S_WRITE;
          end
        end
        S_DONE: begin
          state <= S_DONE;
        end
      endcase
    end
  end

  // ======================================
  // 计数器模块
  // ======================================
  reg [31:0] cycle_count; // 用于跟踪当前的计算周期数， 当为N+M时， 停止计算
  // 计数器按周期递增
  always @(posedge clk) begin
    if (!rst_n) begin
      cycle_count <= 32'b0;
    end else begin
      if (cycle_count < N + M + K + 2) begin
        cycle_count <= cycle_count + 1;
      end else begin
        cycle_count <= cycle_count;
      end
    end
  end

  // ======================================
  // x_inputs 输入逻辑
  // ======================================
  generate
    for (i = 0; i < ARRAY_SIZE_M_MAX; i = i + 1) begin: X_INPUT_GEN
      skewd_input #(
        .DATA_WIDTH(DATA_WIDTH),
        .STAGES(i)
      ) skewd_input_inst (
        .clk(clk),
        .rst_n(rst_n),
        .x_data_in( X[DATA_WIDTH*(i+1)-1 : DATA_WIDTH*i] ),
        .systolic_data_out( x_inputs[DATA_WIDTH*(i+1)-1 : DATA_WIDTH*i] )
      );
    end
  endgenerate
  //=======================================
  // w_inputs 输入逻辑
  //=======================================
  generate
    for (i = 0; i < ARRAY_SIZE_K_MAX; i = i +1) begin: W_INPUT_GEN
      skewd_input #(
        .DATA_WIDTH(DATA_WIDTH),
        .STAGES(i)
      ) skewd_input_inst (
        .clk(clk),
        .rst_n(rst_n),
        .x_data_in( W[DATA_WIDTH*(i+1)-1 : DATA_WIDTH*i] ),
        .systolic_data_out( w_inputs[DATA_WIDTH*(i+1)-1 : DATA_WIDTH*i] )
      );
    end
  endgenerate

endmodule

// ======================================
// 模块: skewd_input
// 功能: 对输入数据进行错位处理，以适应脉动阵列的数据流要求
// ======================================
module skewd_input #(
  parameter DATA_WIDTH  = 32,
  parameter STAGES = 0
) (
    // --- 控制信号 ---
    input clk,
    input rst_n,
    input [DATA_WIDTH-1:0]    x_data_in,

    // --- 数据输出 ---
    // 脉动阵列寄存器最后端的数据，可以直接连接到处理单元
    output reg [DATA_WIDTH-1:0] systolic_data_out
);
  generate
    if (STAGES == 0) begin: NO_SHIFT
      always @(posedge clk) begin
        if (!rst_n) begin
          systolic_data_out <= 0;
        end else begin
          systolic_data_out <= x_data_in;
        end
      end
    end else if (STAGES == 1) begin: SHIFT_REG
      reg [DATA_WIDTH-1:0] shift_reg; //最小也有32位
      always @(posedge clk) begin
        if (!rst_n) begin
          shift_reg <= 0;
          systolic_data_out <= 0;
        end else begin
          //复位结束后，一直左移数据，不断循环
          shift_reg <= x_data_in;
          systolic_data_out <= shift_reg;
        end
      end
    end else begin: SHIFT_REG
      reg [STAGES*DATA_WIDTH-1:0] shift_reg; //最小也有32位
      always @(posedge clk) begin
        if (!rst_n) begin
          shift_reg <= 0;
          systolic_data_out <= 0;
        end else begin
          //复位结束后，一直左移数据，不断循环
          shift_reg <= {x_data_in, shift_reg[STAGES*DATA_WIDTH-1:DATA_WIDTH]};
          systolic_data_out <= shift_reg[DATA_WIDTH-1:0];
        end
      end
    end
  endgenerate
endmodule
