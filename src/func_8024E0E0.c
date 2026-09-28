
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8024E0E0(void *arg0)
{
  void *new_var2;
  int new_var;
  void *temp_a0;
  temp_a0 = *((void **) (((s8 *) arg0) + 0x18));
  new_var2 = temp_a0;
  if ((*((s32 *) (((s8 *) new_var2) - -0))) != 1)
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
  return (*((s32 *) (((s8 *) temp_a0) + new_var))) & 0x2000;
}
