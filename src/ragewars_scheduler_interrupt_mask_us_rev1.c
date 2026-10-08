#include "types.h"

/* 802BB3D0 clears requested interrupt bits. Context restore combines
 * the low CPU status mask and upper RCP mask with the saved thread state.
 * ROM D9E88..D9E8C. */
u32 D_800D5258 = 0x003FFF01U;
