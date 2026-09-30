/* Draw an actor effect with interpolated colors, animation frames, and distance fading. */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void *func_802392DC(void *);
void func_802536F4(void *, void *);
void func_80268CE0(u32);
s32 func_8026925C(s32);
void func_80272908(void *, void *, void *);
s32 func_80274544(void);
s32 func_80279A30(void *, s32);
void **func_80296EC4(void *, s32);
void func_80296F7C(s32 **, void *);
s32 func_80243A80();
M2C_UNK func_8027DD1C(void *, void *, void *, f32);
#if defined(VERSION_US_REV1)
M2C_UNK func_80295FB4();
#define effectSelectMaterial func_80295FB4
#else
M2C_UNK func_80294FF4();
#define effectSelectMaterial func_80294FF4
#endif
extern M2C_UNK D_80104030;
typedef struct 
{
  u32 w0;
  u32 w1;
} EffectCommand;
extern EffectCommand *D_80110634;
extern M2C_UNK D_8011F038;
typedef struct 
{
  s32 words[4];
} EffectHeaderChunk;
typedef struct 
{
  s32 x;
  s32 y;
  s32 z;
} EffectPoint;
typedef struct func_8027ED40_S1 func_8027ED40_S1;
typedef struct EffectActor EffectActor;
typedef struct EffectDef EffectDef;
typedef struct EffectView EffectView;
typedef struct func_8027ED40_S5 func_8027ED40_S5;
typedef struct func_8027ED40_S6 func_8027ED40_S6;
typedef struct func_8027ED40_S7 func_8027ED40_S7;
typedef struct func_8027ED40_S8 func_8027ED40_S8;
typedef struct func_8027ED40_S9 func_8027ED40_S9;
typedef struct func_8027ED40_S10 func_8027ED40_S10;
typedef struct func_8027ED40_S11 func_8027ED40_S11;
typedef struct func_8027ED40_S12 func_8027ED40_S12;
typedef struct func_8027ED40_S13 func_8027ED40_S13;
typedef struct func_8027ED40_S14 func_8027ED40_S14;
typedef struct func_8027ED40_S15 func_8027ED40_S15;
typedef struct func_8027ED40_S16 func_8027ED40_S16;
typedef struct func_8027ED40_S17 func_8027ED40_S17;
typedef struct func_8027ED40_S18 func_8027ED40_S18;
typedef struct func_8027ED40_S19 func_8027ED40_S19;
typedef struct func_8027ED40_S20 func_8027ED40_S20;
typedef struct func_8027ED40_S21 func_8027ED40_S21;
typedef struct func_8027ED40_S22 func_8027ED40_S22;
typedef struct func_8027ED40_S23 func_8027ED40_S23;
typedef struct func_8027ED40_S24 func_8027ED40_S24;
typedef struct func_8027ED40_S25 func_8027ED40_S25;
typedef struct func_8027ED40_S26 func_8027ED40_S26;
typedef struct func_8027ED40_S27 func_8027ED40_S27;
typedef struct func_8027ED40_S28 func_8027ED40_S28;
typedef struct func_8027ED40_S29 func_8027ED40_S29;
typedef struct func_8027ED40_S30 func_8027ED40_S30;
struct func_8027ED40_S1
{
  char pad0[0x114];
  s32 unk114;
};
struct EffectActor
{
  char pad0[0x4];
  u16 unk4;
  char pad4[(0x8 - 0x4) - (sizeof(u16))];
  s32 unk8;
  char pad8[(0xC - 0x8) - (sizeof(s32))];
  s32 unkC;
  char padC[(0x10 - 0xC) - (sizeof(s32))];
  s32 unk10;
  char pad10[(0x50 - 0x10) - (sizeof(s32))];
  char unk50;
  char pad50[0x5C - 0x51];
  s32 unk5C;
  char pad5C[(0x118 - 0x5C) - (sizeof(s32))];
  EffectDef *unk118;
  char pad118[(0x11C - 0x118) - (sizeof(func_8027ED40_S17 *))];
  s32 unk11C;
  char pad11C[(0x140 - 0x11C) - (sizeof(s32))];
  f32 unk140;
  char pad140[(0x144 - 0x140) - (sizeof(f32))];
  f32 unk144;
  char pad144[(0x14C - 0x144) - (sizeof(f32))];
  s16 unk14C;
  char pad14C[(0x14E - 0x14C) - (sizeof(s16))];
  s8 unk14E;
  char pad14E[(0x14F - 0x14E) - (sizeof(s8))];
  s8 unk14F;
  char pad14F[(0x198 - 0x14F) - (sizeof(s8))];
  f32 unk198;
  char pad198[(0x1D2 - 0x198) - (sizeof(f32))];
  u8 unk1D2;
  char pad1D2[(0x1D5 - 0x1D2) - (sizeof(u8))];
  u8 unk1D5;
  char pad1D5[(0x1D8 - 0x1D5) - (sizeof(u8))];
  u8 unk1D8;
};
struct EffectDef
{
  s32 unk0;
  char pad0[(0x8 - 0x0) - (sizeof(s32))];
  s8 unk8;
  char pad8[(0x10 - 0x8) - (sizeof(s8))];
  s32 unk10;
  char pad10[(0x34 - 0x10) - (sizeof(s32))];
  void *unk34;
  char pad34[(0x38 - 0x34) - (sizeof(void *))];
  func_8027ED40_S22 *unk38;
};
struct EffectView
{
  char pad0[0x8];
  s32 unk8;
  char pad8[(0x10 - 0x8) - (sizeof(s32))];
  s32 unk10;
  char pad10[(0x24 - 0x10) - (sizeof(s32))];
  s32 unk24;
  char pad24[(0x120 - 0x24) - (sizeof(s32))];
  s32 unk120;
  char pad120[(0x128 - 0x120) - (sizeof(s32))];
  EffectPoint probePoint;
  char pad130[(0x220 - 0x130) - (sizeof(s32))];
  char unk220;
  char pad220[0x528 - 0x221];
  f32 unk528;
};
struct func_8027ED40_S5
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
  char pad4[(0x8 - 0x4) - (sizeof(s32))];
  s32 unk8;
  char pad8[(0xC - 0x8) - (sizeof(s32))];
  s32 unkC;
};
struct func_8027ED40_S6
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
  char pad4[(0x8 - 0x4) - (sizeof(s32))];
  s32 unk8;
  char pad8[(0xC - 0x8) - (sizeof(s32))];
  s32 unkC;
};
struct func_8027ED40_S7
{
  char pad0[0x8];
  s32 unk8;
  char pad8[(0xC - 0x8) - (sizeof(s32))];
  s32 unkC;
  char padC[(0x10 - 0xC) - (sizeof(s32))];
  s32 unk10;
};
struct func_8027ED40_S8
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
  char pad4[(0x8 - 0x4) - (sizeof(s32))];
  s32 unk8;
  char pad8[(0xC - 0x8) - (sizeof(s32))];
  s32 unkC;
};
struct func_8027ED40_S9
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
  char pad4[(0x8 - 0x4) - (sizeof(s32))];
  s32 unk8;
  char pad8[(0xC - 0x8) - (sizeof(s32))];
  s32 unkC;
};
struct func_8027ED40_S10
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
  char pad4[(0x8 - 0x4) - (sizeof(s32))];
  s32 unk8;
  char pad8[(0xC - 0x8) - (sizeof(s32))];
  s32 unkC;
};
struct func_8027ED40_S11
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
  char pad4[(0x8 - 0x4) - (sizeof(s32))];
  s32 unk8;
  char pad8[(0xC - 0x8) - (sizeof(s32))];
  s32 unkC;
};
struct func_8027ED40_S12
{
  char pad0[0x6];
  u8 unk6;
  char pad6[(0x9 - 0x6) - (sizeof(u8))];
  u8 unk9;
};
struct func_8027ED40_S13
{
  char pad0[0x1];
  u8 unk1;
  char pad1[(0x2 - 0x1) - (sizeof(u8))];
  u8 unk2;
};
struct func_8027ED40_S14
{
  char pad0[0x1];
  u8 unk1;
  char pad1[(0x2 - 0x1) - (sizeof(u8))];
  u8 unk2;
};
struct func_8027ED40_S15
{
  u8 unk0;
  u8 unk1;
  char pad1[(0x2 - 0x1) - (sizeof(u8))];
  u8 unk2;
};
struct func_8027ED40_S16
{
  u8 unk0;
  u8 unk1;
  char pad1[(0x2 - 0x1) - (sizeof(u8))];
  u8 unk2;
};
struct func_8027ED40_S17
{
  s32 unk0;
};
struct func_8027ED40_S18
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  void *unk4;
};
struct func_8027ED40_S19
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
};
struct func_8027ED40_S20
{
  u8 unk0;
  char pad0[(0x2 - 0x0) - (sizeof(u8))];
  u8 unk2;
  char pad2[(0x3 - 0x2) - (sizeof(u8))];
  u8 unk3;
};
struct func_8027ED40_S21
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
};
struct func_8027ED40_S22
{
  char pad0[0x5];
  s8 unk5;
  char pad5[(0x9 - 0x5) - (sizeof(s8))];
  s8 unk9;
  s8 unkA;
  char padA[0xE - 0xB];
  s8 unkE;
};
struct func_8027ED40_S23
{
  char pad0[0xA];
  s8 unkA;
};
struct func_8027ED40_S24
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
};
struct func_8027ED40_S25
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
};
struct func_8027ED40_S26
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  M2C_UNK *unk4;
};
struct func_8027ED40_S27
{
  char pad0[0x8];
  s32 unk8;
};
struct func_8027ED40_S28
{
  char pad0[0x4];
  s32 unk4;
};
struct func_8027ED40_S29
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
};
typedef struct 
{
  u8 bytes[0x1000];
} func_8027ED40_Buffer;
struct func_8027ED40_S30
{
  s32 unk0;
  char pad0[(0x4 - 0x0) - (sizeof(s32))];
  s32 unk4;
};
typedef struct EffectMatrixSlots
{
  char pad0[0x60];
  char slot[4][0x40];
} EffectMatrixSlots;
extern func_8027ED40_S1 *D_8011FE80;
extern M2C_UNK D_8011FFB0;
extern s32 D_801450A8;
extern s32 D_801450B8;
extern s32 D_801462C8;
extern u8 D_801462E3;
extern s32 D_800D297C;
extern f32 D_800D2988[2];
extern s32 D_800E28A4;
typedef struct 
  {
    s32 sp28;
    u8 pad2C[4];
    M2C_UNK sp30;
    u8 pad34[4];
    u8 sp38;
    u8 sp39;
    u8 sp3A;
    u8 pad3B[5];
    u8 sp40;
    u8 sp41;
    u8 sp42;
    u8 pad43[5];
    M2C_UNK sp48;
    u8 pad4C[4];
    f32 sp50;
    u8 pad54[4];
    struct 
    {
      u8 initial[8];
      union 
      {
        s32 bits;
        f32 value;
      } at8;
      s32 atC;
      s32 at10;
      u8 remaining[0x50 - 0x14];
    } sp58;
  } EffectScratch;
void func_8027ED40(EffectActor *arg0, EffectView *arg1)
{
  s32 new_var13;
  EffectScratch scratch;
  s32 spA8;
  int new_var16;
  M2C_UNK *temp_v0_2;
  EffectHeaderChunk *var_v0_2;
  EffectHeaderChunk *var_v0_3;
  EffectHeaderChunk *var_v1;
  EffectHeaderChunk *var_v1_2;
  EffectHeaderChunk *var_v1_3;
  f32 temp_f0;
  f32 temp_f0_2;
  f32 temp_f0_3;
  f32 temp_f1;
  f32 temp_f1_2;
  f32 temp_f1_3;
  f32 temp_f1_4;
  f32 temp_f1_5;
  f32 temp_f1_6;
  f32 temp_f1_7;
  int new_var8;
  f32 fadeDenominator;
  f32 temp_f2;
  f32 temp_f2_2;
  f32 temp_f2_3;
  f32 temp_f2_4;
  f32 temp_f2_5;
  f32 temp_f3;
  f32 var_a3_2;
  f32 var_f0;
  f32 var_f0_2;
  f32 var_f0_3;
  f32 var_f1;
  f32 var_f1_2;
  f32 var_f20;
  f32 var_f3;
  s16 temp_v1_14;
  s32 *temp_a0_3;
  s32 *temp_a0_4;
  s32 *temp_a1_2;
  s32 *temp_v1_10;
  s32 *temp_v1_18;
  EffectCommand *temp_v1_19;
  s32 *var_a1_2;
  EffectCommand **environmentCursor;
  EffectCommand **matrixCursor;
  EffectCommand *var_a2_3;
  s32 temp_hi;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s5;
  u8 new_var15;
  s32 temp_v0_4;
  s32 temp_v0_5;
  void *new_var14;
  s32 temp_v0_6;
  s32 temp_v0_7;
  s32 temp_v0_8;
  s32 temp_v0_9;
  s32 temp_v1_17;
  s32 temp_v1_7;
  s32 temp_v1_9;
  s32 var_a0_3;
  s32 var_a1;
  s32 var_a2;
  s32 modeCopy; /* FAKEMATCH: keep the selected color mode in a separate long-lived local. */
  s32 var_a2_2;
  s32 var_a3;
  s32 var_a3_3;
  s32 var_condition_bit;
  f32 new_var2;
  int new_var3;
  s32 var_s1;
  s32 var_s3;
  s32 var_v0_10;
  void *new_var4;
  s32 var_v0_12;
  u32 var_v0_13;
  u8 var_v0_4;
  u8 var_v0_5;
  u8 var_v0_6;
  u8 var_v0_7;
  u8 var_v0_8;
  EffectHeaderChunk *new_var12;
  s32 new_var10;
  s32 var_v1_4;
  s32 var_v1_5;
  s32 var_v1_6;
  u8 var_v0_9;
  s8 temp_a1_3;
  s8 temp_v1_15;
  s8 temp_v1_16;
  s8 temp_v1_8;
  u32 var_a0_2;
  u8 fadeDuration; /* FAKEMATCH: retain the unsigned fade byte alongside its signed test. */
  u8 temp_v1_12;
  s32 temp_v0_3;
  int temp_v1;
  u8 temp_v1_11;
  u8 temp_v1_13;
  int new_var7;
  u8 temp_v1_2;
  u8 temp_v1_3;
  u8 temp_v1_4;
  u8 temp_v1_5;
  u8 temp_v1_6;
  u8 var_a0_4;
  int new_var6;
  u32 var_v0_11;
  s32 case2Red;
  s32 alphaClamped;
  void **temp_v0;
  f32 new_var;
  func_8027ED40_S12 *temp_a0;
  func_8027ED40_S14 *temp_a0_2;
  s32 new_var5;
  func_8027ED40_S16 *temp_a1;
  EffectActor *new_var9;
  func_8027ED40_S15 *temp_a2;
  func_8027ED40_S13 *temp_a3;
  EffectDef *temp_s4;
  func_8027ED40_S22 *temp_v0_10;
  void *var_a0;
  EffectHeaderChunk *var_v0;
  s32 *case1Slot; /* FAKEMATCH: retain the old case-1 command slot before advancing. */
  s32 *defaultSlot; /* FAKEMATCH: retain the old default command slot before advancing. */
  if ((((u32) (D_800E28A4 - (((u32) (((s8 *) D_80110634) - D_8011FE80->unk114)) >> 3))) >= 0xBB8U) && (!(arg0->unk140 < 0.0f)))
  {
    temp_v0 = func_80296EC4(&((EffectActor *) arg0)->unk11C, -1);
    if (temp_v0 != ((void *) 0))
    {
      temp_s4 = arg0->unk118;
      if (temp_s4->unk0 & 0x80000)
      {
        if (temp_s4->unk8 == 1)
        {
          if (arg0->unk4 != 0x60)
          {
            arg0->unk140 = 0.0f;
          }
          temp_v0_2 = func_802392DC(arg1);
          if (temp_v0_2 != ((void *) 0))
          {
            var_v0 = (EffectHeaderChunk *) arg0;
            if (arg1->unk24 == 0)
            {
              var_v1_2 = (EffectHeaderChunk *) (&scratch.sp58);
              var_v0_2 = (EffectHeaderChunk *) temp_v0_2;
              do
              {
                *var_v1_2 = *var_v0_2;
                var_v0_2++;
                var_v1_2++;
              }
              while (var_v0_2 != ((EffectHeaderChunk *) (&((EffectActor *) temp_v0_2)->unk50)));
              *((EffectPoint *) (&((func_8027ED40_S7 *) temp_v0_2)->unk8)) = arg1->probePoint;
              var_a1 = func_80243A80(temp_v0_2, arg0->unk8, arg0->unkC, arg0->unk10, &D_80104030);
              var_v0_3 = (EffectHeaderChunk *) temp_v0_2;
              var_v1_3 = (EffectHeaderChunk *) (&scratch.sp58);
              do
              {
                *var_v0_3 = *var_v1_3;
                var_v1_3++;
                var_v0_3++;
              }
              while (var_v1_3 != ((EffectHeaderChunk *) (&spA8)));
            }
            else
            {
              goto block_15;
            }
          }
          else
          {
            var_v0 = (EffectHeaderChunk *) arg0;
            block_15:
            var_v1 = (EffectHeaderChunk *) (&scratch.sp58);
            do
            {
              *var_v1 = *var_v0;
              var_v0++;
              var_v1++;
            }
            while (var_v0 != ((EffectHeaderChunk *) (&arg0->unk50)));

            *((EffectPoint *) (&scratch.sp58.at8)) = arg1->probePoint;
            var_a1 = func_80243A80(&scratch.sp58, arg0->unk8, arg0->unkC, arg0->unk10, &D_80104030);
          }
          if (var_a1 == 0)
          {
            var_f1 = ((f32) arg0->unk1D8) + ((*D_800D2988) * 128.0f);
            var_a3 = 0xFF;
            if (var_f1 > 255.0f)
            {
              goto fade_clamped;
            }
          }
          else
          {
            var_a3 = 0;
            var_f1 = ((f32) arg0->unk1D8) - ((*D_800D2988) * 128.0f);
            if (var_f1 < 0.0f)
            {
              goto fade_clamped;
            }
          }
          var_a3 = (s32) var_f1;
          fade_clamped:
          arg0->unk1D8 = (u8) var_a3;

          if (0.0f == ((f32) var_a3))
          {
            func_802536F4(0, temp_v0);
            goto effect_done;
          }
          else
          {
            goto block_25;
          }
        }
        else
        {
          goto block_26;
        }
      }
      else
      {
        block_25:
        block_26:
        var_f0_3 = arg0->unk140 / ((f32) arg0->unk14C);


        arg0->unk5C = (s32) (arg0->unk5C | (8 << arg1->unk8));
        arg0->unk198 = 255.0f;
        var_f3 = (1.0f < var_f0_3) ? 1.0f : var_f0_3;
        temp_a0 = temp_s4->unk34;
        temp_v1 = arg0->unk1D5;
        temp_a2 = (void *) (&((EffectActor *) arg0)->unk1D2);
        temp_a3 = (void *) (&((EffectActor *) arg0)->unk1D5);
        temp_f1 = (((f32) (temp_a0->unk9 - temp_v1)) * var_f3) + ((f32) temp_v1);
        temp_a1 = (void *) (&((func_8027ED40_S12 *) temp_a0)->unk6);
        temp_a0_2 = (void *) (&((func_8027ED40_S12 *) temp_a0)->unk9);
        if (!(temp_f1 > 255.0f))
        {
          var_v0_4 = 0;
          if (temp_f1 < 0.0f)
            goto first_red_done;
        }
        var_v0_4 = 255;
        if (!(temp_f1 > 255.0f))
          var_v0_4 = (u32)temp_f1;
        first_red_done:
        scratch.sp38 = (u8) var_v0_4;
        temp_v1_2 = temp_a3->unk1;
        new_var15 = temp_v1_2;
        temp_f1_2 = (((f32) (temp_a0_2->unk1 - new_var15)) * var_f3) + ((f32) new_var15);
        var_v0_5 = (temp_f1_2 > 255.0f) ? (255) : ((temp_f1_2 < 0.0f) ? (0) : ((temp_f1_2 > 255.0f) ? (255) : ((u32) temp_f1_2)));
        scratch.sp39 = (u8) var_v0_5;
        temp_v1_3 = temp_a3->unk2;
        temp_f1_3 = (((f32) (temp_a0_2->unk2 - temp_v1_3)) * var_f3) + ((f32) temp_v1_3);
        var_v0_6 = (temp_f1_3 > 255.0f) ? (255) : ((temp_f1_3 < 0.0f) ? (0) : ((temp_f1_3 > 255.0f) ? (255) : ((u32) temp_f1_3)));
        scratch.sp3A = (u8) var_v0_6;
        temp_v1_4 = temp_a2->unk0;
        temp_f1_4 = (((f32) (temp_a1->unk0 - temp_v1_4)) * var_f3) + ((f32) temp_v1_4);
        if (((((f32) (temp_a1->unk0 - temp_v1_4)) * var_f3) + ((f32) temp_v1_4)) > 255.0f)
        {
          var_v0_7 = 0xFF;
        }
        else
        {
          var_v0_7 = 0;
          if (!(((((f32) (temp_a1->unk0 - temp_v1_4)) * var_f3) + ((f32) temp_v1_4)) < 0.0f))
          {
            var_v0_7 = 0xFF;
            if (!(temp_f1_4 > 255.0f))
            {
              var_v0_7 = (u32) temp_f1_4;
            }
          }
        }
        scratch.sp40 = (u8) var_v0_7;
        temp_v1_5 = temp_a2->unk1;
        temp_f1_5 = (var_f3 * ((f32) (temp_a1->unk1 - temp_v1_5))) + ((f32) temp_v1_5);
        if (temp_f1_5 > 255.0f)
        {
          var_v0_8 = 0xFF;
        }
        else
        {
          var_v0_8 = 0;
          if (!(temp_f1_5 < 0.0f))
          {
            var_v0_8 = 0xFF;
            if (!(temp_f1_5 > 255.0f))
            {
              var_v0_8 = (u32) temp_f1_5;
            }
          }
        }
        scratch.sp41 = (u8) var_v0_8;
        temp_v1_6 = temp_a2->unk2;
        temp_f1_6 = (((f32) (temp_a1->unk2 - temp_v1_6)) * var_f3) + ((f32) temp_v1_6);
        var_v0_9 = (temp_f1_6 > 255.0f) ? (255) : ((temp_f1_6 < 0.0f) ? (0) : ((temp_f1_6 > 255.0f) ? (255) : ((u32) temp_f1_6)));
        scratch.sp42 = (u8) var_v0_9;
        if (arg1->unk120 != 0)
        {
          temp_v0_3 = scratch.sp41;
          temp_hi = (s16)(scratch.sp3A + (scratch.sp38 + scratch.sp39)) / 12;
          scratch.sp38 = ((s16)temp_hi) * 2;
          var_f1_2 = 0;
          temp_v1_7 = (s16)((s16)((scratch.sp40 + temp_v0_3) + scratch.sp42) / 12);
          scratch.sp39 = var_f1_2;
          scratch.sp3A = 0;
          scratch.sp42 = 0;
          scratch.sp40 = temp_v1_7 * 2;
          scratch.sp41 = temp_v1_7 * 3;
        }
        var_a2 = 0;
        if (arg0->unk118->unk0 & 0x02000000)
        {
          if (arg0->unk5C & 2)
          {
            var_a2 = 2;
          }
          else
            if (D_801462E3 == 2)
          {
            var_a2 = 1;
          }
        }
        modeCopy = var_a2;
        func_80296F7C((s32 **) temp_v0, &scratch.sp28);
        temp_v1_8 = temp_s4->unk8;
        var_s1 = (s32) arg0->unk144;
        var_s3 = (s32) arg0->unk140;
        switch (temp_v1_8)
        {
          case 0:
            temp_v1_9 = scratch.sp28 - 1;
            if (var_s1 >= temp_v1_9)
          {
            var_s3 = (s32) arg0->unk14C;
            new_var13 = var_s3;
            var_s1 = temp_v1_9;
            arg0->unk140 = (f32) new_var13;
          }
            break;

          case 1:
            if (var_s1 >= scratch.sp28)
          {
            var_s1 = scratch.sp28 - 1;
          }
            break;

          case 2:
            if (scratch.sp28 == 0)
          {
          }
            var_v0_12 = -1;
            if ((scratch.sp28 == var_v0_12) && (0x80000000 == (var_s1 / scratch.sp28)))
          {
          }
            var_s1 = var_s1 % scratch.sp28;
            break;

          case 3:
            temp_v0_4 = (scratch.sp28 * 2) - 2;
            if (temp_v0_4 > 0)
            {
              var_s1 = var_s1 % temp_v0_4;
            }
            else
            {
              var_s1 = 0;
            }
            if (var_s1 >= scratch.sp28)
          {
            new_var16 = 2;
            var_s1 = (scratch.sp28 * new_var16) - (var_s1 + new_var16);
          }
            break;

          case 4:
            temp_v0_5 = func_80274544();
            temp_v0_6 = temp_v0_5 / scratch.sp28;
            if (scratch.sp28 == 0)
          {
          }
            if ((scratch.sp28 == (-1)) && (temp_v0_6 == 0x80000000))
          {
          }
            var_s1 = temp_v0_5 % (&scratch)->sp28;
            break;

          case 5:
            if (arg0->unk14F == (-1))
          {
            temp_v0_7 = func_80274544();
            temp_v0_8 = temp_v0_7 / scratch.sp28;
            if (scratch.sp28 == 0)
            {
            }
            new_var7 = (scratch.sp28 == var_v0_12) && (temp_v0_8 == 0x80000000);
            if (new_var7)
            {
            }
            arg0->unk14F = (s8) (temp_v0_7 % scratch.sp28);
          }
            var_s1 = (s32) arg0->unk14F;
            break;

        }

        var_a0 = &arg1->unk220;
        if (!(arg0->unk5C & 0x100000))
        {
          if (D_801450B8 == 1)
          {
            temp_s0 = (var_a3 = D_801450A8);
            func_80272908(&((EffectView *) temp_s0)->unk220, &((EffectActor *) arg0)->unk8, &scratch.sp58);
            var_f1_2 = scratch.sp58.at8.value;
            if (var_f1_2 < 0.0f)
            {
              var_f1_2 = -var_f1_2;
            }
            var_a3_2 = var_f1_2;
            var_a2_2 = temp_s0;
            func_8027DD1C(arg0, &((EffectMatrixSlots *) arg0)->slot[D_800D297C], var_a2_2, var_a3_2);
          }
          else
          {
            var_a2_2 = 0;
            var_a3_2 = 0.0f;
            func_8027DD1C(arg0, &((EffectMatrixSlots *) arg0)->slot[D_800D297C], var_a2_2, var_a3_2);
          }
          new_var9 = arg0;
          arg0->unk5C = (s32) (new_var9->unk5C | 0x100000);
          arg0->unk14E = (s8) var_s1;
          ;
        }
        func_80272908(&arg1->unk220, &((EffectActor *) arg0)->unk8, &scratch.sp48);
        var_f20 = scratch.sp50;
        if (var_f20 < 0.0f)
          var_f20 = -var_f20;
        if (D_801450B8 == 1)
        {
          EffectCommand **firstMatrixCursor = &D_80110634; /* FAKEMATCH: scope the first matrix cursor. */
          EffectCommand *firstMatrixCommand = (*firstMatrixCursor)++; /* FAKEMATCH: retain the original command slot. */
          new_var14 = (void *) (&((EffectMatrixSlots *) arg0)->slot[D_800D297C]);
          firstMatrixCommand->w0 = 0xDA380003;
          ((func_8027ED40_S18 *) firstMatrixCommand)->unk4 = new_var14;
          goto block_139;
        }
        temp_v0_9 = func_80279A30(&D_8011FFB0, 1);
        if (temp_v0_9 == 0)
        {
          func_802536F4(0, temp_v0);
          goto effect_done;
        }
        func_8027DD1C(arg0, (void *) temp_v0_9, arg1, var_f20);
        {
          EffectCommand **secondMatrixCursor = &D_80110634; /* FAKEMATCH: scope the second matrix cursor. */
          temp_v1_10 = (s32 *) (*secondMatrixCursor)++;
          ((func_8027ED40_S19 *) temp_v1_10)->unk0 = 0xDA380003;
          ((func_8027ED40_S19 *) temp_v1_10)->unk4 = temp_v0_9;
        }
        block_139:
        spA8 = arg0->unk5C & 0x800000;

        temp_v1_11 = ((func_8027ED40_S20 *) scratch.sp30)->unk2;
        var_v1_4 = temp_v1_11;
        if (temp_s4->unk0 & 0x100)
        {
          var_v1_4 += 7;
        }
        else
        {
          var_v1_4 += 6;
        }
        temp_s5 = 1 << var_v1_4;
        temp_v1_12 = ((func_8027ED40_S20 *) scratch.sp30)->unk3;
        new_var8 = 0;
        if (temp_s4->unk0 & 0x200)
        {
          var_v1_5 = temp_v1_12 + 7;
        }
        else
        {
          var_v1_5 = temp_v1_12 + 6;
        }
        {
          s32 shiftOne = 1; /* FAKEMATCH: keep the second texture size shift independent of call constants. */
          temp_s0_2 = shiftOne << var_v1_5;
        }
        effectSelectMaterial(&((EffectActor *) arg0)->unk11C, temp_v0, var_s1, 0, temp_s5, temp_s0_2, 1, 1, 0);
        temp_v1_13 = ((func_8027ED40_S20 *) scratch.sp30)->unk0;
        new_var5 = (s32) temp_v1_13;
        var_v0_12 = temp_v1_13;
        if ((new_var5 >= 0) && (((var_a0_2 = 0x18, (((s32) var_v0_12) < 2) != 0)) || ((var_a0_2 = 0x1D, var_v0_12 == 3))))
        {
          func_80268CE0(var_a0_2);
        }
        if (spA8 != new_var8)
        {
          func_8026925C(0xF);
          matrixCursor = &D_80110634;
          {
          EffectCommand *d7Command = (*matrixCursor)++; /* FAKEMATCH: retain the optional material command slot. */
          s32 materialPayload; /* FAKEMATCH: compute D7 payload before header store. */
          materialPayload = (s32) ((temp_s5 << 0x10) | (temp_s0_2 & 0xFFFF));
          d7Command->w0 = 0xD7FF0002;
          d7Command->w1 = materialPayload;
          }
        }
        else
        {
          if ((!(temp_s4->unk0 & 0x400)) || (temp_s4->unk38->unkE == 4))
          {
            if (((volatile EffectDef *) temp_s4)->unk0 & 0x4000) /* FAKEMATCH: order the second flags read after the nested definition check. */
            {
              var_a0_3 = 0x11;
              if (!(D_801462C8 & 0x200))
              {
                var_a0_3 = 0xD;
              }
            }
            else
            {
              var_a0_3 = 0x13;
              if (D_801462C8 & 0x200)
              {
                var_a0_3 = 0x12;
              }
            }
          }
          else
          {
            var_a0_3 = 0xF;
          }
          func_8026925C(var_a0_3);
        }
        var_a3_3 = 0xFF;
        if (temp_s4->unk0 & 1)
        {
          temp_v1_14 = arg0->unk14C;
          if (temp_v1_14 > 0)
          {
            var_a3_3 = (s32) ((((f32) (temp_v1_14 - var_s3)) * 255.0f) / ((f32) temp_v1_14));
          }
        }
        temp_v1_15 = temp_s4->unk38->unk9;
        if ((temp_v1_15 != -1) && (var_s3 < temp_s4->unk38->unk9))
        {
          var_a3_3 = (s32) ((((f32) var_a3_3) * (((f32) var_s3) + 1.0f)) / (((f32) temp_v1_15) + 1.0f));
        }
        temp_v0_10 = temp_s4->unk38;
        temp_a1_3 = temp_v0_10->unkA;
        fadeDuration = *(volatile u8 *)&temp_v0_10->unkA; /* FAKEMATCH: order the unsigned duration read before testing the signed byte. */
        if (temp_a1_3 != (-1))
        {
          temp_f0 = (f32) temp_a1_3;
          temp_f1_7 = (f32) (arg0->unk14C - var_s3);
          if (temp_f1_7 < 0.0f)
          {
            if (temp_f0 > 0.0f)
            {
              goto block_172;
            }
          }
          else
            if (temp_f1_7 < temp_f0)
          {
            block_172:
            temp_f2 = (f32) (var_a3_3 * (arg0->unk14C - var_s3));

            fadeDenominator = ((f32) ((s8) fadeDuration)) + 1.0f;
            var_v0_10 = 0;
            if (!(temp_f2 < 0.0f))
            {
              var_v0_10 = (s32) (((f32) ((s32) temp_f2)) / fadeDenominator);
            }
            var_a3_3 = var_v0_10;
          }
        }
        temp_f2_2 = arg1->unk528;
        if ((temp_f2_2 < -0.0001f) || (temp_f2_2 > 0.0001f))
        {
          temp_v1_16 = temp_s4->unk38->unk5;
          switch (temp_v1_16)
          {
            case 2:
              temp_f2_4 = ((temp_f2_2 - var_f20) * 10.0f) / temp_f2_2;
              var_f0 = (f32) var_a3_3;
              if (!(temp_f2_4 > 1.0f))
            {
              var_f0 *= temp_f2_4;
            }
              break;

            case 0:
              do
            {
              temp_f2_3 = ((temp_f2_2 - var_f20) * 5.0f) / temp_f2_2;
            }
            while (0);
              var_f0 = (f32) var_a3_3;
              if (!(1.0f < temp_f2_3))
            {
              var_f0 *= temp_f2_3;
            }
              break;

            case 1:
              temp_f3 = temp_f2_2 * 0.5f;
              temp_f2_5 = temp_f3 - var_f20;
              var_f0 = (f32) var_a3_3;
              if (temp_f2_5 < 0.0f)
            {
              var_f0_2 = temp_f3 + temp_f2_5;
            }
            else
            {
              var_f0_2 = temp_f3 - temp_f2_5;
            }
              var_f0 = (var_f0 * var_f0_2) / temp_f3;
              break;
              if (1)
            {
            }

            default:
              goto fade_done;

          }

          var_a3_3 = (s32) var_f0;
          fade_done:
          ;

          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
        }
        if (((func_8027ED40_S20 *) scratch.sp30)->unk0 == 3)
        {
          if (modeCopy == 1)
          {
            goto env_case1;
          }
          if (modeCopy < 2)
          {
            goto env_default;
          }
          if (modeCopy == 2)
          {
            goto env_case2;
          }
          env_default:
          environmentCursor = &D_80110634;
          defaultSlot = (s32 *)(*environmentCursor)++;
          var_a1_2 = defaultSlot;
          ((func_8027ED40_S24 *) var_a1_2)->unk0 = 0xFB000000;
          var_v0_11 = scratch.sp38;
          var_a0_4 = scratch.sp39;
          goto env_pack;
          env_case2:
          environmentCursor = &D_80110634;

          temp_v1_18 = *environmentCursor;
          ((func_8027ED40_S25 *) temp_v1_18)->unk0 = 0xFB000000;
          case2Red = scratch.sp38;
          (*environmentCursor)++;
          ((func_8027ED40_S25 *)temp_v1_18)->unk4 = (s32) ((((case2Red << 0x18) | (case2Red << 0x10)) | (scratch.sp3A << 8)) + 0xFF);
          goto env_done;
          env_case1:
          environmentCursor = &D_80110634;
          case1Slot = (s32 *)(*environmentCursor)++;
          var_a1_2 = case1Slot;
          ((func_8027ED40_S24 *) var_a1_2)->unk0 = 0xFB000000;
          var_v0_11 = scratch.sp39;
          var_a0_4 = scratch.sp38;
          env_pack:
          ((func_8027ED40_S24 *) var_a1_2)->unk4 = (s32) ((((var_v0_11 << 0x18) | (var_a0_4 << 0x10)) | (scratch.sp3A << 8)) | 0xFF);

          env_done:
          ;

          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
          ;
        }
        temp_v1_17 = var_a3_3 < 0x100;
        if ((temp_v1_17 == 0) || ((alphaClamped = 0, var_a3_3 >= 0)))
        {
          alphaClamped = 0xFF;
          if ((var_a3_3 < 0x100) != 0)
          {
            alphaClamped = var_a3_3;
          }
        }
        var_a3_3 = alphaClamped;
        {
          EffectCommand **renderCursor = &D_80110634; /* FAKEMATCH: scope render command emission. */
          EffectCommand *renderCommand = (*renderCursor)++; /* FAKEMATCH: retain the original render command slot. */
          new_var6 = (unsigned short) 0;
          renderCommand->w0 = 0x01004008;
          ((func_8027ED40_S26 *) renderCommand)->unk4 = &D_8011F038;
          if (spA8 != new_var6)
          {
            temp_a0_4 = (s32 *) (*renderCursor)++;
            ((func_8027ED40_S21 *) temp_a0_4)->unk0 = 0xD7FF0002;
            ((func_8027ED40_S28 *) temp_a0_4)->unk4 = (s32) ((temp_s5 << 0x10) | (temp_s0_2 & 0xFFFF));
          }
        }
        environmentCursor = &D_80110634;
        arg0->unk198 = (f32) (((s32) (var_a3_3 * arg0->unk1D8)) >> 8);
        if (modeCopy == 1)
        {
          goto primitive_case1;
        }
        if (modeCopy < 2)
        {
          goto primitive_default;
        }
        if (modeCopy == 2)
        {
          goto primitive_case2;
        }
        primitive_default:
            var_a2_3 = *environmentCursor;
            var_a2_3->w0 = 0xFA000000;
            new_var = arg0->unk198;
            *environmentCursor = &((func_8027ED40_S9 *) var_a2_3)->unk8;
            var_v1_6 = ((scratch.sp40 << 0x18) | (scratch.sp41 << 0x10)) | (scratch.sp42 << 8);
            var_v0_13 = (u8) ((u32) new_var);
            goto primitive_done;

        primitive_case2:
          {
            s32 primitiveRed = scratch.sp40; /* FAKEMATCH: carry repeated red channel through the case-2 pack. */
            var_a2_3 = *environmentCursor;
            *environmentCursor = &((func_8027ED40_S9 *) var_a2_3)->unk8;
            var_a2_3->w0 = 0xFA000000;
            new_var2 = arg0->unk198;
            var_v1_6 = ((primitiveRed << 0x18) | (primitiveRed << 0x10)) | (scratch.sp42 << 8);
            var_v0_13 = (u8) ((u32) new_var2);
          }
            goto primitive_done;

        primitive_case1:
          {
            f32 case1Alpha; /* FAKEMATCH: load primitive alpha before advancing the command cursor. */
            var_a2_3 = *environmentCursor;
            var_a2_3->w0 = 0xFA000000;
            case1Alpha = arg0->unk198;
            *environmentCursor = &((func_8027ED40_S9 *) var_a2_3)->unk8;
            var_v1_6 = ((scratch.sp41 << 0x18) | (scratch.sp40 << 0x10)) | (scratch.sp42 << 8);
            var_v0_13 = (u8) ((u32) case1Alpha);
          }
        primitive_done:

        var_a2_3->w1 = (s32) (var_v1_6 | var_v0_13);
        temp_v1_19 = D_80110634++;
        temp_v1_19->w0 = 0x06000204;
        temp_v1_19->w1 = 0x40600;
      }
      release_resource:
      func_802536F4(0, temp_v0);
      effect_done:;

    }
  }
}
