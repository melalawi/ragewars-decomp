#include "basetypes.h"

/* Passes what func_8025CC8C returns to func_8025CB2C, then calls func_8025E3A4 and func_8025E3EC,
   and returns one. */
extern s32 func_8025CC8C();
extern void func_8025CB2C(s32);
extern void func_8025E3A4();
extern void func_8025E3EC();

s32 func_804458B4(void) {
    func_8025CB2C(func_8025CC8C());
    func_8025E3A4();
    func_8025E3EC();
    return 1;
}
