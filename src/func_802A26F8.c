#include "basetypes.h"

extern s32 func_80252FFC(s32 arg0);
extern void func_802A2270(void);
extern s32 D_800D2BD4[2];
extern s32 D_8014D2D4;
extern s32 D_8014D2D0;
extern s32 D_800D2BD0;

void func_802A26F8(s32 arg0) {
    s32 size;

    size = (arg0 + 7) & ~7;
    D_800D2BD4[0] = func_80252FFC(size);
    D_800D2BD4[1] = func_80252FFC(size);
    D_8014D2D4 = size;
    D_8014D2D0 = 0;
    func_802A2270();
    D_800D2BD0 = 1;
}
