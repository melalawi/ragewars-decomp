#include "span_1000/code_8022C36C.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800C2DB0_de;







void func_8022D164_de(void *arg0, void *arg1)
{
  f32 new_var3;
  f32 *new_var;
  s8 *new_var2;
  new_var2 = (s8 *) arg0;
  new_var3 = (f32) D_800C2DB0_de;
  ((func_8022D154_S1 *)(new_var2))->unk6C0 = 0;
  new_var = &((func_8022D154_S2 *)(arg0))->unk6E0;
  ((func_8022D154_S2 *)(arg0))->unk6C4 = 0;
  *new_var = new_var3;
  ((func_8022C884_S1 *)(arg1))->unk1C = 0;
  ((func_8022C884_S1 *)(arg1))->unk20 = 0;
  ((func_8022C884_S1 *)(arg1))->unk24 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CE0_4 = 0.0170442332f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EA0_4 = 0.0170442332f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3054_4 = 0.0170442332f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3094_4 = 0.0170442332f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DB0_4 = 0.0170442332f;
#endif
