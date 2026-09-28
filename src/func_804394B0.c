#include "basetypes.h"

/* Releases the object D_800E58A4 holds through func_80254784, clears D_800E58A4 and returns zero. */
extern void *D_800E58A4;
extern void func_80254784(void *);

s32 func_804394B0(void) {
    func_80254784(D_800E58A4);
    D_800E58A4 = 0;
    return 0;
}
