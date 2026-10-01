#include "basetypes.h"

typedef struct func_8020459C_S1 func_8020459C_S1;
typedef struct func_8020459C_S2 func_8020459C_S2;
struct func_8020459C_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
};
struct func_8020459C_S2 {
    char pad0[0x20];
    s16 unk20;
};

s32 func_8020459C(void *arg0) {
    s32 val;

    val = ((func_8020459C_S2 *)((((func_8020459C_S1 *)(arg0))->unk18)))->unk20;
    if (val != 0) {
        ((func_8020459C_S1 *)(arg0))->unk100 = ((func_8020459C_S1 *)(arg0))->unk100 | 0x2000;
    } else {
        ((func_8020459C_S1 *)(arg0))->unk100 = ((func_8020459C_S1 *)(arg0))->unk100 & ~0x2000;
    }
    return val;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1CA0_4 = 1e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6E44_4 = 307.199982f;
const float unbake_rodata_800C6E48_4 = 307.199982f;
const float unbake_rodata_800C6E4C_4 = 61.4399986f;
const float unbake_rodata_800C6E50_4 = (-1.0f);
const float unbake_rodata_800C6E54_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C1FEC_4 = (-1.0f);
const float unbake_rodata_800C1FF0_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C202C_4 = (-1.0f);
const float unbake_rodata_800C2030_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C1D4C_4 = (-1.0f);
const float unbake_rodata_800C1D50_4 = (-1.0f);
#endif
