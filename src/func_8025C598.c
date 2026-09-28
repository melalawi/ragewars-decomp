
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8025C598(void *arg0)
{
  s16 *new_var;
  s32 temp_v1;
  void *temp_s0;
  temp_v1 = *((s32 *) (((s8 *) arg0) + 0xB0));
  temp_s0 = temp_v1 + 0x84;
  new_var = (s16 *) (((s8 *) (temp_v1 + ((*((s32 *) (((s8 *) arg0) + 0))) * 2))) + 0xDC);
  func_802B7FD0(temp_s0, *new_var);
  func_802B76F0(temp_s0);
}
