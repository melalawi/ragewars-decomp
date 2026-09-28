#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_80252FFC(M2C_UNK);
M2C_UNK func_802A1748(s32, M2C_UNK, M2C_UNK);
extern s32 D_8014D0B0;
void func_8029BA78(void) {
    s32 temp_v0;
    temp_v0 = func_80252FFC(0xC44);
    D_8014D0B0 = temp_v0;
    func_802A1748(temp_v0, 0, 0xC44);
}
