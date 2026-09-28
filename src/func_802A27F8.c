#include "basetypes.h"

extern s32 D_8014D2E0[];
extern s32 D_8014D320;
extern s32 D_8014D328;

void func_802A27F8(void) {
    D_8014D2E0[++D_8014D320] = D_8014D328;
}
