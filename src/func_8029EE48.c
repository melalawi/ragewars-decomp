#include "basetypes.h"

/* Returns the arcsine of a value clamped to [-1, 1] using the polynomial approximation pi/2 - sqrt(1 - x) * p(x) on its magnitude and restoring the sign afterwards. */

extern f32 D_800CAD90;
extern f32 D_800CAD98;
extern f32 D_800CADA0;
extern f32 D_800CADA8;
extern f32 D_800CADB0;
extern f32 func_802BC380(f32 value);

f32 func_8029EE48(f32 x) {
    s32 negative;
    f32 poly;
    f32 root;
    f32 result;

    if (D_800CAD90 < x) {
        x = D_800CAD90;
    }
    do {
        if (x < *(&D_800CAD90 + 1)) {
            x = *(&D_800CAD90 + 1);
        }
        negative = 0;
        if (x < 0.0f) {
            negative = 1;
            x = -x;
        }
        poly = (((((x * D_800CAD98 + *(&D_800CAD98 + 1)) * x - D_800CADA0) * x + *(&D_800CADA0 + 1)) * x
                 - D_800CADA8) * x) + *(&D_800CADA8 + 1);
        x = D_800CAD90 - x;
        if (x <= 0.0f) {
            root = 0.0f;
        } else {
            root = func_802BC380(x);
        }
    } while (0);
    result = D_800CADB0 - root * poly;
    if (negative) {
        result = -result;
    }
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5B30_4 = 1.0f;
const float unbake_rodata_800C5B34_4 = (-1.0f);
const float unbake_rodata_800C5B38_4 = (-0.0116805276f);
const float unbake_rodata_800C5B3C_4 = 0.0308918804f;
const float unbake_rodata_800C5B40_4 = 0.0501743034f;
const float unbake_rodata_800C5B44_4 = 0.0889789909f;
const float unbake_rodata_800C5B48_4 = 0.214598805f;
const float unbake_rodata_800C5B4C_4 = 1.57079625f;
const float unbake_rodata_800C5B50_4 = 1.57079637f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAD90_4 = 1.0f;
const float unbake_rodata_800CAD94_4 = (-1.0f);
const float unbake_rodata_800CAD98_4 = (-0.0116805276f);
const float unbake_rodata_800CAD9C_4 = 0.0308918804f;
const float unbake_rodata_800CADA0_4 = 0.0501743034f;
const float unbake_rodata_800CADA4_4 = 0.0889789909f;
const float unbake_rodata_800CADA8_4 = 0.214598805f;
const float unbake_rodata_800CADAC_4 = 1.57079625f;
const float unbake_rodata_800CADB0_4 = 1.57079637f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5EA0_4 = 1.0f;
const float unbake_rodata_800C5EA4_4 = (-1.0f);
const float unbake_rodata_800C5EA8_4 = (-0.0116805276f);
const float unbake_rodata_800C5EAC_4 = 0.0308918804f;
const float unbake_rodata_800C5EB0_4 = 0.0501743034f;
const float unbake_rodata_800C5EB4_4 = 0.0889789909f;
const float unbake_rodata_800C5EB8_4 = 0.214598805f;
const float unbake_rodata_800C5EBC_4 = 1.57079625f;
const float unbake_rodata_800C5EC0_4 = 1.57079637f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5EE0_4 = 1.0f;
const float unbake_rodata_800C5EE4_4 = (-1.0f);
const float unbake_rodata_800C5EE8_4 = (-0.0116805276f);
const float unbake_rodata_800C5EEC_4 = 0.0308918804f;
const float unbake_rodata_800C5EF0_4 = 0.0501743034f;
const float unbake_rodata_800C5EF4_4 = 0.0889789909f;
const float unbake_rodata_800C5EF8_4 = 0.214598805f;
const float unbake_rodata_800C5EFC_4 = 1.57079625f;
const float unbake_rodata_800C5F00_4 = 1.57079637f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5C00_4 = 1.0f;
const float unbake_rodata_800C5C04_4 = (-1.0f);
const float unbake_rodata_800C5C08_4 = (-0.0116805276f);
const float unbake_rodata_800C5C0C_4 = 0.0308918804f;
const float unbake_rodata_800C5C10_4 = 0.0501743034f;
const float unbake_rodata_800C5C14_4 = 0.0889789909f;
const float unbake_rodata_800C5C18_4 = 0.214598805f;
const float unbake_rodata_800C5C1C_4 = 1.57079625f;
const float unbake_rodata_800C5C20_4 = 1.57079637f;
#endif
