
#include "basetypes.h"
extern s32 func_80265670(s32, s32);
s32 func_8022F4CC(s32 arg0, s32 arg1)
{
  if (arg1 == 0x10)
  {
    return 1;
  }
  if (arg1 == 0x11)
  {
    if (arg1 || arg0)
    {
      return 1;
    }
    else
    {
      return 1;
    }
  }
  return func_80265670(arg0 + 0x79, arg1);
}
