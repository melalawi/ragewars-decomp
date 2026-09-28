#include "basetypes.h"

/* Returns one when a tilde appears among the first n + 1 bytes of a string, otherwise zero. */
s32 func_804057BC(u8 *text, s32 count) {
    do {
        if (*text++ == '~') {
            return 1;
        }
    } while (--count != -1);
    return 0;
}
