#include "basetypes.h"

typedef struct {
    char pad[0x44];
    s32 field44;
} Obj;

extern f32 D_800CC7D8[2];

s32 func_802B8DA0(Obj *arg0, s32 arg1) {
    f32 v;
    int idx;

    v = (f32)arg1 * (f32)arg0->field44;
    idx = 0;
    v = v * D_800CC7D8[idx];
    v = v + D_800CC7D8[1];
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
