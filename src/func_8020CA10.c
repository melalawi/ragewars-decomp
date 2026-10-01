
#include "basetypes.h"
typedef struct { f32 unk0; } func_8020CA10_G1;
extern f32 D_800C6E7C;
typedef struct { f32 unk0; } func_8020CA10_G2;
extern f32 D_800C6E80;
typedef struct { s32 * unk0; } func_8020CA10_G3;
extern struct {s32 *unk0;} D_8013B364;
extern s32 func_80274544(void);
typedef struct func_8020CA10_S1 func_8020CA10_S1;
typedef struct func_8020CA10_S2 func_8020CA10_S2;
struct func_8020CA10_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    f32 unk14;
    char pad14[0x34 - 0x14 - sizeof(f32)];
    s32 unk34;
    char pad34[0x38 - 0x34 - sizeof(s32)];
    s32 unk38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    s32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(s32)];
    s32 unk40;
    char pad40[0x44 - 0x40 - sizeof(s32)];
    s32 unk44;
    char pad44[0x48 - 0x44 - sizeof(s32)];
    s32 unk48;
    char pad48[0x4C - 0x48 - sizeof(s32)];
    s32 unk4C;
};
struct func_8020CA10_S2 {
    char pad0[0xC];
    u16 unkC;
};

void func_8020CA10(void *arg0, s32 arg1)
{
  char *entry;
  u16 flags;
  char *new_var;
  s32 *base;
  ((func_8020CA10_S1 *)(arg0))->unk4 = D_800C6E7C;
  ((func_8020CA10_S1 *)(arg0))->unk0 = arg1;
  ((func_8020CA10_S1 *)(arg0))->unk8 = -1;
  ((func_8020CA10_S1 *)(arg0))->unkC = 0;
  ((func_8020CA10_S1 *)(arg0))->unk10 = 0;
  base = D_8013B364.unk0;
  new_var = (char *)base + ((arg1 * (*base)) + 8);
  entry = new_var;
  flags = ((func_8020CA10_S2 *)(entry))->unkC;
  if (flags & 2)
  {
    ((func_8020CA10_S1 *)(arg0))->unk14 = D_800C6E80;
  }
  ((func_8020CA10_S1 *)(arg0))->unk34 = 0;
  ((func_8020CA10_S1 *)(arg0))->unk38 = 0;
  ((func_8020CA10_S1 *)(arg0))->unk3C = 0;
  ((func_8020CA10_S1 *)(arg0))->unk40 = 0;
  ((func_8020CA10_S1 *)(arg0))->unk44 = 0;
  ((func_8020CA10_S1 *)(arg0))->unk48 = 0;
  ((func_8020CA10_S1 *)(arg0))->unk4C = 0;
  flags = ((func_8020CA10_S2 *)(entry))->unkC;
  if (flags & 0x40)
  {
    ((func_8020CA10_S1 *)(arg0))->unk38 = (func_80274544() % 5) + 5;
  }
  flags = ((func_8020CA10_S2 *)(entry))->unkC;
  if (flags & 0x80)
  {
    ((func_8020CA10_S1 *)(arg0))->unk3C = (func_80274544() % 5) + 5;
  }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1CBC_4 = (-1.0f);
const float unbake_rodata_800C1CC0_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6E7C_4 = (-1.0f);
const float unbake_rodata_800C6E80_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C202C_4 = (-1.0f);
const float unbake_rodata_800C2030_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C206C_4 = (-1.0f);
const float unbake_rodata_800C2070_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1D8C_4 = (-1.0f);
const float unbake_rodata_800C1D90_4 = 15.0f;
#endif
