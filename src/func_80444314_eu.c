#include "common/unused.h"
#include "types.h"

/* Stores what func_802B2378 returns for D_801371FC in D_801540F4 and sets D_8014DE60 to 1. */
extern s32 D_801371FC;
extern s32 D_801540F4;

extern s32 func_802B2378(s32);

void func_80444314_eu(void) {
    D_801540F4 = func_802B2378(D_801371FC);
    D_8014DE60 = 1;
}
