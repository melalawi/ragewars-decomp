#include "span_1000/code_8026E5DC.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"




















void func_8026FC9C_de(f32 *src, PackedMatrixWords *dst) {
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

    PACK_PAIR(0, D_800C46F0_de, D_800C46F8_de);
    PACK_PAIR(1, D_800C4700_de, D_800C4708_de);
    PACK_PAIR(2, D_800C4710_de, D_800C4718_de);
    PACK_PAIR(3, D_800C4720_de, D_800C4728_de);
    PACK_PAIR(4, D_800C4730_de, D_800C4738_de);
    PACK_PAIR(5, D_800C4740_de, D_800C4748_de);
    PACK_PAIR(6, D_800C4750_de, D_800C4758_de);
    PACK_PAIR(7, D_800C4760_de, D_800C4768_de);
}
