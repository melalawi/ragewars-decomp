#include "span_1000/code_802C4604.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Dequantises 256 coefficients: for each of the 16 bands, whose end indices are in D_800D93C8,
   every coefficient is the quantised value at offset 0xA0 of the input divided by the step
   D_800D93E8 selected by the band's scale index and multiplied by the gain D_800CCF24; the
   coefficients past the last band end (D_800D93E6) are cleared. Returns 1. */

extern u16 D_800D5398[];
extern s16 D_800D53B6;
extern f32 D_800D53B8[];


s32 func_802BF804_de(f32 *out, s16 *in) {
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
    ends = D_800D5398;
    steps = D_800D53B8;
    gain = D_800C7CD4_de;
    for (; band < 16; band++) {
        for (i = start; i < ends[band]; i++) {
            out[i] = (f32)values[i] / steps[*(scale = &in[band])] * gain;
        }
        start = ends[band];
    }
    for (band = D_800D53B6; band < 0x100; band++) {
        out[band] = 0.0f;
    }
    return 1;
}
