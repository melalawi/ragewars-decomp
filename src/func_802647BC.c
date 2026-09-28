
#include "basetypes.h"
extern s8 D_8010F30B;
void func_802647BC(void)
{
  int new_var2;
  s8 *new_var;
  s32 var_v1;
  s8 *var_v0;
  new_var2 = 1;
  var_v1 = 3;
  new_var = &D_8010F30B;
  var_v0 = new_var;
  do
  {
    *var_v0 = new_var2;
    var_v1 -= 1;
    var_v0 -= 1;
  }
  while (var_v1 >= 0);
}
