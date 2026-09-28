
#include "basetypes.h"
u8 *func_802934A4(u8 *arg0, u8 *arg1)
{
  u8 *var_a1;
  u8 *var_v1;
  u8 temp_v0;
  u8 temp_v0_2;
 do { temp_v0 = *arg1; var_a1 = arg1 + 1; } while (0);
  *arg0 = temp_v0;
  var_v1 = arg0 - -1;
  if (temp_v0 & 0xFF)
  {
    do
    {
      temp_v0_2 = *var_a1;
      var_a1 += 1;
      *var_v1 = temp_v0_2;
      var_v1 += 1;
    }
    while (temp_v0_2 & 0xFF);
  }
  return arg0;
}
