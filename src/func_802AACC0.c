/* Appends display-list commands to D_80110634 that load a 4-bit texture block of the given size and draw it as a texture rectangle at the given position. Adapted from func_802AA354 with the palette block and the second texture block removed and its first block's image pointer taken from the texture argument. */
typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"
extern Gfx *D_80110634;
#define S(v,s) ((u32)(v) << (s))
#define S12(v,s) (((u32)(v) & 0xFFF) << (s))
#define S9(v,s) (((u32)(v) & 0x1FF) << (s))
#define S16(v,s) (((u32)(v) & 0xFFFF) << (s))
void func_802AACC0(void *pTexture, int XPos, int YPos, int TextureWidth, int TextureHeight) {
    { { Gfx *g = D_80110634++; g->words.w0 = S(0xfd,24)|S(4,21)|S(2,19); g->words.w1=(u32)pTexture; } { Gfx *g=D_80110634++; g->words.w0=S(0xf5,24)|S(4,21)|S(2,19)|S(256,0); g->words.w1=S(7,24); } { Gfx *g=D_80110634++; g->words.w0=S(0xe6,24); g->words.w1=0; } { Gfx *g=D_80110634++; g->words.w0=S(0xf3,24); g->words.w1=S(7,24)|S12(((((TextureWidth*TextureHeight+3)>>2)-1)<2047?(((TextureWidth*TextureHeight+3)>>2)-1):2047),12)|S12(((1<<11)+(1>(TextureWidth/16)?1:(TextureWidth/16))-1)/(1>(TextureWidth/16)?1:(TextureWidth/16)),0); } { Gfx *g=D_80110634++; g->words.w0=S(0xe7,24); g->words.w1=0; } { Gfx *g=D_80110634++; g->words.w0=S(0xf5,24)|S(4,21)|S9((((TextureWidth>>1)+7)>>3),9)|S(256,0); g->words.w1=0; } { Gfx *g=D_80110634++; g->words.w0=S(0xf2,24); g->words.w1=S12((TextureWidth-1)<<2,12)|S12((TextureHeight-1)<<2,0); } }
    { Gfx *g=D_80110634++; g->words.w0=S(0xe4,24)|S12((XPos+TextureWidth)<<2,12)|S12((YPos+TextureHeight)<<2,0); g->words.w1=S12(XPos<<2,12)|S12(YPos<<2,0); { Gfx *g=D_80110634++; g->words.w0=0xE1000000; g->words.w1=0; } { Gfx *g=D_80110634++; g->words.w0=0xF1000000; g->words.w1=S16(1<<10,16)|S16(1<<10,0); } }
}
