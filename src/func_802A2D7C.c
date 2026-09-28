#include "basetypes.h"
extern void func_802A2B24(void *arg0, s32 arg1);
void func_802A2D7C(void *arg0)
{
  s32 temp_a1;
  s32 temp_v1;
  s32 var_a1;
  if ((*((s32 *) (((char *) arg0) + 0x54))) == 0)
  {
    temp_a1 = *((s32 *) (((char *) arg0) + 0x58));
    if (temp_a1 < (*((s32 *) (((char *) arg0) + 0x4C))))
    {
      var_a1 = temp_a1 + 1;
      goto block_7;
    }
  }
  else
  {
    temp_v1 = *((s32 *) (((char *) arg0) + 0x58));
    if (temp_v1 == (*((s32 *) (((char *) arg0) + 0x4C))))
    {
      *((s32 *) (((char *) arg0) + 0x58)) = *((s32 *) (((char *) arg0) + 0x50));
    }
    else
    {
      *((s32 *) (((char *) arg0) + 0x58)) = temp_v1 + 1;
    }
    var_a1 = *((s32 *) (((char *) arg0) + 0x58));
    block_7:
    func_802A2B24(arg0, var_a1);
  }
}
