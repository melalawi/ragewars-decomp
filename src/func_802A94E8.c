#include "unbake_gbi.h"
#include "basetypes.h"
#include "n64sdk.h"

#include "basetypes.h"

extern f32 D_800CB140;
extern Gfx *D_80110634;
extern s32 D_8013B878[2];
extern s32 D_8014D3D0;

extern s32 func_802ABDAC(void);
extern void func_80268CE0(s32 arg0);
extern s32 func_8026925C(s32);
extern void func_802ABB2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_802ABB58(f32 arg0, f32 arg1);

void func_802A94E8(void) {
    s32 texture;
    u32 pipe_sync;

    texture = func_802ABDAC();
    if (texture != 0) {
        pipe_sync = 0xE7000000;

        {
            Gfx *cmd;
            cmd = D_80110634++;
            cmd->words.w0 = pipe_sync;
            cmd->words.w1 = 0;
            cmd = D_80110634++;
            gDPSetCycleType(cmd, G_CYC_2CYCLE);
        }

        func_80268CE0(0x1A);
        func_8026925C(0x15);

        D_8014D3D0 = 0;
        {
        Gfx *cmd;
        cmd = D_80110634++;
        gSPTexture(cmd, 32768, 32768, 0, 0, G_ON);
        cmd = D_80110634++;
        gDPSetTextureLUT(cmd, G_TT_NONE);
        cmd = D_80110634++;
        gDPSetTexturePersp(cmd, G_TP_NONE);
        cmd = D_80110634++;
        gDPSetTextureFilter(cmd, G_TF_BILERP);
        cmd = D_80110634++;
        gDPSetTextureImage(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)texture);
        cmd = D_80110634++;
        gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
        cmd = D_80110634++;
        gDPLoadSync(cmd);
        cmd = D_80110634++;
        gDPLoadBlock(cmd, G_TX_LOADTILE, 0, 0, 143, 2048);
        cmd = D_80110634++;
        cmd->words.w0 = pipe_sync;
        cmd->words.w1 = 0;
        cmd = D_80110634++;
        gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
        cmd = D_80110634++;
        gDPSetTileSize(cmd, G_TX_RENDERTILE, 0, 0, 92, 92);
        cmd = D_80110634++;
        gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_4b, 0, 0, 1, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
        cmd = D_80110634++;
        gDPSetTileSize(cmd, 1, 0, 0, 60, 60);
        }

        func_802ABB2C(0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C);
        func_802ABB58(D_800CB140, D_800CB140);
        D_8013B878[0] = 2;
        D_8013B878[1] = 2;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5EE0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB140_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6250_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6290_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5FB0_4 = 1.0f;
#endif
