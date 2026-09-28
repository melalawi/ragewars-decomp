/* Decodes the next packed bit-field float from a stream record into its range and advances the record's bit address by the field width. Adapted from func_80260BA0, inlined as a helper called with the record and a copy of the record's own range. */
#include "basetypes.h"

extern f64 D_800C9280;

typedef struct DecodeRange {
    u32 width;
    f32 base;
    f32 scale;
} DecodeRange;

typedef struct LocalDecodeRange {
    u32 unused;
    DecodeRange range;
} LocalDecodeRange;

typedef struct DecodeStream {
    u32 bitAddress;
    DecodeRange range;
} DecodeStream;

static inline f32 decode(u32 *stream, DecodeRange range) {
    u32 bitAddress;
    u32 *streamPtr;
    s32 shift;
    u32 *word;
    u32 value;
    u32 next;
    u32 width;
    f64 converted;
    f32 result;
    LocalDecodeRange local;

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
        converted += D_800C9280;
    }
    result = (f32) converted;
    result /= (f32) ((1 << width) - 1);
    result *= local.range.scale;
    result += local.range.base;
    *streamPtr += range.width;
    return result;
}

f32 func_80260F18(DecodeStream *arg0) {
    return decode(&arg0->bitAddress, arg0->range);
}
