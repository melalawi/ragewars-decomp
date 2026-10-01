#include "basetypes.h"



s32 func_8022F49C(u8 *base, s32 index)
{
  u8 new_var;
  new_var = (base + index)[0x18];
  /* FAKEMATCH: redundant condition preserves the original return-register allocation. */
  if (index || base)
  {
    return new_var;
  }
  else
  {
    return new_var;
  }
}
