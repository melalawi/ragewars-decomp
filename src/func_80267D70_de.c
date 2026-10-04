#include "common/types.h"
#include "span_1000/code_802675E0.h"
#include "span_1000/types.h"
#include "types.h"


extern void func_80232744_de(void *arg0, s32 arg1, s32 arg2);





void func_80267D70_de(s32 arg0, void *arg1, s32 arg2, Triple arg3, s32 arg6)
{
  s32 t6 = arg6;
  void *temp = ((func_8020A028_S3 *)(arg1))->unk1D8;
  ((func_80267D80_S2 *)(temp))->unk774 = arg3;
 /* FAKEMATCH: preserve instruction scheduling between the copied triple and the following call. */
 do { } while (0);
  func_80232744_de(arg1, (s32) ((char *)arg1 + 0x170), t6);
}
