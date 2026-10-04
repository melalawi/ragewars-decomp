#include "span_1000/code_80204A68.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_80285F58_de(void *, void *);
extern s32 func_80214178_de(void *, void *, s32);
extern s32 D_8011BDC8;




void func_8020524C_de(void *arg0, void *arg1) {
    if (func_80285F58_de(&D_8011BDC8, arg0) == 1) {
        func_80214178_de(arg0, arg1, 1);
    } else {
        func_80214178_de(arg0, arg1, 0);
        ((func_80203C40_S1 *)(arg0))->unk100 |= 0x10000;
    }
}
