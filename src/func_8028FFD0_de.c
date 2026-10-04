#include "common/types.h"
#include "span_1000/code_8028FD24.h"
#include "span_1000/types.h"
#include "types.h"
/* Spawns a pooled object and registers its bounds and height. */


void func_80246184_de(void *);
f32 func_8024D284_de(void *);
s32 func_8028B21C_de(void *, s32);
s32 func_8028C198_de(void *, s32);
void func_8028C6D4_de(void *, Vec3 *, void *);
void func_80290950_de(void *, void *);
extern char D_8011B200;
extern char D_8011B388;
extern char D_8011BDC8;
extern u8 D_801462E5;
extern s32 D_800CD764_de[];










void *func_8028FFD0_de(char *arg0, s32 *arg1, s32 arg2, Vec3 rotation, Vec3 position, s32 arg9, f32 arg10)
{
  Vec3 center;
  s32 temp_v0;
  f32 far_z;
  s32 temp_v1_2;
  char *temp_s0;
  char *temp_v1;
  if (((*D_800CD764_de) == 0) || ((temp_v0 = func_8028B21C_de(&D_8011BDC8, arg2), temp_v0 == (-1))))
  {
    return 0;
  }
  if ((((func_8028FFB0_S1 *)(arg0))->unk3C00) == 0)
  {
    func_80290950_de(arg0, ((func_8028FFB0_S1 *)(arg0))->unk3C08);
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
  func_80246184_de(temp_s0);
  ((func_8028FFB0_S2 *)(temp_s0))->unk1C8 = 0;
  temp_v1_2 = func_8028C198_de(&D_8011BDC8, temp_v0);
  ((func_8028FFB0_S2 *)(temp_s0))->unk1D4 = arg1;
  if (arg1 != 0)
  {
    *arg1 += 1;
  }
  if (D_801462E5 != 0)
  {
    ((func_8028FFB0_S2 *)(temp_s0))->unk18 = &D_8011B200;
  }
  else
  {
    ((func_8028FFB0_S2 *)(temp_s0))->unk18 = &D_8011B388;
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
  center.y = (((func_8028FFB0_S4 *)(temp_s0))->unkC) + (func_8024D284_de(temp_s0) * 0.5f);
  center.z = ((func_8028FFB0_S4 *)(temp_s0))->unk10;
  func_8028C6D4_de(&D_8011BDC8, &center, (char *)temp_s0 + 0x1A8);
  return temp_s0;
}
