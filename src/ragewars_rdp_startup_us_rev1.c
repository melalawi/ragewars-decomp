#include "types.h"
#include "n64sdk.h"
#include "gbi.h"

/* RDP startup state, used by the renderer through D_800CBCF0_de.
 * ROM D1B40..D1BA0, VMA 800D0F40: twelve F3DEX2 commands. */
Gfx D_800CBCF0_de[12] = {
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_PIPELINE, 1, G_PM_NPRIMITIVE),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetTextureDetail(G_TD_CLAMP),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    gsDPSetCombineKey(G_CK_NONE),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsDPPipeSync(),
    gsSPEndDisplayList()
};
typedef char rdp_startup_size[(sizeof(D_800CBCF0_de) == 96) ? 1 : -1];
