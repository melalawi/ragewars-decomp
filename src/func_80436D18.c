#include "basetypes.h"

/* Releases the object D_800E5690 holds through func_80254784, clears D_800E5690 and returns zero. */
extern void *D_800E5690;
extern void func_80254784(void *);

s32 func_80436D18(void) {
    func_80254784(D_800E5690);
    D_800E5690 = 0;
    return 0;
}
