#include "basetypes.h"

extern s32 D_8011FE88;
extern void func_80285D80(void *, void *, s32);

void func_802067BC(void *arg0) {
    s32 v = *(s32 *) ((char *) arg0 + 0x100);
    v &= ~0x2000;
    v &= ~0x100;
    *(s32 *) ((char *) arg0 + 0x100) = v;
    func_80285D80(&D_8011FE88, arg0, 1);
}
