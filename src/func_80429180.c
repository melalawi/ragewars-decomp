/* Marks two loading-screen hint slots (0x1D9 and 0x1DA) unused. */
#include "basetypes.h"

extern void func_8041B190(s32);

s32 func_80429180(void) {
    func_8041B190(0x1D9);
    func_8041B190(0x1DA);
    return 0;
}
