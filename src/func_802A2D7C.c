#include "basetypes.h"
extern void func_802A2B24(void *arg0, s32 arg1);
typedef struct func_802A2D7C_S1 func_802A2D7C_S1;
struct func_802A2D7C_S1 {
    char pad0[0x4C];
    s32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(s32)];
    s32 unk50;
    char pad50[0x54 - 0x50 - sizeof(s32)];
    s32 unk54;
    char pad54[0x58 - 0x54 - sizeof(s32)];
    s32 unk58;
};

void func_802A2D7C(void *arg0)
{
  s32 temp_a1;
  s32 temp_v1;
  s32 var_a1;
  if ((((func_802A2D7C_S1 *)(arg0))->unk54) == 0)
  {
    temp_a1 = ((func_802A2D7C_S1 *)(arg0))->unk58;
    if (temp_a1 < (((func_802A2D7C_S1 *)(arg0))->unk4C))
    {
      var_a1 = temp_a1 + 1;
      goto block_7;
    }
  }
  else
  {
    temp_v1 = ((func_802A2D7C_S1 *)(arg0))->unk58;
    if (temp_v1 == (((func_802A2D7C_S1 *)(arg0))->unk4C))
    {
      ((func_802A2D7C_S1 *)(arg0))->unk58 = ((func_802A2D7C_S1 *)(arg0))->unk50;
    }
    else
    {
      ((func_802A2D7C_S1 *)(arg0))->unk58 = temp_v1 + 1;
    }
    var_a1 = ((func_802A2D7C_S1 *)(arg0))->unk58;
    block_7:
    func_802A2B24(arg0, var_a1);
  }
}
