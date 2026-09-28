#include "basetypes.h"

/* Returns 0x480 when the halfword a record starts with is 3, otherwise zero. */
s32 func_80442E48(s16 *record) {
    if (*record == 3) {
        return 0x480;
    }
    return 0;
}
