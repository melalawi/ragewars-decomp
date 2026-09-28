
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8024DDCC(void *arg0)
{
  s32 temp_a0;
  void *temp_v1;
  temp_v1 = *((void **) (((s8 *) arg0) + 0x18));
  temp_a0 = *((s32 *) (((s8 *) temp_v1) + 0));
  if ((temp_a0 == 1) || (temp_a0 == 4))
  {
    if (temp_v1)
    {
      return (*((s32 *) (((s8 *) temp_v1) + 0x14))) & 0x80;
    }
    else
    {
      return (*((s32 *) (((s8 *) temp_v1) + 0x14))) & 0x80;
    }
  }
  return 0;
}
