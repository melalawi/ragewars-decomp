#include "basetypes.h"

extern s8 D_8011FE88[];

extern s32 func_80285F28(void *arg0, void *arg1);
extern void func_80203C40(void *arg0, void *arg1, s32 arg2);
extern void func_80214178(void *arg0, void *arg1, s32 arg2);

void func_80203C84(void *arg0, void *arg1, s32 arg2) {
    if ((func_80285F28(D_8011FE88, arg0) == 0) &&
        (*(s8 *)((char *)arg1 + 0x34) == 0)) {
        func_80203C40(arg0, arg1, arg2);
        func_80214178(arg0, arg1, 1);
    }
}
