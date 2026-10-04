#include "span_1000/code_8024B644.h"
#include "types.h"
extern char D_800C39E0_de;
extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 *func_8024BFD4_de(void *arg0, s8 arg1);
extern void *func_8028FDB4_de(void *arg0, s32 arg1);
extern s32 func_802484B0_de(void *arg0, s32 arg1, void *arg2);
extern void func_80253754_de(s32 arg0, s32 arg1);



s32 func_8024B7E4_de(void *arg0, s32 arg1)
{
  void *resource;
  s32 *entry;
  s32 value;
  s32 result;
  result = 0;
  if ((((func_8024B7D4_S1 *)(arg0))->unk100) & 0x40000)
  {
    if (resource)
    {
      resource = func_8025193C_de(0, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkD0, 0, 0, 0, (&D_800C39E0_de) + 4, arg1);
    }
    else
    {
      resource = func_8025193C_de(0, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkD0, 0, 0, 0, (&D_800C39E0_de) + 4, arg1);
    }
    if (resource == 0)
    {
      return result;
    }
    entry = func_8024BFD4_de(arg0, ((func_8024B7D4_S1 *)(arg0))->unk1);
    if (entry != 0)
    {
      value = *entry;
      result = func_802484B0_de(arg0, value, func_8028FDB4_de(*((void **) resource), 0));
      func_80253754_de(0, (s32) entry);
    }
    func_80253754_de(0, (s32) resource);
  }
  return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800E002C_64[] = {0x00, 0x42, 0xD8, 0x70, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x11, 0x00, 0x42, 0xBD, 0x40, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x11, 0x00, 0x42, 0xD6, 0xAC, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x11, 0x00, 0x42, 0xDA, 0x84, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x11, 0x00, 0x42, 0xD9, 0x68, 0x00, 0x00, 0x0E, 0x0A, 0x00, 0x00, 0x00, 0x11, 0x00, 0x42, 0xD6, 0xDC, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x11, 0x00, 0x42, 0xDA, 0xA4, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x11, 0x00, 0x42, 0xDA, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E46A8_4[] = {0x00, 0x00, 0x00, 0x02};
#elif defined(VERSION_EU)
const float unbake_rodata_800EE17C_4 = 0.300000012f;
const float unbake_rodata_800EE180_4 = 3.0f;
const float unbake_rodata_800EE184_4 = (-30.0f);
const float unbake_rodata_800EE188_4 = (-100.0f);
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E9170_4C[] = {0x004263B4U, 0x004263D8U, 0x004263FCU, 0x00426420U, 0x00426444U, 0x00426468U, 0x0042648CU, 0x004264B0U, 0x004264D4U, 0x004264F8U, 0x0042653CU, 0x0042653CU, 0x0042653CU, 0x0042653CU, 0x0042653CU, 0x0042653CU, 0x0042653CU, 0x0042651CU, 0x0042653CU};
#elif defined(VERSION_DE)
const double unbake_rodata_800DE3F0_8 = 4294967296.0;
const unsigned int unbake_rodata_800DE3F8_24[] = {0x0043F418U, 0x0043F440U, 0x0043F440U, 0x0043F420U, 0x0043F430U, 0x0043F440U, 0x0043F450U, 0x0043F490U, 0x0043F4D0U};
const float unbake_rodata_800DE41C_4 = 2.14748365e+09f;
const float unbake_rodata_800DE420_4 = 2.14748365e+09f;
const float unbake_rodata_800DE424_4 = 2.14748365e+09f;
#endif
