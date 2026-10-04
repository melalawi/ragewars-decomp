#include "span_16E000/code_8044239C.h"
#include "types.h"

/* Returns 0x480 when the halfword a record starts with is 3, otherwise zero. */
s32 func_80442CD8_de(s16 *record) {
    if (*record == 3) {
        return 0x480;
    }
    return 0;
}
