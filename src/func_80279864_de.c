#include "common/types.h"
#include "span_1000/code_80279764.h"
#include "span_1000/types.h"
#include "types.h"

s32 func_80279864_de(s16 *arg0, s16 arg1, s16 arg2)
{
  s16 temp_v1;
  long new_var;
  temp_v1 = *arg0;
  new_var = 4;
  if (temp_v1 == 0x18)
  {
    return 0;
  }
  ((struct func_8025E52C_S1 *) ((temp_v1 * new_var) + ((char *) arg0)))->unk2 = arg1;
  ((struct func_8022E3B4_S3 *) (((*arg0) * new_var) + ((char *) arg0)))->unk4 = arg2;
  *arg0 = ((u16) (*arg0)) + 1;
  return 1;
}
