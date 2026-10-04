#include "span_1000/code_80204A68.h"
#include "types.h"

extern s32 func_80285F58_de(void *, void *);
extern s32 func_80214178_de(void *, void *, s32);
extern s32 D_8011BDC8;

void func_80204BD0_de(void *arg0, void *arg1) {
    s32 different = func_80285F58_de(&D_8011BDC8, arg0) != 1;

    if (different == 0) {
        func_80214178_de(arg0, arg1, 0);
    } else {
        func_80214178_de(arg0, arg1, 1);
    }
}
