
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_80209804_S1 func_80209804_S1;
struct func_80209804_S1 {
    char pad0[0x14];
    s32 unk14;
};

void func_80209804(s32 arg0)
{
  s32 var_v0;
  void *var_a0;
  int new_var;
  new_var = -1;
  var_v0 = 3;
  var_a0 = arg0 + 0xC;
  do
  {
    ((func_80209804_S1 *)(var_a0))->unk14 = new_var;
    var_v0 -= 1;
    var_a0 -= 4;
  }
  while (var_v0 >= 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C31F4_4 = 2.14748365e+09f;
const float unbake_rodata_800C31F8_4 = 2.14748365e+09f;
const float unbake_rodata_800C31FC_4 = 2.14748365e+09f;
const float unbake_rodata_800C3200_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C82C8_8 = 4294967296.0;
const double unbake_rodata_800C82D0_8 = 4294967296.0;
const double unbake_rodata_800C82D8_8 = 4294967296.0;
const float unbake_rodata_800C82E0_4 = 2.14748365e+09f;
const float unbake_rodata_800C82E4_4 = 1024.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C326C_4 = 1.0f;
const float unbake_rodata_800C3270_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C32A8_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C31D8_8 = 4294967296.0;
const double unbake_rodata_800C31E0_8 = 4294967296.0;
const double unbake_rodata_800C31E8_8 = 4294967296.0;
const float unbake_rodata_800C31F0_4 = 2.14748365e+09f;
const float unbake_rodata_800C31F4_4 = 1024.0f;
#endif
