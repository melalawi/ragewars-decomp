#include "basetypes.h"

/* Calls func_8029A73C and, unless func_8043C4E8 reports one for the object D_800E4EF0 holds, calls
   func_804296A4, func_8042EB68 with -1 and func_8029A8A8. Returns zero. */
extern void *D_800E4EF0;
extern void func_8029A73C();
extern s32 func_8043C4E8(void *);
extern void func_804296A4();
extern void func_8042EB68(s32);
extern void func_8029A8A8();

s32 func_80429AD8(void) {
    func_8029A73C();
    if (func_8043C4E8(D_800E4EF0) == 1) {
        return 0;
    }
    func_804296A4();
    func_8042EB68(-1);
    func_8029A8A8();
    return 0;
}
