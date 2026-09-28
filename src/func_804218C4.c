#include "basetypes.h"

/* Releases the object D_800E4400 holds through func_80254784, clears D_800E4400 and returns zero. */
extern void *D_800E4400;
extern void func_80254784(void *);

s32 func_804218C4(void) {
    func_80254784(D_800E4400);
    D_800E4400 = 0;
    return 0;
}
