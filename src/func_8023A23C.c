#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8023A23C(void *arg0) {
    s32 temp_a1;
    func_802538A8(0);
    temp_a1 = (*(s32 *)((s8 *)(arg0) + (0xF18)));
    if (temp_a1 != 0) {
        func_802537D8(0, temp_a1);
        (*(s32 *)((s8 *)(arg0) + (0xF18))) = 0;
        (*(s32 *)((s8 *)(arg0) + (0xF1C))) = 0;
        (*(s32 *)((s8 *)(arg0) + (0xF20))) = 0;
    }
}
