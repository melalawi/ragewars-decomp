#include "unbake_gbi.h"
#include "basetypes.h"
#include "n64sdk.h"

#include "basetypes.h"

extern Gfx *D_80110634;
extern s32 D_8014D3D0;
extern s32 func_802ABDAC(void);

void func_802A9700(void) {
    Gfx *cmd;
    s32 v0;

    v0 = func_802ABDAC();
    if (v0 != 0) {
        D_8014D3D0 = 1;
        cmd = D_80110634++;
        gDPSetTextureImage(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32) v0);
        cmd = D_80110634++;
        gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 3, 0, G_TX_WRAP, 4, 0);
        cmd = D_80110634++;
        gDPLoadSync(cmd);
        cmd = D_80110634++;
        gDPLoadBlock(cmd, G_TX_LOADTILE, 0, 0, 31, 2048);
        cmd = D_80110634++;
        gDPPipeSync(cmd);
        cmd = D_80110634++;
        gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_4b, 1, 256, G_TX_RENDERTILE, 0, G_TX_WRAP, 3, 0, G_TX_WRAP, 4, 0);
        cmd = D_80110634++;
        gDPSetTileSize(cmd, G_TX_RENDERTILE, 0, 0, 60, 28);
    }
}
