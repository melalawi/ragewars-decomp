
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8024DE5C_S1 func_8024DE5C_S1;
typedef struct func_8024DE5C_S2 func_8024DE5C_S2;
struct func_8024DE5C_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8024DE5C_S2 {
    s32 unk0;
    char pad0[0x14 - 0x0 - sizeof(s32)];
    s32 unk14;
};

s32 func_8024DE5C(void *arg0)
{
  s32 temp_a0;
  void *temp_v1;
  temp_v1 = ((func_8024DE5C_S1 *)(arg0))->unk18;
  temp_a0 = ((func_8024DE5C_S2 *)(temp_v1))->unk0;
  if ((temp_a0 == 1) || (temp_a0 == 4))
  {
    if (temp_v1)
    {
      return (((func_8024DE5C_S2 *)(temp_v1))->unk14) & 0x10;
    }
    else
    {
      return (((func_8024DE5C_S2 *)(temp_v1))->unk14) & 0x10;
    }
  }
  return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800F0F40_18[] = {0x00, 0x00, 0x00, 0x10, 0x21, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8F, 0xC2, 0x00, 0x28, 0x30, 0x43, 0xFF, 0xFF, 0xAF, 0xC3, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E5E74_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EE980_20[] = {0x0043EA68U, 0x0043EA98U, 0x0043EAC8U, 0x0043EAF8U, 0x0043EB28U, 0x0043EB58U, 0x0043EB88U, 0x0043EBB8U};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9760_4 = 0.300000012f;
const float unbake_rodata_800E9764_4 = 0.00899999961f;
const float unbake_rodata_800E9768_4 = 3.0f;
const float unbake_rodata_800E976C_4 = (-5.0f);
const float unbake_rodata_800E9770_4 = (-100.0f);
const float unbake_rodata_800E9774_4 = (-30.0f);
const float unbake_rodata_800E9778_4 = 0.300000012f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DEAE4_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800DEAE8_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800DEAEC_4[] = {0x00, 0x00, 0x00, 0x00};
#endif
