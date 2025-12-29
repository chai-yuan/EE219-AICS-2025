VLEN            512
SEW             64
VREG_WIDTH      512
VMEM_DATA   512

## 向量指令

| Type  | Instruction | func6  | width | Format               | Implementation    |
| ----- | ----------- | ------ | ----- | -------------------- | ----------------- |
| LOAD  | `vle64.v`   | 000000 | 111   | vle64.v vd, rs1, vm  | vd = Mem[x[rs1]]  |
| STORE | `vse64.v`   | 000000 | 111   | vse64.v vs3, rs1, vm | Mem[x[rs1]] = vs3 |

| Type  | Instruction | func6  | func3 | Format                   | Implementation          |
| ----- | ----------- | ------ | ----- | ------------------------ | ----------------------- |
| OPIVV | `vadd.vv`   | 000000 | 000   | vadd.vv vd, vs2, vs1, vm | vd[i] = vs2[i] + vs1[i] |
| OPIVX | `vadd.vx`   | 000000 | 100   | vadd.vx vd, vs2, rs1, vm | vd[i] = vs2[i] + x[rs1] |
| OPIVI | `vadd.vi`   | 000000 | 011   | vadd.vi vd, vs2, imm, vm | vd[i] = vs2[i] + imm    |
| OPIVV | `vsub.vv`   | 000010 | 000   | vsub.vv vd, vs2, vs1, vm | vd[i] = vs2[i] - vs1[i] |
| OPIVX | `vsub.vx`   | 000010 | 100   | vsub.vx vd, vs2, rs1, vm | vd[i] = vs2[i] - x[rs1] |
| OPMVV | `vmul.vv`   | 100101 | 010   | vmul.vv vd, vs2, vs1, vm | vd[i] = vs2[i] * vs1[i] |
| OPMVX | `vmul.vx`   | 100101 | 110   | vmul.vx vd, vs2, rs1, vm | vd[i] = vs2[i] * x[rs1] |
| OPMVV | `vdiv.vv`   | 100001 | 010   | vdiv.vv vd, vs2, vs1, vm | vd[i] = vs2[i] / vs1[i] |
| OPMVX | `vdiv.vx`   | 100001 | 110   | vdiv.vx vd, vs2, rs1, vm | vd[i] = vs2[i] / x[rs1] |
| OPIVX | `vmv.v.x`   | 010111 | 100   | vmv.v.x vd,      rs1, vm | vd[i] = x[rs1]          |


> HINT: Finish the modules under /src/vsrc/components/two_issue and /src/vsrc/rvcpu/rvcpu_two_issue.v.

> Set `vid_wb_from_rs1` to 1 when `vmv.v.x` inst is activated.

| Type  | Instruction  | func6  | func3 | Format                      | Implementation                                            |
| ----- | -----------  | ------ | ----- | ------------------------    | -----------------------                                   |
| OPIVV | `vmin.vv`    | 000101 | 000   | vmin.vv vd, vs2, vs1, vm    | vd[i] = min( vs2[i], vs1[i] )                             |
| OPIVX | `vmin.vx`    | 000101 | 100   | vmin.vx vd, vs2, rs1, vm    | vd[i] = min( vs2[i], x[rs1] )                             |
| OPIVV | `vmax.vv`    | 000111 | 000   | vmax.vv vd, vs2, vs1, vm    | vd[i] = max( vs2[i], vs1[i] )                             |
| OPIVX | `vmax.vx`    | 000111 | 100   | vmax.vx vd, vs2, rs1, vm    | vd[i] = max( vs2[i], x[rs1] )                             |
| OPIVV | `vsra.vv`    | 101001 | 000   | vsra.vv vd, vs2, vs1, vm    | vd[i] = vs2[i] >>> vs1[i]                                 |
| OPIVX | `vsra.vx`    | 101001 | 100   | vsra.vx vd, vs2, rs1, vm    | vd[i] = vs2[i] >>> x[rs1]                                 |
| OPIVI | `vsra.vi`    | 101001 | 011   | vsra.vi vd, vs2, uimm, vm   | vd[i] = vs2[i] >>> uimm                                   |
| OPMVV | `vredsum.vs` | 000000 | 010   | vredsum.vs vd, vs2, vs1, vm | vd[0] = sum( vs1[0], vs2[0], vs2[1], vs2[2]..., vs2[-1] ) |
| OPMVV | `vredmax.vs` | 000111 | 010   | vredmax.vs vd, vs2, vs1, vm | vd[0] = max( vs1[0], vs2[0], vs2[1], vs2[2]..., vs2[-1] ) |

## 自定义指令

| **Opcode** | Instruction     | func7   | func3 | Format                  | Implementation       |
| ---------- | --------------- | ------- | ----- | ----------------------- | -------------------- |
| 0x7B       | maxpool_24_6.32 | 0000000 | 000   | maxpool_24_6.32 rs1 rs2 | Mem[rs1] <= Mem[rs2] |
| 0x7B       | relu_512.32     | 0000000 | 001   | relu_512.32 rs1 rs2     | Mem[rs1] <= Mem[rs2] |
| 0x7B       | relu_512.16     | 0000000 | 010   | relu_512.16 rs1 rs2     | Mem[rs1] <= Mem[rs2] |

