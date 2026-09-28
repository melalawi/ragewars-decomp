#include "basetypes.h"

extern unsigned char D_8010F308[];

s32 func_80264748(void) {
    s32 i = 0;
    while (1) {
        if (D_8010F308[i] == 0) {
            i += 1;
            if (i >= 4) {
                return 0;
            }
        } else {
            return 1;
        }
    }
}
