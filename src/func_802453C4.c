#include "basetypes.h"
typedef struct func_802453C4_S1 func_802453C4_S1;
typedef struct func_802453C4_S2 func_802453C4_S2;
struct func_802453C4_S1 {
    char pad0[0x1E0];
    s32 unk1E0;
};
struct func_802453C4_S2 {
    char pad0[0x118];
    char unk118;
    char pad118[0x1E0 - 0x118 - sizeof(char)];
    s32 unk1E0;
};

extern func_802453C4_S1 *D_800E2830;
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
  if ((D_800E2830->unk1E0) > 0)
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
    if ((((func_802453C4_S2 *)(temp_a0))->unk1E0) > new_var)
    {
      new_var2 = 0;
      temp_f22 = D_800C88B8[new_var2];
      temp_f21 = D_800C88B8[1];
      do
      {
        func_802A9F18(&((func_802453C4_S2 *)(temp_a0))->unk118 + (var_s0 * 0x28), temp_s6, var_s1, 0xFF, 1, 1, temp_f22, temp_f22);
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C36F0_4 = 0.5f;
const float unbake_rodata_800C36F4_4 = 0.5f;
const float unbake_rodata_800C36F8_4 = 1.0f;
const float unbake_rodata_800C36FC_4 = 0.349999994f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C88B0_4 = 0.5f;
const float unbake_rodata_800C88B4_4 = 0.5f;
const float unbake_rodata_800C88B8_4 = 1.0f;
const float unbake_rodata_800C88BC_4 = 0.349999994f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A70_4 = 0.5f;
const float unbake_rodata_800C3A74_4 = 0.5f;
const float unbake_rodata_800C3A78_4 = 1.0f;
const float unbake_rodata_800C3A7C_4 = 0.349999994f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3AB0_4 = 0.5f;
const float unbake_rodata_800C3AB4_4 = 0.5f;
const float unbake_rodata_800C3AB8_4 = 1.0f;
const float unbake_rodata_800C3ABC_4 = 0.349999994f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C37C0_4 = 0.5f;
const float unbake_rodata_800C37C4_4 = 0.5f;
const float unbake_rodata_800C37C8_4 = 1.0f;
const float unbake_rodata_800C37CC_4 = 0.349999994f;
#endif
