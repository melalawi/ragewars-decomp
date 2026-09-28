#include "basetypes.h"

/* Releases the object D_800E53C0 holds through func_80254784, clears D_800E53C0 and returns zero. */
extern void *D_800E53C0;
extern void func_80254784(void *);

s32 func_8042D6AC(void) {
    func_80254784(D_800E53C0);
    D_800E53C0 = 0;
    return 0;
}
