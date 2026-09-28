#include "basetypes.h"

/* Releases the object D_800E4690 holds through func_80254784, calls func_802A3358, clears D_800E4690, calls
   func_80245B18 and returns zero. */
extern void *D_800E4690;
extern void func_80254784(void *);
extern void func_802A3358();
extern void func_80245B18();

s32 func_80428998(void) {
    func_80254784(D_800E4690);
    func_802A3358();
    D_800E4690 = 0;
    func_80245B18();
    return 0;
}
