#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80258F30(M2C_UNK *, s32);
extern s32 D_8010C080;
extern s32 D_80146890;
void func_8025E13C(s32 arg0) {
    if (D_80146890 == 0) {
        func_80258F30(&D_8010C080, arg0);
    }
}
