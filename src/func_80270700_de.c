#include "span_1000/code_8026E5DC.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"





void func_80270700_de(f32 *dst, PackedMatrixWords *src) {
    u32 upper;
    u32 lower;
    f32 scale = D_800C47D0_de;

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
