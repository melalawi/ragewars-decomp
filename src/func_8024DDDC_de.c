#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8024D018.h"
#include "types.h"

s32 func_8024DDDC_de(void *arg0)
{
  s32 temp_a0;
  void *temp_v1;
  temp_v1 = ((func_80205314_S1 *)(arg0))->unk18;
  temp_a0 = ((func_8021CD70_S3 *)(temp_v1))->unk0;
  if ((temp_a0 == 1) || (temp_a0 == 4))
  {
    if (temp_v1)
    {
      return (((func_8021CD70_S3 *)(temp_v1))->unk14) & 0x80;
    }
    else
    {
      return (((func_8021CD70_S3 *)(temp_v1))->unk14) & 0x80;
    }
  }
  return 0;
}
