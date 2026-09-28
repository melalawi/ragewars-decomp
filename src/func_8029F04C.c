
#include "basetypes.h"
extern f32 D_800CADD8;
extern f32 D_800CADDC;
extern f64 D_800CADE0;
extern f32 D_800CADE8[2];
extern f64 func_8029C278(f64 arg0, f64 arg1);
f32 func_8029F04C(f32 arg0)
{
  f32 new_var3;
  f32 value;
  f32 *new_var;
  f32 new_var2;
  value = arg0;
  new_var2 = value;
  if (1)
  {
    if (((long long) (D_800CADD8 < new_var2)) || (new_var2 < D_800CADDC))
    {
      value = (f32) func_8029C278((f64) value, D_800CADE0);
    }
    else
    {
      if (D_800CADE8[0] < value)
      {
        new_var3 = D_800CADE8[0];
        do
        {
          value -= new_var3;
          if (1)
          {
          }
        }
        while (new_var3 < value);
      }
      if (value < 0.0f)
      {
        do
        {
          new_var = D_800CADE8;
          value += new_var[1];
        }
        while (value < (new_var3 = 0.0f));
      }
    }
  }
  return value;
}
