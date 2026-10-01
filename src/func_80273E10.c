#include "basetypes.h"

/* Expands a 4x4 transform into an affine 4x4 matrix with its second and third rows swapped, a zero last column and the pooled corner D_800C99F0[1]. */

extern const f32 D_800C99F0[];

void func_80273E10(f32 *dst, f32 *src) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[4] = src[8];
    dst[5] = src[9];
    dst[6] = src[10];
    dst[8] = src[4];
    dst[9] = src[5];
    dst[10] = src[6];
    dst[12] = src[12];
    dst[13] = src[13];
    dst[14] = src[14];
    dst[3] = dst[7] = dst[11] = 0.0f;
    dst[15] = D_800C99F0[1];
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4834_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C99F4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4BB4_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BF4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4904_4 = 1.0f;
#endif
