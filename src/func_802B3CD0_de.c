#include "common/types.h"
#include "span_1000/code_802B8D4C.h"
#include "types.h"



extern f32 D_800C7588[2];

s32 func_802B3CD0_de(func_8022E694_S1 *arg0, s32 arg1) {
    f32 v;
    int idx;

    v = (f32)arg1 * (f32)arg0->unk44;
    idx = 0;
    v = v * D_800C7588[idx];
    v = v + D_800C7588[1];
    return (s32)v & ~0xF;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C74A8_4 = 9.99999997e-07f;
const float unbake_rodata_800C74AC_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC7D8_4 = 9.99999997e-07f;
const float unbake_rodata_800CC7DC_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C8178_4 = 9.99999997e-07f;
const float unbake_rodata_800C817C_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8B48_4 = 9.99999997e-07f;
const float unbake_rodata_800C8B4C_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C7588_4 = 9.99999997e-07f;
const float unbake_rodata_800C758C_4 = 0.5f;
#endif
