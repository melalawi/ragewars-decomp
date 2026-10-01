#include "basetypes.h"

/* Evaluates a wave: kind 1 returns func_802BC200 of the phase at 0x10 scaled by D_800C865C, times
   the amplitude at 0xC; kind 0 returns func_80274B00 over minus to plus the amplitude; any other
   kind returns zero. */
struct Wave {
    s32 kind;
    char pad4[0xC - 4];
    f32 amplitude;
    f32 phase;
};

extern f32 D_800C865C;
extern f32 func_802BC200(f32);
extern f32 func_80274B00(f32, f32);

f32 func_80239D0C(struct Wave *wave) {
    switch (wave->kind) {
    case 1:
        return func_802BC200(wave->phase * D_800C865C) * wave->amplitude;
    case 0:
        return func_80274B00(-wave->amplitude, wave->amplitude);
    }
    return 0.0f;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C349C_4 = 0.0174532942f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C865C_4 = 0.0174532942f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C381C_4 = 0.0174532942f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C385C_4 = 0.0174532942f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C356C_4 = 0.0174532942f;
#endif
