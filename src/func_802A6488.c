#include "unbake_gbi.h"
#include "basetypes.h"
#include "n64sdk.h"

#include "basetypes.h"

extern Gfx *D_80110634;
extern f32 D_800CB020;
extern char D_800D14B0;
extern char D_800D2F18;
extern char D_801469A0;
extern void func_8026D8F8(void);
extern void func_80296FF8(void);

void func_802A6488(u32 arg0) {
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
    local.matrix[5] = D_800CB020;

    cmd = D_80110634++;
    gDPPipeSync(cmd);
    cmd = D_80110634++;
    gDPSetCycleType(cmd, G_CYC_2CYCLE);
    cmd = D_80110634++;
    gDPSetTextureImage(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)&D_800D14B0);
    cmd = D_80110634++;
    gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_CLAMP, 0, 0, G_TX_CLAMP, 0, 0);
    cmd = D_80110634++;
    gDPLoadSync(cmd);
    cmd = D_80110634++;
    gDPLoadBlock(cmd, G_TX_LOADTILE, 0, 0, 127, 1024);
    cmd = D_80110634++;
    gDPPipeSync(cmd);
    cmd = D_80110634++;
    gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_8b, 2, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 0, 0, G_TX_CLAMP, 0, 0);
    cmd = D_80110634++;
    gDPSetTileSize(cmd, G_TX_RENDERTILE, 0, 0, 60, 60);
    cmd = D_80110634++;
    gDPSetPrimColor(cmd, 255, 255, 200, 0, 0, 150);
    cmd = D_80110634++;
    gSPDisplayList(cmd, (u32)&D_800D2F18);
    cmd = D_80110634++;
    gSPMatrix(cmd, arg0, G_MTX_LOAD);
    cmd = D_80110634++;
    gSPVertex(cmd, (u32)&D_801469A0, 4, 0);
    cmd = D_80110634++;
    gSP2Triangles(cmd, 0, 1, 2, 0, 2, 3, 0, 0);

    func_8026D8F8();
    func_80296FF8();
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5DC0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB020_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6130_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6170_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5E90_4 = 1.0f;
#endif
