#include "span_1000/code_802508E0.h"
#include "types.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80250274_de();
M2C_UNK func_802504B0_de();
extern u8 D_801462E5;
void func_80250A9C_de(void) {
    if (D_801462E5 != 0) {
        func_802504B0_de();
        return;
    }
    func_80250274_de();
}
