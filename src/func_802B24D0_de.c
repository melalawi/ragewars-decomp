#include "span_1000/code_802B7488.h"
#include "types.h"

extern void *D_800D4070;
extern void func_802B31F0_de(s32 *arg0);

void func_802B24D0_de(s32 *arg0) {
    void **p;

    p = &D_800D4070;
    if (*p != 0) {
        func_802B31F0_de(arg0);
        *p = 0;
    }
}
