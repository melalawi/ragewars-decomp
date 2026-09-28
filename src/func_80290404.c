/* Updates a timed entity, resolves its position, and rebuilds its bounding box. */

#include "basetypes.h"
typedef struct Type
{
  int unk0;
  int unk4;
} Type;
typedef struct Vec
{
  f32 x;
  f32 y;
  f32 z;
} Vec;
typedef struct Entity
{
  char p0[8];
  f32 unk8;
  f32 unkC;
  f32 unk10;
  int p14;
  Type *unk18;
  f32 unk1C;
  f32 unk20;
  f32 unk24;
  char p28[0x154];
  f32 unk17C;
  f32 unk180;
  f32 unk184;
  f32 unk188;
  f32 unk18C;
  f32 unk190;
  char p194[0x38];
  f32 unk1CC;
} Entity;
extern char D_801043F8;
extern char D_80104438;
extern Type D_8011F448;
extern f32 D_800CA490[];
extern void func_8024F490(Entity *);
extern void func_80243A80(Entity *, f32, f32, f32, void *);
void func_80290404(Entity *arg0)
{
  void *var_s1;
  f32 temp_f1;
  f32 radius;
  f32 x;
  Vec saved;
  var_s1 = &D_80104438;
  if (!(arg0->unk18->unk4 & 4))
  {
    var_s1 = &D_801043F8;
  }
  temp_f1 = arg0->unk1CC;
  if (temp_f1 > 0.0f)
  {
    arg0->unk1CC = (f32) (temp_f1 - 1.0f);
    saved = *((Vec *) (&arg0->unk8));
  }
  func_8024F490(arg0);
  if (arg0->unk18 != (&D_8011F448))
  {
    arg0->unk1C = 0.0f;
    arg0->unk20 = 0.0f;
    arg0->unk24 = 0.0f;
  }
  func_80243A80(arg0, arg0->unk8, arg0->unkC, arg0->unk10, var_s1);
  x = arg0->unk8;
  radius = D_800CA490[1];
  arg0->unk17C = (f32) (x - radius);
  arg0->unk180 = (f32) (arg0->unkC - radius);
  arg0->unk184 = (f32) (arg0->unk10 - radius);
  arg0->unk188 = (f32) (arg0->unk8 + radius);
  {
    f32 z = arg0->unk10 + radius;
    f32 y = arg0->unkC + radius;
    *((f32 *) (((char *) arg0) + 0x18c)) = y;
    *((f32 *) (((char *) arg0) + 0x190)) = z;
  }
}
