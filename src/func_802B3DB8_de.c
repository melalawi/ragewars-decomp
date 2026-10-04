#include "common/types.h"
#include "span_1000/code_802B8D4C.h"
#include "types.h"



extern f32 D_800C7590[2];

s32 func_802B3DB8_de(func_8022E694_S1 *arg0, s32 arg1) {
    f32 v;
    int idx;

    v = (f32)arg1 * (f32)arg0->unk44;
    idx = 0;
    v = v * D_800C7590[idx];
    v = v + D_800C7590[1];
    return (s32)v;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C74B0_4 = 9.99999997e-07f;
const float unbake_rodata_800C74B4_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC7E0_4 = 9.99999997e-07f;
const float unbake_rodata_800CC7E4_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C8180_4 = 9.99999997e-07f;
const float unbake_rodata_800C8184_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8B50_4 = 9.99999997e-07f;
const float unbake_rodata_800C8B54_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C7590_4 = 9.99999997e-07f;
const float unbake_rodata_800C7594_4 = 0.5f;
#endif
