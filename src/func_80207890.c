#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);
extern s32 func_80285F28(void *, void *);
extern s32 D_8011FE88;

void func_80207890(void *arg0, void *arg1) {
    *(s8 *)((char *)arg1 + 0x37) = 0;
    func_80214178(arg0, arg1, 0);
    if (*(s8 *)((char *)arg1 + 0x94) == 1) {
        *(u16 *)((char *)arg1 + 0x98) = *(u16 *)((char *)arg1 + 0x96);
        func_80214178(arg0, arg1, 4);
    }
    if (func_80285F28(&D_8011FE88, arg0) == 0) {
        *(s32 *)((char *)arg0 + 0x100) &= ~0x100;
    }
}
