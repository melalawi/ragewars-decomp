#include "basetypes.h"

/* Releases the object D_800E4450 holds through func_80254784, clears D_800E4450 and returns zero. */
extern void *D_800E4450;
extern void func_80254784(void *);

s32 func_80421BEC(void) {
    func_80254784(D_800E4450);
    D_800E4450 = 0;
    return 0;
}
