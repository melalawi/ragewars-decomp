#include "basetypes.h"

extern s32 func_802034A4(void *arg0);
extern s32 func_80214178(void *, void *, s32);

void func_80203B1C(void *arg0, void *arg1) {
    if (func_802034A4(arg0) == 0) {
        func_80214178(arg0, arg1, 0x3E);
    }
}
