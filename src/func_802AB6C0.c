
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_802AB6C0(void *arg0, s16 arg1, s16 arg2)
{
  s8 *new_var;
  *((s32 *) (((s8 *) arg0) + 0x38)) = -1;
  new_var = ((s8 *) arg0) + 8;
  *((s32 *) (((s8 *) arg0) + 0)) = 0;
  *((s32 *) new_var) = 0;
  *((f32 *) (((s8 *) arg0) + 0x10)) = (f32) arg1;
  *((f32 *) (((s8 *) arg0) + 0x14)) = (f32) arg2;
}
