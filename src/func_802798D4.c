
#include "basetypes.h"
s32 func_802798D4(s16 *arg0, s16 arg1, s16 arg2)
{
  s16 temp_v1;
  long new_var;
  temp_v1 = *arg0;
  new_var = 4;
  if (temp_v1 == 0x18)
  {
    return 0;
  }
  *((s16 *) (((temp_v1 * new_var) + ((char *) arg0)) + 2)) = arg1;
  *((s16 *) ((((*arg0) * new_var) + ((char *) arg0)) + 4)) = arg2;
  *arg0 = ((u16) (*arg0)) + 1;
  return 1;
}
