
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8020F93C_S1 func_8020F93C_S1;
struct func_8020F93C_S1 {
    char pad0[0x38];
    s32 unk38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    s32 unk3C;
    char pad3C[0x6C - 0x3C - sizeof(s32)];
    s32 unk6C;
};

s32 func_8020F93C(void *arg0)
{
  s32 var_a1;
  s32 var_v1;
  void *var_a0;
  var_a0 = arg0;
  var_a1 = 0;
  if ((((func_8020F93C_S1 *)(var_a0))->unk38) == 0)
  {
    return 0;
  }
  var_v1 = 0;
  do
  {
    if (((((func_8020F93C_S1 *)(var_a0))->unk3C) != 0) && ((((func_8020F93C_S1 *)(var_a0))->unk6C) != 0))
    {
      var_a1 += 1;
      var_a0++;
      var_a0--;
    }
    var_v1 += 1;
    var_a0 += 4;
  }
  while (var_v1 < 0xA);
  return var_a1;
}
