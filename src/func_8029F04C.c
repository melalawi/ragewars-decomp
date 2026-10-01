
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5B78_4 = 25.1327438f;
const float unbake_rodata_800C5B7C_4 = (-25.1327438f);
const double unbake_rodata_800C5B80_8 = 6.2831859588623047;
const float unbake_rodata_800C5B88_4 = 6.28318596f;
const float unbake_rodata_800C5B8C_4 = 6.28318596f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CADD8_4 = 25.1327438f;
const float unbake_rodata_800CADDC_4 = (-25.1327438f);
const double unbake_rodata_800CADE0_8 = 6.2831859588623047;
const float unbake_rodata_800CADE8_4 = 6.28318596f;
const float unbake_rodata_800CADEC_4 = 6.28318596f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5EE8_4 = 25.1327438f;
const float unbake_rodata_800C5EEC_4 = (-25.1327438f);
const double unbake_rodata_800C5EF0_8 = 6.2831859588623047;
const float unbake_rodata_800C5EF8_4 = 6.28318596f;
const float unbake_rodata_800C5EFC_4 = 6.28318596f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5F28_4 = 25.1327438f;
const float unbake_rodata_800C5F2C_4 = (-25.1327438f);
const double unbake_rodata_800C5F30_8 = 6.2831859588623047;
const float unbake_rodata_800C5F38_4 = 6.28318596f;
const float unbake_rodata_800C5F3C_4 = 6.28318596f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5C48_4 = 25.1327438f;
const float unbake_rodata_800C5C4C_4 = (-25.1327438f);
const double unbake_rodata_800C5C50_8 = 6.2831859588623047;
const float unbake_rodata_800C5C58_4 = 6.28318596f;
const float unbake_rodata_800C5C5C_4 = 6.28318596f;
#endif
