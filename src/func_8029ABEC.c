
#include "basetypes.h"
extern s32 func_802A1724(s32, s32, s32);
void func_8029ABEC(s32 *arg0, s32 arg1, s32 arg2)
{
  long new_var;
  int new_var2;
  new_var2 = arg0[0];
  new_var2 = new_var2 + arg0[2];
  new_var = new_var2;
  func_802A1724(arg1, new_var, arg2);
  arg0[2] = arg0[2] + arg2;
}
