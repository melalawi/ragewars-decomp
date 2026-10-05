#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8020AF9C.h"
#include "types.h"

void func_8020D1FC_de(s32 arg0)
{
  void *var_a0;
  int new_var;
  s32 var_v0;
  new_var = -1;
  var_v0 = 0x3F;
  var_a0 = arg0 + 0xFC;
  do
  {
    ((func_8020D1FC_S1 *)(var_a0))->unk38 = new_var;
    var_v0 -= 1;
    var_a0 -= 4;
  }
  while (var_v0 >= 0);
}
