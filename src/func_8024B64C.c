
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8024B64C_S1 func_8024B64C_S1;
struct func_8024B64C_S1 {
    char pad0[0x108];
    s16 unk108;
    char pad108[0x10A - 0x108 - sizeof(s16)];
    s16 unk10A;
    char pad10A[0x10E - 0x10A - sizeof(s16)];
    s8 unk10E;
    char pad10E[0x10F - 0x10E - sizeof(s8)];
    s8 unk10F;
};

void func_8024B64C(void *arg0, unsigned int arg1)
{
  ((func_8024B64C_S1 *)(arg0))->unk10A = arg1;
  ((func_8024B64C_S1 *)(arg0))->unk10E = 0;
  if ((((func_8024B64C_S1 *)(arg0))->unk108) != arg1)
  {
    ((func_8024B64C_S1 *)(arg0))->unk10F = 1;
  }
}
