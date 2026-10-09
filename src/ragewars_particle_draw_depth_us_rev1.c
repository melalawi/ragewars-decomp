#include "types.h"
#include "common/types_1dc8418c21db.h"
#include "n64sdk.h"
#include "gbi.h"

/* Particle quad lists selected by 8026992C, using the shared runtime vertices.
 * ROM D1E68..D1EF0. */
extern UnitVtx D_801469A0[4];

Gfx D_800CC018_de[17] = {
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
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RNX, FRUSTRATIO_5),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RNY, FRUSTRATIO_5),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RPX, 0xFFFB),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RPY, 0xFFFB),
    gsSPEndDisplayList()
};
