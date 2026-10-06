/* NON_MATCHING: legacy logic/order port; public five-version comparison required. */
#include "abi.h"
#include "span_1000/code_802A8A94.h"
#include "span_C76B0/data.h"
#include "gbi.h"

extern Gfx *D_8010C574;

void func_802A9734_de(void *pTexture, void *pOpacity, float XPos, float YPos, int TextureWidth, int TextureHeight, float ScaleX, float ScaleY) {
 int dsdx=1024,dtdy; int xl,yl,xh,yh;
 if(ScaleX!=0.0f) dsdx=dsdx/ScaleX;
 dtdy=1024;
 if(ScaleY!=0.0f) dtdy=dtdy/ScaleY;
 xl=XPos*D_800C61B8_de; xh=(XPos+TextureWidth*ScaleX)*D_800C61B8_de;
 yl=YPos*D_800C61B8_de; yh=(YPos+TextureHeight*ScaleY)*D_800C61B8_de;

    { gDPSetTextureImage(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)pOpacity); gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPLoadSync(D_8010C574++); gDPLoadBlock(D_8010C574++, G_TX_LOADTILE, 0, 0, (u32)((((((TextureWidth*TextureHeight+3)>>2)-1)<2047?(((TextureWidth*TextureHeight+3)>>2)-1):2047))), (u32)((((1<<11)+(1>(TextureWidth/16)?1:(TextureWidth/16))-1)/(1>(TextureWidth/16)?1:(TextureWidth/16))))); gDPPipeSync(D_8010C574++); gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_4b, (u32)(((((TextureWidth>>1)+7)>>3))), 256, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPSetTileSize(D_8010C574++, G_TX_RENDERTILE, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2))); }
    { gDPSetTextureImage(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, (u32)pTexture); gDPSetTile(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPLoadSync(D_8010C574++); gDPLoadBlock(D_8010C574++, G_TX_LOADTILE, 0, 0, (u32)((((TextureWidth*TextureHeight-1)<2047?(TextureWidth*TextureHeight-1):2047))), (u32)((((1<<11)+(1>(TextureWidth*2/8)?1:(TextureWidth*2/8))-1)/(1>(TextureWidth*2/8)?1:(TextureWidth*2/8))))); gDPPipeSync(D_8010C574++); gDPSetTile(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, (u32)((((TextureWidth*2)+7)>>3)), 0, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPSetTileSize(D_8010C574++, G_TX_RENDERTILE, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2))); }
    gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_4b, (u32)((TextureWidth/16)), 256, 1, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
    gDPSetTileSize(D_8010C574++, 1, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2)));
    gDPTexRect(D_8010C574++,
        (s16)xl > 0 ? (s16)xl : 0, (s16)yl > 0 ? (s16)yl : 0,
        (s16)xh > 0 ? (s16)xh : 0, (s16)yh > 0 ? (s16)yh : 0,
        G_TX_RENDERTILE);
    gDPHalf1(D_8010C574++, (((u32)((((short)xl<0 ? ((short)dsdx<0 ? -(((((short)xl*(short)dsdx)>>7))>((0))?((((short)xl*(short)dsdx)>>7)):((0))) : -(((((short)xl*(short)dsdx)>>7))<((0))?((((short)xl*(short)dsdx)>>7)):((0)))) : 0))) & 0xFFFF) << ((16)))
      | (((u32)(((yl<0 ? ((short)dtdy<0 ? -(((((short)yl*(short)dtdy)>>7))>((0))?((((short)yl*(short)dtdy)>>7)):((0))) : -(((((short)yl*(short)dtdy)>>7))<((0))?((((short)yl*(short)dtdy)>>7)):((0)))) : 0))) & 0xFFFF) << ((0))));
    gDPHalf2(D_8010C574++, (((u32)((dsdx)) & 0xFFFF) << ((16)))|(((u32)((dtdy)) & 0xFFFF) << ((0))));
}

