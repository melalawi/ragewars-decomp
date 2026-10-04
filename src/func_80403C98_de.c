#include "span_16E000/code_80403BCC.h"
#include "types.h"

/* Blends two values by a weight: from times the pooled constant D_800E0CB0[1] less the weight,
   plus to times the weight, which is linear interpolation when that constant is one. The
   constant lives in a shared literal pool outside this object, so it is read by name. */
extern f32 D_800DCC80_de[];

f32 func_80403C98_de(f32 from, f32 to, f32 weight) {
    return from * (D_800DCC80_de[1] - weight) + to * weight;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DB934_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E0CB4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800ED304_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E84C4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DCC84_4 = 1.0f;
#endif
