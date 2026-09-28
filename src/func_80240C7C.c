
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800C882C;
void func_80240C7C(void *arg0)
{
  int new_var;
  f32 new_var2;
  new_var2 = (f32) D_800C882C;
  *((s32 *) (((s8 *) arg0) + 0)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x54)) = 0;
  new_var = -1;
  *((s32 *) (((s8 *) arg0) + 0x58)) = new_var;
  *((f32 *) (((s8 *) arg0) + 0xCC)) = new_var2;
}
