#include "types.h"

/* 802B9BC0 initializes the SI access queue; 802B9C14 lazily initializes
 * it when this flag is clear. ROM D8FD0..D8FD4. */
s32 D_800D83D0 = 0;
