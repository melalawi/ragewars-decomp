#include "common/types.h"
#include "span_1000/code_80208410.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;



void func_80209804_de(s32 arg0)
{
  s32 var_v0;
  void *var_a0;
  int new_var;
  new_var = -1;
  var_v0 = 3;
  var_a0 = arg0 + 0xC;
  do
  {
    ((func_80204468_S3 *)(var_a0))->unk14 = new_var;
    var_v0 -= 1;
    var_a0 -= 4;
  }
  while (var_v0 >= 0);
}
