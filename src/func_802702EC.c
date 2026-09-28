#include "basetypes.h"

typedef struct PackedMatrixWords {
    u32 upper[8];
    u32 lower[8];
} PackedMatrixWords;

extern f32 D_800C9860;
extern f32 D_800C9868;
extern f32 D_800C9870;
extern f32 D_800C9878;
extern f32 D_800C9880;
extern f32 D_800C9888;
extern f32 D_800C9890;
extern f32 D_800C9898;
extern f32 D_800C98A0;
extern f32 D_800C98A8;
extern f32 D_800C98B0;
extern f32 D_800C98B8;

void func_802702EC(f32 *src, PackedMatrixWords *dst) {
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

    CONVERT_A(a, src[0], D_800C9860);
    CONVERT_B(b, src[1], D_800C9868);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[2], D_800C9870);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT_A(a, src[4], D_800C9878);
    CONVERT_B(b, src[5], D_800C9880);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[6], D_800C9888);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT_A(a, src[8], D_800C9890);
    CONVERT_B(b, src[9], D_800C9898);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[10], D_800C98A0);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT_A(a, src[12], D_800C98A8);
    CONVERT_B(b, src[13], D_800C98B0);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[14], D_800C98B8);
    *upper = (a & 0xFFFF0000) | 1;
    *lower = a << 16;
}
