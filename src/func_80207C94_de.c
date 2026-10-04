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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2E80_4 = 1.0f;
const float unbake_rodata_800C2E84_4 = 1.0f;
const float unbake_rodata_800C2E88_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E10_4 = 300.0f;
const float unbake_rodata_800C7E14_4 = 22.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2EC8_4 = 17.0f;
const float unbake_rodata_800C2ECC_4 = 255.0f;
const float unbake_rodata_800C2ED0_4 = 8.53333378f;
const float unbake_rodata_800C2ED4_4 = 17.0f;
const float unbake_rodata_800C2ED8_4 = 255.0f;
const float unbake_rodata_800C2EDC_4 = 8.53333378f;
const float unbake_rodata_800C2EE0_4 = 128.0f;
const float unbake_rodata_800C2EE4_4 = 0.425000012f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2EF8_4 = 1.0f;
const float unbake_rodata_800C2EFC_4 = 9.99999975e-06f;
const float unbake_rodata_800C2F00_4 = 100000000.0f;
const float unbake_rodata_800C2F04_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D20_4 = 300.0f;
const float unbake_rodata_800C2D24_4 = 22.5f;
#endif
