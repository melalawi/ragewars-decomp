
#include "basetypes.h"
extern char *func_8028FD94(s32 *, s32);
s32 func_8028E6D8(void *arg0)
{
  void *elem;
  s32 i;
  void *field;
  char *new_var;
  void *ret;
  s32 count;
  count = *((s32 *) (((char *) arg0) + 0x1504));
  if (count <= 0)
  {
    return 0;
  }
  i = 0;
  elem = arg0;
  do
  {
    new_var = ((char *) elem) + 0x1508;
    field = *((void **) new_var);
    ret = func_8028FD94(*((s32 *) field), 2);
    if ((*((s32 *) (((char *) ret) + 4))) != 0)
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
    count = *((s32 *) (((char *) arg0) + 0x1504));
    i += 1;
    elem = ((char *) elem) + 0xC;
  }
  while (i < count);
  return 0;
}
