#include "span_1000/code_802A208C.h"
#include "types.h"

extern void func_802A1B24_de(void *arg0, s32 arg1);



void func_802A1D14_de(void *arg0)
{
  s32 temp_a1;
  s32 temp_v1;
  s32 var_a1;
  if ((((func_802A2D14_S1 *)(arg0))->unk54) == 0)
  {
    temp_a1 = ((func_802A2D14_S1 *)(arg0))->unk58;
    if ((((func_802A2D14_S1 *)(arg0))->unk50) < temp_a1)
    {
      var_a1 = temp_a1 - 1;
      goto block_7;
    }
  }
  else
  {
    temp_v1 = ((func_802A2D14_S1 *)(arg0))->unk58;
    if (temp_v1 == (((func_802A2D14_S1 *)(arg0))->unk50))
    {
      ((func_802A2D14_S1 *)(arg0))->unk58 = ((func_802A2D14_S1 *)(arg0))->unk4C;
    }
    else
    {
      ((func_802A2D14_S1 *)(arg0))->unk58 = temp_v1 - 1;
    }
    var_a1 = ((func_802A2D14_S1 *)(arg0))->unk58;
    block_7:
    func_802A1B24_de(arg0, var_a1);

  }
}
