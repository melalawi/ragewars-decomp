#include "gfx.h"
#include "types.h"
#include "common/types_1dc8418c21db.h"
#include "n64sdk.h"
#include "gbi.h"

/* Particle render-state lists using the shared runtime vertices.
 * ROM D3A60..D3AC0. */
extern UnitVtx D_801469A0[4];

Gfx D_800D2E60[12] = {
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x8000, 0x8000, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN, 0),
    gsSPGeometryMode(0, G_SHADING_SMOOTH | G_FOG | G_SHADE),
    gsDPSetCombineLERP(0, 0, 0, 0, TEXEL0, 0, PRIMITIVE, 0,
                       0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2 | CVG_DST_SAVE),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RNX, FRUSTRATIO_1),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RNY, FRUSTRATIO_1),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RPX, 0xFFFF),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RPY, 0xFFFF),
    gsSPVertex(D_801469A0, 4, 0),
    gsSPEndDisplayList()
};
