#include "basetypes.h"

/* Releases the object D_800E54A4 holds through func_80254784, clears D_800E54A4, calls
   func_802A3358 and func_802A3410 with 1, and returns zero. */
extern void *D_800E54A4;
extern void func_80254784(void *);
extern void func_802A3358();
extern void func_802A3410(s32);

s32 func_80435BAC(void) {
    func_80254784(D_800E54A4);
    D_800E54A4 = 0;
    func_802A3358();
    func_802A3410(1);
    return 0;
}
