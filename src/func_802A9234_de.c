#include "span_1000/code_802A8A94.h"
#include "abi.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"

/* Emits the render-state display-list prologue for a flat colour pass: pipeline sync, one-cycle
   mode, the two combiner/mode presets through func_80268CE0_de and func_8026925C_de, the environment
   colour from the argument with full alpha bits, texture enable and the texture-filter, colour-dither
   and alpha-dither mode words, the alpha dither chosen by D_800DE888_de. Written with the house
   Gfx-packet idiom used by func_8021CBD0_de. */


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

extern Gfx *D_8010C574;
#define S(v,s) ((u32)(v) << (s))
#define S12(v,s) (((u32)(v) & 0xFFF) << (s))
#define S9(v,s) (((u32)(v) & 0x1FF) << (s))
#define S16(v,s) (((u32)(v) & 0xFFFF) << (s))
void func_802A9364_de(void *pTexture, void *pOpacity, int XPos, int YPos, int TextureWidth, int TextureHeight) {
    { gDPSetTextureImage(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)pOpacity); gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPLoadSync(D_8010C574++); gDPLoadBlock(D_8010C574++, G_TX_LOADTILE, 0, 0, (u32)((((((TextureWidth*TextureHeight+3)>>2)-1)<2047?(((TextureWidth*TextureHeight+3)>>2)-1):2047))), (u32)((((1<<11)+(1>(TextureWidth/16)?1:(TextureWidth/16))-1)/(1>(TextureWidth/16)?1:(TextureWidth/16))))); gDPPipeSync(D_8010C574++); gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_4b, (u32)(((((TextureWidth>>1)+7)>>3))), 256, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPSetTileSize(D_8010C574++, G_TX_RENDERTILE, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2))); }
    { gDPSetTextureImage(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, (u32)pTexture); gDPSetTile(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPLoadSync(D_8010C574++); gDPLoadBlock(D_8010C574++, G_TX_LOADTILE, 0, 0, (u32)((((TextureWidth*TextureHeight-1)<2047?(TextureWidth*TextureHeight-1):2047))), (u32)((((1<<11)+(1>(TextureWidth*2/8)?1:(TextureWidth*2/8))-1)/(1>(TextureWidth*2/8)?1:(TextureWidth*2/8))))); gDPPipeSync(D_8010C574++); gDPSetTile(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, (u32)((((TextureWidth*2)+7)>>3)), 0, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPSetTileSize(D_8010C574++, G_TX_RENDERTILE, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2))); }
    gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_4b, (u32)((TextureWidth/16)), 256, 1, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
    gDPSetTileSize(D_8010C574++, 1, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2)));
    { Gfx *g=D_8010C574++; gDPTexRect(g, XPos<<2, YPos<<2, (XPos+TextureWidth)<<2, (YPos+TextureHeight)<<2, 0); gDPHalf1(D_8010C574++, 0); gDPHalf2(D_8010C574++, (((u32)((1<<10)) & 0xFFFF) << ((16)))|(((u32)((1<<10)) & 0xFFFF) << ((0)))); }
}
