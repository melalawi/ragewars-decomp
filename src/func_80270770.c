#include "basetypes.h"

extern f32 D_800C98C0;

typedef struct PackedMatrixWords {
    u32 upper[8];
    u32 lower[8];
} PackedMatrixWords;

void func_80270770(f32 *dst, PackedMatrixWords *src) {
    u32 upper;
    u32 lower;
    f32 scale = D_800C98C0;

#define UNPACK_PAIR(i) \
    upper = src->upper[i]; \
    lower = src->lower[i]; \
    dst[(i) * 2] = (f32)(s32)((upper & 0xFFFF0000) | (lower >> 16)) * scale; \
    dst[(i) * 2 + 1] = (f32)(s32)((upper << 16) | (lower & 0xFFFF)) * scale

    UNPACK_PAIR(0);
    UNPACK_PAIR(1);
    UNPACK_PAIR(2);
    UNPACK_PAIR(3);
    UNPACK_PAIR(4);
    UNPACK_PAIR(5);
    UNPACK_PAIR(6);
    UNPACK_PAIR(7);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4700_4 = 1.52587891e-05f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C98C0_4 = 1.52587891e-05f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4A80_4 = 1.52587891e-05f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4AC0_4 = 1.52587891e-05f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C47D0_4 = 1.52587891e-05f;
#endif
