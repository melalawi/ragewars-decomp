#include "types.h"
#include "n64sdk.h"
#include "gbi.h"

/* Texture load, tile bounds and mip/detail settings.
 * ROM D1DD0..D1E68; all dimensions use the GBI quarter-texel units. */
Gfx ragewars_texture_intensity_mip_us_rev1[19] = {
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0),
    gsDPLoadBlock(7, 0, 0, 1408, 0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_WRAP, 6, 0, G_TX_WRAP, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 256, 1, 0, G_TX_WRAP, 5, 1, G_TX_WRAP, 5, 1),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 320, 2, 0, G_TX_WRAP, 4, 2, G_TX_WRAP, 4, 2),
    gsDPSetTileSize(2, 0, 0, 60, 60),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 336, 3, 0, G_TX_WRAP, 3, 3, G_TX_WRAP, 3, 3),
    gsDPSetTileSize(3, 0, 0, 28, 28),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 344, 4, 0, G_TX_WRAP, 2, 4, G_TX_WRAP, 2, 4),
    gsDPSetTileSize(4, 0, 0, 12, 12),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 348, 5, 0, G_TX_WRAP, 1, 5, G_TX_WRAP, 1, 5),
    gsDPSetTileSize(5, 0, 0, 4, 4),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 350, 6, 0, G_TX_WRAP, 0, 6, G_TX_WRAP, 0, 6),
    gsDPSetTileSize(6, 0, 0, 0, 0),
    gsDPSetTextureDetail(G_TD_CLAMP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList()
};
