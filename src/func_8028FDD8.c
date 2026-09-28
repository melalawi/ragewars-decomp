
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8028FDD8(s32 arg0, s32 arg1)
{
  unsigned long new_var;
  volatile unsigned int sp0;
  new_var = 4;
  sp0 = (*((s32 *) (((s8 *) (arg0 + ((arg1 + 1) * new_var))) + new_var))) - (*((s32 *) (((s8 *) (((int) arg0) + (arg1 * new_var))) + new_var)));
}
