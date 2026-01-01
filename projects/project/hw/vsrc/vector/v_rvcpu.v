`include "v_defines.v"

module v_rvcpu(
    input                       clk,
    input                       rst,
    input   [`VINST_BUS]        inst ,

    input   [`SREG_BUS]         vec_rs1_data,
	output            	        vec_rs1_r_ena,
	output  [`SREG_ADDR_BUS]   	vec_rs1_r_addr,

    output                      vram_r_ena,
    output  [`VRAM_ADDR_BUS]    vram_r_addr,
    input   [`VRAM_DATA_BUS]    vram_r_data,

    output                      vram_w_ena,
    output  [`VRAM_ADDR_BUS]    vram_w_addr,
    output  [`VRAM_DATA_BUS]    vram_w_data,
    output  [`VRAM_DATA_BUS]    vram_w_mask,

    
  output  reg               rd_w_en_o,
  output  reg [`SREG_ADDR_BUS]    rd_addr_o,
  output  reg [`SREG_BUS]   scalar_o
);

//alu
wire    [`ALU_OP_BUS]            valu_opcode    ;
wire    [`VREG_BUS]              operand_v1     ;
wire    [`VREG_BUS]              operand_v2     ;
wire    [`VREG_BUS]              valu_result    ;

wire                    vmem_ren        ;
wire                    vmem_wen        ;
//wb mem
wire    [`VMEM_ADDR_BUS]   vmem_addr       ;
wire    [`VMEM_DATA_BUS]   vmem_din        ;
wire    [`VMEM_DATA_BUS]   vmem_dout       ;
//wb vector
wire                        vid_wb_en       ;
wire                        vid_wb_sel      ;
wire    [`VREG_ADDR_BUS]    vid_wb_addr     ;
wire                        vid_wb_f_rs1    ;
// wb out
wire                        vwb_en         ;
wire    [`VREG_ADDR_BUS]    vwb_addr        ;
wire    [`VREG_BUS]         vwb_data        ;
//vector regs
wire                        vs1_en          ;
wire    [`VREG_ADDR_BUS]    vs1_addr        ;
wire    [`VREG_BUS]         vs1_data        ;
wire                        vs2_en          ;
wire    [`VREG_ADDR_BUS]    vs2_addr        ;
wire    [`VREG_BUS]         vs2_data        ;

wire                       vsetvl_en       ;
wire  [2:0]                 vsew_req        ;
wire  [2:0]                 csr_vsew       ;

v_inst_decode V_ID (
    .clk            ( clk           ),
    .rst            ( rst           ),
    .inst_i         ( inst),
//scalar regs
    .rs1_en_o       ( vec_rs1_r_ena        ),
    .rs1_addr_o     ( vec_rs1_r_addr      ),
    .rs1_dout_i     ( vec_rs1_data      ),
//vector regs
    .vs1_en_o       ( vs1_en        ),
    .vs1_addr_o     ( vs1_addr      ),
    .vs1_dout_i     ( vs1_data      ),
    .vs2_en_o       ( vs2_en        ),
    .vs2_addr_o     ( vs2_addr      ),
    .vs2_dout_i     ( vs2_data      ),
//alu    
    .valu_opcode_o  ( valu_opcode    ),
    .operand_v1_o   ( operand_v1     ),
    .operand_v2_o   ( operand_v2     ),
//mem
    .vmem_ren_o      ( vmem_ren       ),
    .vmem_wen_o      ( vmem_wen       ),
    .vmem_r_addr_o     ( vmem_addr      ),
    .vmem_w_addr_o   ( vmem_addr      ),
    .vmem_din_o      ( vmem_din       ),
//wb
    .vid_wb_en_o     ( vid_wb_en      ),
    .vid_wb_sel_o    ( vid_wb_sel     ),
    .vid_wb_addr_o   ( vid_wb_addr    ),
    .vid_wb_from_rs1 ( vid_wb_f_rs1   ),

    .rd_w_en_o       ( rd_w_en_o      ),
    .rd_addr_o       ( rd_addr_o      ),

    .vsetvl_en_o     ( vsetvl_en   ),
    .vsew_req_o      ( vsew_req    )
);

v_csr VCSR(
  .clk(clk),
  .rst(rst),

  // vsetvl 接口
  .vsetvl_en(vsetvl_en),
  .vsew_req(vsew_req),   // 00:e8 01:e16 10:e32 11:e64

  .csr_vsew(csr_vsew)
);
v_mem  V_MEM (
    .clk            ( clk           ),
    .rst            ( rst           ),
    .vmem_ren_i      ( vmem_ren       ),
    .vmem_wen_i      ( vmem_wen       ),
    .vmem_r_addr_i     ( vmem_addr      ), 
    .vmem_w_addr_i     ( vmem_addr      ), 
    .vmem_din_i      ( vmem_din       ),
    .vmem_dout_o     ( vmem_dout      ),
    .vram_r_ena_o      ( vram_r_ena     ),
    .vram_r_addr_o     ( vram_r_addr    ),
    .vram_r_data_i     ( vram_r_data    ),
    .vram_w_ena_o      ( vram_w_ena     ),
    .vram_w_addr_o     ( vram_w_addr    ),
    .csr_vsew_i         ( csr_vsew      ),
    .vram_w_mask_o     ( vram_w_mask    ),
    .vram_w_data_o     ( vram_w_data    )
);

v_regfile V_REG(
    .clk            (clk),
    .rst            (rst),
//from wb
    .vwb_en_i       (vwb_en),
    .vwb_addr_i     (vwb_addr),
    .vwb_data_i     (vwb_data),
//from alu
    .vs1_en_i       (vs1_en),
    .vs1_addr_i     (vs1_addr),
    .vs1_data_o     (vs1_data),

    .vs2_en_i       (vs2_en),
    .vs2_addr_i     (vs2_addr),
    .vs2_data_o     (vs2_data)
);
v_execute V_ALU (
    .valu_opcode_i  ( valu_opcode    ),
    .operand_v1_i   ( operand_v1     ),
    .operand_v2_i   ( operand_v2     ),
    .valu_result_o  ( valu_result    ),
    .vsew_i         ( csr_vsew       ),
    .scalar_o       ( scalar_o       )
);
v_write_back V_WB (
    .clk             ( clk             ),
    .rst             ( rst             ),
    .vid_wb_en_i     ( vid_wb_en        ),
    .vid_wb_addr_i   ( vid_wb_addr      ),
    .vid_wb_sel_i    ( vid_wb_sel       ),
    .vid_wb_from_rs1 ( vid_wb_f_rs1     ),
    .valu_result_i   ( valu_result      ),
    .vmem_result_i   ( vmem_dout        ),

    .vwb_en_o        ( vwb_en           ),
    .vwb_addr_o      ( vwb_addr         ),
    .vwb_data_o      ( vwb_data         ),
//scalar
    .rs1_data        ( vec_rs1_data     )
);
endmodule
