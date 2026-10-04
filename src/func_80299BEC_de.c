#include "span_1000/code_80299FC4.h"
#include "types.h"

extern s32 func_802A0724_de(s32, s32, s32);
void func_80299BEC_de(s32 *arg0, s32 arg1, s32 arg2)
{
  long new_var;
  int new_var2;
  new_var2 = arg0[0];
  new_var2 = new_var2 + arg0[2];
  new_var = new_var2;
  func_802A0724_de(arg1, new_var, arg2);
  arg0[2] = arg0[2] + arg2;
}
