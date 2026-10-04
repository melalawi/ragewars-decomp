#include "span_1000/code_802B7488.h"
extern void *D_800D4070;
extern void func_802B3770_de(void);

void func_802B24A0_de(void *arg0) {
    void **p;

    p = &D_800D4070;
    if (*p == 0) {
        *p = arg0;
        func_802B3770_de();
    }
}
