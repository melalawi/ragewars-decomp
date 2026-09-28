#include "basetypes.h"

/* Clears the 0x2A8-byte block D_801539B0 through func_802A1748, sets D_800E2AC0 and clears
   D_800E2AC4. */
extern char D_801539B0[];
extern s32 D_800E2AC0;
extern s32 D_800E2AC4;
extern void func_802A1748(void *, s32, s32);

void func_80411F6C(void) {
    func_802A1748(D_801539B0, 0, 0x2A8);
    D_800E2AC0 = 1;
    D_800E2AC4 = 0;
}
