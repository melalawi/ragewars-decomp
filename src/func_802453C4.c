#include "basetypes.h"
extern void *D_800E2830;
extern s32 D_800E28D0;
extern f32 D_800C88B0;
extern f32 D_800C88B4;
extern f32 D_800C88B8[2];
extern s32 D_8013B878[2];
void func_802A94E8(void);
void func_802ABB58(f32 arg0, f32 arg1);
void func_802A9F18(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7);
void func_802453C4(void)
{
  f32 var_f20;
  f32 temp_f12;
  int new_var2;
  f32 temp_f1;
  f32 temp_f21;
  f32 temp_f22;
  f32 var_f0;
  f32 var_f12;
  s32 var_s0;
  s32 var_s1;
  s32 new_var;
  s32 temp_height;
  void *temp_a0;
  if ((*((s32 *) (((char *) D_800E2830) + 0x1E0))) > 0)
  {
    s32 temp_s7;
    s32 temp_s6;
    temp_s7 = 0x1A;
    temp_s6 = D_800E28D0 / 2;
    func_802A94E8();
    temp_f12 = (f32) (D_800E28D0 / 284);
    var_f20 = (f32) ((*((&D_800E28D0) + 1)) / 222);
    temp_height = *((&D_800E28D0) + 1);
    if (temp_height >= 0xDF)
    {
      var_s1 = 0xB4;
      var_f0 = D_800C88B0;
      var_f12 = temp_f12 * var_f0;
      var_f20 *= var_f0;
    }
    else
    {
      var_s1 = 0x6E;
      var_f0 = D_800C88B4;
      var_f12 = temp_f12 * var_f0;
      var_f20 *= var_f0;
    }
    new_var = 0;
    func_802ABB58(var_f12, var_f20);
    temp_a0 = D_800E2830;
    D_8013B878[0] = 1;
    D_8013B878[1] = 1;
    var_s0 = new_var;
    if ((*((s32 *) (((char *) temp_a0) + 0x1E0))) > new_var)
    {
      new_var2 = 0;
      temp_f22 = D_800C88B8[new_var2];
      temp_f21 = D_800C88B8[1];
      do
      {
        func_802A9F18(((char *) temp_a0) + 0x118 + (var_s0 * 0x28), temp_s6, var_s1, 0xFF, 1, 1, temp_f22, temp_f22);
        temp_f1 = ((f32) temp_s7) * var_f20;
        temp_f12 = (f32) (D_800E28D0 / 284);
        var_f20 = ((f32) ((*((&D_800E28D0) + 1)) / 222)) * temp_f21;
        var_s1 = (s32) (((f32) var_s1) + temp_f1);
        func_802ABB58(temp_f12 * temp_f21, var_f20);
        var_s0 += 1;
      }
      while (var_s0 < (*((s32 *) (((char *) (temp_a0 = D_800E2830)) + 0x1E0))));
    }
  }
}
