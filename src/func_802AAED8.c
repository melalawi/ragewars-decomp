#include "unbake_gbi.h"
/* Appends display-list commands to D_80110634 that load a 4-bit texture block of the given size and draw it as a texture rectangle at a floating-point position, stretched by the given horizontal and vertical scales with the texture steps divided by them. Adapted from func_802AACC0 with the position made floating point, the rectangle corners scaled by D_800CB34C and the scale factors applied to the extent and the texture step. */
#include "basetypes.h"
#include "n64sdk.h"

#include "basetypes.h"
extern Gfx *D_80110634;
extern f32 D_800CB34C;
#define S(v,s) ((u32)(v) << (s))
#define S12(v,s) (((u32)(v) & 0xFFF) << (s))
#define S9(v,s) (((u32)(v) & 0x1FF) << (s))
#define S16(v,s) (((u32)(v) & 0xFFFF) << (s))
void func_802AAED8(void *pTexture, f32 XPos, f32 YPos, int TextureWidth, int TextureHeight, f32 ScaleX, f32 ScaleY) {
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
    xl = XPos * D_800CB34C;
    xh = (XPos + TextureWidth * ScaleX) * D_800CB34C;
    yl = YPos * D_800CB34C;
    yh = (YPos + TextureHeight * ScaleY) * D_800CB34C;
    { gDPSetTextureImage(D_80110634++, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)pTexture); gDPSetTile(D_80110634++, G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPLoadSync(D_80110634++); gDPLoadBlock(D_80110634++, G_TX_LOADTILE, 0, 0, (u32)((((((TextureWidth*TextureHeight+3)>>2)-1)<2047?(((TextureWidth*TextureHeight+3)>>2)-1):2047))), (u32)((((1<<11)+(1>(TextureWidth/16)?1:(TextureWidth/16))-1)/(1>(TextureWidth/16)?1:(TextureWidth/16))))); gDPPipeSync(D_80110634++); gDPSetTile(D_80110634++, G_IM_FMT_I, G_IM_SIZ_4b, (u32)(((((TextureWidth>>1)+7)>>3))), 256, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPSetTileSize(D_80110634++, G_TX_RENDERTILE, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2))); }
    { Gfx *g=D_80110634++; g->words.w0=S(0xe4,24)|S12(xh,12)|S12(yh,0); g->words.w1=S12(xl,12)|S12(yl,0); gDPHalf1(D_80110634++, 0); gDPHalf2(D_80110634++, (((u32)((dsdx)) & 0xFFFF) << ((16)))|(((u32)((dtdy)) & 0xFFFF) << ((0)))); }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C60EC_4 = 4.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB34C_4 = 4.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C645C_4 = 4.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C649C_4 = 4.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C61BC_4 = 4.0f;
#endif
