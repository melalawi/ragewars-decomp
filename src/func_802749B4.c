
#include "basetypes.h"
extern f32 D_800C9A58[2];
extern f32 D_800C9A60[2];
f32 func_802749B4(f32 arg0)
{
  unsigned char new_var;
  f32 val;
  val = arg0;
  new_var = 0;
  if (val < D_800C9A58[new_var])
  {
    do
    {
      val += D_800C9A58[1];
    }
    while (val < D_800C9A58[new_var]);
  }
  if (D_800C9A60[new_var] < val)
  {
    do
    {
      val -= D_800C9A60[1];
    }
    while (D_800C9A60[new_var] < val);
  }
  return -val;
}
