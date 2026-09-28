
#include "basetypes.h"
extern char *func_8028FD94(s32 *, s32);
extern void func_8026E5E0(void *arg0, s32 arg1, s32 arg2, void *arg3, void *arg4);
void func_8024C5C4(void *arg0, void *arg1, s32 arg2, s32 arg3)
{
  void *temp_v0;
  s32 temp_s1;
  s32 mask = 1 << arg2;
  char *new_var;
  if ((*((s32 *) (((char *) arg0) + 0x17C))) & mask)
  {
    temp_v0 = func_8028FD94(arg1, 3);
    temp_s1 = *((s32 *) (((char *) temp_v0) + 4));
    if (temp_s1 != 0)
    {
      new_var = ((char *) temp_v0) + 8;
      func_8026E5E0(new_var, temp_s1, arg3, arg0, func_8028FD94(arg1, 5));
    }
  }
}
