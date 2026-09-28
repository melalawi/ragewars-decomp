#include "basetypes.h"

/* Releases the object D_800E58A0 holds through func_80254784, clears D_800E58A0 and returns zero. */
extern void *D_800E58A0;
extern void func_80254784(void *);

s32 func_804391C0(void) {
    func_80254784(D_800E58A0);
    D_800E58A0 = 0;
    return 0;
}
