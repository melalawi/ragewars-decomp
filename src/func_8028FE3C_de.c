#include "common/types.h"
#include "span_1000/code_8028FD24.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;



s32 func_8028FE3C_de(s32 arg0, s32 arg1, s32 arg2, s32 *arg3)
{
  void *temp_a0;
  s32 *new_var;
  new_var = (s32 *) (((s8 *) (arg0 + ((arg2 + 1) * 4))) + 4);
  temp_a0 = arg0 + (arg2 * 4);
  *arg3 = (*new_var) - (((func_80203E78_S1 *)(temp_a0))->unk4);
  return arg1 + (((func_80203E78_S1 *)(temp_a0))->unk4);
}
