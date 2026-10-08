#include "types.h"

/* 802BF804 reads sixteen band end indices; the final entry also sets the zero-fill start.
 * ROM D9FC8..D9FE8. */
u16 D_800D5398[16] = {
    4, 8, 12, 18, 25, 33, 44, 53,
    63, 75, 89, 105, 126, 149, 185, 256,
};
