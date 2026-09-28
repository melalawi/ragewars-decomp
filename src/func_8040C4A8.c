#include "basetypes.h"

/* Requests a new value when no change is pending: if D_800E28E0 is zero and the value differs from
   D_800E28D8, remembers the old value in D_800E28DC, stores the new one, sets D_800E28E4 and starts
   the 0x14-tick countdown D_800E28E0. */
extern s32 D_800E28D8;
extern s32 D_800E28DC;
extern s32 D_800E28E0;
extern s32 D_800E28E4;

void func_8040C4A8(s32 value) {
    if (D_800E28E0 == 0 && value != D_800E28D8) {
        D_800E28E4 = 1;
        D_800E28DC = D_800E28D8;
        D_800E28D8 = value;
        D_800E28E0 = 0x14;
    }
}
