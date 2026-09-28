#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern M2C_UNK D_257210;
extern M2C_UNK D_8010B928;
extern M2C_UNK D_8010BDF0;
M2C_UNK *func_80256E8C(M2C_UNK **arg0) {
    if ((*(u8 *)((s8 *)(&D_8010BDF0) + (0))) == 0) {
        (*(M2C_UNK **)((s8 *)(&D_8010BDF0) + (8))) = &D_8010B928;
        (*(s32 *)((s8 *)(&D_8010BDF0) + (4))) = 0;
        (*(u8 *)((s8 *)(&D_8010BDF0) + (0))) = 1U;
    }
    *arg0 = &D_8010BDF0;
    return &D_257210;
}
