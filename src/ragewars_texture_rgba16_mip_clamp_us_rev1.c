#include "gfx.h"
#include "types.h"
#include "n64sdk.h"
#include "gbi.h"

/* Texture load, tile bounds and mip/detail settings.
 * ROM D1C20..D1CA0; all dimensions use the GBI quarter-texel units. */
Gfx ragewars_texture_rgba16_mip_clamp_us_rev1[16] = {
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0),
    gsDPLoadBlock(7, 0, 0, 1372, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_MIRROR, 5, 0, G_TX_MIRROR, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 256, 1, 0, G_TX_MIRROR, 4, 1, G_TX_MIRROR, 4, 1),
    gsDPSetTileSize(1, 0, 0, 60, 60),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 320, 2, 0, G_TX_MIRROR, 3, 2, G_TX_MIRROR, 3, 2),
    gsDPSetTileSize(2, 0, 0, 28, 28),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 336, 3, 0, G_TX_MIRROR, 2, 3, G_TX_MIRROR, 2, 3),
    gsDPSetTileSize(3, 0, 0, 12, 12),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 340, 4, 0, G_TX_MIRROR, 1, 4, G_TX_MIRROR, 1, 4),
    gsDPSetTileSize(4, 0, 0, 4, 4),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 342, 5, 0, G_TX_MIRROR, 0, 5, G_TX_MIRROR, 0, 5),
    gsDPSetTileSize(5, 0, 0, 0, 0),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList()
};
