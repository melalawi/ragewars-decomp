#include "basetypes.h"

/* Releases the object D_800E5950 holds through func_80254784, clears D_800E5950 and returns zero. */
extern void *D_800E5950;
extern void func_80254784(void *);

s32 func_804397D8(void) {
    func_80254784(D_800E5950);
    D_800E5950 = 0;
    return 0;
}
