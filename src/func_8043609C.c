#include "basetypes.h"

/* Releases the object D_800E5554 holds through func_80254784, clears D_800E5554, calls func_802A33BC with 2
   and returns zero. */
extern void *D_800E5554;
extern void func_80254784(void *);
extern void func_802A33BC(s32);

s32 func_8043609C(void) {
    func_80254784(D_800E5554);
    D_800E5554 = 0;
    func_802A33BC(2);
    return 0;
}
