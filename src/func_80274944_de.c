#include "span_1000/code_80273744.h"
#include "types.h"

extern f32 D_800C4968_de[2];
extern f32 D_800C4970_de[2];
f32 func_80274944_de(f32 arg0)
{
  unsigned char new_var;
  f32 val;
  val = arg0;
  new_var = 0;
  if (val < D_800C4968_de[new_var])
  {
    do
    {
      val += D_800C4968_de[1];
    }
    while (val < D_800C4968_de[new_var]);
  }
  if (D_800C4970_de[new_var] < val)
  {
    do
    {
      val -= D_800C4970_de[1];
    }
    while (D_800C4970_de[new_var] < val);
  }
  return -val;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4898_4 = (-3.14159274f);
const float unbake_rodata_800C489C_4 = 6.28318548f;
const float unbake_rodata_800C48A0_4 = 3.14159274f;
const float unbake_rodata_800C48A4_4 = 6.28318548f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9A58_4 = (-3.14159274f);
const float unbake_rodata_800C9A5C_4 = 6.28318548f;
const float unbake_rodata_800C9A60_4 = 3.14159274f;
const float unbake_rodata_800C9A64_4 = 6.28318548f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4C18_4 = (-3.14159274f);
const float unbake_rodata_800C4C1C_4 = 6.28318548f;
const float unbake_rodata_800C4C20_4 = 3.14159274f;
const float unbake_rodata_800C4C24_4 = 6.28318548f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4C58_4 = (-3.14159274f);
const float unbake_rodata_800C4C5C_4 = 6.28318548f;
const float unbake_rodata_800C4C60_4 = 3.14159274f;
const float unbake_rodata_800C4C64_4 = 6.28318548f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4968_4 = (-3.14159274f);
const float unbake_rodata_800C496C_4 = 6.28318548f;
const float unbake_rodata_800C4970_4 = 3.14159274f;
const float unbake_rodata_800C4974_4 = 6.28318548f;
#endif
