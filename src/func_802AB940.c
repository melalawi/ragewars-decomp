
#include "basetypes.h"
extern s32 D_800D29B4;
extern char D_8011FE88;
extern s32 func_8028BE88(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_802AB8DC(s32 arg0, s32 arg1, void **arg2, s32 *arg3);
extern void func_802536F4(s32 arg0, s32 arg1);
typedef struct func_802AB940_S1 func_802AB940_S1;
typedef struct func_802AB940_S2 func_802AB940_S2;
struct func_802AB940_S1 {
    char pad0[0x4];
    u16 unk4;
};
struct func_802AB940_S2 {
    char pad0[0x6];
    u16 unk6;
};

void func_802AB940(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3)
{
  void *sp10;
  s32 sp14;
  void *new_var;
  s32 temp_v0;
  if (D_800D29B4 != 0)
  {
    temp_v0 = func_8028BE88(&D_8011FE88, arg0, 0, 1);
    if (temp_v0 != 0)
    {
      func_802AB8DC(temp_v0, arg1, &sp10, &sp14);
      new_var = sp10;
      *arg2 = ((func_802AB940_S1 *)(sp10))->unk4;
      *arg3 = ((func_802AB940_S2 *)(new_var))->unk6;
      func_802536F4(0, temp_v0);
    }
  }
}
