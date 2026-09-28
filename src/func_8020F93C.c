
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8020F93C(void *arg0)
{
  s32 var_a1;
  s32 var_v1;
  void *var_a0;
  var_a0 = arg0;
  var_a1 = 0;
  if ((*((s32 *) (((s8 *) var_a0) + 0x38))) == 0)
  {
    return 0;
  }
  var_v1 = 0;
  do
  {
    if (((*((s32 *) (((s8 *) var_a0) + 0x3C))) != 0) && ((*((s32 *) (((s8 *) var_a0) + 0x6C))) != 0))
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
