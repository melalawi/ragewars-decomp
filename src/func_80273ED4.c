#include "basetypes.h"

/* Expands a 4x4 transform into an affine 4x4 matrix with its second and third columns swapped, a zero last column and the pooled corner D_800C99F8. Adapted from func_80273E10 with the row swap replaced by a column swap and the corner taken from D_800C99F8. */

extern const f32 D_800C99F8;

void func_80273ED4(f32 *dst, f32 *src) {
    dst[0] = src[0];
    dst[1] = src[2];
    dst[2] = src[1];
    dst[4] = src[4];
    dst[5] = src[6];
    dst[6] = src[5];
    dst[8] = src[8];
    dst[9] = src[10];
    dst[10] = src[9];
    dst[12] = src[12];
    dst[13] = src[14];
    dst[14] = src[13];
    dst[3] = dst[7] = dst[11] = 0.0f;
    dst[15] = D_800C99F8;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4838_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C99F8_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4BB8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BF8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4908_4 = 1.0f;
#endif
