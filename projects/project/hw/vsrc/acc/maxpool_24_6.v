// 一次读取24个16bit的数,然后比较
module maxpool_24_6 (
  input [63:0] raddr,
  input [63:0] waddr,
  input [383:0] rdata,
  output [95:0] wdata
);
  genvar i;
  generate
    for (i = 0; i < 12; i = i + 2) begin: COMPARATOR
      comparator_4 comparator_4_i (
        .a(rdata[16*(i+1)-1 : 16*i]),
        .b(rdata[16*(i+2)-1 : 16*(i+1)]),
        .c(rdata[16*(i+13)-1 : 16*(i+12)]),
        .d(rdata[16*(i+14)-1 : 16*(i+13)]),
        .max_val(wdata[16*((i>>1) + 1) -1 : 16*(i>>1)])
      );
    end
  endgenerate

endmodule

module comparator_4 (
  input [15:0] a,
  input [15:0] b,
  input [15:0] c,
  input [15:0] d,
  output [15:0] max_val
);
  wire [15:0] max_a_b;
  wire [15:0] max_c_d;
  assign max_a_b = $signed(a) > $signed(b) ? a : b;
  assign max_c_d = $signed(c) > $signed(d) ? c : d;
  assign max_val = $signed(max_a_b) > $signed(max_c_d) ? max_a_b : max_c_d;

endmodule
