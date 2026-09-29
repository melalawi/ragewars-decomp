
#include "basetypes.h"
typedef struct func_8028B1F8_S1 func_8028B1F8_S1;
typedef struct func_8028B1F8_S2 func_8028B1F8_S2;
struct func_8028B1F8_S1 {
    char pad0[0x94];
    void* unk94;
};
struct func_8028B1F8_S2 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    u16 unk8;
};

s32 func_8028B1F8(void *arg0, s32 arg1)
{
  s32 count;
  s32 i;
  u16 *ptr;
  void *base;
  s32 masked;
  base = ((func_8028B1F8_S1 *)(arg0))->unk94;
  count = ((func_8028B1F8_S2 *)(base))->unk4;
  ptr = &((func_8028B1F8_S2 *)(base))->unk8;
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
