#include "gfx.h"
#include "types.h"
#include "common/types_1dc8418c21db.h"
#include "n64sdk.h"
#include "gbi.h"

/* Particle render-state lists using the shared runtime vertices.
 * ROM D3AC0..D3B18. */
extern UnitVtx D_801469A0[4];

Gfx ragewars_particle_state_decal_us_rev1[11] = {
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTextureL(0x8000, 0x8000, 0, 255, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN, 0),
    gsSPGeometryMode(0, G_SHADING_SMOOTH | G_FOG | G_SHADE),
    gsDPSetCombineLERP(0, 0, 0, 0, TEXEL0, 0, PRIMITIVE, 0,
                       0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_DECAL2),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RNX, FRUSTRATIO_1),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RNY, FRUSTRATIO_1),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RPX, 0xFFFF),
    gsSPMoveWord(G_MW_CLIP, G_MWO_CLIP_RPY, 0xFFFF),
    gsSPEndDisplayList()
};
