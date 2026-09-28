/* Converts the twelve used entries of a 4x4 float matrix to unsigned integers, splitting each pair into the high and low halfword arrays of a packed matrix and setting the final high word's low bit. Adapted from func_802702EC with the per-entry scale multiplies removed, the converted value scoped to each conversion block, and the D_800C8C70 thresholds changed. */
#include "basetypes.h"

typedef struct PackedMatrixWords {
    u32 upper[8];
    u32 lower[8];
} PackedMatrixWords;

extern f32 D_800C8C70;
extern f32 D_800C8C78;
extern f32 D_800C8C80;
extern f32 D_800C8C88;
extern f32 D_800C8C90;
extern f32 D_800C8C98;

void func_8024CC20(f32 *src, PackedMatrixWords *dst) {
    u32 *upper = dst->upper;
    u32 *lower = dst->lower;
    s32 a;
    s32 b;

#define CONVERT(out, input, limit) { \
    f32 value = (input); \
    if (!((limit) <= value)) { \
        (out) = (s32)value; \
    } else { \
        (out) = (s32)(value - (limit)); \
        (out) |= 0x80000000; \
    } }

    CONVERT(a, src[0], D_800C8C70);
    CONVERT(b, src[1], *(&D_800C8C70 + 1));
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT(a, src[2], D_800C8C78);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT(a, src[4], *(&D_800C8C78 + 1));
    CONVERT(b, src[5], D_800C8C80);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT(a, src[6], *(&D_800C8C80 + 1));
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT(a, src[8], D_800C8C88);
    CONVERT(b, src[9], *(&D_800C8C88 + 1));
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT(a, src[10], D_800C8C90);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT(a, src[12], *(&D_800C8C90 + 1));
    CONVERT(b, src[13], D_800C8C98);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT(a, src[14], *(&D_800C8C98 + 1));
    *upper = (a & 0xFFFF0000) | 1;
    *lower = a << 16;
}
