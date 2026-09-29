
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_802A8088_S1 func_802A8088_S1;
struct func_802A8088_S1 {
    char pad0[0xE4];
    u16 unkE4;
};

s32 func_802A8088(void *arg0)
{
  s32 var_a1;
  s32 var_a2;
  s8 *new_var;
  var_a2 = 0;
  var_a1 = 3;
  do
  {
    new_var = ((s8 *) (arg0 + ((((func_802A8088_S1 *)(arg0))->unkE4) * 0x38))) + 4;
    if ((*((s32 *) new_var)) != 0)
    {
      var_a2 += 1;
    }
    var_a1 -= 1;
  }
  while (var_a1 >= 0);
  return var_a2 != 0;
}
