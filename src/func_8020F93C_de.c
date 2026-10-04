#include "span_1000/code_8020F2A8.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;



s32 func_8020F93C_de(void *arg0)
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
