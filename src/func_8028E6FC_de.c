#include "common/types.h"
#include "span_1000/code_8028DF6C.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);







s32 func_8028E6FC_de(void *arg0)
{
  void *elem;
  s32 i;
  void *field;
  char *new_var;
  void *ret;
  s32 count;
  count = ((func_8028E6D8_S1 *)(arg0))->unk1504;
  if (count <= 0)
  {
    return 0;
  }
  i = 0;
  elem = arg0;
  do
  {
    new_var = &((func_8028E6D8_S2 *)(elem))->unk1508;
    field = *((void **) new_var);
    ret = func_8028FDB4_de(*((s32 *) field), 2);
    if ((((func_80203E78_S1 *)(ret))->unk4) != 0)
    {
      if (arg0 || i)
      {
        return 1;
      }
      else
      {
        return 1;
      }
    }
    count = ((func_8028E6D8_S1 *)(arg0))->unk1504;
    i += 1;
    elem = &((func_8028E6D8_S2 *)(elem))->unkC;
  }
  while (i < count);
  return 0;
}
