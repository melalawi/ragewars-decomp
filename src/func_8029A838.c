
#include "basetypes.h"
extern s32 D_8014D080;
typedef struct func_8029A838_S1 func_8029A838_S1;
struct func_8029A838_S1 {
    s32 unk0;
    char pad0[0x10 - 0x0 - sizeof(s32)];
    s32 unk10;
};

s32 func_8029A838(s32 arg0)
{
  s32 count;
  void *ptr;
  count = 0;
  ptr = D_8014D080 + 0x1C;
  loop:
  if ((((func_8029A838_S1 *)(ptr))->unk0) != arg0)
  {
    goto not_found;
  }

  return ((func_8029A838_S1 *)(ptr))->unk10;
  not_found:
  count += 1;

  ptr += 0x14;
  if (count < 0x40)
  {
    if (ptr)
    {
      goto loop;
    }
    else
    {
      goto loop;
    }
  }
  return 0;
}
