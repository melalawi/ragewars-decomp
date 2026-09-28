
#include "basetypes.h"
extern f32 D_800C9078;
extern f32 D_800C9080;
extern f32 D_800D0B28;
f32 func_8025C1EC(f32 arg0)
{
  f32 temp_f0;
  f32 temp_f1;
  f32 temp_f2;
  s32 temp_f3;
  s16 temp_s16;
  s32 temp_plus;
  temp_f0 = (arg0 + (&D_800C9078)[1]) * D_800C9080;
  temp_f3 = (s32) temp_f0;
  temp_s16 = (s16) temp_f3;
  temp_f1 = (f32) temp_s16;
  if (temp_f1 != temp_f0)
  {
    temp_plus = temp_f3 + 1;
    temp_f2 = (&D_800D0B28)[1 + temp_s16];
    return temp_f2 + ((temp_f0 - temp_f1) * ((&D_800D0B28)[1 + ((s16) temp_plus)] - temp_f2));
  }
  return (&D_800D0B28)[1 + temp_s16];
}
