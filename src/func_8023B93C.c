
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8023B93C(void **arg0, void **arg1)
{
  f32 new_var2;
  int new_var;
  s32 var_v0;
  var_v0 = 1;
  new_var2 = *((f32 *) (((s8 *) (*arg0)) + 0x210));
  if ((*((f32 *) (((s8 *) (*arg1)) + 0x210))) < new_var2)
  {
    new_var = 1;
    var_v0 = -new_var;
  }
  return var_v0;
}
