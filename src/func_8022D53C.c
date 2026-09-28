#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80245608(M2C_UNK, M2C_UNK, M2C_UNK *);
extern M2C_UNK D_22ED14;
extern s32 D_80102A48;
void func_8022D53C(s32 arg0) {
    D_80102A48 = arg0;
    func_80245608(0x50, 0, &D_22ED14);
}
