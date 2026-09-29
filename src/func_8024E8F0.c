
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8024E8F0_S1 func_8024E8F0_S1;
struct func_8024E8F0_S1 {
    u8 unk0;
    char pad0[0x100 - 0x0 - sizeof(u8)];
    s32 unk100;
};

s32 func_8024E8F0(void *arg0)
{
  int new_var;
  new_var = 1;
  if ((((func_8024E8F0_S1 *)(arg0))->unk0) != 1)
  {
    if (new_var)
    {
      return 0;
    }
  }
  return (((func_8024E8F0_S1 *)(arg0))->unk100) & 1;
}
