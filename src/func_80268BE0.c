#include "basetypes.h"

extern void *func_8028AFE8(void *object, int index);
extern void func_80268C1C(s32 arg0, void *arg1);
extern s32 D_8011FE88;

void *func_80268BE0(s32 arg0, s32 arg1) {
    func_80268C1C(arg0, func_8028AFE8(&D_8011FE88, arg1));
}
