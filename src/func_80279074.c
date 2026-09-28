#include "basetypes.h"

extern void func_8028D8E8(void);
extern void func_80402FB4(s32, s32);
extern s32 D_8011FE88;

void func_80279074(s32 arg0) {
    if (D_8011FE88 == 4) {
        func_8028D8E8();
        func_80402FB4(0, arg0);
    }
}
