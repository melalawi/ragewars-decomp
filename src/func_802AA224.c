#include "unbake_gbi.h"
/* Emits the render-state display-list prologue for a flat colour pass: pipeline sync, one-cycle
   mode, the two combiner/mode presets through func_80268CE0 and func_8026925C, the environment
   colour from the argument with full alpha bits, texture enable and the texture-filter, colour-dither
   and alpha-dither mode words, the alpha dither chosen by D_800E28D8. Written with the house
   Gfx-packet idiom used by func_8021CBAC. */
#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"

extern Gfx *D_80110634;
extern s32 D_800E28D8;

extern void func_80268CE0(s32 arg0);
extern void func_8026925C(s32 arg0);

void func_802AA224(s32 color) {
    gDPPipeSync(D_80110634++);
    gDPSetCycleType(D_80110634++, G_CYC_2CYCLE);
    func_80268CE0(0x1B);
    func_8026925C(0x19);
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xFB000000;
        cmd->words.w1 = color | ~0xFF;
    }
    gSPTexture(D_80110634++, 32768, 32768, 0, 0, G_ON);
    gDPSetTextureLUT(D_80110634++, G_TT_NONE);
    gDPSetTexturePersp(D_80110634++, G_TP_NONE);
    if (D_800E28D8 == 0) gDPSetTextureFilter(D_80110634++, G_TF_POINT) else gDPSetTextureFilter(D_80110634++, G_TF_BILERP);
}
