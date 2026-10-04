#include "common/types.h"
#include "span_1000/code_802C4604.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Builds the decoder's trigonometric tables: for 128 steps it stores the sine and cosine of
   (i * D_800CCF10 + D_800CCF14) * D_800CCF18 in D_801510C0 and D_801512C0 and clears D_801518C0,
   then for 128 steps of i * D_800CCF1C stores sine plus cosine in D_801514C0 and cosine minus sine in
   D_801516C0. */



#define ANGLE_OFFSET (*(&D_800C7CC0 + 1))
#define ANGLE_STEP (*(&D_800C7CC8_de + 1))




extern s32 D_8014B630[];

extern f32 func_802B6560_de(f32 angle);
extern f32 func_802B7130_de(f32 angle);

void func_802BF514_de(void) {
    s16 i;
    f32 angle;
    f32 s;
    f32 c;
    f32 step;
    f32 offset;
    f32 scale;
    f32 *sines;
    f32 *cosines;
    s32 *zeros;
    f32 *sums;
    f32 *differences;

    step = D_800C7CC0;
    offset = ANGLE_OFFSET;
    scale = D_800C7CC8_de;
    i = 0;
    sines = D_8014AE30;
    cosines = D_8014B030;
    zeros = D_8014B630;
    for (; i < 128; i++) {
        angle = (i * step + offset) * scale;
        sines[i] = func_802B6560_de(angle);
        cosines[i] = func_802B7130_de(angle);
        zeros[i] = 0;
    }
    i = 0;
    scale = ANGLE_STEP;
    sums = D_8014B230;
    differences = D_8014B430_de;
    for (; i < 128; i++) {
        angle = i * scale;
        s = func_802B6560_de(angle);
        c = func_802B7130_de(angle);
        sums[i] = s + c;
        differences[i] = c - s;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7BE0_4 = 4.0f;
const float unbake_rodata_800C7BE4_4 = 1.0f;
const float unbake_rodata_800C7BE8_4 = 0.00306796166f;
const float unbake_rodata_800C7BEC_4 = 0.0122718466f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CCF10_4 = 4.0f;
const float unbake_rodata_800CCF14_4 = 1.0f;
const float unbake_rodata_800CCF18_4 = 0.00306796166f;
const float unbake_rodata_800CCF1C_4 = 0.0122718466f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C88B0_4 = 4.0f;
const float unbake_rodata_800C88B4_4 = 1.0f;
const float unbake_rodata_800C88B8_4 = 0.00306796166f;
const float unbake_rodata_800C88BC_4 = 0.0122718466f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C9280_4 = 4.0f;
const float unbake_rodata_800C9284_4 = 1.0f;
const float unbake_rodata_800C9288_4 = 0.00306796166f;
const float unbake_rodata_800C928C_4 = 0.0122718466f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C7CC0_4 = 4.0f;
const float unbake_rodata_800C7CC4_4 = 1.0f;
const float unbake_rodata_800C7CC8_4 = 0.00306796166f;
const float unbake_rodata_800C7CCC_4 = 0.0122718466f;
#endif
