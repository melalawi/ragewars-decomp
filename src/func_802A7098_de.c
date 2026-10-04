#include "span_1000/code_802A776C.h"
#include "span_1000/types.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;



s32 func_802A7098_de(void *arg0)
{
  s32 var_a1;
  s32 var_a2;
  s8 *new_var;
  var_a2 = 0;
  var_a1 = 3;
  do
  {
    new_var = ((s8 *) (arg0 + ((((struct Owner_func_8020388C_de *)(arg0))->id) * 0x38))) + 4;
    if ((*((s32 *) new_var)) != 0)
    {
      var_a2 += 1;
    }
    var_a1 -= 1;
  }
  while (var_a1 >= 0);
  return var_a2 != 0;
}
