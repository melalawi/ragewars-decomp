#include "basetypes.h"

typedef struct func_80204620_S1 func_80204620_S1;
typedef struct func_80204620_S2 func_80204620_S2;
struct func_80204620_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
};
struct func_80204620_S2 {
    char pad0[0x28];
    s16 unk28;
};

s32 func_80204620(void *arg0) {
    s32 val;

    val = ((func_80204620_S2 *)((((func_80204620_S1 *)(arg0))->unk18)))->unk28;
    if (val != 0) {
        ((func_80204620_S1 *)(arg0))->unk100 = ((func_80204620_S1 *)(arg0))->unk100 | 0x2000;
    } else {
        s32 flags = ((func_80204620_S1 *)(arg0))->unk100 & ~0x2000;
        flags &= ~0x100;
        ((func_80204620_S1 *)(arg0))->unk100 = flags;
    }
    return val;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1CA8_4 = (-1.0f);
const float unbake_rodata_800C1CAC_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6E64_4 = 10000000.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2010_4 = 1e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2050_4 = 1e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1D70_4 = 1e+09f;
#endif
