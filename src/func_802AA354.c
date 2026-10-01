#include "unbake_gbi.h"
#include "basetypes.h"
#include "n64sdk.h"

#include "basetypes.h"
extern Gfx *D_80110634;
#define S(v,s) ((u32)(v) << (s))
#define S12(v,s) (((u32)(v) & 0xFFF) << (s))
#define S9(v,s) (((u32)(v) & 0x1FF) << (s))
#define S16(v,s) (((u32)(v) & 0xFFFF) << (s))
void func_802AA354(void *pTexture, void *pOpacity, int XPos, int YPos, int TextureWidth, int TextureHeight) {
    { gDPSetTextureImage(D_80110634++, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)pOpacity); gDPSetTile(D_80110634++, G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPLoadSync(D_80110634++); gDPLoadBlock(D_80110634++, G_TX_LOADTILE, 0, 0, (u32)((((((TextureWidth*TextureHeight+3)>>2)-1)<2047?(((TextureWidth*TextureHeight+3)>>2)-1):2047))), (u32)((((1<<11)+(1>(TextureWidth/16)?1:(TextureWidth/16))-1)/(1>(TextureWidth/16)?1:(TextureWidth/16))))); gDPPipeSync(D_80110634++); gDPSetTile(D_80110634++, G_IM_FMT_I, G_IM_SIZ_4b, (u32)(((((TextureWidth>>1)+7)>>3))), 256, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPSetTileSize(D_80110634++, G_TX_RENDERTILE, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2))); }
    { gDPSetTextureImage(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, (u32)pTexture); gDPSetTile(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPLoadSync(D_80110634++); gDPLoadBlock(D_80110634++, G_TX_LOADTILE, 0, 0, (u32)((((TextureWidth*TextureHeight-1)<2047?(TextureWidth*TextureHeight-1):2047))), (u32)((((1<<11)+(1>(TextureWidth*2/8)?1:(TextureWidth*2/8))-1)/(1>(TextureWidth*2/8)?1:(TextureWidth*2/8))))); gDPPipeSync(D_80110634++); gDPSetTile(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_16b, (u32)((((TextureWidth*2)+7)>>3)), 0, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPSetTileSize(D_80110634++, G_TX_RENDERTILE, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2))); }
    gDPSetTile(D_80110634++, G_IM_FMT_I, G_IM_SIZ_4b, (u32)((TextureWidth/16)), 256, 1, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
    gDPSetTileSize(D_80110634++, 1, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2)));
    { Gfx *g=D_80110634++; g->words.w0=S(0xe4,24)|S12((XPos+TextureWidth)<<2,12)|S12((YPos+TextureHeight)<<2,0); g->words.w1=S12(XPos<<2,12)|S12(YPos<<2,0); gDPHalf1(D_80110634++, 0); gDPHalf2(D_80110634++, (((u32)((1<<10)) & 0xFFFF) << ((16)))|(((u32)((1<<10)) & 0xFFFF) << ((0)))); }
}
