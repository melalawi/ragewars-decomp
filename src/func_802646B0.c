#include "basetypes.h"

extern u8 D_8010FBE3[];

s32 func_802646B0(void) {
    s32 count;
    s32 i;

    count = 0;
    i = 0;
    do {
        if (((D_8010FBE3[i * 4] >> 3) ^ 1) & 1) {
            count += 1;
        }
        i += 1;
    } while (i < 4);
    return count;
}
