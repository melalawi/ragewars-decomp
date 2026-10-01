#include "shared/player_types.h"
#include "shared/quat.h"
#include "shared/func_8027adbc_s2.h"
#include "shared/func_8027adbc_s3.h"
#include "shared/func_8027adbc_s6.h"
/* Updates a moving effect using its type, nearby players, and tracked target. */
#define NULL ((void *)0)
#if defined(VERSION_US_REV1)
extern f32 D_800C9CBC;
#define EFFECT_CONST_0 D_800C9CBC
extern f32 D_800C9CC0;
#define EFFECT_CONST_1 D_800C9CC0
extern f32 D_800C9CC4;
#define EFFECT_CONST_2 D_800C9CC4
extern f32 D_800C9CC8;
#define EFFECT_CONST_3 D_800C9CC8
extern f32 D_800C9CCC;
#define EFFECT_CONST_4 D_800C9CCC
extern f32 D_800C9CD0;
#define EFFECT_CONST_5 D_800C9CD0
extern f32 D_800C9CD4;
#define EFFECT_CONST_6 D_800C9CD4
extern f32 D_800C9CD8;
#define EFFECT_CONST_7 D_800C9CD8
extern f32 D_800C9CDC;
#define EFFECT_CONST_8 D_800C9CDC
extern f32 D_800C9CE0;
#define EFFECT_CONST_9 D_800C9CE0
extern f32 D_800C9CE4;
#define EFFECT_CONST_10 D_800C9CE4
#elif defined(VERSION_US)
extern f32 D_800C4AFC;
#define EFFECT_CONST_0 D_800C4AFC
extern f32 D_800C4B00;
#define EFFECT_CONST_1 D_800C4B00
extern f32 D_800C4B04;
#define EFFECT_CONST_2 D_800C4B04
extern f32 D_800C4B08;
#define EFFECT_CONST_3 D_800C4B08
extern f32 D_800C4B0C;
#define EFFECT_CONST_4 D_800C4B0C
extern f32 D_800C4B10;
#define EFFECT_CONST_5 D_800C4B10
extern f32 D_800C4B14;
#define EFFECT_CONST_6 D_800C4B14
extern f32 D_800C4B18;
#define EFFECT_CONST_7 D_800C4B18
extern f32 D_800C4B1C;
#define EFFECT_CONST_8 D_800C4B1C
extern f32 D_800C4B20;
#define EFFECT_CONST_9 D_800C4B20
extern f32 D_800C4B24;
#define EFFECT_CONST_10 D_800C4B24
#elif defined(VERSION_EU)
extern f32 D_800C4E7C;
#define EFFECT_CONST_0 D_800C4E7C
extern f32 D_800C4E80;
#define EFFECT_CONST_1 D_800C4E80
extern f32 D_800C4E84;
#define EFFECT_CONST_2 D_800C4E84
extern f32 D_800C4E88;
#define EFFECT_CONST_3 D_800C4E88
extern f32 D_800C4E8C;
#define EFFECT_CONST_4 D_800C4E8C
extern f32 D_800C4E90;
#define EFFECT_CONST_5 D_800C4E90
extern f32 D_800C4E94;
#define EFFECT_CONST_6 D_800C4E94
extern f32 D_800C4E98;
#define EFFECT_CONST_7 D_800C4E98
extern f32 D_800C4E9C;
#define EFFECT_CONST_8 D_800C4E9C
extern f32 D_800C4EA0;
#define EFFECT_CONST_9 D_800C4EA0
extern f32 D_800C4EA4;
#define EFFECT_CONST_10 D_800C4EA4
#elif defined(VERSION_EU_X)
extern f32 D_800C4EBC;
#define EFFECT_CONST_0 D_800C4EBC
extern f32 D_800C4EC0;
#define EFFECT_CONST_1 D_800C4EC0
extern f32 D_800C4EC4;
#define EFFECT_CONST_2 D_800C4EC4
extern f32 D_800C4EC8;
#define EFFECT_CONST_3 D_800C4EC8
extern f32 D_800C4ECC;
#define EFFECT_CONST_4 D_800C4ECC
extern f32 D_800C4ED0;
#define EFFECT_CONST_5 D_800C4ED0
extern f32 D_800C4ED4;
#define EFFECT_CONST_6 D_800C4ED4
extern f32 D_800C4ED8;
#define EFFECT_CONST_7 D_800C4ED8
extern f32 D_800C4EDC;
#define EFFECT_CONST_8 D_800C4EDC
extern f32 D_800C4EE0;
#define EFFECT_CONST_9 D_800C4EE0
extern f32 D_800C4EE4;
#define EFFECT_CONST_10 D_800C4EE4
#elif defined(VERSION_DE)
extern f32 D_800C4BCC;
#define EFFECT_CONST_0 D_800C4BCC
extern f32 D_800C4BD0;
#define EFFECT_CONST_1 D_800C4BD0
extern f32 D_800C4BD4;
#define EFFECT_CONST_2 D_800C4BD4
extern f32 D_800C4BD8;
#define EFFECT_CONST_3 D_800C4BD8
extern f32 D_800C4BDC;
#define EFFECT_CONST_4 D_800C4BDC
extern f32 D_800C4BE0;
#define EFFECT_CONST_5 D_800C4BE0
extern f32 D_800C4BE4;
#define EFFECT_CONST_6 D_800C4BE4
extern f32 D_800C4BE8;
#define EFFECT_CONST_7 D_800C4BE8
extern f32 D_800C4BEC;
#define EFFECT_CONST_8 D_800C4BEC
extern f32 D_800C4BF0;
#define EFFECT_CONST_9 D_800C4BF0
extern f32 D_800C4BF4;
#define EFFECT_CONST_10 D_800C4BF4
#endif

void func_80228DA0(void *, void *);
f32 func_8024D274(void *);
f32 func_8024E410(void *);
void func_80270D40(void *, f32, void *, void *);
void func_80271FA4(void *, void *, void *);
void func_80271FD8(void *, void *, void *);
void func_8027200C(Vec3 *, Vec3 *, f32);
void func_802720EC(f32 *);
void func_802727B8(void *, f32);
void func_80272908(void *, void *, void *);
void func_802742B4(f32 *, f32 *);
f32 func_80274640(f32);
f32 func_80274B00(f32, f32);
void func_80279E40(void *, f32);
float func_802B2350(int);
f32 func_802BC380(f32);
void func_80271888(void *, f32 *);            /* extern */
void func_8027A0F4(void *);                      /* extern */
void func_8027A540(void *);                      /* extern */
extern s32 D_80145040;
extern void *D_80145060;

typedef Shared_Quat Quat;

typedef struct func_8027ADBC_S1 func_8027ADBC_S1;
typedef Shared_func_8027ADBC_S2 func_8027ADBC_S2;
typedef Shared_func_8027ADBC_S3 func_8027ADBC_S3;
typedef struct func_8027ADBC_S4 func_8027ADBC_S4;
typedef struct func_8027ADBC_S5 func_8027ADBC_S5;
typedef Shared_func_8027ADBC_S6 func_8027ADBC_S6;
typedef union func_8027ADBC_S1_U1C { u8 v0; f32 v1; s8 v2; } func_8027ADBC_S1_U1C;
struct func_8027ADBC_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad6[2];
    Vec3 unk8;
    char pad14[8];
    func_8027ADBC_S1_U1C unk1C;
    f32 unk20;
    f32 unk24;
    char pad24[0x34];
    u32 unk5C;
    char pad60[0xB8];
    func_8027ADBC_S4 * unk118;
    char pad118[0x18];
    void* unk134;
    char pad134[0x3C];
    Vec3 unk174;
};


struct func_8027ADBC_S4 {
    u32 unk0;
    char pad4[0xA];
    s16 unkE;
    char padE[0x20];
    func_8027ADBC_S5 * unk30;
};
struct func_8027ADBC_S5 {
    char pad0[0x10];
    u16 unk10;
    u16 unk12;
};


void func_8027ADBC(func_8027ADBC_S1 *arg0)
{
  Vec3 sp10;
  Vec3 sp20;
  Vec3 sp30;
  Vec3 sp40;
  Vec3 sp50;
  Quat sp60;
  Quat sp70;
  Quat sp80;
  Matrix sp90;
  Vec3 spD0;

  Vec3 spE0;
  Vec3 *nearby_position; /* FAKEMATCH: Stage the nearby-player scratch address before loop constants. */
  Vec3 *temp_s2_2;
  f32 temp_f0;
  f32 temp_f0_10;
  Vec3 *new_var;
  f32 temp_f0_11;
  f32 temp_f0_2;
  f32 temp_f0_3;
  f32 temp_f0_4;
  f32 temp_f0_5;
  f32 temp_f0_6;
  f32 temp_f0_7;
  f32 temp_f0_8;
  f32 temp_f0_9;
  f32 temp_f12;
  f32 temp_f12_2;
  f32 temp_f12_3;
  f32 temp_f1;
  f32 temp_f1_2;
  f32 temp_f1_3;
  f32 temp_f1_4;
  f32 temp_f1_5;
  f32 temp_f20;
  f32 nearby_height;
  f32 nearby_scale;
  f32 nearby_random_max;
  f32 tracking_min;
  f32 tracking_max;
  f32 temp_f20_2;
  f32 temp_f20_3;
  f32 temp_f20_4;
  f32 var_f2;
  s32 temp_v1;
  void *temp_a0;
  func_8027ADBC_S3 *temp_s0;
  void *temp_s0_2; /* FAKEMATCH: Recycle the tracking velocity pointer for scratch and velocity in both acceleration paths. */
  func_8027ADBC_S6 *temp_s0_4;
  void *temp_s0_5;
  void *temp_s2; /* FAKEMATCH: Reuse the dead nearby-motion pointer for the special-effect velocity. */
  void *var_a0;
  func_8027ADBC_S2 *var_s0;
  temp_v1 = arg0->unk4;
  if (temp_v1 == 0x127)
  {
    goto block_26;
  }
  if (temp_v1 < 0x128)
  {
    if (temp_v1 == 46)
    {
      goto block_46;
    }
    if (temp_v1 < 47)
    {
      if (temp_v1 == 11)
      {
        goto block_24;
      }
      if (temp_v1 == 14)
      {
        goto block_26;
      }
      goto block_common;
    }
    if (temp_v1 >= 97)
    {
      goto block_common;
    }
    if (temp_v1 >= 95)
    {
      goto block_26;
    }
    goto block_common;
  }
  if (temp_v1 == 0x414)
  {
    goto block_540;
  }
  if (temp_v1 < 0x415)
  {
    if (temp_v1 == 0x129)
    {
      goto block_24;
    }
    if (temp_v1 == 0x3EC)
    {
      goto block_26;
    }
    goto block_common;
  }
  if (temp_v1 == 0x42D)
  {
    goto block_540;
  }
  if (temp_v1 == 0x4B4)
  {
    goto block_26;
  }
  goto block_common;
  block_46:
  var_a0 = D_80145060;

  if (var_a0 != ((void *) 0))
  {
    nearby_position = &sp20;
    temp_s2 = (void *) (&arg0->unk1C.v0);
    do { /* FAKEMATCH: Preserve the ordering of nearby-loop initialization. */
      nearby_scale = EFFECT_CONST_0;
      nearby_random_max = EFFECT_CONST_1;
    } while (0);
    var_s0 = var_a0;
    do
    {
      nearby_height = var_s0->unk70;
      sp20 = var_s0->pos;
      sp20.y += nearby_height;
      sp20.y += func_8024D274(var_a0) * nearby_scale;
      func_80271FD8(&sp10, nearby_position, &arg0->unk8);
      temp_f20 = func_802BC380(((sp10.x * sp10.x) + (sp10.y * sp10.y)) + (sp10.z * sp10.z));
      if (temp_f20 < EFFECT_CONST_2)
      {
        temp_f20 = EFFECT_CONST_4 - (temp_f20 * EFFECT_CONST_3);
        sp10.x *= temp_f20 * func_80274B00(nearby_scale, nearby_random_max);
        sp10.y *= temp_f20 * func_80274B00(nearby_scale, nearby_random_max);
        sp10.z *= temp_f20 * func_80274B00(nearby_scale, nearby_random_max);
        func_80271FD8(temp_s2, temp_s2, &sp10);
      }
      var_a0 = var_s0->unk16E0;
      var_s0 = var_a0;
    }
    while (var_a0 != ((void *) 0));
  }
  temp_s0 = arg0->unk134;
  temp_f0_2 = func_8024E410(temp_s0);
  sp20 = temp_s0->pos;
  sp20.y += temp_f0_2;
  func_80271FD8(&sp10, &sp20, &arg0->unk8);
  tracking_min = EFFECT_CONST_5;
  tracking_max = EFFECT_CONST_6;
  sp10.x *= func_80274B00(tracking_min, tracking_max);
  sp10.y *= func_80274B00(tracking_min, tracking_max);
  sp10.z *= func_80274B00(tracking_min, tracking_max);
  temp_s0_2 = (void *) (&arg0->unk1C.v0);
  func_80271FA4(temp_s0_2, temp_s0_2, &sp10);
  func_802727B8(temp_s0_2, func_802B2350((s32) arg0->unk118->unk30->unk12));
  return;
  block_24:
  func_8027A0F4(arg0);

  return;
  block_540:
  func_8027A540(arg0);

  return;
  block_26:
  func_80228DA0(&D_80145040, arg0);

  temp_f0_3 = func_802B2350((s32) arg0->unk118->unk30->unk10);
  if (temp_f0_3 != 0.0f)
  {
    temp_s0_2 = &spD0; /* FAKEMATCH: Overwrite the scratch pointer with the velocity pointer after scaling. */
    spE0 = arg0->unk174;
    func_8027200C(temp_s0_2, &spE0, temp_f0_3);
    temp_s0_2 = (void *) (&arg0->unk1C.v0);
    func_80271FA4(temp_s0_2, temp_s0_2, &spD0);
    temp_f1 = arg0->unk1C.v1;
    temp_f0_4 = arg0->unk20;
    temp_f12 = arg0->unk24;
    temp_f20_2 = func_802BC380(((temp_f1 * temp_f1) + (temp_f0_4 * temp_f0_4)) + (temp_f12 * temp_f12));
    temp_f0_5 = func_802B2350((s32) arg0->unk118->unk30->unk12);
    if (temp_f0_3 > 0.0f)
    {
      if (!(temp_f0_5 < temp_f20_2))
      {
        goto after_special_clamp;
      }
    }
    else
      if (!(temp_f20_2 < temp_f0_5))
    {
      goto after_special_clamp;
    }
    func_8027200C(temp_s0_2, &spE0, temp_f0_5);
    after_special_clamp:
    ;

    ;
  }
  func_80279E40(arg0, 1.0f);
  return;
  block_common:
  temp_s0_4 = arg0->unk134;

  temp_a0 = arg0->unk118;
  if (((temp_s0_4 != ((void *) 0)) && (arg0->unk118->unk0 & 0x40000)) && (arg0->unk118->unkE != 0))
  {
    temp_f0_6 = func_8024E410(temp_s0_4);
    sp20 = temp_s0_4->pos;
    sp20.y += temp_f0_6;
    sp20.y += func_8024D274(temp_s0_4) * EFFECT_CONST_7;
    func_80271FD8(&sp40, &sp20, &arg0->unk8);
    func_802720EC(&sp40);
    func_80271888(&sp70, &sp40);
    temp_s2_2 = &arg0->unk174;
    func_80271888(&sp60, temp_s2_2);
    sp30 = arg0->unk174;
    func_802720EC(&sp30);
    temp_f1_3 = arg0->unk1C.v1;
    temp_f0_7 = arg0->unk20;
    temp_f12_2 = arg0->unk24;
    temp_f20_3 = func_802BC380(((temp_f1_3 * temp_f1_3) + (temp_f0_7 * temp_f0_7)) + (temp_f12_2 * temp_f12_2));
    temp_f0_8 = func_80274640(((sp30.x * sp40.x) + (sp30.y * sp40.y)) + (sp30.z * sp40.z));
    temp_f1_4 = ((f32) arg0->unk118->unkE) * EFFECT_CONST_8;
    var_f2 = EFFECT_CONST_9;
    if (temp_f1_4 < temp_f0_8)
    {
      var_f2 = temp_f1_4 / temp_f0_8;
    }
    func_80270D40(&sp80, var_f2, &sp60, &sp70);
    func_802742B4(&sp80, &sp90);
    sp50.x = 0;
    sp50.y = 0;
    sp50.z = EFFECT_CONST_10;
    new_var = temp_s2_2;
    func_80272908(&sp90, &sp50, new_var);
    func_8027200C(&arg0->unk1C.v0, new_var, temp_f20_3);
  }
  if (!(arg0->unk5C & 0x70000))
  {
    temp_f0_9 = func_802B2350((s32) arg0->unk118->unk30->unk10);
    if (temp_f0_9 != 0.0f)
    {
      temp_s0_2 = &spD0; /* FAKEMATCH: Overwrite the scratch pointer with the velocity pointer after scaling. */
    spE0 = arg0->unk174;
      func_8027200C(temp_s0_2, &spE0, temp_f0_9);
      temp_s0_2 = (void *) (&arg0->unk1C.v0);
      func_80271FA4(temp_s0_2, temp_s0_2, &spD0);
      temp_f1_5 = arg0->unk1C.v1;
      temp_f0_10 = arg0->unk20;
      temp_f12_3 = arg0->unk24;
      temp_f20_4 = func_802BC380(((temp_f1_5 * temp_f1_5) + (temp_f0_10 * temp_f0_10)) + (temp_f12_3 * temp_f12_3));
      temp_f0_11 = func_802B2350((s32) arg0->unk118->unk30->unk12);
      if (temp_f0_9 > 0.0f)
      {
        if (!(temp_f0_11 < temp_f20_4))
        {
          goto after_normal_clamp;
        }
      }
      else
        if (!(temp_f20_4 < temp_f0_11))
      {
        goto after_normal_clamp;
      }
      func_8027200C(temp_s0_2, &spE0, temp_f0_11);
      after_normal_clamp:
      ;

      ;
    }
  }
  if (!(arg0->unk5C & 0x30000))
  {
    func_80279E40(arg0, 1.0f);
  }
}
