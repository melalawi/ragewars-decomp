#include "span_1000/code_8023940C.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Evaluates a wave: kind 1 returns func_802B7130_de of the phase at 0x10 scaled by D_800C865C, times
   the amplitude at 0xC; kind 0 returns func_80274A90_de over minus to plus the amplitude; any other
   kind returns zero. */



extern f32 func_802B7130_de(f32);
extern f32 func_80274A90_de(f32, f32);

f32 func_80239D1C_de(struct Wave *wave) {
    switch (wave->kind) {
    case 1:
        return func_802B7130_de(wave->phase * D_800C356C_de) * wave->amplitude;
    case 0:
        return func_80274A90_de(-wave->amplitude, wave->amplitude);
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
