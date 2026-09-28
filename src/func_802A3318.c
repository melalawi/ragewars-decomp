#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8029A958();
M2C_UNK func_802A3478(s32, M2C_UNK);
s32 func_80411E4C(s32);
extern s32 D_800E28D8;
void func_802A3318(void) {
    if (D_800E28D8 == 1) {
        func_802A3478(func_80411E4C(func_8029A958()), 0);
    }
}
