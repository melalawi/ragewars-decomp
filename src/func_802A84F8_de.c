#include "span_1000/code_802A776C.h"
#include "span_1000/code_802AB720.h"
#include "span_C76B0/data.h"
#include "abi.h"
#include "types.h"
#include "n64sdk.h"
#include "gbi.h"


extern Gfx *D_8010C574;
extern s32 D_801377B8[2];
extern s32 D_80147150;

extern s32 func_802AADBC_de(void);
extern void func_80268CE0_de(s32 arg0);
extern s32 func_8026925C_de(s32);
extern void func_802AAB3C_de(s32 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);


void func_802A84F8_de(void) {
    s32 texture;

    texture = func_802AADBC_de();
    if (texture != 0) {

        {
            Gfx *cmd;
            cmd = D_8010C574++;
            gDPPipeSync(cmd);
            cmd = D_8010C574++;
            gDPSetCycleType(cmd, G_CYC_2CYCLE);
        }

        func_80268CE0_de(0x1A);
        func_8026925C_de(0x15);

        D_80147150 = 0;
        {
        Gfx *cmd;
        cmd = D_8010C574++;
        gSPTexture(cmd, 32768, 32768, 0, 0, G_ON);
        cmd = D_8010C574++;
        gDPSetTextureLUT(cmd, G_TT_NONE);
        cmd = D_8010C574++;
        gDPSetTexturePersp(cmd, G_TP_NONE);
        cmd = D_8010C574++;
        gDPSetTextureFilter(cmd, G_TF_BILERP);
        cmd = D_8010C574++;
        gDPSetTextureImage(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)texture);
        cmd = D_8010C574++;
        gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
        cmd = D_8010C574++;
        gDPLoadSync(cmd);
        cmd = D_8010C574++;
        gDPLoadBlock(cmd, G_TX_LOADTILE, 0, 0, 143, 2048);
        cmd = D_8010C574++;
        gDPPipeSync(cmd);
        cmd = D_8010C574++;
        gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
        cmd = D_8010C574++;
        gDPSetTileSize(cmd, G_TX_RENDERTILE, 0, 0, 92, 92);
        cmd = D_8010C574++;
        gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_4b, 0, 0, 1, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
        cmd = D_8010C574++;
        gDPSetTileSize(cmd, 1, 0, 0, 60, 60);
        }

        func_802AAB3C_de(0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C);
        func_802AAB68_de(D_800C5FB0_de, D_800C5FB0_de);
        D_801377B8[0] = 2;
        D_801377B8[1] = 2;
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
