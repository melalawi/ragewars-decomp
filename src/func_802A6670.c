#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_802A6DF8();
M2C_UNK func_802A6ED0(s32);
extern s32 D_800D2E58;
extern s32 D_80146894;
void func_802A6670(s32 arg0) {
    D_800D2E58 = 0;
    if (D_80146894 == 0) {
        func_802A6DF8();
        func_802A6ED0(arg0);
    }
}
