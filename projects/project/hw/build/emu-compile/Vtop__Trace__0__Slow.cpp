// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1088,"clock", false,-1);
    tracep->declBit(c+1089,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+1088,"clock", false,-1);
    tracep->declBit(c+1089,"reset", false,-1);
    tracep->declBit(c+1090,"inst_ena", false,-1);
    tracep->declBus(c+404,"inst", false,-1, 31,0);
    tracep->declQuad(c+405,"inst_addr", false,-1, 63,0);
    tracep->declBit(c+1109,"ren_inst", false,-1);
    tracep->declQuad(c+1110,"raddr_inst", false,-1, 63,0);
    tracep->declQuad(c+1112,"rdata_inst", false,-1, 63,0);
    tracep->declBit(c+407,"ram_r_ena", false,-1);
    tracep->declQuad(c+2,"ram_r_addr", false,-1, 63,0);
    tracep->declQuad(c+4,"ram_r_data", false,-1, 63,0);
    tracep->declBit(c+408,"ram_w_ena", false,-1);
    tracep->declQuad(c+2,"ram_w_addr", false,-1, 63,0);
    tracep->declQuad(c+6,"ram_w_data", false,-1, 63,0);
    tracep->declQuad(c+8,"ram_w_mask", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+10+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declBit(c+1114,"pc_stall", false,-1);
    tracep->declQuad(c+409,"rom_rdata", false,-1, 63,0);
    tracep->declBit(c+411,"vec_rs1_r_ena", false,-1);
    tracep->declBus(c+412,"vec_rs1_r_addr", false,-1, 4,0);
    tracep->declQuad(c+74,"vec_rs1_data", false,-1, 63,0);
    tracep->declBit(c+413,"vram_r_ena", false,-1);
    tracep->declQuad(c+76,"vram_r_addr", false,-1, 63,0);
    tracep->declArray(c+78,"vram_r_data", false,-1, 511,0);
    tracep->declBit(c+414,"vram_w_ena", false,-1);
    tracep->declQuad(c+76,"vram_w_addr", false,-1, 63,0);
    tracep->declArray(c+94,"vram_w_data", false,-1, 511,0);
    tracep->declArray(c+1115,"vram_w_mask", false,-1, 511,0);
    tracep->pushNamePrefix("RAM ");
    tracep->declBit(c+1088,"clk", false,-1);
    tracep->declBit(c+407,"ren", false,-1);
    tracep->declQuad(c+110,"rIdx", false,-1, 63,0);
    tracep->declQuad(c+4,"rdata", false,-1, 63,0);
    tracep->declQuad(c+110,"wIdx", false,-1, 63,0);
    tracep->declQuad(c+6,"wdata", false,-1, 63,0);
    tracep->declQuad(c+8,"wmask", false,-1, 63,0);
    tracep->declBit(c+408,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RAM_VECOTR ");
    tracep->declBit(c+1088,"clk", false,-1);
    tracep->declBit(c+413,"ren", false,-1);
    tracep->declQuad(c+112,"rIdx", false,-1, 63,0);
    tracep->declArray(c+78,"rdata", false,-1, 511,0);
    tracep->declQuad(c+112,"wIdx", false,-1, 63,0);
    tracep->declArray(c+94,"wdata", false,-1, 511,0);
    tracep->declArray(c+1115,"wmask", false,-1, 511,0);
    tracep->declBit(c+414,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ROM_INST ");
    tracep->declBit(c+1088,"clk", false,-1);
    tracep->declBit(c+1131,"ren", false,-1);
    tracep->declQuad(c+415,"rIdx", false,-1, 63,0);
    tracep->declQuad(c+409,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RV64I ");
    tracep->declBit(c+1088,"qRw", false,-1);
    tracep->declBit(c+1089,"GFv", false,-1);
    tracep->declBit(c+1090,"cBvbv8J", false,-1);
    tracep->declBus(c+404,"tLAz", false,-1, 31,0);
    tracep->declQuad(c+405,"M42mseGNC", false,-1, 63,0);
    tracep->declBit(c+407,"kwLFq9ece", false,-1);
    tracep->declQuad(c+2,"jyUGZ15cpD", false,-1, 63,0);
    tracep->declQuad(c+4,"sZ8K3fVwEi", false,-1, 63,0);
    tracep->declBit(c+408,"yMK6CRBBo", false,-1);
    tracep->declQuad(c+2,"to7CMZaPKY", false,-1, 63,0);
    tracep->declQuad(c+6,"iIaC58CiHx", false,-1, 63,0);
    tracep->declQuad(c+8,"GtC0qmiUqL", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+114+i*2,"imsnW0", true,(i+0), 63,0);
    }
    tracep->declBit(c+1114,"pc_stall", false,-1);
    tracep->declBit(c+178,"M0tlFLtwNj4", false,-1);
    tracep->declQuad(c+179,"epavvrInwBl", false,-1, 63,0);
    tracep->declQuad(c+405,"siZbFhceze", false,-1, 63,0);
    tracep->declQuad(c+181,"X5fLoFTh", false,-1, 63,0);
    tracep->declBit(c+183,"plyN9CKEI", false,-1);
    tracep->declBus(c+417,"kbB098u7Fq", false,-1, 4,0);
    tracep->declQuad(c+181,"zxkiTuCK4RD4", false,-1, 63,0);
    tracep->declBit(c+183,"hUduYqCAo0XLk", false,-1);
    tracep->declBus(c+417,"P9crpNurNqLiBT", false,-1, 4,0);
    tracep->declQuad(c+184,"MrCY1P97", false,-1, 63,0);
    tracep->declBit(c+186,"stsrseQpu", false,-1);
    tracep->declBus(c+418,"Ofs9NJ36Pq", false,-1, 4,0);
    tracep->declQuad(c+187,"BvitSgq1Hyw", false,-1, 63,0);
    tracep->declQuad(c+189,"Lv5ku5dc93v", false,-1, 63,0);
    tracep->declBus(c+191,"FsjRBjnjb1", false,-1, 7,0);
    tracep->declBit(c+419,"Ai9EtdpBAt", false,-1);
    tracep->declQuad(c+2,"Zsgxv3MTUv", false,-1, 63,0);
    tracep->declBit(c+420,"D7oya5Igy", false,-1);
    tracep->declQuad(c+421,"gY53pm6Uc1a5z", false,-1, 63,0);
    tracep->declBit(c+423,"wWjUJ9g", false,-1);
    tracep->declQuad(c+424,"BFWC5DLl4Ec", false,-1, 63,0);
    tracep->declBus(c+426,"Yb5ekIkGnKG8c", false,-1, 2,0);
    tracep->declBit(c+407,"a4SqTqUk3", false,-1);
    tracep->declQuad(c+192,"VOpQv3szsL", false,-1, 63,0);
    tracep->declBit(c+408,"NpNDeHiyF", false,-1);
    tracep->declQuad(c+194,"Sw9ZCULOy5", false,-1, 63,0);
    tracep->declBit(c+427,"z0MsdO", false,-1);
    tracep->declBit(c+407,"P6wD5b", false,-1);
    tracep->declBus(c+428,"ttyiClU", false,-1, 4,0);
    tracep->declBit(c+196,"CP5BekSY", false,-1);
    tracep->declBus(c+197,"fjN1GhT7w", false,-1, 4,0);
    tracep->declQuad(c+198,"cSWijWYsS", false,-1, 63,0);
    tracep->pushNamePrefix("Kv7xLhcA ");
    tracep->declBit(c+1089,"GFv", false,-1);
    tracep->declBit(c+427,"WSDwRmyT", false,-1);
    tracep->declBus(c+428,"bqrnOOkRP", false,-1, 4,0);
    tracep->declBit(c+407,"KQRQqPG3", false,-1);
    tracep->declQuad(c+2,"o6ntSojFkw", false,-1, 63,0);
    tracep->declQuad(c+192,"j3R14S5oI4", false,-1, 63,0);
    tracep->declBit(c+196,"BECXQ3iC", false,-1);
    tracep->declBus(c+197,"OA8Py3qa6", false,-1, 4,0);
    tracep->declQuad(c+198,"O9OWRNtHh", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eD5A2ng0 ");
    tracep->declBit(c+1088,"qRw", false,-1);
    tracep->declBit(c+1089,"GFv", false,-1);
    tracep->declBit(c+178,"FlVzqaJLmQB9d", false,-1);
    tracep->declQuad(c+179,"ckxHDsjx2w8VQ", false,-1, 63,0);
    tracep->declQuad(c+405,"Z1IaB2AXzqhY", false,-1, 63,0);
    tracep->declBit(c+1090,"qovYvzF6D", false,-1);
    tracep->declQuad(c+405,"kXyFYs2fUMl", false,-1, 63,0);
    tracep->declBit(c+1114,"pc_stall", false,-1);
    tracep->declQuad(c+429,"db", false,-1, 63,0);
    tracep->declQuad(c+405,"nlju", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jjI7ZAzN2 ");
    tracep->declBit(c+1089,"GFv", false,-1);
    tracep->declBus(c+426,"UQX1UO534Eueufy", false,-1, 2,0);
    tracep->declBit(c+407,"aTzikFmnw2L", false,-1);
    tracep->declQuad(c+2,"pfoWBIl3BSS8", false,-1, 63,0);
    tracep->declQuad(c+192,"RQrXFv01nm2Y", false,-1, 63,0);
    tracep->declBit(c+408,"SzK7f7TPjfs", false,-1);
    tracep->declQuad(c+2,"dRXdVXnEGkNt", false,-1, 63,0);
    tracep->declQuad(c+194,"EVQRdLZoqqwb", false,-1, 63,0);
    tracep->declBit(c+407,"doSBaROEalm", false,-1);
    tracep->declQuad(c+4,"yNuo2ExZSHTt", false,-1, 63,0);
    tracep->declQuad(c+2,"XRqKZqMadYIS", false,-1, 63,0);
    tracep->declBit(c+408,"fiSv7mavUEF", false,-1);
    tracep->declQuad(c+2,"ySkI99UlzaRl", false,-1, 63,0);
    tracep->declQuad(c+6,"uPLAeJWwH2VD", false,-1, 63,0);
    tracep->declQuad(c+8,"mO5xfkjIYekM", false,-1, 63,0);
    tracep->declQuad(c+4,"shKCUQ82VLz", false,-1, 63,0);
    tracep->declBus(c+200,"sKJju8Xgr7C", false,-1, 31,0);
    tracep->declBus(c+201,"bEdFnqpLQFY", false,-1, 15,0);
    tracep->declBus(c+202,"ZxFtpStHVWm", false,-1, 7,0);
    tracep->declQuad(c+8,"KzUS4LT1bsC", false,-1, 63,0);
    tracep->declQuad(c+1132,"gHxuxUy7K", false,-1, 63,0);
    tracep->declQuad(c+203,"iKFW5SVLk", false,-1, 63,0);
    tracep->declQuad(c+205,"bNoqmsE88", false,-1, 63,0);
    tracep->declQuad(c+207,"iMPPekqeo", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("juyxmMf ");
    tracep->declBit(c+1088,"qRw", false,-1);
    tracep->declBit(c+1089,"GFv", false,-1);
    tracep->declBus(c+197,"tJPZEp4r", false,-1, 4,0);
    tracep->declQuad(c+198,"UADGd6uM", false,-1, 63,0);
    tracep->declBit(c+196,"jMvw26B", false,-1);
    tracep->declBit(c+183,"iySWeb57", false,-1);
    tracep->declBus(c+417,"qAHqrjuoy", false,-1, 4,0);
    tracep->declQuad(c+181,"Y6GtStlxd", false,-1, 63,0);
    tracep->declBit(c+186,"iU9eTHOE", false,-1);
    tracep->declBus(c+418,"cjwWUjvzA", false,-1, 4,0);
    tracep->declQuad(c+184,"en8PtIPsi", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+209+i*2,"imsnW0", true,(i+0), 63,0);
    }
    tracep->declBus(c+431,"H", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+432+i*2,"oxMw", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s7o2FNmy ");
    tracep->declBit(c+1089,"GFv", false,-1);
    tracep->declBus(c+404,"QQqE0R", false,-1, 31,0);
    tracep->declQuad(c+181,"nZgfwYMPis", false,-1, 63,0);
    tracep->declBit(c+183,"Nsz4lbgOeJV", false,-1);
    tracep->declBus(c+417,"wcqU5ueTTMKp", false,-1, 4,0);
    tracep->declQuad(c+184,"f3HkVuZKqF", false,-1, 63,0);
    tracep->declBit(c+186,"w36wdnIqkqw", false,-1);
    tracep->declBus(c+418,"kRMWeuBKEmIC", false,-1, 4,0);
    tracep->declBus(c+191,"b5FgibAO1U4M", false,-1, 7,0);
    tracep->declBit(c+419,"MShTPjvautFo", false,-1);
    tracep->declQuad(c+187,"LfmmAVsUOAh3l", false,-1, 63,0);
    tracep->declQuad(c+189,"DOHla3yUfRhRC", false,-1, 63,0);
    tracep->declBit(c+420,"MB7uIai8Vtn", false,-1);
    tracep->declQuad(c+421,"Ij1WIf77YjMCk0P", false,-1, 63,0);
    tracep->declBit(c+423,"jKbhLHOmf", false,-1);
    tracep->declQuad(c+424,"gyJsJtTcJbZkb", false,-1, 63,0);
    tracep->declBus(c+426,"Sllh1Ezp9IZIqYa", false,-1, 2,0);
    tracep->declBit(c+407,"oJ9dSqzdtZM", false,-1);
    tracep->declBit(c+408,"tWIXk2nzYYR", false,-1);
    tracep->declQuad(c+194,"U8nHEbYumypl", false,-1, 63,0);
    tracep->declBit(c+427,"BECXQ3iC", false,-1);
    tracep->declBit(c+407,"pGYEoK97", false,-1);
    tracep->declBus(c+428,"OA8Py3qa6", false,-1, 4,0);
    tracep->declBus(c+496,"ZgK2w", false,-1, 31,0);
    tracep->declBus(c+497,"R9GYY", false,-1, 20,0);
    tracep->declBus(c+498,"bEPRS", false,-1, 12,0);
    tracep->declBus(c+499,"ljuWe", false,-1, 11,0);
    tracep->declBus(c+500,"ZWT7B", false,-1, 11,0);
    tracep->declBus(c+501,"v212gv", false,-1, 6,0);
    tracep->declBus(c+502,"pI8", false,-1, 4,0);
    tracep->declBus(c+503,"z04", false,-1, 4,0);
    tracep->declBus(c+504,"I5AJbs", false,-1, 2,0);
    tracep->declBus(c+505,"nb", false,-1, 4,0);
    tracep->declBus(c+506,"gfIyT7", false,-1, 6,0);
    tracep->declQuad(c+507,"Sqk7XaBzon2D9v", false,-1, 63,0);
    tracep->declBit(c+509,"GQAE9Cct", false,-1);
    tracep->declBit(c+510,"QPShFtv4Dw", false,-1);
    tracep->declBit(c+511,"TuCoUBCD", false,-1);
    tracep->declBit(c+512,"ShXAdPB5O", false,-1);
    tracep->declBit(c+513,"YWBp3rEd", false,-1);
    tracep->declBit(c+514,"uP7s2O0a", false,-1);
    tracep->declBit(c+515,"RA58HofI", false,-1);
    tracep->declBit(c+516,"pX97QCtg", false,-1);
    tracep->declBit(c+517,"IDE3hK2uz", false,-1);
    tracep->declBit(c+518,"ycoCSReVj", false,-1);
    tracep->declBit(c+519,"nIiCfXy", false,-1);
    tracep->declBit(c+520,"INFMfFr", false,-1);
    tracep->declBit(c+521,"OkydoJc", false,-1);
    tracep->declBit(c+522,"G4mS4Qzt", false,-1);
    tracep->declBit(c+523,"YdPZj3Dq", false,-1);
    tracep->declBit(c+524,"C7aogzY", false,-1);
    tracep->declBit(c+525,"voYw5no", false,-1);
    tracep->declBit(c+526,"wWtUhx4", false,-1);
    tracep->declBit(c+527,"SzgUUYWIJ", false,-1);
    tracep->declBit(c+528,"u4KcONyV2", false,-1);
    tracep->declBit(c+529,"GbT8XbTzEJ", false,-1);
    tracep->declBit(c+530,"TYeqOMZzB", false,-1);
    tracep->declBit(c+531,"hTsfETwt", false,-1);
    tracep->declBit(c+532,"Pqvfr2zZE", false,-1);
    tracep->declBit(c+533,"wa0Zzdgim", false,-1);
    tracep->declBit(c+534,"QjcCGqv8V", false,-1);
    tracep->declBit(c+535,"qMhxEPDIY", false,-1);
    tracep->declBit(c+536,"wCAmo0T4", false,-1);
    tracep->declBit(c+537,"nzJk0CYt", false,-1);
    tracep->declBit(c+538,"KAZaki8Z", false,-1);
    tracep->declBit(c+539,"GryHxQYb", false,-1);
    tracep->declBit(c+540,"tM5lueYO1", false,-1);
    tracep->declBit(c+541,"JxgCKb0r", false,-1);
    tracep->declBit(c+542,"rFrUt3HA", false,-1);
    tracep->declBit(c+543,"CsytHqHJ", false,-1);
    tracep->declBit(c+544,"SVALFln", false,-1);
    tracep->declBit(c+545,"yz2lRBz7", false,-1);
    tracep->declBit(c+546,"WChG0j8I", false,-1);
    tracep->declBit(c+547,"CzgHuUSI", false,-1);
    tracep->declBit(c+548,"A66ucgr", false,-1);
    tracep->declBit(c+549,"Ljqmq49", false,-1);
    tracep->declBit(c+550,"mXoVztmUwG", false,-1);
    tracep->declBit(c+551,"dWa2lYZtw5", false,-1);
    tracep->declBit(c+552,"pngOwGCJUg", false,-1);
    tracep->declBit(c+553,"CTHw1Tw4JF", false,-1);
    tracep->declBit(c+554,"iBoxza85A", false,-1);
    tracep->declBit(c+555,"sDefmLkP9", false,-1);
    tracep->declBit(c+556,"tkNSPBbC4", false,-1);
    tracep->declBit(c+557,"vkhuKAwC7", false,-1);
    tracep->declBit(c+558,"LYUGKdPgW", false,-1);
    tracep->declBit(c+559,"ULxdVmE2P", false,-1);
    tracep->declBit(c+560,"lXMJdEC4Yj", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("yO7QPsT0y ");
    tracep->declBit(c+1088,"qRw", false,-1);
    tracep->declBit(c+1089,"GFv", false,-1);
    tracep->declBus(c+191,"QJ9hkSUr86g6", false,-1, 7,0);
    tracep->declBit(c+419,"Pfjw95PQlMmB", false,-1);
    tracep->declQuad(c+187,"rgW3lMDkqyNwd", false,-1, 63,0);
    tracep->declQuad(c+189,"fUFVvRbkqOOVT", false,-1, 63,0);
    tracep->declQuad(c+2,"hq6Uv7FRgdqu", false,-1, 63,0);
    tracep->declQuad(c+405,"dKWbtlnVzZKY", false,-1, 63,0);
    tracep->declBit(c+420,"IVQYajcaky2", false,-1);
    tracep->declQuad(c+421,"iBY1wF465kZc43I", false,-1, 63,0);
    tracep->declBit(c+423,"REAeHbGOa", false,-1);
    tracep->declQuad(c+424,"Fg0YJm19jg6un", false,-1, 63,0);
    tracep->declBit(c+178,"OUTEggu4pjvZO", false,-1);
    tracep->declQuad(c+179,"JDqNhAjgmujRj", false,-1, 63,0);
    tracep->declQuad(c+273,"ms6BV1DMBx", false,-1, 63,0);
    tracep->declBit(c+275,"Ha5GWqunguUc", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RV_VECTOR ");
    tracep->declBit(c+1088,"clk", false,-1);
    tracep->declBit(c+1089,"rst", false,-1);
    tracep->declBus(c+404,"inst", false,-1, 31,0);
    tracep->declQuad(c+74,"vec_rs1_data", false,-1, 63,0);
    tracep->declBit(c+411,"vec_rs1_r_ena", false,-1);
    tracep->declBus(c+412,"vec_rs1_r_addr", false,-1, 4,0);
    tracep->declBit(c+413,"vram_r_ena", false,-1);
    tracep->declQuad(c+76,"vram_r_addr", false,-1, 63,0);
    tracep->declArray(c+78,"vram_r_data", false,-1, 511,0);
    tracep->declBit(c+414,"vram_w_ena", false,-1);
    tracep->declQuad(c+76,"vram_w_addr", false,-1, 63,0);
    tracep->declArray(c+94,"vram_w_data", false,-1, 511,0);
    tracep->declArray(c+1115,"vram_w_mask", false,-1, 511,0);
    tracep->declBus(c+561,"valu_opcode", false,-1, 7,0);
    tracep->declArray(c+276,"operand_v1", false,-1, 511,0);
    tracep->declArray(c+292,"operand_v2", false,-1, 511,0);
    tracep->declArray(c+308,"valu_result", false,-1, 511,0);
    tracep->declBit(c+413,"vmem_ren", false,-1);
    tracep->declBit(c+414,"vmem_wen", false,-1);
    tracep->declQuad(c+76,"vmem_addr", false,-1, 63,0);
    tracep->declArray(c+94,"vmem_din", false,-1, 511,0);
    tracep->declArray(c+78,"vmem_dout", false,-1, 511,0);
    tracep->declBit(c+562,"vid_wb_en", false,-1);
    tracep->declBit(c+563,"vid_wb_sel", false,-1);
    tracep->declBus(c+564,"vid_wb_addr", false,-1, 4,0);
    tracep->declBit(c+565,"vid_wb_f_rs1", false,-1);
    tracep->declBit(c+1091,"vwb_en", false,-1);
    tracep->declBus(c+1092,"vwb_addr", false,-1, 4,0);
    tracep->declArray(c+1093,"vwb_data", false,-1, 511,0);
    tracep->declBit(c+566,"vs1_en", false,-1);
    tracep->declBus(c+567,"vs1_addr", false,-1, 4,0);
    tracep->declArray(c+324,"vs1_data", false,-1, 511,0);
    tracep->declBit(c+568,"vs2_en", false,-1);
    tracep->declBus(c+569,"vs2_addr", false,-1, 4,0);
    tracep->declArray(c+340,"vs2_data", false,-1, 511,0);
    tracep->pushNamePrefix("V_ALU ");
    tracep->declBus(c+1134,"VALUOP_DW", false,-1, 31,0);
    tracep->declBus(c+1135,"VREG_DW", false,-1, 31,0);
    tracep->declBus(c+1136,"VREG_AW", false,-1, 31,0);
    tracep->declBus(c+1137,"REG_DW", false,-1, 31,0);
    tracep->declBit(c+1088,"clk", false,-1);
    tracep->declBit(c+1089,"rst", false,-1);
    tracep->declBus(c+561,"valu_opcode_i", false,-1, 7,0);
    tracep->declArray(c+276,"operand_v1_i", false,-1, 511,0);
    tracep->declArray(c+292,"operand_v2_i", false,-1, 511,0);
    tracep->declArray(c+308,"valu_result_o", false,-1, 511,0);
    tracep->declBus(c+1138,"VALU_OP_NOP", false,-1, 7,0);
    tracep->declBus(c+1139,"VALU_OP_VADD", false,-1, 7,0);
    tracep->declBus(c+1140,"VALU_OP_VMUL", false,-1, 7,0);
    tracep->declBus(c+1141,"VALU_OP_VSUB", false,-1, 7,0);
    tracep->declBus(c+1142,"VALU_OP_VMIN", false,-1, 7,0);
    tracep->declBus(c+1143,"VALU_OP_VMAX", false,-1, 7,0);
    tracep->declBus(c+1144,"VALU_OP_VSRA", false,-1, 7,0);
    tracep->declBus(c+1145,"VALU_OP_VREDSUM_VS", false,-1, 7,0);
    tracep->declBus(c+1146,"VALU_OP_VREDMAX_VS", false,-1, 7,0);
    tracep->declBus(c+1147,"VALU_OP_VMV_V_X", false,-1, 7,0);
    tracep->declBus(c+1148,"VALU_OP_VMV_X_S", false,-1, 7,0);
    tracep->declBus(c+1149,"VALU_OP_VDIV", false,-1, 7,0);
    tracep->declBus(c+1,"i", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+356+i*2,"lane_v1", true,(i+0), 63,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+372+i*2,"lane_v2", true,(i+0), 63,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+388+i*2,"lane_out", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("V_ID ");
    tracep->declBus(c+1134,"VALUOP_DW", false,-1, 31,0);
    tracep->declBus(c+1135,"VMEM_DW", false,-1, 31,0);
    tracep->declBus(c+1137,"VMEM_AW", false,-1, 31,0);
    tracep->declBus(c+1135,"VREG_DW", false,-1, 31,0);
    tracep->declBus(c+1136,"VREG_AW", false,-1, 31,0);
    tracep->declBus(c+1150,"INST_DW", false,-1, 31,0);
    tracep->declBus(c+1137,"REG_DW", false,-1, 31,0);
    tracep->declBus(c+1136,"REG_AW", false,-1, 31,0);
    tracep->declBit(c+1088,"clk", false,-1);
    tracep->declBit(c+1089,"rst", false,-1);
    tracep->declBus(c+404,"inst_i", false,-1, 31,0);
    tracep->declBit(c+411,"rs1_en_o", false,-1);
    tracep->declBus(c+412,"rs1_addr_o", false,-1, 4,0);
    tracep->declQuad(c+74,"rs1_dout_i", false,-1, 63,0);
    tracep->declBit(c+566,"vs1_en_o", false,-1);
    tracep->declBus(c+567,"vs1_addr_o", false,-1, 4,0);
    tracep->declArray(c+324,"vs1_dout_i", false,-1, 511,0);
    tracep->declBit(c+568,"vs2_en_o", false,-1);
    tracep->declBus(c+569,"vs2_addr_o", false,-1, 4,0);
    tracep->declArray(c+340,"vs2_dout_i", false,-1, 511,0);
    tracep->declBus(c+561,"valu_opcode_o", false,-1, 7,0);
    tracep->declArray(c+276,"operand_v1_o", false,-1, 511,0);
    tracep->declArray(c+292,"operand_v2_o", false,-1, 511,0);
    tracep->declBit(c+413,"vmem_ren_o", false,-1);
    tracep->declBit(c+414,"vmem_wen_o", false,-1);
    tracep->declQuad(c+76,"vmem_r_addr_o", false,-1, 63,0);
    tracep->declQuad(c+76,"vmem_w_addr_o", false,-1, 63,0);
    tracep->declArray(c+94,"vmem_din_o", false,-1, 511,0);
    tracep->declBit(c+562,"vid_wb_en_o", false,-1);
    tracep->declBit(c+563,"vid_wb_sel_o", false,-1);
    tracep->declBus(c+564,"vid_wb_addr_o", false,-1, 4,0);
    tracep->declBit(c+565,"vid_wb_from_rs1", false,-1);
    tracep->declBus(c+1138,"VALU_OP_NOP", false,-1, 7,0);
    tracep->declBus(c+1139,"VALU_OP_VADD", false,-1, 7,0);
    tracep->declBus(c+1140,"VALU_OP_VMUL", false,-1, 7,0);
    tracep->declBus(c+1141,"VALU_OP_VSUB", false,-1, 7,0);
    tracep->declBus(c+1142,"VALU_OP_VMIN", false,-1, 7,0);
    tracep->declBus(c+1143,"VALU_OP_VMAX", false,-1, 7,0);
    tracep->declBus(c+1144,"VALU_OP_VSRA", false,-1, 7,0);
    tracep->declBus(c+1145,"VALU_OP_VREDSUM_VS", false,-1, 7,0);
    tracep->declBus(c+1146,"VALU_OP_VREDMAX_VS", false,-1, 7,0);
    tracep->declBus(c+1147,"VALU_OP_VMV_V_X", false,-1, 7,0);
    tracep->declBus(c+1148,"VALU_OP_VMV_X_S", false,-1, 7,0);
    tracep->declBus(c+1149,"VALU_OP_VDIV", false,-1, 7,0);
    tracep->declBus(c+506,"opcode", false,-1, 6,0);
    tracep->declBus(c+505,"vd", false,-1, 4,0);
    tracep->declBus(c+505,"vs3", false,-1, 4,0);
    tracep->declBus(c+505,"rd", false,-1, 4,0);
    tracep->declBus(c+504,"funct3", false,-1, 2,0);
    tracep->declBus(c+504,"width", false,-1, 2,0);
    tracep->declBus(c+503,"vs1", false,-1, 4,0);
    tracep->declBus(c+503,"rs1", false,-1, 4,0);
    tracep->declBus(c+503,"imm4_0", false,-1, 4,0);
    tracep->declBus(c+502,"vs2", false,-1, 4,0);
    tracep->declBus(c+502,"sumop", false,-1, 4,0);
    tracep->declBit(c+570,"vm", false,-1);
    tracep->declBus(c+571,"funct6", false,-1, 5,0);
    tracep->declBus(c+572,"mop", false,-1, 1,0);
    tracep->declBit(c+573,"mew", false,-1);
    tracep->declBus(c+574,"nf", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("V_MEM ");
    tracep->declBit(c+1088,"clk", false,-1);
    tracep->declBit(c+1089,"rst", false,-1);
    tracep->declBit(c+413,"vmem_ren_i", false,-1);
    tracep->declBit(c+414,"vmem_wen_i", false,-1);
    tracep->declQuad(c+76,"vmem_r_addr_i", false,-1, 63,0);
    tracep->declQuad(c+76,"vmem_w_addr_i", false,-1, 63,0);
    tracep->declArray(c+94,"vmem_din_i", false,-1, 511,0);
    tracep->declArray(c+78,"vmem_dout_o", false,-1, 511,0);
    tracep->declBit(c+413,"vram_r_ena_o", false,-1);
    tracep->declQuad(c+76,"vram_r_addr_o", false,-1, 63,0);
    tracep->declArray(c+78,"vram_r_data_i", false,-1, 511,0);
    tracep->declBit(c+414,"vram_w_ena_o", false,-1);
    tracep->declQuad(c+76,"vram_w_addr_o", false,-1, 63,0);
    tracep->declArray(c+1115,"vram_w_mask_o", false,-1, 511,0);
    tracep->declArray(c+94,"vram_w_data_o", false,-1, 511,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("V_REG ");
    tracep->declBus(c+1135,"VREG_DW", false,-1, 31,0);
    tracep->declBus(c+1136,"VREG_AW", false,-1, 31,0);
    tracep->declBit(c+1088,"clk", false,-1);
    tracep->declBit(c+1089,"rst", false,-1);
    tracep->declBit(c+1091,"vwb_en_i", false,-1);
    tracep->declBus(c+1092,"vwb_addr_i", false,-1, 4,0);
    tracep->declArray(c+1093,"vwb_data_i", false,-1, 511,0);
    tracep->declBit(c+566,"vs1_en_i", false,-1);
    tracep->declBus(c+567,"vs1_addr_i", false,-1, 4,0);
    tracep->declArray(c+324,"vs1_data_o", false,-1, 511,0);
    tracep->declBit(c+568,"vs2_en_i", false,-1);
    tracep->declBus(c+569,"vs2_addr_i", false,-1, 4,0);
    tracep->declArray(c+340,"vs2_data_o", false,-1, 511,0);
    tracep->declBus(c+575,"i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+576+i*16,"regfile", true,(i+0), 511,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("V_WB ");
    tracep->declBus(c+1135,"VREG_DW", false,-1, 31,0);
    tracep->declBus(c+1136,"VREG_AW", false,-1, 31,0);
    tracep->declBus(c+1137,"REG_DW", false,-1, 31,0);
    tracep->declBit(c+1088,"clk", false,-1);
    tracep->declBit(c+1089,"rst", false,-1);
    tracep->declBit(c+562,"vid_wb_en_i", false,-1);
    tracep->declBit(c+563,"vid_wb_sel_i", false,-1);
    tracep->declBus(c+564,"vid_wb_addr_i", false,-1, 4,0);
    tracep->declBit(c+565,"vid_wb_from_rs1", false,-1);
    tracep->declArray(c+308,"valu_result_i", false,-1, 511,0);
    tracep->declArray(c+78,"vmem_result_i", false,-1, 511,0);
    tracep->declBit(c+1091,"vwb_en_o", false,-1);
    tracep->declBus(c+1092,"vwb_addr_o", false,-1, 4,0);
    tracep->declArray(c+1093,"vwb_data_o", false,-1, 511,0);
    tracep->declQuad(c+74,"rs1_data", false,-1, 63,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;
extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h8b2d9f06_0;

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<16>/*511:0*/ __Vtemp_h5c5b39ee__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__i),32);
    bufp->fullQData(oldp+2,(vlSelf->top__DOT__ram_r_addr),64);
    bufp->fullQData(oldp+4,(vlSelf->top__DOT__ram_r_data),64);
    bufp->fullQData(oldp+6,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                              ? ((0x3fU >= (0x38U & 
                                            ((IData)(vlSelf->top__DOT__ram_r_addr) 
                                             << 3U)))
                                  ? (((IData)(vlSelf->top__DOT__ram_w_ena)
                                       ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                       : 0ULL) << (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__ram_r_addr) 
                                                      << 3U)))
                                  : 0ULL) : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                              ? ((0x3fU 
                                                  >= 
                                                  (0x30U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__ram_r_addr 
                                                               >> 1U)) 
                                                      << 4U)))
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__ram_w_ena)
                                                    ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                    : 0ULL) 
                                                  << 
                                                  (0x30U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__ram_r_addr 
                                                               >> 1U)) 
                                                      << 4U)))
                                                  : 0ULL)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                  ? 
                                                 ((0x3fU 
                                                   >= 
                                                   (0x20U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__ram_r_addr 
                                                                >> 2U)) 
                                                       << 5U)))
                                                   ? 
                                                  (((IData)(vlSelf->top__DOT__ram_w_ena)
                                                     ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                     : 0ULL) 
                                                   << 
                                                   (0x20U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__ram_r_addr 
                                                                >> 2U)) 
                                                       << 5U)))
                                                   : 0ULL)
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__ram_w_ena)
                                                    ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                    : 0ULL)
                                                   : 0ULL))))),64);
    bufp->fullQData(oldp+8,(((IData)(vlSelf->top__DOT__ram_w_ena)
                              ? ((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                  ? ((0U == (7U & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                      ? 0xffULL : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                    ? 0xff00ULL
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                     ? 0xff0000ULL
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                      ? 0xff000000ULL
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                       ? 0xff00000000ULL
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                        ? 0xff0000000000ULL
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                         ? 0xff000000000000ULL
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                          ? 0xff00000000000000ULL
                                                          : 0ULL))))))))
                                  : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                      ? ((0U == (3U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ram_r_addr 
                                                            >> 1U))))
                                          ? 0xffffULL
                                          : ((1U == 
                                              (3U & (IData)(
                                                            (vlSelf->top__DOT__ram_r_addr 
                                                             >> 1U))))
                                              ? 0xffff0000ULL
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ram_r_addr 
                                                              >> 1U))))
                                                  ? 0xffff00000000ULL
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ram_r_addr 
                                                               >> 1U))))
                                                   ? 0xffff000000000000ULL
                                                   : 0ULL))))
                                      : ((3U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__ram_r_addr 
                                                            >> 2U)))
                                              ? 0xffffffff00000000ULL
                                              : 0xffffffffULL)
                                          : ((7U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                              ? 0xffffffffffffffffULL
                                              : 0ULL))))
                              : 0ULL)),64);
    bufp->fullQData(oldp+10,(vlSelf->top__DOT__regs[0]),64);
    bufp->fullQData(oldp+12,(vlSelf->top__DOT__regs[1]),64);
    bufp->fullQData(oldp+14,(vlSelf->top__DOT__regs[2]),64);
    bufp->fullQData(oldp+16,(vlSelf->top__DOT__regs[3]),64);
    bufp->fullQData(oldp+18,(vlSelf->top__DOT__regs[4]),64);
    bufp->fullQData(oldp+20,(vlSelf->top__DOT__regs[5]),64);
    bufp->fullQData(oldp+22,(vlSelf->top__DOT__regs[6]),64);
    bufp->fullQData(oldp+24,(vlSelf->top__DOT__regs[7]),64);
    bufp->fullQData(oldp+26,(vlSelf->top__DOT__regs[8]),64);
    bufp->fullQData(oldp+28,(vlSelf->top__DOT__regs[9]),64);
    bufp->fullQData(oldp+30,(vlSelf->top__DOT__regs[10]),64);
    bufp->fullQData(oldp+32,(vlSelf->top__DOT__regs[11]),64);
    bufp->fullQData(oldp+34,(vlSelf->top__DOT__regs[12]),64);
    bufp->fullQData(oldp+36,(vlSelf->top__DOT__regs[13]),64);
    bufp->fullQData(oldp+38,(vlSelf->top__DOT__regs[14]),64);
    bufp->fullQData(oldp+40,(vlSelf->top__DOT__regs[15]),64);
    bufp->fullQData(oldp+42,(vlSelf->top__DOT__regs[16]),64);
    bufp->fullQData(oldp+44,(vlSelf->top__DOT__regs[17]),64);
    bufp->fullQData(oldp+46,(vlSelf->top__DOT__regs[18]),64);
    bufp->fullQData(oldp+48,(vlSelf->top__DOT__regs[19]),64);
    bufp->fullQData(oldp+50,(vlSelf->top__DOT__regs[20]),64);
    bufp->fullQData(oldp+52,(vlSelf->top__DOT__regs[21]),64);
    bufp->fullQData(oldp+54,(vlSelf->top__DOT__regs[22]),64);
    bufp->fullQData(oldp+56,(vlSelf->top__DOT__regs[23]),64);
    bufp->fullQData(oldp+58,(vlSelf->top__DOT__regs[24]),64);
    bufp->fullQData(oldp+60,(vlSelf->top__DOT__regs[25]),64);
    bufp->fullQData(oldp+62,(vlSelf->top__DOT__regs[26]),64);
    bufp->fullQData(oldp+64,(vlSelf->top__DOT__regs[27]),64);
    bufp->fullQData(oldp+66,(vlSelf->top__DOT__regs[28]),64);
    bufp->fullQData(oldp+68,(vlSelf->top__DOT__regs[29]),64);
    bufp->fullQData(oldp+70,(vlSelf->top__DOT__regs[30]),64);
    bufp->fullQData(oldp+72,(vlSelf->top__DOT__regs[31]),64);
    bufp->fullQData(oldp+74,(vlSelf->top__DOT__vec_rs1_data),64);
    bufp->fullQData(oldp+76,(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr),64);
    bufp->fullWData(oldp+78,(vlSelf->top__DOT__vram_r_data),512);
    bufp->fullWData(oldp+94,(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_din),512);
    bufp->fullQData(oldp+110,(((vlSelf->top__DOT__ram_r_addr 
                                - 0x80000000ULL) >> 3U)),64);
    bufp->fullQData(oldp+112,(((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_addr 
                                - 0x80000000ULL) >> 3U)),64);
    bufp->fullQData(oldp+114,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0]),64);
    bufp->fullQData(oldp+116,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[1]),64);
    bufp->fullQData(oldp+118,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[2]),64);
    bufp->fullQData(oldp+120,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[3]),64);
    bufp->fullQData(oldp+122,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[4]),64);
    bufp->fullQData(oldp+124,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[5]),64);
    bufp->fullQData(oldp+126,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[6]),64);
    bufp->fullQData(oldp+128,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[7]),64);
    bufp->fullQData(oldp+130,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[8]),64);
    bufp->fullQData(oldp+132,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[9]),64);
    bufp->fullQData(oldp+134,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[10]),64);
    bufp->fullQData(oldp+136,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[11]),64);
    bufp->fullQData(oldp+138,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[12]),64);
    bufp->fullQData(oldp+140,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[13]),64);
    bufp->fullQData(oldp+142,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[14]),64);
    bufp->fullQData(oldp+144,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[15]),64);
    bufp->fullQData(oldp+146,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[16]),64);
    bufp->fullQData(oldp+148,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[17]),64);
    bufp->fullQData(oldp+150,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[18]),64);
    bufp->fullQData(oldp+152,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[19]),64);
    bufp->fullQData(oldp+154,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[20]),64);
    bufp->fullQData(oldp+156,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[21]),64);
    bufp->fullQData(oldp+158,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[22]),64);
    bufp->fullQData(oldp+160,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[23]),64);
    bufp->fullQData(oldp+162,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[24]),64);
    bufp->fullQData(oldp+164,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[25]),64);
    bufp->fullQData(oldp+166,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[26]),64);
    bufp->fullQData(oldp+168,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[27]),64);
    bufp->fullQData(oldp+170,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[28]),64);
    bufp->fullQData(oldp+172,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[29]),64);
    bufp->fullQData(oldp+174,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[30]),64);
    bufp->fullQData(oldp+176,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[31]),64);
    bufp->fullBit(oldp+178,(((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc) 
                             | (IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g))));
    bufp->fullQData(oldp+179,(vlSelf->top__DOT__RV64I__DOT__epavvrInwBl),64);
    bufp->fullQData(oldp+181,(vlSelf->top__DOT__RV64I__DOT__X5fLoFTh),64);
    bufp->fullBit(oldp+183,(vlSelf->top__DOT__RV64I__DOT__plyN9CKEI));
    bufp->fullQData(oldp+184,(vlSelf->top__DOT__RV64I__DOT__MrCY1P97),64);
    bufp->fullBit(oldp+186,(vlSelf->top__DOT__RV64I__DOT__stsrseQpu));
    bufp->fullQData(oldp+187,(vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw),64);
    bufp->fullQData(oldp+189,(vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v),64);
    bufp->fullCData(oldp+191,(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1),8);
    bufp->fullQData(oldp+192,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                ? (((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm) 
                                                           >> 7U))))) 
                                    << 8U) | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm)))
                                : ((4U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                    ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm))
                                    : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                        ? (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                                                                   >> 0xfU))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)))
                                        : ((5U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                            ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY))
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C)))
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                    ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                     ? vlSelf->top__DOT__ram_r_data
                                                     : 0ULL)))))))),64);
    bufp->fullQData(oldp+194,(((IData)(vlSelf->top__DOT__ram_w_ena)
                                ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                : 0ULL)),64);
    bufp->fullBit(oldp+196,(vlSelf->top__DOT__RV64I__DOT__CP5BekSY));
    bufp->fullCData(oldp+197,(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w),5);
    bufp->fullQData(oldp+198,(vlSelf->top__DOT__RV64I__DOT__cSWijWYsS),64);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C),32);
    bufp->fullSData(oldp+201,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY),16);
    bufp->fullCData(oldp+202,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm),8);
    bufp->fullQData(oldp+203,(((1U & (IData)((vlSelf->top__DOT__ram_r_addr 
                                              >> 2U)))
                                ? 0xffffffff00000000ULL
                                : 0xffffffffULL)),64);
    bufp->fullQData(oldp+205,(((0U == (3U & (IData)(
                                                    (vlSelf->top__DOT__ram_r_addr 
                                                     >> 1U))))
                                ? 0xffffULL : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ram_r_addr 
                                                            >> 1U))))
                                                ? 0xffff0000ULL
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ram_r_addr 
                                                                >> 1U))))
                                                    ? 0xffff00000000ULL
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                 >> 1U))))
                                                     ? 0xffff000000000000ULL
                                                     : 0ULL))))),64);
    bufp->fullQData(oldp+207,(((0U == (7U & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                ? 0xffULL : ((1U == 
                                              (7U & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                              ? 0xff00ULL
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                  ? 0xff0000ULL
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                   ? 0xff000000ULL
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                    ? 0xff00000000ULL
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                     ? 0xff0000000000ULL
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                      ? 0xff000000000000ULL
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                       ? 0xff00000000000000ULL
                                                       : 0ULL))))))))),64);
    bufp->fullQData(oldp+209,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0]),64);
    bufp->fullQData(oldp+211,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[1]),64);
    bufp->fullQData(oldp+213,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[2]),64);
    bufp->fullQData(oldp+215,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[3]),64);
    bufp->fullQData(oldp+217,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[4]),64);
    bufp->fullQData(oldp+219,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[5]),64);
    bufp->fullQData(oldp+221,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[6]),64);
    bufp->fullQData(oldp+223,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[7]),64);
    bufp->fullQData(oldp+225,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[8]),64);
    bufp->fullQData(oldp+227,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[9]),64);
    bufp->fullQData(oldp+229,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[10]),64);
    bufp->fullQData(oldp+231,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[11]),64);
    bufp->fullQData(oldp+233,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[12]),64);
    bufp->fullQData(oldp+235,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[13]),64);
    bufp->fullQData(oldp+237,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[14]),64);
    bufp->fullQData(oldp+239,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[15]),64);
    bufp->fullQData(oldp+241,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[16]),64);
    bufp->fullQData(oldp+243,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[17]),64);
    bufp->fullQData(oldp+245,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[18]),64);
    bufp->fullQData(oldp+247,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[19]),64);
    bufp->fullQData(oldp+249,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[20]),64);
    bufp->fullQData(oldp+251,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[21]),64);
    bufp->fullQData(oldp+253,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[22]),64);
    bufp->fullQData(oldp+255,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[23]),64);
    bufp->fullQData(oldp+257,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[24]),64);
    bufp->fullQData(oldp+259,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[25]),64);
    bufp->fullQData(oldp+261,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[26]),64);
    bufp->fullQData(oldp+263,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[27]),64);
    bufp->fullQData(oldp+265,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[28]),64);
    bufp->fullQData(oldp+267,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[29]),64);
    bufp->fullQData(oldp+269,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[30]),64);
    bufp->fullQData(oldp+271,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[31]),64);
    bufp->fullQData(oldp+273,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx),64);
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc));
    bufp->fullWData(oldp+276,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1),512);
    bufp->fullWData(oldp+292,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2),512);
    bufp->fullWData(oldp+308,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_result),512);
    bufp->fullWData(oldp+324,(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_data),512);
    bufp->fullWData(oldp+340,(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_data),512);
    bufp->fullQData(oldp+356,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[0]),64);
    bufp->fullQData(oldp+358,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[1]),64);
    bufp->fullQData(oldp+360,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[2]),64);
    bufp->fullQData(oldp+362,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[3]),64);
    bufp->fullQData(oldp+364,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[4]),64);
    bufp->fullQData(oldp+366,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[5]),64);
    bufp->fullQData(oldp+368,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[6]),64);
    bufp->fullQData(oldp+370,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v1[7]),64);
    bufp->fullQData(oldp+372,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[0]),64);
    bufp->fullQData(oldp+374,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[1]),64);
    bufp->fullQData(oldp+376,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[2]),64);
    bufp->fullQData(oldp+378,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[3]),64);
    bufp->fullQData(oldp+380,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[4]),64);
    bufp->fullQData(oldp+382,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[5]),64);
    bufp->fullQData(oldp+384,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[6]),64);
    bufp->fullQData(oldp+386,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_v2[7]),64);
    bufp->fullQData(oldp+388,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[0]),64);
    bufp->fullQData(oldp+390,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[1]),64);
    bufp->fullQData(oldp+392,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[2]),64);
    bufp->fullQData(oldp+394,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[3]),64);
    bufp->fullQData(oldp+396,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[4]),64);
    bufp->fullQData(oldp+398,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[5]),64);
    bufp->fullQData(oldp+400,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[6]),64);
    bufp->fullQData(oldp+402,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__lane_out[7]),64);
    bufp->fullIData(oldp+404,(vlSelf->top__DOT__inst),32);
    bufp->fullQData(oldp+405,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju),64);
    bufp->fullBit(oldp+407,(vlSelf->top__DOT__ram_r_ena));
    bufp->fullBit(oldp+408,(vlSelf->top__DOT__ram_w_ena));
    bufp->fullQData(oldp+409,(vlSelf->top__DOT__rom_rdata),64);
    bufp->fullBit(oldp+411,(vlSelf->top__DOT__vec_rs1_r_ena));
    bufp->fullCData(oldp+412,(vlSelf->top__DOT__vec_rs1_r_addr),5);
    bufp->fullBit(oldp+413,(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren));
    bufp->fullBit(oldp+414,(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_wen));
    bufp->fullQData(oldp+415,(((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                - 0x80000000ULL) >> 3U)),64);
    bufp->fullCData(oldp+417,((0x1fU & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9a5b570a__0)
                                         ? (0x1fU & 
                                            (vlSelf->top__DOT__inst 
                                             >> 0xfU))
                                         : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                             ? 0xaU
                                             : 0U)))),5);
    bufp->fullCData(oldp+418,((0x1fU & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h2869f3d5__0)
                                         ? (0x1fU & 
                                            (vlSelf->top__DOT__inst 
                                             >> 0x14U))
                                         : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                             ? 0xaU
                                             : 0U)))),5);
    bufp->fullBit(oldp+419,(((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG) 
                             | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A) 
                                | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9) 
                                   | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4) 
                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)))))));
    bufp->fullBit(oldp+420,(vlSelf->top__DOT__RV64I__DOT__D7oya5Igy));
    bufp->fullQData(oldp+421,(vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z),64);
    bufp->fullBit(oldp+423,(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g));
    bufp->fullQData(oldp+424,(((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0
                                : 0ULL)),64);
    bufp->fullCData(oldp+426,(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c),3);
    bufp->fullBit(oldp+427,(vlSelf->top__DOT__RV64I__DOT__z0MsdO));
    bufp->fullCData(oldp+428,(((IData)(vlSelf->top__DOT__RV64I__DOT__z0MsdO)
                                ? (0x1fU & (vlSelf->top__DOT__inst 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullQData(oldp+429,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db),64);
    bufp->fullIData(oldp+431,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__H),32);
    bufp->fullQData(oldp+432,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0]),64);
    bufp->fullQData(oldp+434,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[1]),64);
    bufp->fullQData(oldp+436,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[2]),64);
    bufp->fullQData(oldp+438,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[3]),64);
    bufp->fullQData(oldp+440,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[4]),64);
    bufp->fullQData(oldp+442,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[5]),64);
    bufp->fullQData(oldp+444,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[6]),64);
    bufp->fullQData(oldp+446,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[7]),64);
    bufp->fullQData(oldp+448,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[8]),64);
    bufp->fullQData(oldp+450,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[9]),64);
    bufp->fullQData(oldp+452,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[10]),64);
    bufp->fullQData(oldp+454,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[11]),64);
    bufp->fullQData(oldp+456,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[12]),64);
    bufp->fullQData(oldp+458,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[13]),64);
    bufp->fullQData(oldp+460,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[14]),64);
    bufp->fullQData(oldp+462,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[15]),64);
    bufp->fullQData(oldp+464,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[16]),64);
    bufp->fullQData(oldp+466,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[17]),64);
    bufp->fullQData(oldp+468,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[18]),64);
    bufp->fullQData(oldp+470,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[19]),64);
    bufp->fullQData(oldp+472,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[20]),64);
    bufp->fullQData(oldp+474,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[21]),64);
    bufp->fullQData(oldp+476,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[22]),64);
    bufp->fullQData(oldp+478,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[23]),64);
    bufp->fullQData(oldp+480,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[24]),64);
    bufp->fullQData(oldp+482,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[25]),64);
    bufp->fullQData(oldp+484,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[26]),64);
    bufp->fullQData(oldp+486,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[27]),64);
    bufp->fullQData(oldp+488,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[28]),64);
    bufp->fullQData(oldp+490,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[29]),64);
    bufp->fullQData(oldp+492,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[30]),64);
    bufp->fullQData(oldp+494,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[31]),64);
    bufp->fullIData(oldp+496,((0xfffff000U & vlSelf->top__DOT__inst)),32);
    bufp->fullIData(oldp+497,(((0x100000U & (vlSelf->top__DOT__inst 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->top__DOT__inst) 
                                  | ((0x800U & (vlSelf->top__DOT__inst 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->top__DOT__inst 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+498,(((0x1000U & (vlSelf->top__DOT__inst 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->top__DOT__inst 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->top__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->top__DOT__inst 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+499,(((0xfe0U & (vlSelf->top__DOT__inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->top__DOT__inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+500,((vlSelf->top__DOT__inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+501,((vlSelf->top__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+502,((0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+503,((0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+504,((7U & (vlSelf->top__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+505,((0x1fU & (vlSelf->top__DOT__inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+506,((0x7fU & vlSelf->top__DOT__inst)),7);
    bufp->fullQData(oldp+507,(((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hc944f92e__0)
                                ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                : ((IData)(vlSelf->top__DOT__ram_r_ena)
                                    ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                    : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hb88e4699__0)
                                        ? (QData)((IData)(
                                                          (0x3fU 
                                                           & (vlSelf->top__DOT__inst 
                                                              >> 0x14U))))
                                        : ((IData)(vlSelf->top__DOT__ram_w_ena)
                                            ? (((- (QData)((IData)(
                                                                   (vlSelf->top__DOT__inst 
                                                                    >> 0x1fU)))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__inst 
                                                                        >> 7U))))))
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__inst))
                                                ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0
                                                : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hd1cd3f69__0)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->top__DOT__inst 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->top__DOT__inst))))
                                                    : 0ULL))))))),64);
    bufp->fullBit(oldp+509,((0x37U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+510,((0x17U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+511,((0x6fU == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+512,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O));
    bufp->fullBit(oldp+513,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd));
    bufp->fullBit(oldp+514,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a));
    bufp->fullBit(oldp+515,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI));
    bufp->fullBit(oldp+516,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg));
    bufp->fullBit(oldp+517,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz));
    bufp->fullBit(oldp+518,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj));
    bufp->fullBit(oldp+519,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy));
    bufp->fullBit(oldp+520,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr));
    bufp->fullBit(oldp+521,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc));
    bufp->fullBit(oldp+522,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt));
    bufp->fullBit(oldp+523,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq));
    bufp->fullBit(oldp+524,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY));
    bufp->fullBit(oldp+525,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no));
    bufp->fullBit(oldp+526,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4));
    bufp->fullBit(oldp+527,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ));
    bufp->fullBit(oldp+528,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2));
    bufp->fullBit(oldp+529,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ));
    bufp->fullBit(oldp+530,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB));
    bufp->fullBit(oldp+531,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt));
    bufp->fullBit(oldp+532,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE));
    bufp->fullBit(oldp+533,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim));
    bufp->fullBit(oldp+534,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V));
    bufp->fullBit(oldp+535,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY));
    bufp->fullBit(oldp+536,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4));
    bufp->fullBit(oldp+537,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt));
    bufp->fullBit(oldp+538,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z));
    bufp->fullBit(oldp+539,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb));
    bufp->fullBit(oldp+540,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1));
    bufp->fullBit(oldp+541,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r));
    bufp->fullBit(oldp+542,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA));
    bufp->fullBit(oldp+543,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ));
    bufp->fullBit(oldp+544,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln));
    bufp->fullBit(oldp+545,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7));
    bufp->fullBit(oldp+546,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I));
    bufp->fullBit(oldp+547,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI));
    bufp->fullBit(oldp+548,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr));
    bufp->fullBit(oldp+549,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49));
    bufp->fullBit(oldp+550,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG));
    bufp->fullBit(oldp+551,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5));
    bufp->fullBit(oldp+552,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg));
    bufp->fullBit(oldp+553,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF));
    bufp->fullBit(oldp+554,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A));
    bufp->fullBit(oldp+555,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9));
    bufp->fullBit(oldp+556,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4));
    bufp->fullBit(oldp+557,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7));
    bufp->fullBit(oldp+558,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW));
    bufp->fullBit(oldp+559,((0x6bU == vlSelf->top__DOT__inst)));
    bufp->fullBit(oldp+560,((0x5007fU == vlSelf->top__DOT__inst)));
    bufp->fullCData(oldp+561,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode),8);
    bufp->fullBit(oldp+562,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en));
    bufp->fullBit(oldp+563,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel));
    bufp->fullCData(oldp+564,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr),5);
    bufp->fullBit(oldp+565,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_f_rs1));
    bufp->fullBit(oldp+566,(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en));
    bufp->fullCData(oldp+567,(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_addr),5);
    bufp->fullBit(oldp+568,(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en));
    bufp->fullCData(oldp+569,(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_addr),5);
    bufp->fullBit(oldp+570,((1U & (vlSelf->top__DOT__inst 
                                   >> 0x19U))));
    bufp->fullCData(oldp+571,((vlSelf->top__DOT__inst 
                               >> 0x1aU)),6);
    bufp->fullCData(oldp+572,((3U & (vlSelf->top__DOT__inst 
                                     >> 0x1aU))),2);
    bufp->fullBit(oldp+573,((1U & (vlSelf->top__DOT__inst 
                                   >> 0x1cU))));
    bufp->fullCData(oldp+574,((vlSelf->top__DOT__inst 
                               >> 0x1dU)),3);
    bufp->fullIData(oldp+575,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__i),32);
    bufp->fullWData(oldp+576,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[0]),512);
    bufp->fullWData(oldp+592,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[1]),512);
    bufp->fullWData(oldp+608,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[2]),512);
    bufp->fullWData(oldp+624,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[3]),512);
    bufp->fullWData(oldp+640,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[4]),512);
    bufp->fullWData(oldp+656,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[5]),512);
    bufp->fullWData(oldp+672,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[6]),512);
    bufp->fullWData(oldp+688,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[7]),512);
    bufp->fullWData(oldp+704,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[8]),512);
    bufp->fullWData(oldp+720,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[9]),512);
    bufp->fullWData(oldp+736,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[10]),512);
    bufp->fullWData(oldp+752,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[11]),512);
    bufp->fullWData(oldp+768,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[12]),512);
    bufp->fullWData(oldp+784,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[13]),512);
    bufp->fullWData(oldp+800,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[14]),512);
    bufp->fullWData(oldp+816,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[15]),512);
    bufp->fullWData(oldp+832,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[16]),512);
    bufp->fullWData(oldp+848,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[17]),512);
    bufp->fullWData(oldp+864,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[18]),512);
    bufp->fullWData(oldp+880,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[19]),512);
    bufp->fullWData(oldp+896,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[20]),512);
    bufp->fullWData(oldp+912,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[21]),512);
    bufp->fullWData(oldp+928,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[22]),512);
    bufp->fullWData(oldp+944,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[23]),512);
    bufp->fullWData(oldp+960,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[24]),512);
    bufp->fullWData(oldp+976,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[25]),512);
    bufp->fullWData(oldp+992,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[26]),512);
    bufp->fullWData(oldp+1008,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[27]),512);
    bufp->fullWData(oldp+1024,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[28]),512);
    bufp->fullWData(oldp+1040,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[29]),512);
    bufp->fullWData(oldp+1056,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[30]),512);
    bufp->fullWData(oldp+1072,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REG__DOT__regfile[31]),512);
    bufp->fullBit(oldp+1088,(vlSelf->clock));
    bufp->fullBit(oldp+1089,(vlSelf->reset));
    bufp->fullBit(oldp+1090,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1091,(((~ (IData)(vlSelf->reset)) 
                              & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en))));
    bufp->fullCData(oldp+1092,(((IData)(vlSelf->reset)
                                 ? 0U : (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr))),5);
    if (vlSelf->reset) {
        __Vtemp_h5c5b39ee__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h5c5b39ee__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h5c5b39ee__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h5c5b39ee__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h5c5b39ee__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h5c5b39ee__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h5c5b39ee__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h5c5b39ee__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h5c5b39ee__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h5c5b39ee__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h5c5b39ee__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h5c5b39ee__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h5c5b39ee__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h5c5b39ee__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h5c5b39ee__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h5c5b39ee__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_f_rs1) {
        __Vtemp_h5c5b39ee__0[0U] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[1U] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                            >> 0x20U));
        __Vtemp_h5c5b39ee__0[2U] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[3U] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                            >> 0x20U));
        __Vtemp_h5c5b39ee__0[4U] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[5U] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                            >> 0x20U));
        __Vtemp_h5c5b39ee__0[6U] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[7U] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                            >> 0x20U));
        __Vtemp_h5c5b39ee__0[8U] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[9U] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                            >> 0x20U));
        __Vtemp_h5c5b39ee__0[0xaU] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[0xbU] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                              >> 0x20U));
        __Vtemp_h5c5b39ee__0[0xcU] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[0xdU] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                              >> 0x20U));
        __Vtemp_h5c5b39ee__0[0xeU] = (IData)(vlSelf->top__DOT__vec_rs1_data);
        __Vtemp_h5c5b39ee__0[0xfU] = (IData)((vlSelf->top__DOT__vec_rs1_data 
                                              >> 0x20U));
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_sel) {
        __Vtemp_h5c5b39ee__0[0U] = vlSelf->top__DOT__vram_r_data[0U];
        __Vtemp_h5c5b39ee__0[1U] = vlSelf->top__DOT__vram_r_data[1U];
        __Vtemp_h5c5b39ee__0[2U] = vlSelf->top__DOT__vram_r_data[2U];
        __Vtemp_h5c5b39ee__0[3U] = vlSelf->top__DOT__vram_r_data[3U];
        __Vtemp_h5c5b39ee__0[4U] = vlSelf->top__DOT__vram_r_data[4U];
        __Vtemp_h5c5b39ee__0[5U] = vlSelf->top__DOT__vram_r_data[5U];
        __Vtemp_h5c5b39ee__0[6U] = vlSelf->top__DOT__vram_r_data[6U];
        __Vtemp_h5c5b39ee__0[7U] = vlSelf->top__DOT__vram_r_data[7U];
        __Vtemp_h5c5b39ee__0[8U] = vlSelf->top__DOT__vram_r_data[8U];
        __Vtemp_h5c5b39ee__0[9U] = vlSelf->top__DOT__vram_r_data[9U];
        __Vtemp_h5c5b39ee__0[0xaU] = vlSelf->top__DOT__vram_r_data[0xaU];
        __Vtemp_h5c5b39ee__0[0xbU] = vlSelf->top__DOT__vram_r_data[0xbU];
        __Vtemp_h5c5b39ee__0[0xcU] = vlSelf->top__DOT__vram_r_data[0xcU];
        __Vtemp_h5c5b39ee__0[0xdU] = vlSelf->top__DOT__vram_r_data[0xdU];
        __Vtemp_h5c5b39ee__0[0xeU] = vlSelf->top__DOT__vram_r_data[0xeU];
        __Vtemp_h5c5b39ee__0[0xfU] = vlSelf->top__DOT__vram_r_data[0xfU];
    } else {
        __Vtemp_h5c5b39ee__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U];
        __Vtemp_h5c5b39ee__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U];
        __Vtemp_h5c5b39ee__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U];
        __Vtemp_h5c5b39ee__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U];
        __Vtemp_h5c5b39ee__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U];
        __Vtemp_h5c5b39ee__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U];
        __Vtemp_h5c5b39ee__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U];
        __Vtemp_h5c5b39ee__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U];
        __Vtemp_h5c5b39ee__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U];
        __Vtemp_h5c5b39ee__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U];
        __Vtemp_h5c5b39ee__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU];
        __Vtemp_h5c5b39ee__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU];
        __Vtemp_h5c5b39ee__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU];
        __Vtemp_h5c5b39ee__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU];
        __Vtemp_h5c5b39ee__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU];
        __Vtemp_h5c5b39ee__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU];
    }
    bufp->fullWData(oldp+1093,(__Vtemp_h5c5b39ee__0),512);
    bufp->fullBit(oldp+1109,(vlSelf->top__DOT__ren_inst));
    bufp->fullQData(oldp+1110,(vlSelf->top__DOT__raddr_inst),64);
    bufp->fullQData(oldp+1112,(vlSelf->top__DOT__rdata_inst),64);
    bufp->fullBit(oldp+1114,(vlSelf->top__DOT__pc_stall));
    bufp->fullWData(oldp+1115,(Vtop__ConstPool__CONST_h8b2d9f06_0),512);
    bufp->fullBit(oldp+1131,(1U));
    bufp->fullQData(oldp+1132,(0xffffffffffffffffULL),64);
    bufp->fullIData(oldp+1134,(8U),32);
    bufp->fullIData(oldp+1135,(0x200U),32);
    bufp->fullIData(oldp+1136,(5U),32);
    bufp->fullIData(oldp+1137,(0x40U),32);
    bufp->fullCData(oldp+1138,(0U),8);
    bufp->fullCData(oldp+1139,(1U),8);
    bufp->fullCData(oldp+1140,(2U),8);
    bufp->fullCData(oldp+1141,(3U),8);
    bufp->fullCData(oldp+1142,(4U),8);
    bufp->fullCData(oldp+1143,(5U),8);
    bufp->fullCData(oldp+1144,(6U),8);
    bufp->fullCData(oldp+1145,(7U),8);
    bufp->fullCData(oldp+1146,(8U),8);
    bufp->fullCData(oldp+1147,(9U),8);
    bufp->fullCData(oldp+1148,(0xaU),8);
    bufp->fullCData(oldp+1149,(0xbU),8);
    bufp->fullIData(oldp+1150,(0x20U),32);
}
