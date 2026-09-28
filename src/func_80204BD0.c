#include "basetypes.h"

extern s32 func_80285F28(void *, void *);
extern s32 func_80214178(void *, void *, s32);
extern s32 D_8011FE88;

void func_80204BD0(void *arg0, void *arg1) {
    s32 different = func_80285F28(&D_8011FE88, arg0) != 1;

    if (different == 0) {
        func_80214178(arg0, arg1, 0);
    } else {
        func_80214178(arg0, arg1, 1);
    }
}
