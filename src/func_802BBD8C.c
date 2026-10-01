#include "basetypes.h"

extern f32 D_800CCADC;

void func_802BBD8C(f32 *arg0, s32 *arg1) {
    s32 *outLo;
    s32 *outHi;
    f32 *inRow;
    f32 *inPair;
    f32 mult;
    u32 mask;
    f32 t1;
    f32 t0;
    s32 v0;
    s32 v1;
    s32 i;
    s32 j;

    outLo = arg1;
    outHi = arg1 + 8;
    i = 0;
    mult = D_800CCADC;
    mask = 0xFFFF0000;
    inRow = arg0;
    do {
        j = 0;
        inPair = inRow;
        do {
            t1 = inPair[0] * mult;
            t0 = inPair[1] * mult;
            inPair += 2;
            j += 1;
            v0 = (s32) t1;
            v1 = (s32) t0;
            *outLo = (v0 & mask) | ((u32) v1 >> 16);
            outLo += 1;
            *outHi = ((v0 << 16) & mask) | (v1 & 0xFFFF);
            outHi += 1;
        } while (j < 2);
        i += 1;
        inRow += 4;
    } while (i < 4);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C77AC_4 = 65536.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CCADC_4 = 65536.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C847C_4 = 65536.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8E4C_4 = 65536.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C788C_4 = 65536.0f;
#endif
