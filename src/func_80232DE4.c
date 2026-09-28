#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_80232DE4(void *arg0) {
    s32 temp_s0;
    temp_s0 = (*(s32 *)((s8 *)(arg0) + (0x1D8)));
    func_8044ACCC(temp_s0);
    if ((*(s16 *)((s8 *)(temp_s0) + (0x650))) == 0x27) {
        func_802227D0((void *) temp_s0, (void *) temp_s0, 2);
    }
}
