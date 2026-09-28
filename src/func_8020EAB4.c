#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_8020EA10();
extern s32 D_80146918;
s32 func_8020EAB4(void) {
    if (D_80146918 != 0) {
        func_8020EA10();
    }
    return 1;
}
