#include "basetypes.h"

/* Releases the object D_800E4F60 holds through func_80254784, calls func_802A3358 and
   func_80422050, clears D_800E4F60 and returns zero. */
extern void *D_800E4F60;
extern void func_80254784(void *);
extern void func_802A3358();
extern void func_80422050();
extern void func_80422020();

s32 func_8042B574(void) {
    func_80254784(D_800E4F60);
    func_802A3358();
#if defined(VERSION_DE)
    func_80422020();
#else
    func_80422050();
#endif
    D_800E4F60 = 0;
    return 0;
}
