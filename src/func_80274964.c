
#include "basetypes.h"
extern f32 D_800D2988;
s32 func_80274964(s32 arg0, s32 arg1, s32 arg2)
{
  f32 temp_f1;
  s32 var_a0;
  s32 var_a2;
  s32 var_v0;
  var_a2 = arg2;
  temp_f1 = (f32) arg1;
  var_a0 = arg0 + ((s32) (temp_f1 * D_800D2988));
  if (temp_f1 < 0.0f)
  {
    var_a2 = -var_a2;
    var_v0 = var_a0 < var_a2;
  }
  else
  {
    var_v0 = var_a2 < var_a0;
  }
  if (var_v0 != 0)
  {
    var_a2 = var_a2;
    var_a0 = var_a2;
  }
  if (var_a2)
  {
    return var_a0;
  }
  else
  {
    return var_a0;
  }
}
