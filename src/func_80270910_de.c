#include "span_1000/code_8026E5DC.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Unpacks a fixed-point 4x4 matrix held as separate integer and fraction halves into floats scaled by D_800C98C4, zeroing the fourth column and setting the last element to D_800C98C8. Adapted from func_80270700_de with the fourth column replaced by zeros and the constant at D_800C98C8, the third-column integer word used unmasked in the first three rows, the scale constant changed, and the last row computed into a local before the corner store. */





void func_80270910_de(f32 *dst, PackedMatrixWords *src) {
    u32 upper;
    u32 lower;
    f32 scale = D_800C47D4_de;

#define UNPACK_PAIR(i) \
    upper = src->upper[i]; \
    lower = src->lower[i]; \
    dst[(i) * 2] = (f32)(s32)((upper & 0xFFFF0000) | (lower >> 16)) * scale; \
    dst[(i) * 2 + 1] = (f32)(s32)((upper << 16) | (lower & 0xFFFF)) * scale

#define UNPACK_LAST(i) \
    upper = src->upper[i]; \
    lower = src->lower[i]; \
    dst[(i) * 2] = (f32)(s32)(upper | (lower >> 16)) * scale; \
    dst[(i) * 2 + 1] = 0.0f

    UNPACK_PAIR(0);
    UNPACK_LAST(1);
    UNPACK_PAIR(2);
    UNPACK_LAST(3);
    UNPACK_PAIR(4);
    UNPACK_LAST(5);
    UNPACK_PAIR(6);
    {
        f32 last;
        upper = src->upper[7];
        lower = src->lower[7];
        last = (f32)(s32)((upper & 0xFFFF0000) | (lower >> 16)) * scale;
        dst[15] = D_800C47D8_de;
        dst[14] = last;
    }
}
