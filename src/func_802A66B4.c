
#include "basetypes.h"
typedef struct func_802A66B4_S1 func_802A66B4_S1;
struct func_802A66B4_S1 {
    char pad0[0x2588];
    s32 unk2588;
    char pad2588[0x258C - 0x2588 - sizeof(s32)];
    s32 unk258C;
};

s32 func_802A66B4(void *arg0, s32 arg1)
{
  char *base;
  s32 avail;
  int new_var;
  s32 head;
  base = (char *) arg0;
  avail = ((func_802A66B4_S1 *)(base))->unk2588;
  if (avail < arg1)
  {
    return 0;
  }
  new_var = 0x2588;
  head = ((func_802A66B4_S1 *)(base))->unk258C;
  *((s32 *) (base + new_var)) = avail - arg1;
  ((func_802A66B4_S1 *)(base))->unk258C = (((func_802A66B4_S1 *)(base))->unk258C) + (arg1 << 4);
  return head;
}
