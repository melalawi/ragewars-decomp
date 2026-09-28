/* Reads the pixel at index as a 0xAARRGGBB colour: stores the index for the current format's fetch
   hook D_80153CD0, then extracts each channel of the fetched value with the format's channel mask
   and signed shift (a negative shift scales up) and packs alpha, red, green and blue, using 0xFF
   for alpha when the format has no alpha mask. */
#include "basetypes.h"

extern s32 D_80153C60;
extern u32 D_80153C68;
extern u32 D_80153C90;
extern u32 D_80153C94;
extern u32 D_80153C98;
extern u32 D_80153C9C;
extern s32 D_80153CB0;
extern s32 D_80153CB4;
extern s32 D_80153CB8;
extern s32 D_80153CBC;
extern void (*D_80153CD0)(void);

u32 func_80413A60(s32 index) {
    u32 r;
    u32 g;
    u32 b;
    u32 a;

    D_80153C60 = index;
    D_80153CD0();
    if (D_80153CB0 < 0) {
        r = (D_80153C68 & D_80153C90) << -D_80153CB0;
    } else {
        r = (D_80153C68 & D_80153C90) >> D_80153CB0;
    }
    if (D_80153CB4 < 0) {
        g = (D_80153C68 & D_80153C94) << -D_80153CB4;
    } else {
        g = (D_80153C68 & D_80153C94) >> D_80153CB4;
    }
    if (D_80153CB8 < 0) {
        b = (D_80153C68 & D_80153C98) << -D_80153CB8;
    } else {
        b = (D_80153C68 & D_80153C98) >> D_80153CB8;
    }
    if (D_80153CBC < 0) {
        a = (D_80153C68 & D_80153C9C) << -D_80153CBC;
    } else {
        a = (D_80153C68 & D_80153C9C) >> D_80153CBC;
    }
    if (D_80153C9C == 0) {
        a = 0xFF;
    }
    return (a << 24) | (r << 16) | (g << 8) | b;
}
