#include "span_1000/code_8029D984.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Normalizes an offset angle, using double remainder for large magnitudes and repeated single-precision adjustments otherwise. */



extern f32 D_800C5C98_de[2];
extern f64 func_8029B278_de(f64 arg0, f64 arg1);
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
    if (((long long) (D_800C5C88_de < new_var2)) || (new_var2 < (-25.13274383544922f)))
    {
      value = (f32) func_8029B278_de((f64) value, D_800C5C90_de);
    }
    else
    {
      if (D_800C5C98_de[0] < value)
      {
        new_var3 = D_800C5C98_de[0];
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
          new_var = D_800C5C98_de;
          value += new_var[1];
        }
        while (value < (new_var3 = 0.0f));
      }
    }
  }
  return value;
}

extern f32 D_800C5CA0_de;
static inline f32 centered(f32 x)
{
  f32 new_var;
  float new_var3;
  f32 new_var2;
  new_var = (3.1415927410125732f);
  new_var2 = x + new_var;
  {
    new_var3 = new_var2;
  }
  new_var2 = wrap(new_var3);
  return new_var2 - D_800C5CA0_de;
}

f32 func_8029E1D4_de(f32 a, f32 b) { return centered(a - b); }

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5BB4_4 = 3.14159274f;
const float unbake_rodata_800C5BB8_4 = 25.1327438f;
const float unbake_rodata_800C5BBC_4 = (-25.1327438f);
const double unbake_rodata_800C5BC0_8 = 6.2831859588623047;
const float unbake_rodata_800C5BC8_4 = 6.28318596f;
const float unbake_rodata_800C5BCC_4 = 6.28318596f;
const float unbake_rodata_800C5BD0_4 = 3.14159274f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAE14_4 = 3.14159274f;
const float unbake_rodata_800CAE18_4 = 25.1327438f;
const float unbake_rodata_800CAE1C_4 = (-25.1327438f);
const double unbake_rodata_800CAE20_8 = 6.2831859588623047;
const float unbake_rodata_800CAE28_4 = 6.28318596f;
const float unbake_rodata_800CAE2C_4 = 6.28318596f;
const float unbake_rodata_800CAE30_4 = 3.14159274f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5F24_4 = 3.14159274f;
const float unbake_rodata_800C5F28_4 = 25.1327438f;
const float unbake_rodata_800C5F2C_4 = (-25.1327438f);
const double unbake_rodata_800C5F30_8 = 6.2831859588623047;
const float unbake_rodata_800C5F38_4 = 6.28318596f;
const float unbake_rodata_800C5F3C_4 = 6.28318596f;
const float unbake_rodata_800C5F40_4 = 3.14159274f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5F64_4 = 3.14159274f;
const float unbake_rodata_800C5F68_4 = 25.1327438f;
const float unbake_rodata_800C5F6C_4 = (-25.1327438f);
const double unbake_rodata_800C5F70_8 = 6.2831859588623047;
const float unbake_rodata_800C5F78_4 = 6.28318596f;
const float unbake_rodata_800C5F7C_4 = 6.28318596f;
const float unbake_rodata_800C5F80_4 = 3.14159274f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5C84_4 = 3.14159274f;
const float unbake_rodata_800C5C88_4 = 25.1327438f;
const float unbake_rodata_800C5C8C_4 = (-25.1327438f);
const double unbake_rodata_800C5C90_8 = 6.2831859588623047;
const float unbake_rodata_800C5C98_4 = 6.28318596f;
const float unbake_rodata_800C5C9C_4 = 6.28318596f;
const float unbake_rodata_800C5CA0_4 = 3.14159274f;
#endif
