#include "span_1000/code_802A776C.h"
#include "abi.h"
#include "gbi.h"
/* Appends display-list commands to D_8010C574 that load a 4-bit texture block of the given size and draw it as a texture rectangle at the given position. Adapted from func_802A9364_de with the palette block and the second texture block removed and its first block's image pointer taken from the texture argument. */
#include "types.h"
#include "n64sdk.h"

#include "types.h"
extern Gfx *D_8010C574;
#define S(v,s) ((u32)(v) << (s))
#define S12(v,s) (((u32)(v) & 0xFFF) << (s))
#define S9(v,s) (((u32)(v) & 0x1FF) << (s))
#define S16(v,s) (((u32)(v) & 0xFFFF) << (s))
void func_802A9CD0_de(void *pTexture, int XPos, int YPos, int TextureWidth, int TextureHeight) {
    { gDPSetTextureImage(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)pTexture); gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPLoadSync(D_8010C574++); gDPLoadBlock(D_8010C574++, G_TX_LOADTILE, 0, 0, (u32)((((((TextureWidth*TextureHeight+3)>>2)-1)<2047?(((TextureWidth*TextureHeight+3)>>2)-1):2047))), (u32)((((1<<11)+(1>(TextureWidth/16)?1:(TextureWidth/16))-1)/(1>(TextureWidth/16)?1:(TextureWidth/16))))); gDPPipeSync(D_8010C574++); gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_4b, (u32)(((((TextureWidth>>1)+7)>>3))), 256, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPSetTileSize(D_8010C574++, G_TX_RENDERTILE, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2))); }
    { Gfx *g=D_8010C574++; gDPTexRect(g, XPos<<2, YPos<<2, (XPos+TextureWidth)<<2, (YPos+TextureHeight)<<2, 0); gDPHalf1(D_8010C574++, 0); gDPHalf2(D_8010C574++, (((u32)((1<<10)) & 0xFFFF) << ((16)))|(((u32)((1<<10)) & 0xFFFF) << ((0)))); }
}
