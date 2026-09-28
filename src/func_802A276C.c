#include "basetypes.h"

extern s32 D_800D2BD0;
extern s32 D_800D2BD4[2];

extern void func_80254784(void *);

void func_802A276C(void) {
    if (D_800D2BD0 != 0) {
        func_80254784(D_800D2BD4[0]);
        func_80254784(D_800D2BD4[1]);
        D_800D2BD4[0] = 0;
        D_800D2BD4[1] = 0;
        D_800D2BD0 = 0;
    }
}
