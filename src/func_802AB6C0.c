
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_802AB6C0_S1 func_802AB6C0_S1;
struct func_802AB6C0_S1 {
    s32 unk0;
    char pad0[0x8 - 0x0 - sizeof(s32)];
    char unk8;
    char pad8[0x10 - 0x8 - sizeof(char)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    f32 unk14;
    char pad14[0x38 - 0x14 - sizeof(f32)];
    s32 unk38;
};

void func_802AB6C0(void *arg0, s16 arg1, s16 arg2)
{
  s8 *new_var;
  ((func_802AB6C0_S1 *)(arg0))->unk38 = -1;
  new_var = &((func_802AB6C0_S1 *)(arg0))->unk8;
  ((func_802AB6C0_S1 *)(arg0))->unk0 = 0;
  *((s32 *) new_var) = 0;
  ((func_802AB6C0_S1 *)(arg0))->unk10 = (f32) arg1;
  ((func_802AB6C0_S1 *)(arg0))->unk14 = (f32) arg2;
}
