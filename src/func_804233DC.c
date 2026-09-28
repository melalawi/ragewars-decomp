#include "basetypes.h"

/* Releases the object D_800E4510 holds through func_80254784, clears D_800E4510 and returns zero. */
extern void *D_800E4510;
extern void func_80254784(void *);

s32 func_804233DC(void) {
    func_80254784(D_800E4510);
    D_800E4510 = 0;
    return 0;
}
