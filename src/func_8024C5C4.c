
#include "basetypes.h"
extern char *func_8028FD94(s32 *, s32);
extern void func_8026E5E0(void *arg0, s32 arg1, s32 arg2, void *arg3, void *arg4);
typedef struct func_8024C5C4_S1 func_8024C5C4_S1;
typedef struct func_8024C5C4_S2 func_8024C5C4_S2;
struct func_8024C5C4_S1 {
    char pad0[0x17C];
    s32 unk17C;
};
struct func_8024C5C4_S2 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    char unk8;
};

void func_8024C5C4(void *arg0, void *arg1, s32 arg2, s32 arg3)
{
  void *temp_v0;
  s32 temp_s1;
  s32 mask = 1 << arg2;
  char *new_var;
  if ((((func_8024C5C4_S1 *)(arg0))->unk17C) & mask)
  {
    temp_v0 = func_8028FD94(arg1, 3);
    temp_s1 = ((func_8024C5C4_S2 *)(temp_v0))->unk4;
    if (temp_s1 != 0)
    {
      new_var = &((func_8024C5C4_S2 *)(temp_v0))->unk8;
      func_8026E5E0(new_var, temp_s1, arg3, arg0, func_8028FD94(arg1, 5));
    }
  }
}
