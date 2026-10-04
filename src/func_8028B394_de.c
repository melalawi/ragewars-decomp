#include "common/types.h"
#include "span_1000/code_80286050.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);






s32 func_8028B394_de(void *arg0, s32 arg1) {
    s32 raw;
    s32 base;

    raw = func_8028FDB4_de(((func_8028B370_S0 *)arg0)->unk6C, 2);
    base = raw + 8;
    if (arg1 < 0 || arg1 >= ((func_80203E78_S1 *)((raw)))->unk4) {
        return 0;
    }
    return base + (arg1 << 5);
}
