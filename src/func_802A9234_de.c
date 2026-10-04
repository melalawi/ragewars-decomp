#include "span_1000/code_802A776C.h"
#include "abi.h"
#include "gbi.h"
/* Emits the render-state display-list prologue for a flat colour pass: pipeline sync, one-cycle
   mode, the two combiner/mode presets through func_80268CE0_de and func_8026925C_de, the environment
   colour from the argument with full alpha bits, texture enable and the texture-filter, colour-dither
   and alpha-dither mode words, the alpha dither chosen by D_800DE888_de. Written with the house
   Gfx-packet idiom used by func_8021CBD0_de. */
#include "types.h"

#include "types.h"
#include "n64sdk.h"

extern Gfx *D_8010C574;
extern s32 D_800DE888_de;

extern void func_80268CE0_de(s32 arg0);
extern void func_8026925C_de(s32 arg0);

void func_802A9234_de(s32 color) {
    gDPPipeSync(D_8010C574++);
    gDPSetCycleType(D_8010C574++, G_CYC_2CYCLE);
    func_80268CE0_de(0x1B);
    func_8026925C_de(0x19);
    {
        Gfx *cmd = D_8010C574++;
        gDPSetEnvColor(cmd, 255, 255, 255, color);
    }
    gSPTexture(D_8010C574++, 32768, 32768, 0, 0, G_ON);
    gDPSetTextureLUT(D_8010C574++, G_TT_NONE);
    gDPSetTexturePersp(D_8010C574++, G_TP_NONE);
    if (D_800DE888_de == 0) { gDPSetTextureFilter(D_8010C574++, G_TF_POINT); } else { gDPSetTextureFilter(D_8010C574++, G_TF_BILERP); }
}
