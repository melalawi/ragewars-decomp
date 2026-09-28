#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_8025CA44(s32, s32);
s32 func_8025CC8C();
void func_8022AFFC(void *arg0) {
    func_8025CA44(func_8025CC8C(), (*(s32 *)((s8 *)(arg0) + (0x11C0))));
    (*(s32 *)((s8 *)(arg0) + (0x11C0))) = 0;
}
