#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8022B9B4(void *arg0) {
    if ((*(s32 *)((s8 *)(arg0) + (0x1210))) != 0) {
        if ((*(s32 *)((s8 *)(arg0) + (0x5E4))) != 0) {
            func_802227D0(arg0, arg0, 2);
        }
        (*(s32 *)((s8 *)(arg0) + (0x1210))) = 0;
        (*(s32 *)((s8 *)(arg0) + (0x1214))) = 0;
    }
}
