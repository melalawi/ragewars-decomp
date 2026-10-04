#include "span_1000/code_8024C444.h"
#include "span_1000/types.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;





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
