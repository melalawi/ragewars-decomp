#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8024D018.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;





s32 func_8024E0A0_de(void *arg0)
{
  void *temp_a0;
  int new_var;
  temp_a0 = ((func_80205314_S1 *)(arg0))->unk18;
  new_var = 1;
  if ((((func_8024E090_S2 *)(temp_a0))->unk0) != new_var)
  {
    return 0;
  }
  if (new_var)
  {
    return (((func_8024E090_S2 *)(temp_a0))->unk4C) & 0x200;
  }
}
