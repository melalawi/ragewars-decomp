#include "basetypes.h"

/* Releases the object D_800E59E0 holds through func_80254784, clears D_800E59E0, calls
   func_802A3358 and func_802A33BC with 2, and returns zero. */
extern void *D_800E59E0;
extern void func_80254784(void *);
extern void func_802A3358();
extern void func_802A33BC(s32);

s32 func_8043BD50(void) {
    func_80254784(D_800E59E0);
    D_800E59E0 = 0;
    func_802A3358();
    func_802A33BC(2);
    return 0;
}
