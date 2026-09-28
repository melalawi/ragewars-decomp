#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_8025021C();
M2C_UNK func_80250458();
extern u8 D_801462E5;
void func_80250A44(void) {
    if (D_801462E5 != 0) {
        func_80250458();
        return;
    }
    func_8025021C();
}
