#include "basetypes.h"

/* Releases the object D_800E5550 holds through func_80254784, clears D_800E5550, calls
   func_802A33BC with 2 and func_8026497C, and returns zero. */
extern void *D_800E5550;
extern void func_80254784(void *);
extern void func_802A33BC(s32);
extern void func_8026497C();

s32 func_80435DE0(void) {
    func_80254784(D_800E5550);
    D_800E5550 = 0;
    func_802A33BC(2);
    func_8026497C();
    return 0;
}
