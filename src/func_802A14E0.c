#include "basetypes.h"

/** In-place ASCII-lowercase a NUL-terminated string; NULL-safe. */
u8 *func_802A14E0(u8 *arg0) {
    u8 *var_v1;
    u8 temp_a1;

    var_v1 = arg0;
    if (arg0 == 0) {
        return 0;
    }
    if (*arg0 != 0) {
        do {
            temp_a1 = *var_v1;
            if ((u32)(temp_a1 - 0x41) < 0x1AU) {
                *var_v1 = temp_a1 + 0x20;
            }
            var_v1 += 1;
        } while (*var_v1 != 0);
    }
    return arg0;
}
