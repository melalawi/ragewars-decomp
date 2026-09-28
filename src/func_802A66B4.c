
#include "basetypes.h"
s32 func_802A66B4(void *arg0, s32 arg1)
{
  char *base;
  s32 avail;
  int new_var;
  s32 head;
  base = (char *) arg0;
  avail = *((s32 *) (base + 0x2588));
  if (avail < arg1)
  {
    return 0;
  }
  new_var = 0x2588;
  head = *((s32 *) (base + 0x258C));
  *((s32 *) (base + new_var)) = avail - arg1;
  *((s32 *) (base + 0x258C)) = (*((s32 *) (base + 0x258C))) + (arg1 << 4);
  return head;
}
