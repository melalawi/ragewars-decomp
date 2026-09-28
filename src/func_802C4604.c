/* Builds the decoder's trigonometric tables: for 128 steps it stores the sine and cosine of
   (i * D_800CCF10 + D_800CCF14) * D_800CCF18 in D_801510C0 and D_801512C0 and clears D_801518C0,
   then for 128 steps of i * D_800CCF1C stores sine plus cosine in D_801514C0 and cosine minus sine in
   D_801516C0. */
#include "basetypes.h"

extern f32 D_800CCF10;
extern f32 D_800CCF18;
#define ANGLE_OFFSET (*(&D_800CCF10 + 1))
#define ANGLE_STEP (*(&D_800CCF18 + 1))
extern f32 D_801510C0[];
extern f32 D_801512C0[];
extern f32 D_801514C0[];
extern f32 D_801516C0[];
extern s32 D_801518C0[];

extern f32 func_802BB630(f32 angle);
extern f32 func_802BC200(f32 angle);

void func_802C4604(void) {
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

    step = D_800CCF10;
    offset = ANGLE_OFFSET;
    scale = D_800CCF18;
    i = 0;
    sines = D_801510C0;
    cosines = D_801512C0;
    zeros = D_801518C0;
    for (; i < 128; i++) {
        angle = (i * step + offset) * scale;
        sines[i] = func_802BB630(angle);
        cosines[i] = func_802BC200(angle);
        zeros[i] = 0;
    }
    i = 0;
    scale = ANGLE_STEP;
    sums = D_801514C0;
    differences = D_801516C0;
    for (; i < 128; i++) {
        angle = i * scale;
        s = func_802BB630(angle);
        c = func_802BC200(angle);
        sums[i] = s + c;
        differences[i] = c - s;
    }
}
