
#include "basetypes.h"
extern char *func_8028FD94(s32 *, s32);
typedef struct func_8028E6D8_S1 func_8028E6D8_S1;
typedef struct func_8028E6D8_S2 func_8028E6D8_S2;
typedef struct func_8028E6D8_S3 func_8028E6D8_S3;
struct func_8028E6D8_S1 {
    char pad0[0x1504];
    s32 unk1504;
};
struct func_8028E6D8_S2 {
    char pad0[0xC];
    char unkC;
    char padC[0x1508 - 0xC - sizeof(char)];
    char unk1508;
};
struct func_8028E6D8_S3 {
    char pad0[0x4];
    s32 unk4;
};

s32 func_8028E6D8(void *arg0)
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
    ret = func_8028FD94(*((s32 *) field), 2);
    if ((((func_8028E6D8_S3 *)(ret))->unk4) != 0)
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
