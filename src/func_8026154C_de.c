#include "span_1000/code_80260D98.h"
#include "types.h"

extern f32 D_800C41A8_de[2];
s32 func_8026154C_de(f32 arg0)
{
  unsigned long long new_var;
  f32 temp_f1;
  s32 var_v1;
  var_v1 = 0;
  new_var = 1;
  temp_f1 = arg0;
  temp_f1 = (D_800C41A8_de[new_var] / (2.0f * temp_f1)) + D_800C41A8_de[new_var];
  if (D_800C41A8_de[0] <= arg0)
  {
    return 0;
  }
  if (D_800C41A8_de[new_var] < temp_f1)
  {
    do
    {
      var_v1 += 1;
    }
    while (((f32) (1 << var_v1)) < temp_f1);
  }
  return var_v1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C40D8_4 = 0.5f;
const float unbake_rodata_800C40DC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9298_4 = 0.5f;
const float unbake_rodata_800C929C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4458_4 = 0.5f;
const float unbake_rodata_800C445C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4498_4 = 0.5f;
const float unbake_rodata_800C449C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C41A8_4 = 0.5f;
const float unbake_rodata_800C41AC_4 = 1.0f;
#endif
