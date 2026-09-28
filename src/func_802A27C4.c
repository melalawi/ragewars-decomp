#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_802A2270();
extern s32 D_8014D2D0;
void func_802A27C4(void) {
    D_8014D2D0 = 1 - D_8014D2D0;
    func_802A2270();
}
