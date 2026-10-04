#include "common/types.h"
#include "span_1000/code_802B3A80.h"
#include "types.h"

extern char D_800C7430_de[];



f32 func_802AFE30_de(s32 arg0)
{
  f32 result;
  f32 base;
  s32 n;
  int new_var;
  new_var = 0;
  result = *((f32 *) (D_800C7430_de + new_var));
  base = ((func_802077F4_S2 *)(D_800C7430_de))->unk4;
  n = arg0;
  if (n < 0)
  {
    base = (0.999422550201416f);
    n = -n;
  }
  if (n != 0)
  {
    do
    {
      if (n & 1)
      {
        result *= base;
      }
      n >>= 1;
      base *= base;
    }
    while (n != 0);
  }
  return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7350_4 = 1.0f;
const float unbake_rodata_800C7354_4 = 1.00057781f;
const float unbake_rodata_800C7358_4 = 0.99942255f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC680_4 = 1.0f;
const float unbake_rodata_800CC684_4 = 1.00057781f;
const float unbake_rodata_800CC688_4 = 0.99942255f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C8020_4 = 1.0f;
const float unbake_rodata_800C8024_4 = 1.00057781f;
const float unbake_rodata_800C8028_4 = 0.99942255f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C89F0_4 = 1.0f;
const float unbake_rodata_800C89F4_4 = 1.00057781f;
const float unbake_rodata_800C89F8_4 = 0.99942255f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C7430_4 = 1.0f;
const float unbake_rodata_800C7434_4 = 1.00057781f;
const float unbake_rodata_800C7438_4 = 0.99942255f;
#endif
