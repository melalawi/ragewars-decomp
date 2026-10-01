#include "basetypes.h"

extern f64 D_800C9260;

typedef struct DecodeRange {
    u32 width;
    f32 base;
    f32 scale;
} DecodeRange;

f32 func_802609CC(s32 bitAddress, DecodeRange range) {
    s32 shift;
    u32 *word;
    u32 value;
    u32 next;
    f64 converted;
    f32 result;

    word = (u32 *) ((bitAddress & 0xF0000000) |
                    ((u32) (bitAddress & 0x0FFFFFE0) >> 3));
    shift = bitAddress & 0x1F;
    value = word[0];
    next = word[1];
    if (shift != 0) {
        value >>= shift;
        next <<= 0x20 - shift;
        value |= next;
    }
    if (range.width < 0x20U) {
        value &= (1 << range.width) - 1;
    }
    converted = (s32) value;
    if ((s32) value < 0) {
        converted += D_800C9260;
    }
    result = (f32) converted;
    result /= (f32) ((1 << range.width) - 1);
    result *= range.scale;
    result += range.base;
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C40A0_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9260_8 = 4294967296.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4420_8 = 4294967296.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C4460_8 = 4294967296.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C4170_8 = 4294967296.0;
#endif
