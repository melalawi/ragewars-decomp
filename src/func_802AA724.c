/* Loads texture and opacity tiles and draws a scaled rectangle clipped to the screen origin. */
typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

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

    { { Gfx *g = D_80110634++; g->words.w0 = S(0xfd,24)|S(4,21)|S(2,19); g->words.w1=(u32)pOpacity; } { Gfx *g=D_80110634++; g->words.w0=S(0xf5,24)|S(4,21)|S(2,19)|S(256,0); g->words.w1=S(7,24); } { Gfx *g=D_80110634++; g->words.w0=S(0xe6,24); g->words.w1=0; } { Gfx *g=D_80110634++; g->words.w0=S(0xf3,24); g->words.w1=S(7,24)|S12(((((TextureWidth*TextureHeight+3)>>2)-1)<2047?(((TextureWidth*TextureHeight+3)>>2)-1):2047),12)|S12(((1<<11)+(1>(TextureWidth/16)?1:(TextureWidth/16))-1)/(1>(TextureWidth/16)?1:(TextureWidth/16)),0); } { Gfx *g=D_80110634++; g->words.w0=S(0xe7,24); g->words.w1=0; } { Gfx *g=D_80110634++; g->words.w0=S(0xf5,24)|S(4,21)|S9((((TextureWidth>>1)+7)>>3),9)|S(256,0); g->words.w1=0; } { Gfx *g=D_80110634++; g->words.w0=S(0xf2,24); g->words.w1=S12((TextureWidth-1)<<2,12)|S12((TextureHeight-1)<<2,0); } }
    { { Gfx *g=D_80110634++; g->words.w0=S(0xfd,24)|S(2,19); g->words.w1=(u32)pTexture; } { Gfx *g=D_80110634++; g->words.w0=S(0xf5,24)|S(2,19); g->words.w1=S(7,24); } { Gfx *g=D_80110634++; g->words.w0=S(0xe6,24); g->words.w1=0; } { Gfx *g=D_80110634++; g->words.w0=S(0xf3,24); g->words.w1=S(7,24)|S12(((TextureWidth*TextureHeight-1)<2047?(TextureWidth*TextureHeight-1):2047),12)|S12(((1<<11)+(1>(TextureWidth*2/8)?1:(TextureWidth*2/8))-1)/(1>(TextureWidth*2/8)?1:(TextureWidth*2/8)),0); } { Gfx *g=D_80110634++; g->words.w0=S(0xe7,24); g->words.w1=0; } { Gfx *g=D_80110634++; g->words.w0=S(0xf5,24)|S(2,19)|S9(((TextureWidth*2)+7)>>3,9); g->words.w1=0; } { Gfx *g=D_80110634++; g->words.w0=S(0xf2,24); g->words.w1=S12((TextureWidth-1)<<2,12)|S12((TextureHeight-1)<<2,0); } }
    { Gfx *g=D_80110634++; g->words.w0=S(0xf5,24)|S(4,21)|S9(TextureWidth/16,9)|S(256,0); g->words.w1=S(1,24); }
    { Gfx *g=D_80110634++; g->words.w0=S(0xf2,24); g->words.w1=S(1,24)|S12((TextureWidth-1)<<2,12)|S12((TextureHeight-1)<<2,0); }
    { Gfx *g=D_80110634++;
      g->words.w0=S(0xe4,24)|S12(((short)xh>0?(short)xh:0),12)|S12(((short)yh>0?(short)yh:0),0);
      g->words.w1=S12(((short)xl>0?(short)xl:0),12)|S12(((short)yl>0?(short)yl:0),0);
    }
    { Gfx *g=D_80110634++;
      g->words.w0=0xE1000000;
      g->words.w1=S16(((short)xl<0 ? ((short)dsdx<0 ? -MAX(0,((short)xl*(short)dsdx)>>7) : -MIN(0,((short)xl*(short)dsdx)>>7)) : 0),16)
      | S16((yl<0 ? ((short)dtdy<0 ? -MAX(0,((short)yl*(short)dtdy)>>7) : -MIN(0,((short)yl*(short)dtdy)>>7)) : 0),0);
    }
    { Gfx *g=D_80110634++;g->words.w0=0xF1000000;g->words.w1=S16(dsdx,16)|S16(dtdy,0); }
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
