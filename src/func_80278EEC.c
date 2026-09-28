#include "basetypes.h"

extern s32 func_8028BAF8(s8 *arg0, void *arg1, s32 arg2);
extern s32 func_8028C544(s8 *arg0, void *arg1);
extern s32 func_80278C80(void *arg0);
extern s8 D_8011FE88[];

void func_80278EEC(void *arg0) {
    *((u8 *)arg0 + 0xE) |= 0x10;
    func_8028BAF8(D_8011FE88, arg0, 1);
    if ((*(s32 *)D_8011FE88 == 4) && (*((u8 *)arg0 + 0xE) & 2)) {
        func_8028C544(D_8011FE88, arg0);
        return;
    }
    func_80278C80(arg0);
}
