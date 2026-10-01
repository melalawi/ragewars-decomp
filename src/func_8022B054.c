
#include "basetypes.h"
typedef struct 
{
  s32 x;
  s32 y;
  s32 z;
} Vec3;
extern unsigned int func_802227D0(void *arg0, void *arg1, s32 arg2);
typedef struct func_8022B054_S1 func_8022B054_S1;
struct func_8022B054_S1 {
    char pad0[0x16C4];
    Vec3 unk16C4;
};

void func_8022B054(void *arg0, Vec3 *arg1)
{
  void *new_var;
  ((func_8022B054_S1 *)(arg0))->unk16C4 = *arg1;
  new_var = arg0;
  func_802227D0(new_var, new_var, 0x11);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5CF4_4 = 3.14159274f;
const float unbake_rodata_800C5CF8_4 = 0.5f;
const float unbake_rodata_800C5CFC_4 = 1.0f;
const float unbake_rodata_800C5D00_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF64_4 = 3.14159274f;
const float unbake_rodata_800CAF68_4 = 0.5f;
const float unbake_rodata_800CAF6C_4 = 1.0f;
const float unbake_rodata_800CAF70_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C5930_24[] = {0x0029A0F8U, 0x0029A17CU, 0x0029A200U, 0x0029A284U, 0x0029A314U, 0x0029A314U, 0x0029A314U, 0x0029A018U, 0x0029A088U};
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5900_8 = 1000.0;
const unsigned int unbake_rodata_800C5908_40[] = {0x00297E44U, 0x00297E7CU, 0x00297ED0U, 0x00297ED0U, 0x00297E28U, 0x00297E28U, 0x00297E28U, 0x00297E28U, 0x00297ED0U, 0x00297ED0U, 0x00297ED0U, 0x00297ED0U, 0x00297ED0U, 0x00297ED0U, 0x00297EA0U, 0x00297EB8U};
#elif defined(VERSION_DE)
const double unbake_rodata_800C5C70_8 = 6.2831859588623047;
const float unbake_rodata_800C5C78_4 = 6.28318596f;
const float unbake_rodata_800C5C7C_4 = 6.28318596f;
const float unbake_rodata_800C5C80_4 = 3.14159274f;
#endif
