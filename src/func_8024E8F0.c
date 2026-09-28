
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8024E8F0(void *arg0)
{
  int new_var;
  new_var = 1;
  if ((*((u8 *) (((s8 *) arg0) + 0))) != 1)
  {
    if (new_var)
    {
      return 0;
    }
  }
  return (*((s32 *) (((s8 *) arg0) + 0x100))) & 1;
}
