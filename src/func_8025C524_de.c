#include "span_1000/code_8025AE3C.h"
#include "types.h"









void func_8025C524_de(void *arg0, s32 arg1)
{
  s8 *new_var;
  int new_var2;
  s32 temp_s0;
  void *temp_s0_2;
  temp_s0 = ((ObjectStateB4 *)(arg0))->unk_B0;
  temp_s0_2 = temp_s0 + 0x84;
  new_var2 = 2;
  new_var = &((ObjectStateB4 *)(arg0))->unk_0;
  func_802B2F00_de(temp_s0_2, ((struct func_8025C458_S3 *) ((s8 *) (temp_s0 + ((*((s32 *) new_var)) * new_var2))))->unkDC);
  func_802B2E30_de(temp_s0_2, arg1 & 0xFF);
}
