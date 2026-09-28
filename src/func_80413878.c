/* Reads the pixel at (x, y) of the current image D_80153D54 as a 0xAARRGGBB colour: seeks to
   x + y * width through the format's seek hook D_80153CD8, fetches through D_80153CD0 and converts
   the value with the format's channel masks and shifts like func_80413A60. */
#include "basetypes.h"

typedef struct {
    char pad0[8];
    s16 width;
} Image;

extern Image *D_80153D54;
extern s32 D_80153C78;
extern void (*D_80153CD8)(s32 offset);
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

u32 func_80413878(s32 x, s32 y) {
    u32 r;
    u32 g;
    u32 b;
    u32 a;

    D_80153C78 = x + y * D_80153D54->width;
    D_80153CD8(D_80153C78);
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
