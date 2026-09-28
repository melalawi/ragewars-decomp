
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_802C145C(M2C_UNK *, M2C_UNK);
extern M2C_UNK D_800D9298;
extern void *D_800D92A0;
void func_802C0D10(void)
{
  void *temp_s0;
  M2C_UNK *new_var2;
  s8 *new_var;
  int new_var3;
  temp_s0 = func_802C2020();
  *((s16 *) ((new_var = (s8 *) D_800D92A0) + 0x10)) = (new_var3 = 2);
  new_var2 = &D_800D9298;
  func_802C145C(new_var2, new_var3);
  func_802C2040(temp_s0);
}
