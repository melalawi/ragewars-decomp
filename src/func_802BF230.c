
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_802BF230(void *arg0)
{
  s32 temp_a0;
  u32 temp_v0;
  temp_v0 = func_802BF280();
  temp_a0 = temp_v0 >> 8;
  temp_a0 = temp_a0 & 1;
  if (temp_v0 & 0x80)
  {
    *((s32 *) (((s8 *) arg0) + 4)) = (s32) (((*((s32 *) (((s8 *) arg0) + 4))) | temp_a0) & (~2));
  }
  return temp_a0;
}
