
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern M2C_UNK D_800D8390;
s32 func_802BDE70(void)
{
  int new_var;
  s32 *new_var2;
  new_var = (*((s32 *) (((s8 *) (&D_800D8390)) + 0))) != 0;
  if (new_var)
  {
    if (new_var2)
    {
      new_var2 = (s32 *) (((s8 *) (&D_800D8390)) + 8);
      return *new_var2;
    }
    else
    {
      new_var2 = (s32 *) (((s8 *) (&D_800D8390)) + 8);
      return *new_var2;
    }
  }
  return 0;
}
