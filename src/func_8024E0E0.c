
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8024E0E0_S1 func_8024E0E0_S1;
typedef struct func_8024E0E0_S2 { char pad0[0x4C]; s32 unk4C; } func_8024E0E0_S2;
struct func_8024E0E0_S1 {
    char pad0[0x18];
    void* unk18;
};

s32 func_8024E0E0(void *arg0)
{
  void *new_var2;
  int new_var;
  void *temp_a0;
  temp_a0 = ((func_8024E0E0_S1 *)(arg0))->unk18;
  new_var2 = temp_a0;
  if ((*(s32 *)new_var2) != 1)
  {
    if (temp_a0 || new_var)
    {
      return 0;
    }
    else
    {
      return 0;
    }
  }
  new_var = 0x4C;
  return (((func_8024E0E0_S2 *)temp_a0)->unk4C) & 0x2000;
}
