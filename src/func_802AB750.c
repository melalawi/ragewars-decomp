#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_802AB6FC(void *, M2C_UNK *);
extern M2C_UNK D_800D31A0;
void func_802AB750(void *arg0, s32 arg1, s32 arg2) {
    (*(s32 *)((s8 *)(arg0) + (0x88))) = arg1;
    (*(s32 *)((s8 *)(arg0) + (0x84))) = arg2;
    (*(s32 *)((s8 *)(arg0) + (0x8C))) = 0x64;
    func_802AB6FC(arg0 + 0x48, &D_800D31A0);
}
