
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8025C544(void *arg0, s32 arg1)
{
  s8 *new_var;
  int new_var2;
  s32 temp_s0;
  void *temp_s0_2;
  temp_s0 = *((s32 *) (((s8 *) arg0) + 0xB0));
  temp_s0_2 = temp_s0 + 0x84;
  new_var2 = 2;
  new_var = ((s8 *) arg0) + 0;
  func_802B7FD0(temp_s0_2, *((s16 *) (((s8 *) (temp_s0 + ((*((s32 *) new_var)) * new_var2))) + 0xDC)));
  func_802B7F00(temp_s0_2, arg1 & 0xFF);
}
