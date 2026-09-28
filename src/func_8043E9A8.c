#include "basetypes.h"

/* Toggles one of eight UI checkbox flags in D_801462C8, selected by (arg0[0] - 2) through the
 * jump table jtbl_800E2370 for values 2..9; any other value leaves state unchanged. Returns 0. */

extern char D_801462C8[];

s32 func_8043E9A8(s32 *arg0) {
    char *base;

    switch (arg0[0]) {
        case 2:
            base = D_801462C8;
            base[0x2D] ^= 1;
            break;
        case 3:
            base = D_801462C8;
            base[0x2E] ^= 1;
            break;
        case 4:
            base = D_801462C8;
            base[0x2F] ^= 1;
            break;
        case 5:
            base = D_801462C8;
            base[0x30] ^= 1;
            break;
        case 6:
            base = D_801462C8;
            base[0x31] ^= 1;
            break;
        case 7:
            base = D_801462C8;
            base[0x32] ^= 1;
            break;
        case 8:
            base = D_801462C8;
            base[0x33] ^= 1;
            break;
        case 9:
            base = D_801462C8;
            base[0x35] ^= 1;
            break;
    }
    return 0;
}
