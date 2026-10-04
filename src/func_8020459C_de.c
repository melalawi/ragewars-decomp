#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
#include "types.h"






s32 func_8020459C_de(void *arg0) {
    s32 val;

    val = ((func_8020459C_S2 *)((((func_80204468_S2 *)(arg0))->unk18)))->unk20;
    if (val != 0) {
        ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 | 0x2000;
    } else {
        ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 & ~0x2000;
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
