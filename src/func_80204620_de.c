#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
#include "types.h"






s32 func_80204620_de(void *arg0) {
    s32 val;

    val = ((func_80204620_S2 *)((((func_80204468_S2 *)(arg0))->unk18)))->unk28;
    if (val != 0) {
        ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 | 0x2000;
    } else {
        s32 flags = ((func_80204468_S2 *)(arg0))->unk100 & ~0x2000;
        flags &= ~0x100;
        ((func_80204468_S2 *)(arg0))->unk100 = flags;
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
