
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_802B6974_S1 func_802B6974_S1;
typedef struct func_802B6974_S2 func_802B6974_S2;
struct func_802B6974_S1 {
    char pad0[0x20];
    void* unk20;
    char pad20[0x31 - 0x20 - sizeof(void*)];
    u8 unk31;
};
struct func_802B6974_S2 {
    char pad0[0x60];
    s32 unk60;
};

s32 func_802B6974(void *arg0, void *arg1)
{
  s32 var_v1;
  char new_var;
  new_var = 0x40;
  var_v1 = (*((u8 *) (((s8 *) (((((func_802B6974_S1 *)(arg0))->unk31) * 0x10) + (((func_802B6974_S2 *)(arg1))->unk60))) + 7))) + ((*((u8 *) (((s8 *) (((func_802B6974_S1 *)(arg0))->unk20)) + 0xC))) - new_var);
  if (var_v1 < 0)
  {
    var_v1 = 0;
  }
  if (var_v1 >= 0x80)
  {
    var_v1 = 0x7F;
  }
  return var_v1 & 0xFF;
}
