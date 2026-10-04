#include "span_1000/code_802A776C.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"




extern Gfx *D_8010C574;
extern s32 D_80147150;
extern s32 func_802AADBC_de(void);

void func_802A8800_de(void) {
    Gfx *cmd;
    s32 v0;

    v0 = func_802AADBC_de();
    if (v0 != 0) {
        D_80147150 = 2;
        cmd = D_8010C574++;
        gDPSetTextureImage(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32) v0);
        cmd = D_8010C574++;
        gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, G_TX_LOADTILE, 0, G_TX_WRAP, 3, 0, G_TX_WRAP, 4, 0);
        cmd = D_8010C574++;
        gDPLoadSync(cmd);
        cmd = D_8010C574++;
        gDPLoadBlock(cmd, G_TX_LOADTILE, 0, 0, 31, 2048);
        cmd = D_8010C574++;
        gDPPipeSync(cmd);
        cmd = D_8010C574++;
        gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_4b, 1, 256, G_TX_RENDERTILE, 0, G_TX_WRAP, 3, 0, G_TX_WRAP, 4, 0);
        cmd = D_8010C574++;
        gDPSetTileSize(cmd, G_TX_RENDERTILE, 0, 0, 60, 28);
    }
}
