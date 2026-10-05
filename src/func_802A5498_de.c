#include "span_1000/code_8026AC38.h"
#include "span_1000/code_80296014.h"
#include "span_1000/code_802A25C4.h"
/* FAKEMATCH: retains inherited volatile storage qualifiers to preserve compiler load/store order; semantic volatility has not been established. */
#include "abi.h"
#include "types.h"
#include "gbi.h"
#include "n64sdk.h"
extern Gfx *D_8010C574;

extern char D_800CC260;
extern char D_800CDCA8;
extern char D_801428E0;



void func_802A5498_de(u32 arg0) {
    struct {
        char pad[144];
        f32 matrix[7];
    } volatile local;
    Gfx *cmd;

    local.matrix[0] = 0.0f;
    local.matrix[1] = 0.0f;
    local.matrix[2] = 0.0f;
    local.matrix[4] = 0.0f;
    local.matrix[6] = 0.0f;
    local.matrix[5] = D_800C5E90_de;

    cmd = D_8010C574++;
    gDPPipeSync(cmd);
    cmd = D_8010C574++;
    gDPSetCycleType(cmd, G_CYC_2CYCLE);
    cmd = D_8010C574++;
    gDPSetTextureImage(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)&D_800CC260);
    cmd = D_8010C574++;
    gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_CLAMP, 0, 0, G_TX_CLAMP, 0, 0);
    cmd = D_8010C574++;
    gDPLoadSync(cmd);
    cmd = D_8010C574++;
    gDPLoadBlock(cmd, G_TX_LOADTILE, 0, 0, 127, 1024);
    cmd = D_8010C574++;
    gDPPipeSync(cmd);
    cmd = D_8010C574++;
    gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_8b, 2, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 0, 0, G_TX_CLAMP, 0, 0);
    cmd = D_8010C574++;
    gDPSetTileSize(cmd, G_TX_RENDERTILE, 0, 0, 60, 60);
    cmd = D_8010C574++;
    gDPSetPrimColor(cmd, 255, 255, 200, 0, 0, 150);
    cmd = D_8010C574++;
    gSPDisplayList(cmd, (u32)&D_800CDCA8);
    cmd = D_8010C574++;
    gSPMatrix(cmd, arg0, G_MTX_LOAD);
    cmd = D_8010C574++;
    gSPVertex(cmd, (u32)&D_801428E0, 4, 0);
    cmd = D_8010C574++;
    gSP2Triangles(cmd, 0, 1, 2, 0, 2, 3, 0, 0);

    func_8026D8F8_de();
    func_80295FF4_de();
}
