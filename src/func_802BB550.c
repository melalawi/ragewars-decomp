
#include "basetypes.h"
typedef struct func_802BB550_S1 func_802BB550_S1;
struct func_802BB550_S1 {
    s32 unk0;
    char pad0[0x14 - 0x0 - sizeof(s32)];
    s32 unk14;
};

s32 func_802BB550(void *arg0, s32 arg1, s32 arg2)
{
  switch (arg1)
  {
    case 1:
      ((func_802BB550_S1 *)(arg0))->unk0 = arg2;
      goto ret0;

    case 6:
      ((func_802BB550_S1 *)(arg0))->unk14 = arg2;

    default:
      ret0:
    return 0;

      return 0;

  }

}
