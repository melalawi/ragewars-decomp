#include "basetypes.h"

/* Releases the object D_800E5780 holds through func_80254784, clears D_800E5780 and returns zero. */
extern void *D_800E5780;
extern void func_80254784(void *);

s32 func_804375C4(void) {
    func_80254784(D_800E5780);
    D_800E5780 = 0;
    return 0;
}
