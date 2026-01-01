`include "ram.v"

`define VECTOR_ENALBE

`ifdef VECTOR_ENALBE
`include "ram_vector.v"
`endif 

`define PC_START   64'h00000000_80000000 

module top(
    input clock,
    input reset
);

wire            inst_ena ;
wire [31 : 0]   inst ;
wire [63 : 0 ]  inst_addr ; 

wire            ren_inst;
wire [63 : 0]   raddr_inst;
wire [63 : 0]   rdata_inst;

wire            ram_r_ena ;
wire [63 : 0]   ram_r_addr ;
reg  [63 : 0]   ram_r_data ;

wire            ram_w_ena ;
wire [63 : 0]   ram_w_addr ;
wire [63 : 0]   ram_w_data ;
wire [63 : 0]   ram_w_mask ;

wire [63 : 0]   regs[0 : 31];

wire            pc_stall;

rvcpu RV64I(
    clock ,
    reset ,
    inst_ena ,
    inst ,
    inst_addr ,
    ram_r_ena ,
    ram_r_addr ,
    ram_r_data ,
    ram_w_ena ,
    ram_w_addr ,
    ram_w_data ,
    ram_w_mask ,
    regs ,
    pc_stall
);

wire [63:0] rom_rdata;
assign inst = inst_addr[2] ? rom_rdata[63 : 32] : rom_rdata[31 : 0];
ROMHelper ROM_INST(
  .clk              (clock),
  .ren              (1),
  .rIdx             ((inst_addr - `PC_START) >> 3),
  .rdata            (rom_rdata)
);

RAMHelper RAM(
  .clk              ( clock ),
  .ren              ( ram_r_ena  ),
  .rIdx             ( (ram_r_addr - `PC_START) >> 3 ),
  .rdata            ( ram_r_data ),
  .wIdx             ( (ram_w_addr - `PC_START) >> 3 ),
  .wdata            ( ram_w_data ),
  .wmask            ( ram_w_mask ),
  .wen              ( ram_w_ena  )
);

`ifdef VECTOR_ENALBE
  wire          vec_rs1_r_ena ;
  wire [4:0]    vec_rs1_r_addr ;
  wire [63:0]   vec_rs1_data ;

  wire          vram_r_ena ;
  wire [63:0]   vram_r_addr ;
  wire [511:0]  vram_r_data ;

  wire          vram_w_ena ;
  wire [63:0]   vram_w_addr ;
  wire [511:0]  vram_w_data ;
  wire [511:0]  vram_w_mask ;
  wire          rd_w_en_o;
  wire [4:0]    rd_addr_o;
  wire [63:0]   scalar_o;
  assign vec_rs1_data = vec_rs1_r_ena ? regs[vec_rs1_r_addr]  : 0 ;
  // integer i;
  // always @(posedge clock) begin
  //   if ( reset == 1'b1 ) begin
  //       for(i=0; i<32; i=i+1) begin
  //           regs[ i ] <= {64{1'b0}} ;
  //       end
  //   end else begin
  //       if ( rd_w_en_o == 1'b1) begin
  //           regs[ rd_addr_o ] <= scalar_o ;
  //       end 
  //   end
  // end
  v_rvcpu RV_VECTOR(
    .clk              ( clock ),
    .rst              ( reset ),

    .inst             ( inst ),

    .vec_rs1_data     ( vec_rs1_data ),
    .vec_rs1_r_ena    ( vec_rs1_r_ena ),
    .vec_rs1_r_addr   ( vec_rs1_r_addr ),

    .vram_r_ena       ( vram_r_ena ),
    .vram_r_addr      ( vram_r_addr ),
    .vram_r_data      ( vram_r_data ),

    .vram_w_ena       ( vram_w_ena ),
    .vram_w_addr      ( vram_w_addr ),
    .vram_w_data      ( vram_w_data ),
    .vram_w_mask      ( vram_w_mask ),
    .rd_w_en_o        ( rd_w_en_o ),
    .rd_addr_o        ( rd_addr_o ),
    .scalar_o         ( scalar_o )
  );
  RAMVectorHelper RAM_VECOTR(
    .clk              ( clock ),
    .ren              ( vram_r_ena  ),
    .rIdx             ( (vram_r_addr - `PC_START) >> 3 ),
    .rdata            ( vram_r_data ),
    .wIdx             ( (vram_w_addr - `PC_START) >> 3 ),
    .wdata            ( vram_w_data ),
    .wmask            ( vram_w_mask ),
    .wen              ( vram_w_ena  )
  );
`endif 

endmodule
