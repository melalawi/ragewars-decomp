#include "basetypes.h"

/* Counts calls in D_800E3510: below four it returns what func_8041BF10 returns; from the fourth on
   it calls func_802A338C, func_8029A73C and func_80299368 with 2, sets D_8014ADA0 and returns one. */
extern s32 D_800E3510;
extern s32 D_8014ADA0;
extern void func_802A338C();
extern void func_8029A73C();
extern void func_80299368(s32);
extern s32 func_8041BF10();

s32 func_8041C2C4(void) {
    D_800E3510++;
    if (D_800E3510 < 4) {
        return func_8041BF10();
    }
    func_802A338C();
    func_8029A73C();
    func_80299368(2);
    D_8014ADA0 = 1;
    return 1;
}
