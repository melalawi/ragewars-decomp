
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800CB030;
typedef struct func_802A6A14_S1 func_802A6A14_S1;
struct func_802A6A14_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    f32 unk14;
    char pad14[0x24 - 0x14 - sizeof(f32)];
    s32 unk24;
    char pad24[0x34 - 0x24 - sizeof(s32)];
    s32 unk34;
    char pad34[0x38 - 0x34 - sizeof(s32)];
    s32 unk38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    s32 unk3C;
};

void func_802A6A14(void *arg0, s32 arg1)
{
  ((func_802A6A14_S1 *)(arg0))->unk14 = (f32) D_800CB030;
  ((func_802A6A14_S1 *)(arg0))->unk0 = arg1;
  ((func_802A6A14_S1 *)(arg0))->unk4 = 0;
  ((func_802A6A14_S1 *)(arg0))->unkC = 0;
  ((func_802A6A14_S1 *)(arg0))->unk10 = 0;
  ((func_802A6A14_S1 *)(arg0))->unk24 = 0;
  ((func_802A6A14_S1 *)(arg0))->unk34 = 0;
  ((func_802A6A14_S1 *)(arg0))->unk38 = 0;
  ((func_802A6A14_S1 *)(arg0))->unk3C = 0;
}
