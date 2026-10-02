#include "basetypes.h"
#include "n64sdk.h"

/* Sets the environment and primitive colours from a packed 0xAARRGGBB colour when it differs from
   the last one set, D_800E32DC: appends 0xFB (environment, alpha zero) and 0xFA (primitive, with
   alpha) commands to the display list D_80110634 points into. */

extern u32 D_800E32DC;
extern Gfx *D_80110634;

void func_80419278(u32 color) {
    Gfx *gfx;
    u32 rgb;

    if (color == D_800E32DC) {
        return;
    }
    D_800E32DC = color;
    gfx = D_80110634++;
    gfx->words.w0 = 0xFB000000;
    rgb = ((color >> 16) << 24) | ((color & 0xFF00) << 8) | ((color & 0xFF) << 8);
    gfx->words.w1 = rgb;
    gfx = D_80110634++;
    gfx->words.w0 = 0xFA000000;
    gfx->words.w1 = rgb | (color >> 24);
}
