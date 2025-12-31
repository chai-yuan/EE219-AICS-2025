
module ram_buffer(
  input           clk,
  input           ren,
  input  [63: 0]  xw_width,
  input  [ 3: 0]  read_times,
  input  [63: 0]  rIdx, //只右移两位
  output [511:0]  rdata,
  input  [63: 0]  wIdx,
  input  [511:0]  wdata,
  input  [511:0]  wmask,
  input           wen
);
  wire [63:0] read_addr;
  wire [511:0] rdata_t;
  assign read_addr = rIdx + xw_width*read_cnt;
  assign rdata = read_addr[0] ? rdata_t >> 32 : rdata_t;
  // 读计数, 用来分周期,输出X_buffer[i] 或 W_buffer[i]
  reg [3:0] read_cnt;
  always @(posedge clk) begin
    if (!ren) begin
      read_cnt <= 4'b0;
    end else begin
      if (read_cnt != read_times) begin
        read_cnt <= read_cnt + 1;
      end else begin
        read_cnt <= read_cnt;
      end
    end
  end
  // x_width 最大是15
  genvar i;
  for (i=0; i<8; i = i+1) begin
    assign rdata_t[64*(i+1)-1: 64*i] = ram_read_helper(ren,read_addr>>1);
  end

  // 写buffer, X,W是不需要的, 只有Y会用到
  // 写计数, 用来分周期,...
  // TODO: 先不写了,看之后怎么分
  for (i=0; i<8; i=i+1) begin
    always @(posedge clk) begin
      ram_write_helper(wIdx+i, wdata[64*(i+1)-1:64*i], wmask[64*(i+1)-1:64*i], wen );
    end  
  end
endmodule 
