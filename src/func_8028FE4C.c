
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8028FE4C(s32 arg0, s32 arg1, s32 *arg2)
{
  s8 *new_var2;
  s8 *new_var;
  void *temp_a0;
  new_var2 = (s8 *) (arg0 + ((arg1 + 1) * 4));
  temp_a0 = arg0 + (arg1 * 4);
  new_var = (s8 *) temp_a0;
  *arg2 = (*((s32 *) (new_var2 + 4))) - (*((s32 *) (new_var + 4)));
  return *((s32 *) (new_var + 4));
}
