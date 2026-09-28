#include "basetypes.h"

/* Releases the object D_800E4514 holds through func_80254784, calls func_802A3358, clears
   D_800E4514 and returns zero. */
extern void *D_800E4514;
extern void func_80254784(void *);
extern void func_802A3358();

s32 func_804237C0(void) {
    func_80254784(D_800E4514);
    func_802A3358();
    D_800E4514 = 0;
    return 0;
}
