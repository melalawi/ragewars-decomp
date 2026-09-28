/* Pulses the caption intensity on a 512-step triangle wave and redraws the caption sprite centred on the entry, dropped one full line or a short line when the wide-layout flag is clear. */
#include "basetypes.h"
#define NULL ((void *)0)

typedef struct { char pad0[0x14]; s32 image; char pad18[4]; s32 phase; } Caption;
typedef struct { char pad0[4]; s32 width; char pad8[4]; f32 scaleX; f32 scaleY; char pad14[2]; u16 x; char pad18[6]; u16 y; } Entry;
typedef struct { char pad0[0x30]; f32 unk30; f32 unk34; } Style;

extern void func_802AA224(s32);
extern void func_802ABC18(s32, s32, s16, s16, f32, f32, s32);
extern s32 D_800E28D8;
extern f32 D_800E2770;

void func_804438A4(Caption *arg0, Entry *arg1, s32 arg2, Style *arg3) {
    s32 phase;
    s32 amount;
    s32 half;
    s32 drop;
    f32 scale;
    f32 sx;

    phase = arg0->phase = (arg0->phase + 0x14) % 512;
    if (phase >= 0x100) {
        amount = (s32) ((f32) (0x200 - phase) * arg3->unk30 * arg3->unk34);
    } else {
        amount = (s32) ((f32) phase * arg3->unk30 * arg3->unk34);
    }
    func_802AA224(amount);
    drop = 0x50;
    half = arg1->width >> 1;
    if (D_800E28D8 == 0) {
        drop = 0x2D;
    }
    sx = arg1->scaleX;
    scale = *(&D_800E2770 + 1);
    func_802ABC18(arg0->image, 0, arg1->x - (half * 8), arg1->y + drop,
                  sx * scale, arg1->scaleY * scale, 1);
}
