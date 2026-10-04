#include "span_1000/code_80286050.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);

u32 func_8028B350_de(void *arg0, s32 arg1) {
    s32 offset;
    s32 result;

    if (arg1 == 0) {
        return -1;
    }
    offset = func_8028FDB4_de(((struct func_8028B370_S0 *) ((s8 *) arg0))->unk6C, 2) + 8;
    result = arg1 - offset;
    return (u32)result >> 5;
}
