
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8028FDA8_S1 func_8028FDA8_S1;
struct func_8028FDA8_S1 {
    char pad0[0x4];
    s32 unk4;
};

s32 func_8028FDA8(s32 arg0, s32 arg1, s32 *arg2)
{
  int new_var2;
  s32 new_var;
  void *temp_a1;
  new_var2 = 4;
  new_var = *((s32 *) (((s8 *) (arg0 + ((arg1 + 1) * new_var2))) + new_var2));
  temp_a1 = arg0 + ((2 * arg1) * 2);
  *arg2 = new_var - ((func_8028FDA8_S1 *)temp_a1)->unk4;
  return arg0 + (((func_8028FDA8_S1 *)(temp_a1))->unk4);
}
