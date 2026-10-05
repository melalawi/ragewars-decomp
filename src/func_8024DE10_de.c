#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8024D018.h"
#include "types.h"











s32 func_8024DE10_de(void *arg0)
{
  s32 temp_a0;
  void *temp_v1;
  temp_v1 = ((func_80205314_S1 *)(arg0))->unk18;
  temp_a0 = ((struct Shape_typemap_3 *)(temp_v1))->field_0;
  if ((temp_a0 == 1) || (temp_a0 == 4))
  {
 do { return (((struct func_80204468_S3 *) temp_v1)->unk14) & 0x100; } while (0);
  }
  return 0;
}
