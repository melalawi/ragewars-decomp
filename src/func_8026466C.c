#include "basetypes.h"

extern u8 D_8010FBE3[];

s32 func_8026466C(void) {
    s32 i = 0;
    while (1) {
        if (!(((D_8010FBE3[i * 4] >> 3) ^ 1) & 1)) {
            i += 1;
            if (i >= 4) {
                return 0;
            }
        } else {
            return 1;
        }
    }
}
