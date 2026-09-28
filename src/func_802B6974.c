
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_802B6974(void *arg0, void *arg1)
{
  s32 var_v1;
  char new_var;
  new_var = 0x40;
  var_v1 = (*((u8 *) (((s8 *) (((*((u8 *) (((s8 *) arg0) + 0x31))) * 0x10) + (*((s32 *) (((s8 *) arg1) + 0x60))))) + 7))) + ((*((u8 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x20)))) + 0xC))) - new_var);
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
