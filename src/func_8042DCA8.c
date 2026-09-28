#include "basetypes.h"

/* Releases the object D_800E5430 holds through func_80254784, clears D_800E5430 and returns zero. */
extern void *D_800E5430;
extern void func_80254784(void *);

s32 func_8042DCA8(void) {
    func_80254784(D_800E5430);
    D_800E5430 = 0;
    return 0;
}
