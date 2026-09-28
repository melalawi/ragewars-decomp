#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_802A3224();
M2C_UNK func_8041EAE0();
extern s32 D_800D2C98;
void func_802A31F4(void) {
    if (D_800D2C98 == 0) {
        func_8041EAE0();
        func_802A3224();
    }
}
