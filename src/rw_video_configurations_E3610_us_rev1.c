#include "types.h"

/* Native selector copies all five words to display/framebuffer globals,
 * in this order: D_800DE898,D_800CC370,D_800CC374,D_800CC378,D_800CC37C.
 * First three reachable modes, as proven by both region modulo bounds. */
typedef struct RwVideoConfiguration { s32 framebufferFormat; s32 settingCC370; s32 settingCC374; s32 settingCC378; s32 settingCC37C; } RwVideoConfiguration;
RwVideoConfiguration rw_video_configurations_E3610_us_rev1[3] = {
    {1, 1, 1, 1, 1},
    {0, 0, 0, 1, 0},
    {0, 0, 0, 1, 0},
};
