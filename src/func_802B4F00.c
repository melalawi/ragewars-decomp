
#include "basetypes.h"
extern char D_800CC680[];
extern f32 D_800CC688;
typedef struct func_802B4F00_S1 func_802B4F00_S1;
struct func_802B4F00_S1 {
    char pad0[0x4];
    f32 unk4;
};

f32 func_802B4F00(s32 arg0)
{
  f32 result;
  f32 base;
  s32 n;
  int new_var;
  new_var = 0;
  result = *((f32 *) (D_800CC680 + new_var));
  base = ((func_802B4F00_S1 *)(D_800CC680))->unk4;
  n = arg0;
  if (n < 0)
  {
    base = D_800CC688;
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
