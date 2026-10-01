#include "basetypes.h"

extern f64 D_800C9270;

typedef struct DecodeRange80260BA0 {
    u32 width;
    f32 base;
    f32 scale;
} DecodeRange80260BA0;

typedef struct LocalDecodeRange80260BA0 {
    u32 unused;
    DecodeRange80260BA0 range;
} LocalDecodeRange80260BA0;

f32 func_80260BA0(u32 *stream, DecodeRange80260BA0 range) {
    u32 bitAddress;
    u32 *streamPtr;
    s32 shift;
    u32 *word;
    u32 value;
    u32 next;
    u32 width;
    f64 converted;
    f32 result;
    LocalDecodeRange80260BA0 local;

    streamPtr = stream;
    bitAddress = *streamPtr;
    local.range = range;
    width = local.range.width;
    word = (u32 *) ((bitAddress & 0xF0000000) |
                    ((bitAddress & 0x0FFFFFE0) >> 3));
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
        converted += D_800C9270;
    }
    result = (f32) converted;
    result /= (f32) ((1 << width) - 1);
    result *= local.range.scale;
    result += local.range.base;
    *streamPtr += range.width;
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C40B0_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9270_8 = 4294967296.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4430_8 = 4294967296.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C4470_8 = 4294967296.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C4180_8 = 4294967296.0;
#endif
