
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800CAE48;
typedef struct func_8029FB14_S1 func_8029FB14_S1;
struct func_8029FB14_S1 {
    f32 unk0;
    char pad0[0x14 - 0x0 - sizeof(f32)];
    f32 unk14;
    char pad14[0x28 - 0x14 - sizeof(f32)];
    f32 unk28;
    char pad28[0x3C - 0x28 - sizeof(f32)];
    f32 unk3C;
};

void func_8029FB14(s32 arg0)
{
  func_802A1748(arg0, 0, 0x40);
  ((func_8029FB14_S1 *)(arg0))->unk3C = (((func_8029FB14_S1 *)(arg0))->unk28 = (((func_8029FB14_S1 *)(arg0))->unk14 = (((func_8029FB14_S1 *)(arg0))->unk0 = (f32) D_800CAE48)));
}
