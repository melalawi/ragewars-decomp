
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3EBC_4 = 6000.0f;
const float unbake_rodata_800C3EC0_4 = 0.0166666675f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C907C_4 = 6000.0f;
const float unbake_rodata_800C9080_4 = 0.0166666675f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C423C_4 = 6000.0f;
const float unbake_rodata_800C4240_4 = 0.0166666675f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C427C_4 = 6000.0f;
const float unbake_rodata_800C4280_4 = 0.0166666675f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3F8C_4 = 6000.0f;
const float unbake_rodata_800C3F90_4 = 0.0166666675f;
#endif
