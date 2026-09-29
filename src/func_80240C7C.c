
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800C882C;
typedef struct func_80240C7C_S1 func_80240C7C_S1;
struct func_80240C7C_S1 {
    s32 unk0;
    char pad0[0x54 - 0x0 - sizeof(s32)];
    s32 unk54;
    char pad54[0x58 - 0x54 - sizeof(s32)];
    s32 unk58;
    char pad58[0xCC - 0x58 - sizeof(s32)];
    f32 unkCC;
};

void func_80240C7C(void *arg0)
{
  int new_var;
  f32 new_var2;
  new_var2 = (f32) D_800C882C;
  ((func_80240C7C_S1 *)(arg0))->unk0 = 0;
  ((func_80240C7C_S1 *)(arg0))->unk54 = 0;
  new_var = -1;
  ((func_80240C7C_S1 *)(arg0))->unk58 = new_var;
  ((func_80240C7C_S1 *)(arg0))->unkCC = new_var2;
}
