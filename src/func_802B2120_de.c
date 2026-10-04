#include "common/types.h"
#include "span_1000/code_802B6958.h"
#include "types.h"
/* alSeqSecToTicks, drafted from ultralib src/audio/seq.c: convert seconds to ticks at the given
   tempo. The library evaluates it in single precision as sec * (division * 1e6f), so the product is
   spelled in that order against the cartridge constant after D_800CC740; GCC's u32-to-float and
   float-to-u32 expansions are written out against D_800CC748 and D_800CC750. */



extern const float D_800C74F0_de;    /* followed by 1000000.0f */
extern const double D_800C74F8_de;   /* 4294967296.0 */
extern const float D_800C7500_de;    /* 2147483648.0f */
#define MILLION (*(&D_800C74F0_de + 1))

u32 func_802B2120_de(Obj_func_802B20D4_de *seq, f32 sec, u32 tempo)
{
    f32 ticks;
    f64 t;
    f32 q;
    u32 result;

    ticks = sec * ((f32)seq->field18 * MILLION);
    t = (f64)(s32)tempo;
    if ((s32)tempo < 0) {
        t = t + D_800C74F8_de;
    }
    q = ticks / (f32)t;
    if (!(q >= D_800C7500_de)) {
        result = (s32)q;
    } else {
        q = q - D_800C7500_de;
        result = (s32)q;
        result |= 0x80000000;
    }
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7414_4 = 1000000.0f;
const double unbake_rodata_800C7418_8 = 4294967296.0;
const float unbake_rodata_800C7420_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC744_4 = 1000000.0f;
const double unbake_rodata_800CC748_8 = 4294967296.0;
const float unbake_rodata_800CC750_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C80E4_4 = 1000000.0f;
const double unbake_rodata_800C80E8_8 = 4294967296.0;
const float unbake_rodata_800C80F0_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8AB4_4 = 1000000.0f;
const double unbake_rodata_800C8AB8_8 = 4294967296.0;
const float unbake_rodata_800C8AC0_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C74F4_4 = 1000000.0f;
const double unbake_rodata_800C74F8_8 = 4294967296.0;
const float unbake_rodata_800C7500_4 = 2.14748365e+09f;
#endif
