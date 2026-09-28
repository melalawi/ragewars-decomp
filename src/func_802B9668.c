#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern M2C_UNK D_2BB450;
extern M2C_UNK D_2BB550;
void func_802B9668(void *arg0) {
    func_802BA4B0(arg0, (s32) &D_2BB450, (s32) &D_2BB550, 3);
    (*(s32 *)((s8 *)(arg0) + (0x14))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x18))) = 1;
}
