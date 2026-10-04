#include "common/types.h"
#include "span_1000/code_8024DF4C.h"
#include "span_1000/types.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;




s32 func_8024E0F0_de(void *arg0)
{
  void *new_var2;
  int new_var;
  void *temp_a0;
  temp_a0 = ((func_80205314_S1 *)(arg0))->unk18;
  new_var2 = temp_a0;
  if ((*(s32 *)new_var2) != 1)
  {
    if (temp_a0 || new_var)
    {
      return 0;
    }
    else
    {
      return 0;
    }
  }
  new_var = 0x4C;
  return (((func_8024DED0_S2 *)temp_a0)->unk4C) & 0x2000;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FCB6C_4[] = {0x08, 0x27, 0xBD, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800F7130_19[] = {0x6D, 0x5F, 0x48, 0x65, 0x61, 0x64, 0x42, 0x6C, 0x6F, 0x77, 0x6E, 0x4F, 0x66, 0x66, 0x44, 0x65, 0x61, 0x74, 0x68, 0x41, 0x6E, 0x69, 0x6D, 0x60, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800EEAFC_4 = 255.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E99F8_2C[] = {0x0043D6D4U, 0x0043D6DCU, 0x0043D6E4U, 0x0043D6ECU, 0x0043D6F4U, 0x0043D6FCU, 0x0043D704U, 0x0043D70CU, 0x0043D714U, 0x0043D71CU, 0x0043D724U};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DF964_C[] = {0x80, 0x0D, 0x34, 0x64, 0x80, 0x0D, 0x34, 0x68, 0x80, 0x0D, 0x34, 0x6C};
#endif
