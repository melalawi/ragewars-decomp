#include "basetypes.h"

/* Returns entry i of D_80153500 when entry i of the state table D_801534F0 is 3, otherwise -2. */
extern s32 D_801534F0[];
extern s32 D_80153500[];

s32 func_80404F04(s32 index) {
    if (D_801534F0[index] != 3) {
        return -2;
    }
    return D_80153500[index];
}
