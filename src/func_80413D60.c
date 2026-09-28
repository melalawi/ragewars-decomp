/* Writes a 0xAARRGGBB colour to the pixel at index: splits the colour into channels (forcing alpha
   to 0xFF when the format has no alpha mask), shifts each channel by the format's signed shift
   (a negative shift scales down) and masks it into place, then stores the index and the packed
   value for the format's store hook D_80153CD4 and calls it. */
#include "basetypes.h"

extern s32 D_80153C6C;
extern u32 D_80153C74;
extern u32 D_80153CA0;
extern u32 D_80153CA4;
extern u32 D_80153CA8;
extern u32 D_80153CAC;
extern s32 D_80153CC0;
extern s32 D_80153CC4;
extern s32 D_80153CC8;
extern s32 D_80153CCC;
extern void (*D_80153CD4)(void);

void func_80413D60(s32 index, u32 color) {
    u32 r;
    u32 g;
    u32 b;
    u32 a;

    r = (color >> 16) & 0xFF;
    g = (color & 0xFF00) >> 8;
    b = color & 0xFF;
    a = color >> 24;
    if (D_80153CAC == 0) {
        a = 0xFF;
    }
    if (D_80153CC0 < 0) {
        r = (r >> -D_80153CC0) & D_80153CA0;
    } else {
        r = (r << D_80153CC0) & D_80153CA0;
    }
    if (D_80153CC4 < 0) {
        g = (g >> -D_80153CC4) & D_80153CA4;
    } else {
        g = (g << D_80153CC4) & D_80153CA4;
    }
    if (D_80153CC8 < 0) {
        b = (b >> -D_80153CC8) & D_80153CA8;
    } else {
        b = (b << D_80153CC8) & D_80153CA8;
    }
    if (D_80153CCC < 0) {
        a = (a >> -D_80153CCC) & D_80153CAC;
    } else {
        a = (a << D_80153CCC) & D_80153CAC;
    }
    D_80153C6C = index;
    D_80153C74 = r | g | b | a;
    D_80153CD4();
}
