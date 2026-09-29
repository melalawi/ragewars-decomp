
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8028E020_S1 func_8028E020_S1;
typedef struct func_8028E020_S2 func_8028E020_S2;
struct func_8028E020_S1 {
    char pad0[0x4];
    f32 unk4;
};
struct func_8028E020_S2 {
    char pad0[0x4];
    f32 unk4;
};

s32 func_8028E020(void *arg0, void *arg1)
{
  f32 new_var;
  s32 var_v0;
  new_var = ((func_8028E020_S1 *)(arg0))->unk4;
  var_v0 = 1;
  if ((((func_8028E020_S2 *)(arg1))->unk4) < new_var)
  {
    var_v0 = -1;
  }
  return var_v0;
}
