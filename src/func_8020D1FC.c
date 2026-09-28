
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8020D1FC(s32 arg0)
{
  void *var_a0;
  int new_var;
  s32 var_v0;
  new_var = -1;
  var_v0 = 0x3F;
  var_a0 = arg0 + 0xFC;
  do
  {
    *((s32 *) (((s8 *) var_a0) + 0x38)) = new_var;
    var_v0 -= 1;
    var_a0 -= 4;
  }
  while (var_v0 >= 0);
}
