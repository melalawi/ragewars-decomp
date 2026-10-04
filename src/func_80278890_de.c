#include "span_1000/code_80276544.h"
#include "types.h"

extern s8 D_800CD604[];
extern s32 D_800CD728;



f32 func_80278890_de(void *arg0)
{
  u32 temp_a0;
  s32 idx;
  temp_a0 = ((func_80278900_S1 *)(arg0))->unkBC;
  idx = D_800CD728 + ((((temp_a0 % 7) & 0xFF) + 1) * 0x10);
  idx = idx % 90;
  return (f32) D_800CD604[idx];
}
