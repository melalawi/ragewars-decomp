/* Dequantises 256 coefficients: for each of the 16 bands, whose end indices are in D_800D93C8,
   every coefficient is the quantised value at offset 0xA0 of the input divided by the step
   D_800D93E8 selected by the band's scale index and multiplied by the gain D_800CCF24; the
   coefficients past the last band end (D_800D93E6) are cleared. Returns 1. */
#include "basetypes.h"

extern u16 D_800D93C8[];
extern s16 D_800D93E6;
extern f32 D_800D93E8[];
extern f32 D_800CCF24;

s32 func_802C48F4(f32 *out, s16 *in) {
    s16 *scale;
    s16 band;
    s16 i;
    s16 start;
    s16 *values;
    u16 *ends;
    f32 *steps;
    f32 gain;

    start = 0;
    values = in + 0x50;
    band = 0;
    ends = D_800D93C8;
    steps = D_800D93E8;
    gain = D_800CCF24;
    for (; band < 16; band++) {
        for (i = start; i < ends[band]; i++) {
            out[i] = (f32)values[i] / steps[*(scale = &in[band])] * gain;
        }
        start = ends[band];
    }
    for (band = D_800D93E6; band < 0x100; band++) {
        out[band] = 0.0f;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7BF4_4 = 3.05175781e-05f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CCF24_4 = 3.05175781e-05f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C88C4_4 = 3.05175781e-05f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C9294_4 = 3.05175781e-05f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C7CD4_4 = 3.05175781e-05f;
#endif
