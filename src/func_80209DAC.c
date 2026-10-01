#include "basetypes.h"

extern f32 D_800C6DB0;
extern f32 D_800C6DB4;
extern f32 D_800CDA30;
extern f32 D_800CDA34;
extern f32 D_800CDA38;
extern f32 func_80274B00(f32 arg0, f32 arg1);

typedef struct func_80209DAC_S1 func_80209DAC_S1;
typedef struct func_80209DAC_S2 func_80209DAC_S2;
typedef struct func_80209DAC_S3 func_80209DAC_S3;
typedef union func_80209DAC_S2_U93 { u8 v0; s8 v1; } func_80209DAC_S2_U93;
struct func_80209DAC_S1 {
    char pad0[0x5D8];
    void* unk5D8;
};
struct func_80209DAC_S2 {
    char pad0[0x93];
    func_80209DAC_S2_U93 unk93;
};
struct func_80209DAC_S3 {
    char pad0[0x244];
    f32 unk244;
};

f32 func_80209DAC(void *arg0) {
    f32 temp_f20;
    f32 var_f14;
    u8 state;

    state = ((func_80209DAC_S2 *)(((func_80209DAC_S1 *)(*(void **)arg0))->unk5D8))->unk93.v0;
    switch (state) {
    default:
        ((func_80209DAC_S2 *)(((func_80209DAC_S1 *)(*(void **)arg0))->unk5D8))->unk93.v1 = 0;
    case 0:
        var_f14 = D_800CDA30;
        break;
    case 1:
        var_f14 = D_800CDA34;
        break;
    case 2:
        var_f14 = D_800CDA38;
        break;
    }
    temp_f20 = ((func_80209DAC_S3 *)(arg0))->unk244;
    if (temp_f20 < func_80274B00(-var_f14, var_f14)) {
        temp_f20 += D_800C6DB0;
    } else {
        temp_f20 -= D_800C6DB4;
    }
    ((func_80209DAC_S3 *)(arg0))->unk244 = temp_f20;
    return temp_f20;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1BF0_4 = 0.261799425f;
const float unbake_rodata_800C1BF4_4 = 0.261799425f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6DB0_4 = 0.261799425f;
const float unbake_rodata_800C6DB4_4 = 0.261799425f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1F60_4 = 0.261799425f;
const float unbake_rodata_800C1F64_4 = 0.261799425f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1FA0_4 = 0.261799425f;
const float unbake_rodata_800C1FA4_4 = 0.261799425f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1CC0_4 = 0.261799425f;
const float unbake_rodata_800C1CC4_4 = 0.261799425f;
#endif
