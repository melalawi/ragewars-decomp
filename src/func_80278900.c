
#include "basetypes.h"
extern s8 D_800D2854[];
extern s32 D_800D2978;
f32 func_80278900(void *arg0)
{
  u32 temp_a0;
  s32 idx;
  temp_a0 = *((u8 *) (((char *) arg0) + 0xBC));
  idx = D_800D2978 + ((((temp_a0 % 7) & 0xFF) + 1) * 0x10);
  idx = idx % 90;
  return (f32) D_800D2854[idx];
}
