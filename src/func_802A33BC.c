#include "basetypes.h"

extern s32 D_800D2C9C;

void func_802A33BC(s32 arg0) {
    if (arg0 == 1) {
        D_800D2C9C = arg0;
        return;
    }
    D_800D2C9C = 0;
}
