#include "types.h"

/* 802BEDB0 loads the sign-bit threshold for each coefficient width.
 * ROM D9FA4..D9FC6. */
u16 D_800D5374[17] = {
    0, 1, 2, 4, 8, 16, 32, 64,
    128, 256, 512, 1024, 2048, 4096, 8192, 16384,
    32768,
};
