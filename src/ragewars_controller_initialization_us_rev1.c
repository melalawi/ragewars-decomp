#include "types.h"

/* 802B7880 tests and sets this controller initialization flag before setup.
 * Adjacent pointer fields remain unclaimed. ROM D8F70..D8F74. */
s32 D_800D4340 = 0;
