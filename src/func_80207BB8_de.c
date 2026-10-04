#include "span_1000/code_80206DD4.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern s32 func_80214178_de(void *, void *, s32);
extern f32 D_800CD738;











void func_80207BB8_de(void *arg0, void *arg1) {
    void *temp_a3;
    s32 temp_a2;
    s32 var_v1;

    temp_a3 = &((func_80203908_S2 *)(((func_80207ABC_S1 *)(arg0))->unk18))->unk14;
    temp_a2 = ((func_80207BB8_S3 *)(temp_a3))->unk24;
    var_v1 = 1;
    if (temp_a2 & 0x10000) {
        var_v1 = (u32)(((func_80207ABC_S1 *)(arg0))->unk38 & 0x40) < (u32)var_v1;
    }
    if ((temp_a2 & 0x4000) && !(((func_80207ABC_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if (((func_80207ABC_S1 *)(arg0))->unk38 & 8) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        ((func_80207BB8_S4 *)(arg1))->unk64 = ((func_80207BB8_S4 *)(arg1))->unk64 + (D_800CD738 / ((func_80207BB8_S3 *)(temp_a3))->unk38);
    }
    if (((func_80207BB8_S4 *)(arg1))->unk64 >= D_800C1BA0_de) {
        func_80214178_de(arg0, arg1, 2);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1AD0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6C90_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1E40_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1E80_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1BA0_4 = 1.0f;
#endif
