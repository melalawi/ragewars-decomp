
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8020D1FC_S1 func_8020D1FC_S1;
struct func_8020D1FC_S1 {
    char pad0[0x38];
    s32 unk38;
};

void func_8020D1FC(s32 arg0)
{
  void *var_a0;
  int new_var;
  s32 var_v0;
  new_var = -1;
  var_v0 = 0x3F;
  var_a0 = arg0 + 0xFC;
  do
  {
    ((func_8020D1FC_S1 *)(var_a0))->unk38 = new_var;
    var_v0 -= 1;
    var_a0 -= 4;
  }
  while (var_v0 >= 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3664_4 = 1.0f;
const float unbake_rodata_800C3668_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C87D0_4 = (-1.0f);
const float unbake_rodata_800C87D4_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C36FC_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C3700_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C3704_4[] = {0x41, 0xC0, 0x00, 0x00};
const unsigned char unbake_rodata_800C3708_4[] = {0x42, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C370C_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C3710_4[] = {0x42, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C3714_3[] = {0x42, 0x40, 0x00};
const unsigned char unbake_rodata_800C3718_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C371C_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3720_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3724_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3728_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C372C_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3730_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3734_4[] = {0x00, 0x00, 0x00, 0xFF};
const unsigned char unbake_rodata_800C3738_4[] = {0x00, 0x00, 0x00, 0x96};
const unsigned char unbake_rodata_800C373C_4[] = {0x00, 0x00, 0x00, 0x96};
const unsigned char unbake_rodata_800C3740_48[] = {0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF};
const float unbake_rodata_800C3788_4 = 0.25f;
const float unbake_rodata_800C378C_4 = 1.0f;
const float unbake_rodata_800C3790_4 = 0.400000006f;
const float unbake_rodata_800C3794_4 = (-1.0f);
const float unbake_rodata_800C3798_4 = 1.0f;
const float unbake_rodata_800C379C_4 = (-1.0f);
const float unbake_rodata_800C37A0_4 = 1.0f;
const float unbake_rodata_800C37A4_4 = 35.2000008f;
const float unbake_rodata_800C37A8_4 = 1.0f;
const float unbake_rodata_800C37AC_4 = 2.14748365e+09f;
const float unbake_rodata_800C37B0_4 = 2.0f;
const float unbake_rodata_800C37B4_4 = 0.03125f;
const float unbake_rodata_800C37B8_4 = 0.550000012f;
const float unbake_rodata_800C37BC_4 = 16.0f;
const float unbake_rodata_800C37C0_4 = 255.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3704_4 = 1.0f;
const float unbake_rodata_800C3708_4 = 0.5f;
const float unbake_rodata_800C370C_4 = 18.0f;
const float unbake_rodata_800C3710_4 = 0.800000012f;
const float unbake_rodata_800C3714_4 = 0.600000024f;
const float unbake_rodata_800C3718_4 = 0.5f;
const float unbake_rodata_800C371C_4 = 0.800000012f;
const float unbake_rodata_800C3720_4 = 0.400000006f;
const float unbake_rodata_800C3724_4 = 0.0061599859f;
const float unbake_rodata_800C3728_4 = 1.0f;
const float unbake_rodata_800C372C_4 = 0.0123199718f;
const float unbake_rodata_800C3730_4 = 255.0f;
const float unbake_rodata_800C3734_4 = 0.333333343f;
const float unbake_rodata_800C3738_4 = 9.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C36E0_4 = (-1.0f);
const float unbake_rodata_800C36E4_4 = 1.0f;
#endif
