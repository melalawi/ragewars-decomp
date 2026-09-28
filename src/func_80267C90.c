#include "basetypes.h"
extern void func_80267278(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_80267C90(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
  s32 *new_var2;
  int new_var;
  new_var2 = &arg3;
  new_var = 1;
  func_80267278(arg0, *new_var2, arg4, arg5, new_var);
}
