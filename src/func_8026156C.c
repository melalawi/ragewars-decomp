
#include "basetypes.h"
extern f32 D_800C9298[2];
s32 func_8026156C(f32 arg0)
{
  unsigned long long new_var;
  f32 temp_f1;
  s32 var_v1;
  var_v1 = 0;
  new_var = 1;
  temp_f1 = arg0;
  temp_f1 = (D_800C9298[new_var] / (2.0f * temp_f1)) + D_800C9298[new_var];
  if (D_800C9298[0] <= arg0)
  {
    return 0;
  }
  if (D_800C9298[new_var] < temp_f1)
  {
    do
    {
      var_v1 += 1;
    }
    while (((f32) (1 << var_v1)) < temp_f1);
  }
  return var_v1;
}
