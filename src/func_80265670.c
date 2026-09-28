#include "basetypes.h"

s32 func_80265670(s32 arg0, s32 arg1)
{
  s32 temp_a1;
  s32 temp_v0;
  s32 var_a1;
  u8 *temp_a1_2;
  int new_var;
  var_a1 = arg1;
  temp_v0 = var_a1;
  if (temp_v0 < 0)
  {
    var_a1 = temp_v0 + 7;
  }
  temp_a1 = var_a1 >> 3;
  new_var = 1 << (temp_v0 - (temp_a1 * 8));
  temp_a1_2 = (u8 *)arg0 + temp_a1;
  return (*temp_a1_2 & new_var) != 0;
}
