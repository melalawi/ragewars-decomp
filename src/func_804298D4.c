#include "basetypes.h"

/* Releases the object D_800E4EF0 holds through func_80254784, clears D_800E4EF0 and returns zero. */
extern void *D_800E4EF0;
extern void func_80254784(void *);

s32 func_804298D4(void) {
    func_80254784(D_800E4EF0);
    D_800E4EF0 = 0;
    return 0;
}
