#include "span_1000/code_8022D1FC.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_80449870_de(void *);
extern void func_802636B0_de(void *arg0);





void func_8022D4BC_de(void *arg0)
{
  f32 new_var;
  new_var = ((ObjectLinks1458_2 *)(arg0))->unk_658;
  if (D_800C2DBC_de < new_var)
  {
    ((ObjectLinks1458_2 *)(arg0))->unk_13C8 = 1;
    ((ObjectLinks1458_2 *)(arg0))->unk_1238 = -1;
    ((ObjectLinks1458_2 *)(arg0))->unk_1230 = 0;
    ((ObjectLinks1458_2 *)(arg0))->unk_122C = (((ObjectLinks1458_2 *)(arg0))->unk_122C) & (~0x20);
    func_80449870_de(arg0);
    ((ObjectLinks1458_2 *)(arg0))->unk_50 = D_800C2DC0_de;
    ((ObjectLinks1458_2 *)(arg0))->unk_54 = D_800C2DC0_de;
    ((ObjectLinks1458_2 *)(arg0))->unk_58 = D_800C2DC0_de;
    return;
  }
  func_802636B0_de((char *)arg0 + 0x688);
  ((struct IntegerState244 *) ((char *) ((ObjectLinks1458_2 *) arg0)->unk_1454))->unk_23C = 0;
  ((struct IntegerState244 *) ((char *) ((ObjectLinks1458_2 *) arg0)->unk_1454))->unk_240 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CEC_4 = 60.0f;
const float unbake_rodata_800C2CF0_4 = 0.0199999996f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EAC_4 = 60.0f;
const float unbake_rodata_800C7EB0_4 = 0.0199999996f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3060_4 = 60.0f;
const float unbake_rodata_800C3064_4 = 0.0199999996f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30A0_4 = 60.0f;
const float unbake_rodata_800C30A4_4 = 0.0199999996f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DBC_4 = 60.0f;
const float unbake_rodata_800C2DC0_4 = 0.0199999996f;
#endif
