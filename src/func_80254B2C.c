
#include "basetypes.h"
extern char D_801051A0;
extern s32 func_802559D4(void *arg0, s32 arg1);
extern s32 func_802558C0(void *, s32);
extern s32 func_802512C8(s32, s32, s32);
s32 func_80254B2C(s32 arg0, u32 arg1, s32 arg2, u32 arg3)
{
  s32 result;
  s32 value;
  if (arg2 != 0)
  {
    result = func_802559D4(&D_801051A0, arg1);
  }
  else
    if (value)
  {
    result = func_802558C0(&D_801051A0, arg1);
  }
  else
  {
    result = func_802558C0(&D_801051A0, arg1);
  }
  if (result == 0)
  {
    arg3 &= 0x10;
    do
    {
      value = func_802512C8(0, 2, arg3 == 0);
    }
    while ((value != 0) && (value < arg1));
    if (value >= arg1)
    {
      if (arg2 != 0)
      {
        result = func_802559D4(&D_801051A0, arg1);
      }
      else
      {
        result = func_802558C0(&D_801051A0, arg1);
      }
    }
  }
  return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ED1EA_4[] = {0x01, 0x36, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_801002A0_4[] = {0x5C, 0xC0, 0xBF, 0x3E};
#endif
