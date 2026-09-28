#include "basetypes.h"

/* Calls func_8025E3A4 and passes what func_8025CC8C returns to func_8025CB2C; then, when D_801540F0
   is set, calls func_804424F4 with the three arguments, otherwise func_8026497C. Returns one. */
extern s32 D_801540F0;
extern void func_8025E3A4();
extern s32 func_8025CC8C();
extern void func_8025CB2C(s32);
extern void func_804424F4(void *, void *, void *);
extern void func_8026497C();

s32 func_804435D4(void *first, void *second, void *third) {
    func_8025E3A4();
    func_8025CB2C(func_8025CC8C());
    if (D_801540F0 == 0) {
        func_8026497C();
        return 1;
    }
    func_804424F4(first, second, third);
    return 1;
}
