#include "span_1000/code_8026E5DC.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
















void func_8027027C_de(f32 *src, PackedMatrixWords *dst) {
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

    CONVERT_A(a, src[0], D_800C4770_de);
    CONVERT_B(b, src[1], D_800C4778_de);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[2], D_800C4780_de);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT_A(a, src[4], D_800C4788_de);
    CONVERT_B(b, src[5], D_800C4790_de);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[6], D_800C4798_de);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT_A(a, src[8], D_800C47A0_de);
    CONVERT_B(b, src[9], D_800C47A8_de);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[10], D_800C47B0_de);
    *upper = a & 0xFFFF0000;
    *lower = a << 16;
    upper++;
    lower++;

    CONVERT_A(a, src[12], D_800C47B8_de);
    CONVERT_B(b, src[13], D_800C47C0_de);
    *upper = (a & 0xFFFF0000) | ((u32)b >> 16);
    *lower = (a << 16) | (b & 0xFFFF);
    upper++;
    lower++;

    CONVERT_A(a, src[14], D_800C47C8_de);
    *upper = (a & 0xFFFF0000) | 1;
    *lower = a << 16;
}
