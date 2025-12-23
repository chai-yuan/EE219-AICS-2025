

// -------------------------------------------------
// RISC-32V Instruction OPCODE
// -------------------------------------------------
`define OPCODE_VL       7'b000_0111 
`define WIDTH_VLE32     3'b110
`define FUNCT6_VLE32    6'b00_0000

`define OPCODE_VS       7'b010_0111
`define WIDTH_VSE32     3'b110
`define FUNCT6_VSE32    6'b00_0000

`define OPCODE_VEC      7'b101_0111 
`define FUNCT3_IVV      3'b000 
`define FUNCT3_MVV      3'b010 
`define FUNCT3_IVI      3'b011
`define FUNCT3_IVX      3'b100 
`define FUNCT3_MVX      3'b110 

`define FUNCT6_VADD     6'b00_0000 
`define FUNCT6_VSUB     6'b00_0010 
`define FUNCT6_VMUL     6'b10_0101 
`define FUNCT6_VDIV     6'b10_0001 
`define FUNCT6_VMV_X_S  6'b01_0000 
`define FUNCT6_VMV_V_X  6'b01_0111 

`define FUNCT6_VMIN     6'b00_0101 
`define FUNCT6_VMX      6'b00_0111 
`define FUNCT6_VSRA     6'b10_1001
`define FUNCT6_VREDSUM  6'b00_0000 
`define FUNCT6_VREDMAX  6'b00_0111



