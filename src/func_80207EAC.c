#include "basetypes.h"

extern void func_80285D80(void *, void *, s32);
extern s32 D_8011FE88;

void func_80207EAC(void *arg0) {
    func_80285D80(&D_8011FE88, arg0, 1);
    *(s32 *) ((char *) arg0 + 0x100) |= 0x100;
}
