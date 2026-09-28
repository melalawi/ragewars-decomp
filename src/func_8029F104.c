/* Normalizes an offset angle, using double remainder for large magnitudes and repeated single-precision adjustments otherwise. */

#include "basetypes.h"
extern f32 D_800CADF4;
extern f32 D_800CADF8;
extern f64 D_800CAE00;
extern f32 D_800CAE08[2];
extern f64 func_8029C278(f64 arg0, f64 arg1);
inline static f32 wrap(f32 arg0)
{
  f32 new_var3;
  f32 value;
  f32 *new_var;
  f32 new_var2;
  value = arg0;
  new_var2 = value;
  if (1)
  {
    if (((long long) (D_800CADF4 < new_var2)) || (new_var2 < D_800CADF8))
    {
      value = (f32) func_8029C278((f64) value, D_800CAE00);
    }
    else
    {
      if (D_800CAE08[0] < value)
      {
        new_var3 = D_800CAE08[0];
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
          new_var = D_800CAE08;
          value += new_var[1];
        }
        while (value < (new_var3 = 0.0f));
      }
    }
  }
  return value;
}

extern f32 D_800CADF0;
extern f32 D_800CAE10;
f32 func_8029F104(f32 x)
{
  f32 new_var;
  float new_var3;
  f32 new_var2;
  new_var = D_800CADF0;
  new_var2 = x + new_var;
  {
    new_var3 = new_var2;
  }
  new_var2 = wrap(new_var3);
  return new_var2 - D_800CAE10;
}
