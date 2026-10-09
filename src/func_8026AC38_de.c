#include "span_1000/code_8026AC38.h"
#include "span_1000/code_80296014.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"




extern Gfx *D_80110634;
extern char D_0044B180;
extern u32 D_800CC384;

extern s32 func_8026925C_de(s32);

void func_8026AC38_de(void) {
    Gfx *cmd;

    func_80295FF4_de();

    cmd = D_80110634++;
    gDPSetTextureImage(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)&D_0044B180);
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
    gSPGeometryMode(cmd, 0, D_800CC384 | 0x00260404);

    func_8026925C_de(0x1D);
}
