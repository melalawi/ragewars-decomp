/* Decodes a packed pixel value of entry `format` of the format table D_800E2B20 to 0xAARRGGBB, masking each channel and applying its signed shift. */
#include "basetypes.h"

typedef struct {
    char pad0[0x14];
    u32 mask[4];
    s32 shift[4];
} PixelFormat;

extern PixelFormat D_800E2B20[];

static inline u32 decode(u32 value, PixelFormat *format) {
    u32 r;
    u32 g;
    u32 b;
    u32 a;

    if (format->shift[0] < 0) {
        r = (value & format->mask[0]) << -format->shift[0];
    } else {
        r = (value & format->mask[0]) >> format->shift[0];
    }
    if (format->shift[1] < 0) {
        g = (value & format->mask[1]) << -format->shift[1];
    } else {
        g = (value & format->mask[1]) >> format->shift[1];
    }
    if (format->shift[2] < 0) {
        b = (value & format->mask[2]) << -format->shift[2];
    } else {
        b = (value & format->mask[2]) >> format->shift[2];
    }
    if (format->shift[3] < 0) {
        a = (value & format->mask[3]) << -format->shift[3];
    } else {
        a = (value & format->mask[3]) >> format->shift[3];
    }
    return (a << 24) | (r << 16) | (g << 8) | b;
}

u32 func_80413F60(u32 value, s32 format) {
    return decode(value, &D_800E2B20[format]);
}
