#include "basetypes.h"

/* Releases the object D_800E3590 holds through func_80254784, clears D_800E3590 and returns zero. */
extern void *D_800E3590;
extern void func_80254784(void *);

s32 func_8041DC0C(void) {
    func_80254784(D_800E3590);
    D_800E3590 = 0;
    return 0;
}
