#include "basetypes.h"

typedef struct PackedMatrixWords {
    u32 upper[8];
    u32 lower[8];
} PackedMatrixWords;

extern f32 D_800C97E0;
extern f32 D_800C97E8;
extern f32 D_800C97F0;
extern f32 D_800C97F8;
extern f32 D_800C9800;
extern f32 D_800C9808;
extern f32 D_800C9810;
extern f32 D_800C9818;
extern f32 D_800C9820;
extern f32 D_800C9828;
extern f32 D_800C9830;
extern f32 D_800C9838;
extern f32 D_800C9840;
extern f32 D_800C9848;
extern f32 D_800C9850;
extern f32 D_800C9858;

void func_8026FD0C(f32 *src, PackedMatrixWords *dst) {
    u32 *upper = dst->upper;
    u32 *lower = dst->lower;
    f32 value;
    s32 a;
    s32 b;

#define CONVERT_A(out, input, scale) \
    value = (input) * (scale); \
    if (!(*(&(scale) + 1) <= value)) { \
        (out) = (s32)value; \
    } else { \
        (out) = (s32)(value - *(&(scale) + 1)); \
        (out) |= 0x80000000; \
    }
#define CONVERT_B(out, input, scale) \
    value = (input) * (scale); \
    if (!(*(&(scale) + 1) <= value)) { \
        (out) = (s32)value; \
    } else { \
        (out) = (s32)(value - *(&(scale) + 1)); \
        (out) |= 0x80000000; \
    }
#define PACK_PAIR(i, scale_a, scale_b) \
    CONVERT_A(a, src[(i) * 2], scale_a); \
    CONVERT_B(b, src[(i) * 2 + 1], scale_b); \
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16); \
    *lower = (a << 16) | (b & 0xFFFF); \
    upper++; \
    lower++

    PACK_PAIR(0, D_800C97E0, D_800C97E8);
    PACK_PAIR(1, D_800C97F0, D_800C97F8);
    PACK_PAIR(2, D_800C9800, D_800C9808);
    PACK_PAIR(3, D_800C9810, D_800C9818);
    PACK_PAIR(4, D_800C9820, D_800C9828);
    PACK_PAIR(5, D_800C9830, D_800C9838);
    PACK_PAIR(6, D_800C9840, D_800C9848);
    PACK_PAIR(7, D_800C9850, D_800C9858);
}
