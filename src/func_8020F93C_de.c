#include "span_1000/code_8020F2A8.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;



s32 func_8020F93C_de(void *arg0)
{
  s32 var_a1;
  s32 var_v1;
  void *var_a0;
  var_a0 = arg0;
  var_a1 = 0;
  if ((((func_8020F93C_S1 *)(var_a0))->unk38) == 0)
  {
    return 0;
  }
  var_v1 = 0;
  do
  {
    if (((((func_8020F93C_S1 *)(var_a0))->unk3C) != 0) && ((((func_8020F93C_S1 *)(var_a0))->unk6C) != 0))
    {
      var_a1 += 1;
      var_a0++;
      var_a0--;
    }
    var_v1 += 1;
    var_a0 += 4;
  }
  while (var_v1 < 0xA);
  return var_a1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E00_4 = 0.00392156886f;
const float unbake_rodata_800C3E04_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8F20_4 = 2.14748365e+09f;
const float unbake_rodata_800C8F24_4 = 0.00787401572f;
const float unbake_rodata_800C8F28_4 = 102.399994f;
const float unbake_rodata_800C8F2C_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3C50_4 = 1.0f;
const float unbake_rodata_800C3C54_4 = 1.5f;
const float unbake_rodata_800C3C58_4 = 65536.0f;
const float unbake_rodata_800C3C5C_4 = 3.05185094e-05f;
const float unbake_rodata_800C3C60_4 = 2.0f;
const float unbake_rodata_800C3C64_4 = 2.14748365e+09f;
const float unbake_rodata_800C3C68_4 = 1.0f;
const float unbake_rodata_800C3C6C_4 = 0.5f;
const float unbake_rodata_800C3C70_4 = 0.300000012f;
const float unbake_rodata_800C3C74_4 = (-2.0f);
const float unbake_rodata_800C3C78_4 = 3.0f;
const float unbake_rodata_800C3C7C_4 = 0.970000029f;
const float unbake_rodata_800C3C80_4 = 0.0299999993f;
const float unbake_rodata_800C3C84_4 = 1.52587891e-05f;
const float unbake_rodata_800C3C88_4 = 0.5f;
const float unbake_rodata_800C3C8C_4 = 65536.0f;
const float unbake_rodata_800C3C90_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3C74_4 = 1.0f;
const float unbake_rodata_800C3C78_4 = 0.5f;
const float unbake_rodata_800C3C7C_4 = 0.5f;
const float unbake_rodata_800C3C80_4 = 0.5f;
const float unbake_rodata_800C3C84_4 = 0.5f;
const float unbake_rodata_800C3C88_4 = 0.699999988f;
const float unbake_rodata_800C3C8C_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C3E10_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E14_4 = 5.11999989f;
const float unbake_rodata_800C3E18_4 = 1.57079649f;
const float unbake_rodata_800C3E1C_4 = 3.14159298f;
const float unbake_rodata_800C3E20_4 = 4.71238947f;
const float unbake_rodata_800C3E24_4 = 102.399994f;
const float unbake_rodata_800C3E28_4 = 10.2399998f;
const float unbake_rodata_800C3E2C_4 = 0.5f;
#endif
