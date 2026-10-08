#include "types.h"

/* Animation resource ID: outside both code and weighted-list address ranges.
 * func_80213ED4_de passes this ID to func_80246A08_de; scale, threshold
 * and flags are consumed at the adjacent native offsets20/24/28. */
typedef struct StateResourceAnimation { u32 resourceID; f32 scale; s32 threshold; u32 flags; } StateResourceAnimation;
StateResourceAnimation rw_weapon_state_resource_animation_D0490_us_rev1 = {20100, 1.0f, 0, 0U};
