
#include "basetypes.h"
extern s32 D_8010C1B4;
void func_8025E280(int arg0)
{
  int new_var;
  new_var = arg0 != 0;
  D_8010C1B4 = (s32) arg0;
  if (new_var)
  {
    if (1)
    {
      func_8025E3EC();
    }
    return;
  }
  func_8025E3C8();
}
