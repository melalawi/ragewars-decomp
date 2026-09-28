
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800C7EA0;
void func_8022D154(void *arg0, void *arg1)
{
  f32 new_var3;
  f32 *new_var;
  s8 *new_var2;
  new_var2 = (s8 *) arg0;
  new_var3 = (f32) D_800C7EA0;
  *((s32 *) (new_var2 + 0x6C0)) = 0;
  new_var = (f32 *) (((s8 *) arg0) + 0x6E0);
  *((s32 *) (((s8 *) arg0) + 0x6C4)) = 0;
  *new_var = new_var3;
  *((s32 *) (((s8 *) arg1) + 0x1C)) = 0;
  *((s32 *) (((s8 *) arg1) + 0x20)) = 0;
  *((s32 *) (((s8 *) arg1) + 0x24)) = 0;
}
