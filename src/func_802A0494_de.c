#include "span_1000/code_802A137C.h"
#include "types.h"
#define NULL ((void *)0)

/** In-place ASCII-uppercase a NUL-terminated string; NULL-safe. */
u8 *func_802A0494_de(u8 *arg0) {
    u8 *var_v1;
    u8 temp_a1;

    var_v1 = arg0;
    if (arg0 == 0) {
        return 0;
    }
    if (*arg0 != 0) {
        do {
            temp_a1 = *var_v1;
            if ((u32)(temp_a1 - 0x61) < 0x1AU) {
                *var_v1 = temp_a1 - 0x20;
            }
            var_v1 += 1;
        } while (*var_v1 != 0);
    }
    return arg0;
}
