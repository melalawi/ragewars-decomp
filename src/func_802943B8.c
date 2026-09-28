#include "basetypes.h"

extern void func_80293318(void *arg0, void *arg1, void *arg2);
extern void func_80286A78(void *, void *, void *);
extern void func_80299368(s32 arg0);
extern void func_8025E2F4(s32 arg0);
extern s32 D_8011FE88;
extern s32 D_8014694C;

void func_802943B8(void *arg0) {
    func_80293318(arg0, 0, 0);
    func_80286A78(&D_8011FE88, 0, 0);
    D_8014694C = 0;
    func_80299368(0x18);
    func_8025E2F4(0x34);
}
