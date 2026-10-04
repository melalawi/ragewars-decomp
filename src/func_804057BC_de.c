#include "span_16E000/code_80405454.h"
#include "types.h"

/* Returns one when a tilde appears among the first n + 1 bytes of a string, otherwise zero. */
s32 func_804057BC_de(u8 *text, s32 count) {
    do {
        if (*text++ == '~') {
            return 1;
        }
    } while (--count != -1);
    return 0;
}
