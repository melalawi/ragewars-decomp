
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
f32 func_8024E640(void *arg0)
{
  if ((*((u8 *) (((s8 *) arg0) + 0))) != 1)
  {
    if (arg0)
    {
      return *((f32 *) (((s8 *) arg0) + 0xC));
    }
    else
    {
      return *((f32 *) (((s8 *) arg0) + 0xC));
    }
  }
  return *((f32 *) (((s8 *) arg0) + 0x40));
}
