
#include "basetypes.h"
s32 func_8028B1F8(void *arg0, s32 arg1)
{
  s32 count;
  s32 i;
  u16 *ptr;
  void *base;
  s32 masked;
  base = *((void **) (((s8 *) arg0) + 0x94));
  count = *((s32 *) (((s8 *) base) + 4));
  ptr = (u16 *) (((s8 *) base) + 8);
  i = 0;
  if (count <= 0)
  {
    goto fail;
  }
  masked = arg1 & 0xFFFF;
  loop_2:
  if ((*ptr) == masked)
  {
 do { return i; } while (0);
  }

  i += 1;
  ptr += 1;
  if (i < count)
  {
    goto loop_2;
  }
  fail:
  return -1;

}
