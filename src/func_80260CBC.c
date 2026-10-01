/* Decodes element arg1 of a packed bit-field float array into a float scaled into its range. Adapted from func_802609CC, inlined as a helper (with the width held in a local) called with a base plus width-times-index bit address and the record's range. */
#include "basetypes.h"

extern f64 D_800C9278;

typedef struct DecodeRange {
    u32 width;
    f32 base;
    f32 scale;
} DecodeRange;

typedef struct DecodeArray {
    s32 base;
    DecodeRange range;
} DecodeArray;

static inline f32 decode(s32 bitAddress, DecodeRange range) {
    s32 shift;
    u32 *word;
    u32 value;
    u32 next;
    f64 converted;
    f32 result;
    u32 width;

    width = range.width;
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
    if (width < 0x20U) {
        value &= (1 << width) - 1;
    }
    converted = (s32) value;
    if ((s32) value < 0) {
        converted += D_800C9278;
    }
    result = (f32) converted;
    result /= (f32) ((1 << width) - 1);
    result *= range.scale;
    result += range.base;
    return result;
}

f32 func_80260CBC(DecodeArray *arg0, s32 arg1) {
    return decode(arg0->base + (arg0->range.width * arg1), arg0->range);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C40B8_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9278_8 = 4294967296.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4438_8 = 4294967296.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C4478_8 = 4294967296.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C4188_8 = 4294967296.0;
#endif
