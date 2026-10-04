#include "span_16E000/code_8041F248.h"
#include "types.h"

/* Releases the object D_800E42D0 holds through func_802547E4_de, clears D_800E42D0, calls
   func_802A2360_de and func_802A23C4_de with 2, and returns zero. */
extern void *D_800E0280;
extern void func_802547E4_de(void *);
extern void func_802A2360_de();
extern void func_802A23C4_de(s32);

s32 func_80420B10_de(void) {
    func_802547E4_de(D_800E0280);
    D_800E0280 = 0;
    func_802A2360_de();
    func_802A23C4_de(2);
    return 0;
}
