#include "span_1000/code_8025AE3C.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;



void func_8025C578_de(void *arg0)
{
  s16 *new_var;
  s32 temp_v1;
  void *temp_s0;
  temp_v1 = ((func_8025C598_S1 *)(arg0))->unkB0;
  temp_s0 = temp_v1 + 0x84;
  new_var = (s16 *) (((s8 *) (temp_v1 + ((((func_8025C598_S1 *)(arg0))->unk0) * 2))) + 0xDC);
  func_802B2F00_de(temp_s0, *new_var);
  func_802B2620_de(temp_s0);
}
