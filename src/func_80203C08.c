#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80262CA8();
void func_80203C08(void *arg0, void *arg1) {
    if (((*(s8 *)((s8 *)(arg1) + (0xCB))) != 0) && ((*(s32 *)((s8 *)(arg0) + (0x100))) & 0x80000)) {
        func_80262CA8();
    }
}
