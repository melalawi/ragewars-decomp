#include "span_1000/code_80286050.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);

void *func_8028B2F8_de(void *arg0, u16 *arg1) {
    s32 base;
    s32 idx;

    if (arg1 == 0) {
        return 0;
    }
    base = func_8028FDB4_de(((struct func_8028B370_S0 *) ((s8 *) arg0))->unk6C, 0) + 8;
    idx = *arg1;
    return (void *)(base + idx * 0x64);
}
