#include "common/types.h"
#include "span_1000/code_80299FC4.h"
#include "types.h"

extern s32 D_80146E00;



s32 func_80299838_de(s32 arg0)
{
  s32 count;
  void *ptr;
  count = 0;
  ptr = D_80146E00 + 0x1C;
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
