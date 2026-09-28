#include "basetypes.h"

/* Releases the object D_800E5694 holds through func_80254784, clears D_800E5694 and returns zero. */
extern void *D_800E5694;
extern void func_80254784(void *);

s32 func_804371FC(void) {
    func_80254784(D_800E5694);
    D_800E5694 = 0;
    return 0;
}
