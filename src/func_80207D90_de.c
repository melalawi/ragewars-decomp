#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80207ABC.h"
#include "types.h"

extern s32 func_80214178_de(void *, void *, s32);
extern f32 D_800D2988;










void func_80207D90_de(void *arg0, void *arg1) {
    void *temp_a3;
    s32 temp_a2;
    s32 var_v1;

    temp_a3 = &((func_80203908_S2 *)(((func_80207ABC_S1 *)(arg0))->unk18))->unk14;
    temp_a2 = ((func_80207BB8_S3 *)(temp_a3))->unk24;
    var_v1 = 1;
    if (temp_a2 & 0x20000) {
        var_v1 = (u32)(((func_80207ABC_S1 *)(arg0))->unk38 & 0x40) < (u32)var_v1;
    }
    if ((temp_a2 & 0x8000) && !(((func_80207ABC_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if (((func_80207ABC_S1 *)(arg0))->unk38 & 8) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        ((func_80207BB8_S4 *)(arg1))->unk64 = ((func_80207BB8_S4 *)(arg1))->unk64 - (D_800D2988 / ((func_80207BB8_S3 *)(temp_a3))->unk38);
    }
    if (((func_80207BB8_S4 *)(arg1))->unk64 <= 0.0f) {
        func_80214178_de(arg0, arg1, 0);
    }
}
