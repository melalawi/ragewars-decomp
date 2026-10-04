#include "span_1000/code_80206DD4.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_80214178_de(void *, void *, s32);










void func_80207ABC_de(void *arg0, void *arg1) {
    s32 temp_a2;
    void *temp_a3;
    s32 var_v1;
    s32 temp_v0;

    temp_a3 = &((func_80203908_S2 *)(((func_80207ABC_S1 *)(arg0))->unk18))->unk14;
    temp_a2 = ((func_80207ABC_S3 *)(temp_a3))->unk24;
    var_v1 = 1;
    if (temp_a2 & 0x10) {
        temp_v0 = ((func_80207ABC_S4 *)(arg1))->unk0 & 0x10000;
        var_v1 = (u32)0 < (u32)temp_v0;
    }
    if ((temp_a2 & 0x100) && !(((func_80207ABC_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if ((((func_80207ABC_S3 *)(temp_a3))->unk24 & 0x400) && (((func_80207ABC_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        if (((func_80207ABC_S4 *)(arg1))->unk40 >= ((func_80207ABC_S3 *)(temp_a3))->unk4C) {
            func_80214178_de(arg0, arg1, 1);
        }
    } else {
        ((func_80207ABC_S4 *)(arg1))->unk40 = 0.0f;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C2DC8_48[] = {0x002301ACU, 0x002301B8U, 0x002301B8U, 0x002301B8U, 0x002301B8U, 0x002301B8U, 0x002301B8U, 0x002301B8U, 0x00230124U, 0x002301B8U, 0x002300F4U, 0x00230188U, 0x002301B8U, 0x002301B8U, 0x002301B8U, 0x002301B8U, 0x002301B8U, 0x0023010CU};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7DB4_4 = 0.00390625f;
const float unbake_rodata_800C7DB8_4 = 0.25f;
const float unbake_rodata_800C7DBC_4 = 256.0f;
const float unbake_rodata_800C7DC0_4 = 0.00390625f;
const float unbake_rodata_800C7DC4_4 = 0.600000024f;
const float unbake_rodata_800C7DC8_4 = 0.00390625f;
const float unbake_rodata_800C7DCC_4 = 0.800000012f;
const float unbake_rodata_800C7DD0_4 = 256.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2E14_4 = 40.9599991f;
const float unbake_rodata_800C2E18_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2E50_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2CC4_4 = 0.00390625f;
const float unbake_rodata_800C2CC8_4 = 0.25f;
const float unbake_rodata_800C2CCC_4 = 256.0f;
const float unbake_rodata_800C2CD0_4 = 0.00390625f;
const float unbake_rodata_800C2CD4_4 = 0.600000024f;
const float unbake_rodata_800C2CD8_4 = 0.00390625f;
const float unbake_rodata_800C2CDC_4 = 0.800000012f;
const float unbake_rodata_800C2CE0_4 = 256.0f;
#endif
