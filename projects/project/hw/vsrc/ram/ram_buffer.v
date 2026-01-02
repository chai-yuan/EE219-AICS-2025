
module ram_buffer(
  input           clk,
  input           ren,
  input  [63: 0]  ab_width,
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
  // assign read_addr = rIdx + {60'b0,read_cnt};
  // assign rdata = ren & (read_cnt != read_times) ? rdata_t : 512'b0;
  assign read_addr = rIdx + read_cnt*ab_width;
  assign rdata = ren & (read_cnt != read_times) ?
                      (read_addr[0] ?  rdata_t >> 32 : rdata_t) :
                      512'b0;

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

  // for (i=0; i<16; i = i+1) begin : gen_read_block
  //   wire [63:0] full_data;
  //   assign full_data = ram_read_helper(ren, (read_addr + i)>>1);
  //   assign rdata_t[32*(i+1)-1: 32*i] = ((read_addr + i*ab_width) & 64'b1) == 64'b1 ? full_data[63:32] : full_data[31:0];
  // end

  for (i=0; i<8; i = i+1) begin
    assign rdata_t[64*(i+1)-1: 64*i] = ram_read_helper(ren,(read_addr>>1) + i);
  end


  for (i=0; i<8; i=i+1) begin
    always @(posedge clk) begin
      ram_write_helper(wIdx+i, wdata[64*(i+1)-1:64*i], wmask[64*(i+1)-1:64*i], wen );
    end
  end
endmodule 

//  A
// 1 2 3 4 5
// 6 7 8 9 10
// 1 2 3 4 5
// B:
// 1 2 3 4
// 5 1 2 3
// 4 5 1 2
// 3 4 5 1
// 2 3 4 5
