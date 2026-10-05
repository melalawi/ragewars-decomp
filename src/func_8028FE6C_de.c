#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8028FC98.h"
#include "types.h"

s32 func_8028FE6C_de(s32 arg0, s32 arg1, s32 *arg2)
{
  s8 *new_var2;
  s8 *new_var;
  void *temp_a0;
  new_var2 = (s8 *) (arg0 + ((arg1 + 1) * 4));
  temp_a0 = arg0 + (arg1 * 4);
  new_var = (s8 *) temp_a0;
  *arg2 = (((func_80203E78_S1 *)(new_var2))->unk4) - (((func_80203E78_S1 *)(new_var))->unk4);
  return ((func_80203E78_S1 *)(new_var))->unk4;
}
