#include "basetypes.h"

typedef struct Output8025EF54 {
    f32 value;
    s32 pad04;
    s32 pad08;
    s32 pad0C;
} Output8025EF54;

typedef struct Decode8025EF54 {
    s32 bits;
    f32 base;
    f32 range;
    s32 unused;
    u32 stream;
    s32 first_bits;
    s32 second_bits;
} Decode8025EF54;

extern s32 D_8010EC78;
extern f32 D_8010EC7C;
extern f32 D_8010EC80;
extern double D_800C91E8;
extern double D_800C91F0;
extern u32 func_802607D8(u32 *, u32);
extern f32 func_80260654(f32 value, s32 bits);
extern f32 func_80260670(f32 value, f32 lower, f32 upper);
extern f32 func_80260BA0(u32 *stream, s32 bits, f32 base, f32 range);

void func_8025EF54(u32 *stream, Output8025EF54 *out, s32 count) {
    Decode8025EF54 decode;
    f32 first;
    f32 second;
    s32 i;
    f64 converted;

    decode.stream = *stream;
    if (D_8010EC78 != 0) {
        decode.first_bits = func_802607D8(&decode.stream, 0x20);
        decode.second_bits = func_802607D8(&decode.stream, 0x20);
        first = *(f32 *)&decode.first_bits;
        second = *(f32 *)&decode.second_bits;
    } else {
        decode.first_bits = func_802607D8(&decode.stream, 6);
        decode.second_bits = func_802607D8(&decode.stream, 6);
        converted = (f64)decode.first_bits;
        if (decode.first_bits < 0) {
            converted += D_800C91E8;
        }
        first = func_80260654((f32)converted, 6);
        converted = (f64)decode.second_bits;
        if (decode.second_bits < 0) {
            converted += D_800C91F0;
        }
        second = func_80260654((f32)converted, 6);
        first = func_80260670(first, D_8010EC7C, D_8010EC80);
        second = func_80260670(second, D_8010EC7C, D_8010EC80);
    }
    decode.base = first;
    decode.range = second - first;
    decode.bits = func_802607D8(&decode.stream, 6);
    i = 0;
    if (count > 0) {
        do {
            out->value = func_80260BA0(&decode.stream, decode.bits,
                                       decode.base, decode.range);
            i++;
            out++;
        } while (i < count);
    }
    *stream = decode.stream;
}
