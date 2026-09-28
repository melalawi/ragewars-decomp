
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8024DFFC(void *arg0)
{
  unsigned int new_var;
  void *temp_a0;
  temp_a0 = *((void **) (((s8 *) arg0) + 0x18));
  new_var = 0;
  if ((*((s32 *) (((s8 *) temp_a0) + new_var))) != 1)
  {
    return new_var;
  }
  if (new_var)
  {
    return (*((s32 *) (((s8 *) temp_a0) + 0x4C))) & 0x1000;
  }
  else
  {
    return (*((s32 *) (((s8 *) temp_a0) + 0x4C))) & 0x1000;
  }
}
