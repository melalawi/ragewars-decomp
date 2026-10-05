#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8024D018.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;





s32 func_8024E00C_de(void *arg0)
{
  unsigned int new_var;
  void *temp_a0;
  temp_a0 = ((func_80205314_S1 *)(arg0))->unk18;
  new_var = 0;
  if ((*(s32 *)temp_a0) != 1)
  {
    return new_var;
  }
  if (new_var)
  {
    return (((func_8024DED0_S2 *)(temp_a0))->unk4C) & 0x1000;
  }
  else
  {
    return (((func_8024DED0_S2 *)(temp_a0))->unk4C) & 0x1000;
  }
}
