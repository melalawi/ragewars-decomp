#include "types.h"

/* Controller-pak initialization is tracked per channel. 802B7FD8 indexes
 * the words with channel << 2 and stores 1 after successful setup. */
u32 D_800D4350[4] = {0, 0, 0, 0};
