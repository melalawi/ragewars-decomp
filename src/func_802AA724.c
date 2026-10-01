#include "unbake_gbi.h"
/* Loads texture and opacity tiles and draws a scaled rectangle clipped to the screen origin. */
#include "basetypes.h"
#include "n64sdk.h"

#include "basetypes.h"
extern Gfx *D_80110634;
#define MAX(a,b) ((b)>(a)?(b):(a))
#define MIN(a,b) ((b)<(a)?(b):(a))
#define S(v,s) ((u32)(v) << (s))
#define S12(v,s) (((u32)(v) & 0xFFF) << (s))
#define S9(v,s) (((u32)(v) & 0x1FF) << (s))
#define S16(v,s) (((u32)(v) & 0xFFFF) << (s))
extern float D_800CB348;
void func_802AA724(void *pTexture, void *pOpacity, float XPos, float YPos, int TextureWidth, int TextureHeight, float ScaleX, float ScaleY) {
 int dsdx=1024,dtdy; int xl,yl,xh,yh;
 if(ScaleX!=0.0f) dsdx=dsdx/ScaleX;
 dtdy=1024;
 if(ScaleY!=0.0f) dtdy=dtdy/ScaleY;
 xl=XPos*D_800CB348; xh=(XPos+TextureWidth*ScaleX)*D_800CB348;
 yl=YPos*D_800CB348; yh=(YPos+TextureHeight*ScaleY)*D_800CB348;

    { gDPSetTextureImage(D_80110634++, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)pOpacity); gDPSetTile(D_80110634++, G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPLoadSync(D_80110634++); gDPLoadBlock(D_80110634++, G_TX_LOADTILE, 0, 0, (u32)((((((TextureWidth*TextureHeight+3)>>2)-1)<2047?(((TextureWidth*TextureHeight+3)>>2)-1):2047))), (u32)((((1<<11)+(1>(TextureWidth/16)?1:(TextureWidth/16))-1)/(1>(TextureWidth/16)?1:(TextureWidth/16))))); gDPPipeSync(D_80110634++); gDPSetTile(D_80110634++, G_IM_FMT_I, G_IM_SIZ_4b, (u32)(((((TextureWidth>>1)+7)>>3))), 256, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPSetTileSize(D_80110634++, G_TX_RENDERTILE, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2))); }
    { gDPSetTextureImage(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, (u32)pTexture); gDPSetTile(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPLoadSync(D_80110634++); gDPLoadBlock(D_80110634++, G_TX_LOADTILE, 0, 0, (u32)((((TextureWidth*TextureHeight-1)<2047?(TextureWidth*TextureHeight-1):2047))), (u32)((((1<<11)+(1>(TextureWidth*2/8)?1:(TextureWidth*2/8))-1)/(1>(TextureWidth*2/8)?1:(TextureWidth*2/8))))); gDPPipeSync(D_80110634++); gDPSetTile(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_16b, (u32)((((TextureWidth*2)+7)>>3)), 0, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0); gDPSetTileSize(D_80110634++, G_TX_RENDERTILE, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2))); }
    gDPSetTile(D_80110634++, G_IM_FMT_I, G_IM_SIZ_4b, (u32)((TextureWidth/16)), 256, 1, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
    gDPSetTileSize(D_80110634++, 1, 0, 0, (u32)(((TextureWidth-1)<<2)), (u32)(((TextureHeight-1)<<2)));
    { Gfx *g=D_80110634++;
      g->words.w0=S(0xe4,24)|S12(((short)xh>0?(short)xh:0),12)|S12(((short)yh>0?(short)yh:0),0);
      g->words.w1=S12(((short)xl>0?(short)xl:0),12)|S12(((short)yl>0?(short)yl:0),0);
    }
    gDPHalf1(D_80110634++, (((u32)((((short)xl<0 ? ((short)dsdx<0 ? -(((((short)xl*(short)dsdx)>>7))>((0))?((((short)xl*(short)dsdx)>>7)):((0))) : -(((((short)xl*(short)dsdx)>>7))<((0))?((((short)xl*(short)dsdx)>>7)):((0)))) : 0))) & 0xFFFF) << ((16)))
      | (((u32)(((yl<0 ? ((short)dtdy<0 ? -(((((short)yl*(short)dtdy)>>7))>((0))?((((short)yl*(short)dtdy)>>7)):((0))) : -(((((short)yl*(short)dtdy)>>7))<((0))?((((short)yl*(short)dtdy)>>7)):((0)))) : 0))) & 0xFFFF) << ((0))));
    gDPHalf2(D_80110634++, (((u32)((dsdx)) & 0xFFFF) << ((16)))|(((u32)((dtdy)) & 0xFFFF) << ((0))));
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C60E8_4 = 4.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB348_4 = 4.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6458_4 = 4.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6498_4 = 4.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C61B8_4 = 4.0f;
#endif
