#include "basetypes.h"

/* Returns whether entry i of the word table D_801534F0 equals 2. */
extern s32 D_801534F0[];

s32 func_80404F3C(s32 index) {
    return D_801534F0[index] == 2;
}
