
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8024E090(void *arg0)
{
  void *temp_a0;
  int new_var;
  temp_a0 = *((void **) (((s8 *) arg0) + 0x18));
  new_var = 1;
  if ((*((s32 *) (((s8 *) temp_a0) + 0))) != new_var)
  {
    return 0;
  }
  if (new_var)
  {
    return (*((s32 *) (((s8 *) temp_a0) + 0x4C))) & 0x200;
  }
}
