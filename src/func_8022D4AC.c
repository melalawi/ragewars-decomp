
#include "basetypes.h"
extern void func_8044A4C0(void *);
extern void func_802636D0(void *arg0);
extern f32 D_800C7EAC;
extern f32 D_800C7EB0;
typedef struct func_8022D4AC_S1 func_8022D4AC_S1;
struct func_8022D4AC_S1 {
    char pad0[0x50];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x658 - 0x58 - sizeof(f32)];
    f32 unk658;
    char pad658[0x122C - 0x658 - sizeof(f32)];
    s32 unk122C;
    char pad122C[0x1230 - 0x122C - sizeof(s32)];
    s32 unk1230;
    char pad1230[0x1238 - 0x1230 - sizeof(s32)];
    s32 unk1238;
    char pad1238[0x13C8 - 0x1238 - sizeof(s32)];
    s32 unk13C8;
    char pad13C8[0x1454 - 0x13C8 - sizeof(s32)];
    void* unk1454;
};

void func_8022D4AC(void *arg0)
{
  f32 new_var;
  new_var = ((func_8022D4AC_S1 *)(arg0))->unk658;
  if (D_800C7EAC < new_var)
  {
    ((func_8022D4AC_S1 *)(arg0))->unk13C8 = 1;
    ((func_8022D4AC_S1 *)(arg0))->unk1238 = -1;
    ((func_8022D4AC_S1 *)(arg0))->unk1230 = 0;
    ((func_8022D4AC_S1 *)(arg0))->unk122C = (((func_8022D4AC_S1 *)(arg0))->unk122C) & (~0x20);
    func_8044A4C0(arg0);
    ((func_8022D4AC_S1 *)(arg0))->unk50 = D_800C7EB0;
    ((func_8022D4AC_S1 *)(arg0))->unk54 = D_800C7EB0;
    ((func_8022D4AC_S1 *)(arg0))->unk58 = D_800C7EB0;
    return;
  }
  func_802636D0((char *)arg0 + 0x688);
  *((s32 *) (((char *) (((func_8022D4AC_S1 *)(arg0))->unk1454)) + 0x23C)) = 0;
  *((s32 *) (((char *) (((func_8022D4AC_S1 *)(arg0))->unk1454)) + 0x240)) = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CEC_4 = 60.0f;
const float unbake_rodata_800C2CF0_4 = 0.0199999996f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EAC_4 = 60.0f;
const float unbake_rodata_800C7EB0_4 = 0.0199999996f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3060_4 = 60.0f;
const float unbake_rodata_800C3064_4 = 0.0199999996f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30A0_4 = 60.0f;
const float unbake_rodata_800C30A4_4 = 0.0199999996f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DBC_4 = 60.0f;
const float unbake_rodata_800C2DC0_4 = 0.0199999996f;
#endif
