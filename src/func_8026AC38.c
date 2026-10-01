#include "unbake_gbi.h"
#include "basetypes.h"
#include "n64sdk.h"

#include "basetypes.h"

extern Gfx *D_80110634;
extern char D_44BDD0;
extern u32 D_800D15D4;
extern void func_80296FF8(void);
extern s32 func_8026925C(s32);

void func_8026AC38(void) {
    Gfx *cmd;

    func_80296FF8();

    cmd = D_80110634++;
    gDPSetTextureImage(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)&D_44BDD0);
    cmd = D_80110634++;
    gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP, 5, 0, G_TX_WRAP, 5, 0);
    cmd = D_80110634++;
    gDPLoadSync(cmd);
    cmd = D_80110634++;
    gDPLoadBlock(cmd, G_TX_LOADTILE, 0, 0, 255, 1024);
    cmd = D_80110634++;
    gDPPipeSync(cmd);
    cmd = D_80110634++;
    gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, G_TX_RENDERTILE, 0, G_TX_WRAP, 5, 0, G_TX_WRAP, 5, 0);
    cmd = D_80110634++;
    gDPSetTileSize(cmd, G_TX_RENDERTILE, 0, 0, 124, 124);
    cmd = D_80110634++;
    gSPTexture(cmd, 2048, 2048, 0, 0, G_ON);
    cmd = D_80110634++;
    gDPSetTextureLUT(cmd, G_TT_NONE);
    cmd = D_80110634++;
    gSPGeometryMode(cmd, 0, D_800D15D4 | 0x00260404);

    func_8026925C(0x1D);
}
