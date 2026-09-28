#include "basetypes.h"

/* Returns whether entry i of D_80153500 is -4 when entry i of the state table D_801534F0 is 3,
   otherwise zero. */
extern s32 D_801534F0[];
extern s32 D_80153500[];

s32 func_80405598(s32 index) {
    if (D_801534F0[index] != 3) {
        return 0;
    }
    return D_80153500[index] == -4;
}
