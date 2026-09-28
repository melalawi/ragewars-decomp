#include "basetypes.h"

/* Releases the object D_800E5784 holds through func_80254784, clears D_800E5784 and returns zero. */
extern void *D_800E5784;
extern void func_80254784(void *);

s32 func_80437998(void) {
    func_80254784(D_800E5784);
    D_800E5784 = 0;
    return 0;
}
