#include "types.h"

/* 802BEDB0 loads halfword masks by code width before extracting packed coefficients.
 * ROM D9F80..D9FA2. */
u16 D_800D5350[17] = {
    0, 1, 3, 7, 15, 31, 63, 127,
    255, 511, 1023, 2047, 4095, 8191, 16383, 32767,
    65535,
};
