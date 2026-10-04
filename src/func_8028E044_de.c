#include "common/types.h"
#include "span_1000/code_8028DF6C.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;





s32 func_8028E044_de(void *arg0, void *arg1)
{
  f32 new_var;
  s32 var_v0;
  new_var = ((func_802077F4_S2 *)(arg0))->unk4;
  var_v0 = 1;
  if ((((func_802077F4_S2 *)(arg1))->unk4) < new_var)
  {
    var_v0 = -1;
  }
  return var_v0;
}
