#include "basetypes.h"

/* Stops sound for a menu: calls func_8025E234 with -1 and func_8025E2BC with zero, calls
   func_8025E380 when D_800E63B4 is set, passes D_800E63B0 to func_8025E2F4, calls func_80264A2C and
   returns what func_804424F4 gives for the three arguments. */
extern s32 D_800E63B4;
extern s32 D_800E63B0;
extern void func_8025E234(s32);
extern void func_8025E2BC(s32);
extern void func_8025E380();
extern void func_8025E2F4(s32);
extern void func_80264A2C();
extern s32 func_804424F4(void *, void *, void *);

s32 func_804459D0(void *first, void *second, void *third) {
    func_8025E234(-1);
    func_8025E2BC(0);
    if (D_800E63B4 != 0) {
        func_8025E380();
    }
    func_8025E2F4(D_800E63B0);
    func_80264A2C();
    return func_804424F4(first, second, third);
}
