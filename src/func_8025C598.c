
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8025C598_S1 func_8025C598_S1;
struct func_8025C598_S1 {
    s32 unk0;
    char pad0[0xB0 - 0x0 - sizeof(s32)];
    s32 unkB0;
};

void func_8025C598(void *arg0)
{
  s16 *new_var;
  s32 temp_v1;
  void *temp_s0;
  temp_v1 = ((func_8025C598_S1 *)(arg0))->unkB0;
  temp_s0 = temp_v1 + 0x84;
  new_var = (s16 *) (((s8 *) (temp_v1 + ((((func_8025C598_S1 *)(arg0))->unk0) * 2))) + 0xDC);
  func_802B7FD0(temp_s0, *new_var);
  func_802B76F0(temp_s0);
}
