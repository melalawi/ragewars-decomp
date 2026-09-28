#include "basetypes.h"

/* Releases the object D_800E4600 holds through func_80254784, clears D_800E4600 and returns zero. */
extern void *D_800E4600;
extern void func_80254784(void *);

s32 func_8042436C(void) {
    func_80254784(D_800E4600);
    D_800E4600 = 0;
    return 0;
}
