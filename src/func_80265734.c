
#include "basetypes.h"
extern f32 func_802BB630(f32 arg0);
extern f32 D_800C9488;
extern f32 D_800C948C;
extern f32 D_800C9490;
f32 func_80265734(f32 arg0)
{
  f32 var_f1;
  f32 var_f0;
  var_f0 = arg0;
  if (var_f0 < 0.0f)
  {
    var_f1 = 0.0f;
    var_f0 = var_f1;
  }
  else
  {
    var_f1 = D_800C9488;
    if (var_f1 < var_f0)
    {
      var_f0 = var_f1;
    }
  }
  return (D_800C9490 - func_802BB630(var_f0 * D_800C948C)) * (*((f32 *) (((char *) (&D_800C9490)) + 4)));
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C42C8_4 = 1.0f;
const float unbake_rodata_800C42CC_4 = 3.14159298f;
const float unbake_rodata_800C42D0_4 = 1.0f;
const float unbake_rodata_800C42D4_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9488_4 = 1.0f;
const float unbake_rodata_800C948C_4 = 3.14159298f;
const float unbake_rodata_800C9490_4 = 1.0f;
const float unbake_rodata_800C9494_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4648_4 = 1.0f;
const float unbake_rodata_800C464C_4 = 3.14159298f;
const float unbake_rodata_800C4650_4 = 1.0f;
const float unbake_rodata_800C4654_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4688_4 = 1.0f;
const float unbake_rodata_800C468C_4 = 3.14159298f;
const float unbake_rodata_800C4690_4 = 1.0f;
const float unbake_rodata_800C4694_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4398_4 = 1.0f;
const float unbake_rodata_800C439C_4 = 3.14159298f;
const float unbake_rodata_800C43A0_4 = 1.0f;
const float unbake_rodata_800C43A4_4 = 0.5f;
#endif
