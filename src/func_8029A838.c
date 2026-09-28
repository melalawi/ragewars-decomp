
#include "basetypes.h"
extern s32 D_8014D080;
s32 func_8029A838(s32 arg0)
{
  s32 count;
  void *ptr;
  count = 0;
  ptr = D_8014D080 + 0x1C;
  loop:
  if ((*((s32 *) (((s8 *) ptr) + 0))) != arg0)
  {
    goto not_found;
  }

  return *((s32 *) (((s8 *) ptr) + 0x10));
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
