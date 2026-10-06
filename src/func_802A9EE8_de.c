#include "span_1000/code_802A8A94.h"
#include "abi.h"
#include "types.h"
#include "gfx.h"
#include "gbi.h"

/* Appends display-list commands to D_8010C574 that load a 4-bit texture block of the given size and draw it as a texture rectangle at a floating-point position, stretched by the given horizontal and vertical scales with the texture steps divided by them. Adapted from func_802A9CD0_de with the position made floating point, the rectangle corners scaled by D_800C61BC_de and the scale factors applied to the extent and the texture step. */

extern Gfx *D_8010C574;
extern f32 D_800C61BC_de;
void func_802A9EE8_de(void *pTexture, f32 XPos, f32 YPos, int TextureWidth, int TextureHeight, f32 ScaleX, f32 ScaleY) {
    int dsdx;
    int dtdy;
    int xl, yl, xh, yh;

    dsdx = 1 << 10;
    if (ScaleX != 0.0f) {
        dsdx = dsdx / ScaleX;
    }
    dtdy = 1 << 10;
    if (ScaleY != 0.0f) {
        dtdy = dtdy / ScaleY;
    }
    xl = XPos * D_800C61BC_de;
    xh = (XPos + TextureWidth * ScaleX) * D_800C61BC_de;
    yl = YPos * D_800C61BC_de;
    yh = (YPos + TextureHeight * ScaleY) * D_800C61BC_de;
    { gDPSetTextureImage(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)pTexture); gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPLoadSync(D_8010C574++); gDPLoadBlock(D_8010C574++, G_TX_LOADTILE, 0, 0, (u32)((((((TextureWidth*TextureHeight+3)>>2)-1)<2047?(((TextureWidth*TextureHeight+3)>>2)-1):2047))), (u32)((((1<<11)+(1>(TextureWidth/16)?1:(TextureWidth/16))-1)/(1>(TextureWidth/16)?1:(TextureWidth/16))))); gDPPipeSync(D_8010C574++); gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_4b, (u32)(((((TextureWidth>>1)+7)>>3))), 256, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPSetTileSize(D_8010C574++, G_TX_RENDERTILE, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2))); }
    { Gfx *g=D_8010C574++; gDPTexRect(g, xl, yl, xh, yh, 0); gDPHalf1(D_8010C574++, 0); gDPHalf2(D_8010C574++, (((u32)((dsdx)) & 0xFFFF) << ((16)))|(((u32)((dtdy)) & 0xFFFF) << ((0)))); }
}

