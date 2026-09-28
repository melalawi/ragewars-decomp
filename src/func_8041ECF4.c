#include "basetypes.h"

/* Releases the object D_800E39C0 holds through func_80254784, clears D_800E39C0 and returns zero. */
extern void *D_800E39C0;
extern void func_80254784(void *);

s32 func_8041ECF4(void) {
    func_80254784(D_800E39C0);
    D_800E39C0 = 0;
    return 0;
}
