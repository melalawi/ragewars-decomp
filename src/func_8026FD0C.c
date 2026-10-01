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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4620_4 = 65536.0f;
const float unbake_rodata_800C4624_4 = 2.14748365e+09f;
const float unbake_rodata_800C4628_4 = 65536.0f;
const float unbake_rodata_800C462C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4630_4 = 65536.0f;
const float unbake_rodata_800C4634_4 = 2.14748365e+09f;
const float unbake_rodata_800C4638_4 = 65536.0f;
const float unbake_rodata_800C463C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4640_4 = 65536.0f;
const float unbake_rodata_800C4644_4 = 2.14748365e+09f;
const float unbake_rodata_800C4648_4 = 65536.0f;
const float unbake_rodata_800C464C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4650_4 = 65536.0f;
const float unbake_rodata_800C4654_4 = 2.14748365e+09f;
const float unbake_rodata_800C4658_4 = 65536.0f;
const float unbake_rodata_800C465C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4660_4 = 65536.0f;
const float unbake_rodata_800C4664_4 = 2.14748365e+09f;
const float unbake_rodata_800C4668_4 = 65536.0f;
const float unbake_rodata_800C466C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4670_4 = 65536.0f;
const float unbake_rodata_800C4674_4 = 2.14748365e+09f;
const float unbake_rodata_800C4678_4 = 65536.0f;
const float unbake_rodata_800C467C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4680_4 = 65536.0f;
const float unbake_rodata_800C4684_4 = 2.14748365e+09f;
const float unbake_rodata_800C4688_4 = 65536.0f;
const float unbake_rodata_800C468C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4690_4 = 65536.0f;
const float unbake_rodata_800C4694_4 = 2.14748365e+09f;
const float unbake_rodata_800C4698_4 = 65536.0f;
const float unbake_rodata_800C469C_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C97E0_4 = 65536.0f;
const float unbake_rodata_800C97E4_4 = 2.14748365e+09f;
const float unbake_rodata_800C97E8_4 = 65536.0f;
const float unbake_rodata_800C97EC_4 = 2.14748365e+09f;
const float unbake_rodata_800C97F0_4 = 65536.0f;
const float unbake_rodata_800C97F4_4 = 2.14748365e+09f;
const float unbake_rodata_800C97F8_4 = 65536.0f;
const float unbake_rodata_800C97FC_4 = 2.14748365e+09f;
const float unbake_rodata_800C9800_4 = 65536.0f;
const float unbake_rodata_800C9804_4 = 2.14748365e+09f;
const float unbake_rodata_800C9808_4 = 65536.0f;
const float unbake_rodata_800C980C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9810_4 = 65536.0f;
const float unbake_rodata_800C9814_4 = 2.14748365e+09f;
const float unbake_rodata_800C9818_4 = 65536.0f;
const float unbake_rodata_800C981C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9820_4 = 65536.0f;
const float unbake_rodata_800C9824_4 = 2.14748365e+09f;
const float unbake_rodata_800C9828_4 = 65536.0f;
const float unbake_rodata_800C982C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9830_4 = 65536.0f;
const float unbake_rodata_800C9834_4 = 2.14748365e+09f;
const float unbake_rodata_800C9838_4 = 65536.0f;
const float unbake_rodata_800C983C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9840_4 = 65536.0f;
const float unbake_rodata_800C9844_4 = 2.14748365e+09f;
const float unbake_rodata_800C9848_4 = 65536.0f;
const float unbake_rodata_800C984C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9850_4 = 65536.0f;
const float unbake_rodata_800C9854_4 = 2.14748365e+09f;
const float unbake_rodata_800C9858_4 = 65536.0f;
const float unbake_rodata_800C985C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C49A0_4 = 65536.0f;
const float unbake_rodata_800C49A4_4 = 2.14748365e+09f;
const float unbake_rodata_800C49A8_4 = 65536.0f;
const float unbake_rodata_800C49AC_4 = 2.14748365e+09f;
const float unbake_rodata_800C49B0_4 = 65536.0f;
const float unbake_rodata_800C49B4_4 = 2.14748365e+09f;
const float unbake_rodata_800C49B8_4 = 65536.0f;
const float unbake_rodata_800C49BC_4 = 2.14748365e+09f;
const float unbake_rodata_800C49C0_4 = 65536.0f;
const float unbake_rodata_800C49C4_4 = 2.14748365e+09f;
const float unbake_rodata_800C49C8_4 = 65536.0f;
const float unbake_rodata_800C49CC_4 = 2.14748365e+09f;
const float unbake_rodata_800C49D0_4 = 65536.0f;
const float unbake_rodata_800C49D4_4 = 2.14748365e+09f;
const float unbake_rodata_800C49D8_4 = 65536.0f;
const float unbake_rodata_800C49DC_4 = 2.14748365e+09f;
const float unbake_rodata_800C49E0_4 = 65536.0f;
const float unbake_rodata_800C49E4_4 = 2.14748365e+09f;
const float unbake_rodata_800C49E8_4 = 65536.0f;
const float unbake_rodata_800C49EC_4 = 2.14748365e+09f;
const float unbake_rodata_800C49F0_4 = 65536.0f;
const float unbake_rodata_800C49F4_4 = 2.14748365e+09f;
const float unbake_rodata_800C49F8_4 = 65536.0f;
const float unbake_rodata_800C49FC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A00_4 = 65536.0f;
const float unbake_rodata_800C4A04_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A08_4 = 65536.0f;
const float unbake_rodata_800C4A0C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A10_4 = 65536.0f;
const float unbake_rodata_800C4A14_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A18_4 = 65536.0f;
const float unbake_rodata_800C4A1C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C49E0_4 = 65536.0f;
const float unbake_rodata_800C49E4_4 = 2.14748365e+09f;
const float unbake_rodata_800C49E8_4 = 65536.0f;
const float unbake_rodata_800C49EC_4 = 2.14748365e+09f;
const float unbake_rodata_800C49F0_4 = 65536.0f;
const float unbake_rodata_800C49F4_4 = 2.14748365e+09f;
const float unbake_rodata_800C49F8_4 = 65536.0f;
const float unbake_rodata_800C49FC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A00_4 = 65536.0f;
const float unbake_rodata_800C4A04_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A08_4 = 65536.0f;
const float unbake_rodata_800C4A0C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A10_4 = 65536.0f;
const float unbake_rodata_800C4A14_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A18_4 = 65536.0f;
const float unbake_rodata_800C4A1C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A20_4 = 65536.0f;
const float unbake_rodata_800C4A24_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A28_4 = 65536.0f;
const float unbake_rodata_800C4A2C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A30_4 = 65536.0f;
const float unbake_rodata_800C4A34_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A38_4 = 65536.0f;
const float unbake_rodata_800C4A3C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A40_4 = 65536.0f;
const float unbake_rodata_800C4A44_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A48_4 = 65536.0f;
const float unbake_rodata_800C4A4C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A50_4 = 65536.0f;
const float unbake_rodata_800C4A54_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A58_4 = 65536.0f;
const float unbake_rodata_800C4A5C_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C46F0_4 = 65536.0f;
const float unbake_rodata_800C46F4_4 = 2.14748365e+09f;
const float unbake_rodata_800C46F8_4 = 65536.0f;
const float unbake_rodata_800C46FC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4700_4 = 65536.0f;
const float unbake_rodata_800C4704_4 = 2.14748365e+09f;
const float unbake_rodata_800C4708_4 = 65536.0f;
const float unbake_rodata_800C470C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4710_4 = 65536.0f;
const float unbake_rodata_800C4714_4 = 2.14748365e+09f;
const float unbake_rodata_800C4718_4 = 65536.0f;
const float unbake_rodata_800C471C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4720_4 = 65536.0f;
const float unbake_rodata_800C4724_4 = 2.14748365e+09f;
const float unbake_rodata_800C4728_4 = 65536.0f;
const float unbake_rodata_800C472C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4730_4 = 65536.0f;
const float unbake_rodata_800C4734_4 = 2.14748365e+09f;
const float unbake_rodata_800C4738_4 = 65536.0f;
const float unbake_rodata_800C473C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4740_4 = 65536.0f;
const float unbake_rodata_800C4744_4 = 2.14748365e+09f;
const float unbake_rodata_800C4748_4 = 65536.0f;
const float unbake_rodata_800C474C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4750_4 = 65536.0f;
const float unbake_rodata_800C4754_4 = 2.14748365e+09f;
const float unbake_rodata_800C4758_4 = 65536.0f;
const float unbake_rodata_800C475C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4760_4 = 65536.0f;
const float unbake_rodata_800C4764_4 = 2.14748365e+09f;
const float unbake_rodata_800C4768_4 = 65536.0f;
const float unbake_rodata_800C476C_4 = 2.14748365e+09f;
#endif
