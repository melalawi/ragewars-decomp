#include "span_16E000/code_8041BEA8.h"
#include "types.h"

/* Counts calls in D_800E3510: below four it returns what func_8041BE90_de returns; from the fourth on
   it calls func_802A2394_de, func_8029973C_de and func_80298368_de with 2, sets D_8014ADA0 and returns one. */
extern s32 D_800DF4C0;
extern s32 D_80146CE0;
extern void func_802A2394_de();
extern void func_8029973C_de();
extern void func_80298368_de(s32);
extern s32 func_8041BE90_de();

s32 func_8041C244_de(void) {
    D_800DF4C0++;
    if (D_800DF4C0 < 4) {
        return func_8041BE90_de();
    }
    func_802A2394_de();
    func_8029973C_de();
    func_80298368_de(2);
    D_80146CE0 = 1;
    return 1;
}
