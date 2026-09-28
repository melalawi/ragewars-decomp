#include "basetypes.h"

extern s32 func_80285F28(void *, void *);
extern s32 func_80214178(void *, void *, s32);
extern s32 D_8011FE88;

void func_8020524C(void *arg0, void *arg1) {
    if (func_80285F28(&D_8011FE88, arg0) == 1) {
        func_80214178(arg0, arg1, 1);
    } else {
        func_80214178(arg0, arg1, 0);
        *(s32 *)((char *)arg0 + 0x100) |= 0x10000;
    }
}
