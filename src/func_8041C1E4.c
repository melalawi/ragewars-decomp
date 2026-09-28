#include "basetypes.h"

/* Calls func_802A338C and func_8029A73C, then func_80299368 with 2, sets D_8014ADA0 and returns
   one. */
extern s32 D_8014ADA0;
extern void func_802A338C();
extern void func_8029A73C();
extern void func_80299368(s32);

s32 func_8041C1E4(void) {
    func_802A338C();
    func_8029A73C();
    func_80299368(2);
    D_8014ADA0 = 1;
    return 1;
}
