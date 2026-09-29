/* Spawns a pooled object and registers its bounds and height. */

#include "basetypes.h"
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} Vec;
void func_80246174(void *);
f32 func_8024D274(void *);
s32 func_8028B1F8(void *, s32);
s32 func_8028C174(void *, s32);
void func_8028C6B0(void *, Vec *, void *);
void func_80290930(void *, void *);
extern char D_8011F2C0;
extern char D_8011F448;
extern char D_8011FE88;
extern u8 D_801462E5;
extern s32 D_800D29B4[];
typedef struct func_8028FFB0_S1 func_8028FFB0_S1;
typedef struct func_8028FFB0_S2 func_8028FFB0_S2;
typedef struct func_8028FFB0_S3 func_8028FFB0_S3;
typedef struct func_8028FFB0_S4 func_8028FFB0_S4;
typedef union func_8028FFB0_S2_U8 { Vec v0; f32 v1; } func_8028FFB0_S2_U8;
struct func_8028FFB0_S1 {
    char pad0[0x3C00];
    char* unk3C00;
    char pad3C00[0x3C04 - 0x3C00 - sizeof(char*)];
    char* unk3C04;
    char pad3C04[0x3C08 - 0x3C04 - sizeof(char*)];
    char* unk3C08;
};
struct func_8028FFB0_S2 {
    char pad0[0x4];
    s16 unk4;
    char pad4[0x8 - 0x4 - sizeof(s16)];
    func_8028FFB0_S2_U8 unk8;
    char pad8[0x14 - 0x8 - sizeof(func_8028FFB0_S2_U8)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    char* unk18;
    char pad18[0x1C - 0x18 - sizeof(char*)];
    Vec unk1C;
    char pad1C[0x50 - 0x1C - sizeof(Vec)];
    s32 unk50;
    char pad50[0x54 - 0x50 - sizeof(s32)];
    s32 unk54;
    char pad54[0x58 - 0x54 - sizeof(s32)];
    s32 unk58;
    char pad58[0x5C - 0x58 - sizeof(s32)];
    s32 unk5C;
    char pad5C[0x168 - 0x5C - sizeof(s32)];
    s32 unk168;
    char pad168[0x16C - 0x168 - sizeof(s32)];
    f32 unk16C;
    char pad16C[0x170 - 0x16C - sizeof(f32)];
    s32 unk170;
    char pad170[0x174 - 0x170 - sizeof(s32)];
    s32 unk174;
    char pad174[0x178 - 0x174 - sizeof(s32)];
    s32 unk178;
    char pad178[0x17C - 0x178 - sizeof(s32)];
    f32 unk17C;
    char pad17C[0x180 - 0x17C - sizeof(f32)];
    f32 unk180;
    char pad180[0x184 - 0x180 - sizeof(f32)];
    f32 unk184;
    char pad184[0x188 - 0x184 - sizeof(f32)];
    f32 unk188;
    char pad188[0x18C - 0x188 - sizeof(f32)];
    f32 unk18C;
    char pad18C[0x190 - 0x18C - sizeof(f32)];
    f32 unk190;
    char pad190[0x194 - 0x190 - sizeof(f32)];
    s32 unk194;
    char pad194[0x19C - 0x194 - sizeof(s32)];
    s16 unk19C;
    char pad19C[0x1C4 - 0x19C - sizeof(s16)];
    s32 unk1C4;
    char pad1C4[0x1C8 - 0x1C4 - sizeof(s32)];
    f32 unk1C8;
    char pad1C8[0x1CC - 0x1C8 - sizeof(f32)];
    s32 unk1CC;
    char pad1CC[0x1D0 - 0x1CC - sizeof(s32)];
    s32 unk1D0;
    char pad1D0[0x1D4 - 0x1D0 - sizeof(s32)];
    s32* unk1D4;
    char pad1D4[0x1D8 - 0x1D4 - sizeof(s32*)];
    char* unk1D8;
    char pad1D8[0x1DC - 0x1D8 - sizeof(char*)];
    char* unk1DC;
};
struct func_8028FFB0_S3 {
    char pad0[0x1D8];
    char* unk1D8;
};
struct func_8028FFB0_S4 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
};

void *func_8028FFB0(char *arg0, s32 *arg1, s32 arg2, Vec rotation, Vec position, s32 arg9, f32 arg10)
{
  Vec center;
  s32 temp_v0;
  f32 far_z;
  s32 temp_v1_2;
  char *temp_s0;
  char *temp_v1;
  if (((*D_800D29B4) == 0) || ((temp_v0 = func_8028B1F8(&D_8011FE88, arg2), temp_v0 == (-1))))
  {
    return 0;
  }
  if ((((func_8028FFB0_S1 *)(arg0))->unk3C00) == 0)
  {
    func_80290930(arg0, ((func_8028FFB0_S1 *)(arg0))->unk3C08);
  }
  temp_s0 = ((func_8028FFB0_S1 *)(arg0))->unk3C00;
  temp_v1 = ((func_8028FFB0_S1 *)(arg0))->unk3C04;
  ((func_8028FFB0_S1 *)(arg0))->unk3C00 = (void *) (((func_8028FFB0_S2 *)(temp_s0))->unk1DC);
  if (temp_v1 != 0)
  {
    ((func_8028FFB0_S3 *)(temp_v1))->unk1D8 = temp_s0;
  }
  { char *next = ((func_8028FFB0_S1 *)(arg0))->unk3C04;
  ((func_8028FFB0_S2 *)(temp_s0))->unk1D8 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk1DC = next; }
  ((func_8028FFB0_S1 *)(arg0))->unk3C04 = temp_s0;
  if ((((func_8028FFB0_S1 *)(arg0))->unk3C08) == 0)
  {
    ((func_8028FFB0_S1 *)(arg0))->unk3C08 = temp_s0;
  }
  ((func_8028FFB0_S2 *)(temp_s0))->unk1D0 = (s32) ((((func_8028FFB0_S2 *)(temp_s0))->unk1D0) | 1);
  func_80246174(temp_s0);
  ((func_8028FFB0_S2 *)(temp_s0))->unk1C8 = 0;
  temp_v1_2 = func_8028C174(&D_8011FE88, temp_v0);
  ((func_8028FFB0_S2 *)(temp_s0))->unk1D4 = arg1;
  if (arg1 != 0)
  {
    *arg1 += 1;
  }
  if (D_801462E5 != 0)
  {
    ((func_8028FFB0_S2 *)(temp_s0))->unk18 = &D_8011F2C0;
  }
  else
  {
    ((func_8028FFB0_S2 *)(temp_s0))->unk18 = &D_8011F448;
  }
  ((func_8028FFB0_S2 *)(temp_s0))->unk1C8 = arg10;
  ((func_8028FFB0_S2 *)(temp_s0))->unk1CC = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk4 = temp_v0;
  position.y += 10.24f;
  ((func_8028FFB0_S2 *)(temp_s0))->unk8.v0 = position;
  ((func_8028FFB0_S2 *)(temp_s0))->unk174 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk178 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk168 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk16C = 1.0f;
  ((func_8028FFB0_S2 *)(temp_s0))->unk170 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk17C = (f32) (position.x - 81.92f);
  ((func_8028FFB0_S2 *)(temp_s0))->unk180 = (f32) (position.y - 81.92f);
  ((func_8028FFB0_S2 *)(temp_s0))->unk184 = (f32) (position.z - 81.92f);
  ((func_8028FFB0_S2 *)(temp_s0))->unk188 = (f32) (position.x + 81.92f);
  ((func_8028FFB0_S2 *)(temp_s0))->unk18C = (f32) (position.y + 81.92f);
  far_z = position.z;
  ((func_8028FFB0_S2 *)(temp_s0))->unk50 = temp_v1_2;
  ((func_8028FFB0_S2 *)(temp_s0))->unk54 = -1;
  ((func_8028FFB0_S2 *)(temp_s0))->unk58 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk5C = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk14 = arg9;
  ((func_8028FFB0_S2 *)(temp_s0))->unk194 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk19C = 0x1A;
  ((func_8028FFB0_S2 *)(temp_s0))->unk190 = (f32) (far_z + 81.92f);
  ((func_8028FFB0_S2 *)(temp_s0))->unk1C = rotation;
  ((func_8028FFB0_S2 *)(temp_s0))->unk1C4 = 0;
  center.x = ((func_8028FFB0_S2 *)(temp_s0))->unk8.v1;
  center.y = (((func_8028FFB0_S4 *)(temp_s0))->unkC) + (func_8024D274(temp_s0) * 0.5f);
  center.z = ((func_8028FFB0_S4 *)(temp_s0))->unk10;
  func_8028C6B0(&D_8011FE88, &center, (char *)temp_s0 + 0x1A8);
  return temp_s0;
}
