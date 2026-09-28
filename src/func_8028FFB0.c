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
  if ((*((char **) (arg0 + 0x3C00))) == 0)
  {
    func_80290930(arg0, *((char **) (arg0 + 0x3C08)));
  }
  temp_s0 = *((char **) (arg0 + 0x3C00));
  temp_v1 = *((char **) (arg0 + 0x3C04));
  *((char **) (arg0 + 0x3C00)) = (void *) (*((char **) (temp_s0 + 0x1DC)));
  if (temp_v1 != 0)
  {
    *((char **) (temp_v1 + 0x1D8)) = temp_s0;
  }
  { char *next = *((char **) (arg0 + 0x3C04));
  *((char **) (temp_s0 + 0x1D8)) = 0;
  *((char **) (temp_s0 + 0x1DC)) = next; }
  *((char **) (arg0 + 0x3C04)) = temp_s0;
  if ((*((char **) (arg0 + 0x3C08))) == 0)
  {
    *((char **) (arg0 + 0x3C08)) = temp_s0;
  }
  *((s32 *) (temp_s0 + 0x1D0)) = (s32) ((*((s32 *) (temp_s0 + 0x1D0))) | 1);
  func_80246174(temp_s0);
  *((f32 *) (temp_s0 + 0x1C8)) = 0;
  temp_v1_2 = func_8028C174(&D_8011FE88, temp_v0);
  *((s32 **) (temp_s0 + 0x1D4)) = arg1;
  if (arg1 != 0)
  {
    *arg1 += 1;
  }
  if (D_801462E5 != 0)
  {
    *((char **) (temp_s0 + 0x18)) = &D_8011F2C0;
  }
  else
  {
    *((char **) (temp_s0 + 0x18)) = &D_8011F448;
  }
  *((f32 *) (temp_s0 + 0x1C8)) = arg10;
  *((s32 *) (temp_s0 + 0x1CC)) = 0;
  *((s16 *) (temp_s0 + 0x4)) = temp_v0;
  position.y += 10.24f;
  *((Vec *) (temp_s0 + 8)) = position;
  *((s32 *) (temp_s0 + 0x174)) = 0;
  *((s32 *) (temp_s0 + 0x178)) = 0;
  *((s32 *) (temp_s0 + 0x168)) = 0;
  *((f32 *) (temp_s0 + 0x16C)) = 1.0f;
  *((s32 *) (temp_s0 + 0x170)) = 0;
  *((f32 *) (temp_s0 + 0x17C)) = (f32) (position.x - 81.92f);
  *((f32 *) (temp_s0 + 0x180)) = (f32) (position.y - 81.92f);
  *((f32 *) (temp_s0 + 0x184)) = (f32) (position.z - 81.92f);
  *((f32 *) (temp_s0 + 0x188)) = (f32) (position.x + 81.92f);
  *((f32 *) (temp_s0 + 0x18C)) = (f32) (position.y + 81.92f);
  far_z = position.z;
  *((s32 *) (temp_s0 + 0x50)) = temp_v1_2;
  *((s32 *) (temp_s0 + 0x54)) = -1;
  *((s32 *) (temp_s0 + 0x58)) = 0;
  *((s32 *) (temp_s0 + 0x5C)) = 0;
  *((s32 *) (temp_s0 + 0x14)) = arg9;
  *((s32 *) (temp_s0 + 0x194)) = 0;
  *((s16 *) (temp_s0 + 0x19C)) = 0x1A;
  *((f32 *) (temp_s0 + 0x190)) = (f32) (far_z + 81.92f);
  *((Vec *) (temp_s0 + 0x1c)) = rotation;
  *((s32 *) (temp_s0 + 0x1C4)) = 0;
  center.x = *((f32 *) (temp_s0 + 0x8));
  center.y = (*((f32 *) (temp_s0 + 0xC))) + (func_8024D274(temp_s0) * 0.5f);
  center.z = *((f32 *) (temp_s0 + 0x10));
  func_8028C6B0(&D_8011FE88, &center, temp_s0 + 0x1A8);
  return temp_s0;
}
