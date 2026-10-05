#include "span_16E000/code_804143D8.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"


/* Makes palette the current texture lookup table for a texture of the given bit depth: returns 1
   when it already is (D_800E32D8); otherwise records it, emits one pipeline sync if none is pending
   and, for 4-bit and 8-bit textures, enables the RGBA16 lookup table and loads the 16 or 256
   palette entries (texture image, tile sync, tile, load sync, load TLUT, pipeline sync), or for
   16-bit textures turns the lookup table off; returns 0. */


extern Gfx *D_8010C574;
extern void *D_800DF288;
extern s32 D_800DF294;

static inline void sync(void) {
    Gfx *cmd;

    if (D_800DF294 == 0) {
        D_800DF294 = 1;
        cmd = D_8010C574++;
        gDPPipeSync(cmd);
    }
}

s32 func_8041737C_de(s32 bits, void *palette) {
    s32 result;

    result = 1;
    if (D_800DF288 != palette) {
        D_800DF288 = palette;
        sync();
        if (bits == 4) {
            gDPSetTextureLUT(D_8010C574++, G_TT_RGBA16);
            gDPSetTextureImage(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, (unsigned int)palette);
            gDPTileSync(D_8010C574++);
            gDPSetTile(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
            gDPLoadSync(D_8010C574++);
            gDPLoadTLUTCmd(D_8010C574++, G_TX_LOADTILE, 15);
            gDPPipeSync(D_8010C574++);
        } else if (bits == 8) {
            gDPSetTextureLUT(D_8010C574++, G_TT_RGBA16);
            gDPSetTextureImage(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, (unsigned int)palette);
            gDPTileSync(D_8010C574++);
            gDPSetTile(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
            gDPLoadSync(D_8010C574++);
            gDPLoadTLUTCmd(D_8010C574++, G_TX_LOADTILE, 255);
            gDPPipeSync(D_8010C574++);
        } else if (bits == 16) gDPSetTextureLUT(D_8010C574++, G_TT_NONE);
        result = 0;
    }
    return result;
}
