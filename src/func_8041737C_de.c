#include "gfx.h"
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


extern Gfx *D_80110634;
extern void *D_800E32D8;
extern s32 D_800E32E4;

static inline void sync(void) {
    Gfx *cmd;

    if (D_800E32E4 == 0) {
        D_800E32E4 = 1;
        cmd = D_80110634++;
        gDPPipeSync(cmd);
    }
}

s32 func_8041737C_de(s32 bits, void *palette) {
    s32 result;

    result = 1;
    if (D_800E32D8 != palette) {
        D_800E32D8 = palette;
        sync();
        if (bits == 4) {
            gDPSetTextureLUT(D_80110634++, G_TT_RGBA16);
            gDPSetTextureImage(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, (unsigned int)palette);
            gDPTileSync(D_80110634++);
            gDPSetTile(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
            gDPLoadSync(D_80110634++);
            gDPLoadTLUTCmd(D_80110634++, G_TX_LOADTILE, 15);
            gDPPipeSync(D_80110634++);
        } else if (bits == 8) {
            gDPSetTextureLUT(D_80110634++, G_TT_RGBA16);
            gDPSetTextureImage(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, (unsigned int)palette);
            gDPTileSync(D_80110634++);
            gDPSetTile(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
            gDPLoadSync(D_80110634++);
            gDPLoadTLUTCmd(D_80110634++, G_TX_LOADTILE, 255);
            gDPPipeSync(D_80110634++);
        } else if (bits == 16) gDPSetTextureLUT(D_80110634++, G_TT_NONE);
        result = 0;
    }
    return result;
}
