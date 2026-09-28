#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern u8 D_801462E5;
s32 func_8024DE90(void *arg0) {
    void *temp_a0;
    temp_a0 = (*(void **)((s8 *)(arg0) + (0x18)));
    if ((*(s32 *)((s8 *)(temp_a0) + (0))) == 0xB) {
        if (D_801462E5 != 0) {
            return (*(s32 *)((s8 *)(temp_a0) + (0x14))) & 1;
        }
        return 1;
    }
    return 0;
}
