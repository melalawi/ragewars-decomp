#include "span_1000/code_8028FC98.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "types.h"

/** Return the byte address named by an indexed word offset from the base. */
char *func_8028FDB4_de(int *arg0, int arg1) {
    int *entry = arg0 + arg1;
    return (char *)arg0 + entry[1];
}

s32 func_8028FDC8_de(s32 arg0, s32 arg1, s32 *arg2)
{
  int new_var2;
  s32 new_var;
  void *temp_a1;
  new_var2 = 4;
  new_var = ((struct Shape_typemap_3 *) (((s8 *) (arg0 + ((arg1 + 1) * new_var2))) + new_var2))->field_0;
  temp_a1 = arg0 + ((2 * arg1) * 2);
  *arg2 = new_var - ((func_80203E78_S1 *)temp_a1)->unk4;
  return arg0 + (((func_80203E78_S1 *)(temp_a1))->unk4);
}
