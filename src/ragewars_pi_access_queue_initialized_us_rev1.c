#include "types.h"

/* 802B9950 creates the PI access queue and sets this flag; the manager
 * checks it before setup. ROM D8FC0..D8FC4. */
s32 D_800D83C0 = 0;
