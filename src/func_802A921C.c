/* Draws a signed integer of up to four digits with the font sprite set from func_8028BE88: splits the magnitude into thousands, hundreds, tens and ones, draws a leading minus sign through func_802ABC18 when negative, then draws at least minDigits digits through func_802AB19C, advancing 13 units per digit (0.7 of that for a one) scaled by the size, laid out right to left when rightAlign is set, and releases the sprite set. */
#include "basetypes.h"

extern char D_8011FE88;

extern s32 func_8028BE88(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_802AB19C(s32 arg0, s32 arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, s32 arg6);
extern s32 func_802ABC18(s32 arg0, s32 arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, s32 arg6);
extern void func_802536F4(s32 arg0, s32 arg1);

void func_802A921C(s32 value, f32 x, f32 y, f32 size, f32 arg4, s32 arg5, s32 rightAlign, s32 minDigits) {
    s32 sprites;
    s32 negative;
    s32 thousands;
    s32 hundreds;
    s32 tens;
    s32 ones;
    s32 rest;
    s32 last;
    s32 i;
    s32 place;
    s32 digit;
    f32 width;
    f32 scale;

    sprites = func_8028BE88(&D_8011FE88, 4, 0x10, 1);
    if (sprites == 0) {
        return;
    }
    negative = 0;
    if (value < 0) {
        value = -value;
        negative = 1;
        if (value < 0) {
            goto release;
        }
    }
    thousands = value * 0.001f;
    rest = value - thousands * 1000;
    hundreds = rest * 0.01f;
    rest -= hundreds * 100;
    tens = rest * 0.1f;
    ones = rest - tens * 10;
    last = 3;
    if (thousands == 0) {
        last = 2;
        if (hundreds == 0) {
            last = tens != 0;
        }
    }
    if (last < minDigits - 1) {
        last = minDigits - 1;
    }
    if (negative) {
        func_802ABC18(4, 10, x, y, size, arg4, arg5);
        x += size * 13.0f;
    }
    for (i = last; i >= 0; i--) {
        place = i;
        if (rightAlign) {
            place = last - i;
        }
        switch (place) {
        case 3:
            digit = thousands;
            break;
        case 2:
            digit = hundreds;
            break;
        case 1:
            digit = tens;
            break;
        case 0:
        default:
            digit = ones;
            break;
        }
        scale = 1.0f;
        if (digit == 1) {
            scale = 0.7f;
        }
        width = scale * (size * 13.0f);
        if (rightAlign) {
            x -= width;
        }
        if ((u32)digit < 10) {
            func_802AB19C(sprites, digit, x, y, size, arg4, arg5);
        }
        if (!rightAlign) {
            x += width;
        }
    }
release:
    func_802536F4(0, sprites);
}
