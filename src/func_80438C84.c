#include "basetypes.h"

/* Releases the object D_800E5830 holds through func_80254784, clears D_800E5830 and returns zero. */
extern void *D_800E5830;
extern void func_80254784(void *);

s32 func_80438C84(void) {
    func_80254784(D_800E5830);
    D_800E5830 = 0;
    return 0;
}
