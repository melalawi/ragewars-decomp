#include "span_1000/code_802B6958.h"
#include "span_1000/types.h"
#include "types.h"











s32 func_802B18A4_de(void *arg0, void *arg1)
{
  s32 var_v1;
  char new_var;
  new_var = 0x40;
  var_v1 = (((struct func_80206930_S3 *) ((s8 *) ((((ObjectLinks34 *) arg0)->unk_31 * 0x10) + ((func_802B6B90_S1 *) arg1)->unk60)))->unk7) + ((((struct ObjectStateD *) ((s8 *) ((ObjectLinks34 *) arg0)->unk_20))->unk_C) - new_var);
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
