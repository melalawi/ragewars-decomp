#include "span_1000/code_80206DD4.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_80214178_de(void *, void *, s32);










void func_80207C94_de(void *arg0, void *arg1) {
    s32 temp_a2;
    void *temp_a3;
    s32 var_v1;
    s32 temp_v0;

    temp_a3 = &((func_80203908_S2 *)(((func_80207ABC_S1 *)(arg0))->unk18))->unk14;
    temp_a2 = ((func_80207C94_S3 *)(temp_a3))->unk24;
    var_v1 = 1;
    if (temp_a2 & 0x20) {
        temp_v0 = ((func_80207ABC_S4 *)(arg1))->unk0 & 0x20000;
        var_v1 = (u32)0 < (u32)temp_v0;
    }
    if ((temp_a2 & 0x200) && !(((func_80207ABC_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if ((((func_80207C94_S3 *)(temp_a3))->unk24 & 0x800) && (((func_80207ABC_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        if (((func_80207ABC_S4 *)(arg1))->unk40 >= ((func_80207C94_S3 *)(temp_a3))->unk50) {
            func_80214178_de(arg0, arg1, 3);
        }
    } else {
        ((func_80207ABC_S4 *)(arg1))->unk40 = 0.0f;
    }
}
