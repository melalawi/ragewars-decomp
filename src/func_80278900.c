
#include "basetypes.h"
extern s8 D_800D2854[];
extern s32 D_800D2978;
typedef struct func_80278900_S1 func_80278900_S1;
struct func_80278900_S1 {
    char pad0[0xBC];
    u8 unkBC;
};

f32 func_80278900(void *arg0)
{
  u32 temp_a0;
  s32 idx;
  temp_a0 = ((func_80278900_S1 *)(arg0))->unkBC;
  idx = D_800D2978 + ((((temp_a0 % 7) & 0xFF) + 1) * 0x10);
  idx = idx % 90;
  return (f32) D_800D2854[idx];
}
