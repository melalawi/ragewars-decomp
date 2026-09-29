
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8024DFFC_S1 func_8024DFFC_S1;
typedef struct func_8024DFFC_S2 func_8024DFFC_S2;
struct func_8024DFFC_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8024DFFC_S2 {
    char pad0[0x4C];
    s32 unk4C;
};

s32 func_8024DFFC(void *arg0)
{
  unsigned int new_var;
  void *temp_a0;
  temp_a0 = ((func_8024DFFC_S1 *)(arg0))->unk18;
  new_var = 0;
  if ((*(s32 *)temp_a0) != 1)
  {
    return new_var;
  }
  if (new_var)
  {
    return (((func_8024DFFC_S2 *)(temp_a0))->unk4C) & 0x1000;
  }
  else
  {
    return (((func_8024DFFC_S2 *)(temp_a0))->unk4C) & 0x1000;
  }
}
