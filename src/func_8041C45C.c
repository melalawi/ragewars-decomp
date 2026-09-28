#include "basetypes.h"

/* Releases the object D_800E3518 holds through func_80254784, clears D_800E3518 and returns zero. */
extern void *D_800E3518;
extern void func_80254784(void *);

s32 func_8041C45C(void) {
    func_80254784(D_800E3518);
    D_800E3518 = 0;
    return 0;
}
