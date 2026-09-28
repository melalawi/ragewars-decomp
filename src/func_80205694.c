#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);
extern void func_80285D80(void *, void *, s32);
extern s32 D_8011FE88;

void func_80205694(void *arg0, void *arg1) {
    func_80214178(arg0, arg1, 1);
    func_80285D80(&D_8011FE88, arg0, 1);
}
