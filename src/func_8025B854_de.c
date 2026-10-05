#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8025A3EC.h"
#include "types.h"

extern void func_802B2F00_de(void *arg0, s16 arg1);
extern s32 func_802B2620_de(void *arg0);



s32 func_8025B854_de(s32 arg0, s16 arg1)
{
  s32 temp_v0;
  s32 temp_v1;
  void *temp_s0;
  int new_var;
  temp_v0 = (arg1 * 0xCC) + arg0;
  temp_v0 = temp_v0 + 4;
  new_var = 2;
  temp_v1 = ((struct func_8025C598_S1 *) temp_v0)->unkB0;
  temp_s0 = &((func_80258D60_S1 *)(temp_v1))->unk84;
  func_802B2F00_de(temp_s0, ((struct func_8025C458_S3 *) ((char *) (temp_v1 + (((struct func_8025C598_S1 *) temp_v0)->unk0 * new_var))))->unkDC);
  func_802B2620_de(temp_s0);
}
