`include "v_defines.v"
module v_mem (
    input                   clk,
    input                   rst,
    
    input                      vmem_ren_i,
    input                      vmem_wen_i,
    input   [`VRAM_ADDR_BUS]   vmem_r_addr_i,
    input   [`VRAM_ADDR_BUS]   vmem_w_addr_i,
    input   [`VRAM_DATA_BUS]   vmem_din_i, //写入的值
    output  [`VRAM_DATA_BUS]   vmem_dout_o,//读出的值

    output                     vram_r_ena_o,
    output  [`VRAM_ADDR_BUS]   vram_r_addr_o,
    input   [`VRAM_DATA_BUS]   vram_r_data_i,

    output                     vram_w_ena_o,
    output  [`VRAM_ADDR_BUS]   vram_w_addr_o,
    input   [2:0]                csr_vsew_i,
    output  [`VRAM_DATA_BUS]   vram_w_mask_o,
    output  [`VRAM_DATA_BUS]   vram_w_data_o
);
assign vram_r_ena_o   = vmem_ren_i ;
assign vram_w_ena_o   = vmem_wen_i ;
assign vram_r_addr_o  = vmem_r_addr_i ;
assign vram_w_addr_o  = vmem_w_addr_i ;
assign vram_w_mask_o  = {csr_vsew_i == 3'b000 ? 512'hFFFFFFFFFFFFFFFF : 
                         csr_vsew_i == 3'b001 ? 512'hFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF : 
                         csr_vsew_i == 3'b010 ? 512'hFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF : 
                         csr_vsew_i == 3'b011 ? 512'hFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF:
                         512'h0} ;
assign vmem_dout_o  = vram_r_data_i ;
assign vram_w_data_o  = vmem_din_i ;
endmodule
