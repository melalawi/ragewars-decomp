#include "basetypes.h"

extern void func_8028C138(void *arg0, s32 arg1, s32 *arg2, s32 *arg3);
extern s32 D_8011FE88;

void func_80296DDC(s32 *arg0, s32 arg1) {
    func_8028C138(&D_8011FE88, arg1, arg0, arg0 + 1);
}
