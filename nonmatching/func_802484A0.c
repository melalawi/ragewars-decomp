/* Builds and packs animated part matrices, then updates the actor and frame totals. */
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
typedef struct Vec3f
{
  f32 x;
  f32 y;
  f32 z;
} Vec3f;
typedef struct Vec4f
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} Vec4f;
typedef struct PoseVectors
{
  Vec3f translation;
  f32 padTranslation;
  Vec3f positionA;
  f32 pad0;
  Vec3f positionB;
  f32 pad1;
  Vec4f blendedRotation;
  Vec4f rotationA;
  Vec4f rotationB;
  Vec3f scale;
  f32 pad2;
  Vec3f turn;
} PoseVectors;
typedef struct Vec4s
{
  s16 x;
  s16 y;
  s16 z;
  s16 w;
} Vec4s;
typedef struct JointRef
{
  s16 position;
  s16 rotation;
} JointRef;
typedef struct TrackSample
{
  s32 jointBase;
  s32 frameBase;
  s32 positionData;
  s32 rotationData;
  s32 rotationFrame0;
  s32 rotationFrame1;
  s32 positionFrame0;
  s32 positionFrame1;
  f32 blend;
} TrackSample;
typedef struct PoseWork
{
  f32 positionX;
  f32 positionY;
  f32 positionZ;
  s32 pad2074;
  M2C_UNK *partRef;
  s32 index;
  void *actor;
  s32 handle;
  s8 *poseBytes;
  s8 *resourceBytes;
  s32 *argument;
  s32 partCount;
  void *animationA;
  void *animationB;
} PoseWork;
typedef struct PoseRecord
{
  f32 matrix[16];
} PoseRecord;
typedef struct ResourceHeader
{
  s32 stride;
  s32 count;
} ResourceHeader;
typedef struct ResourceTable
{
  ResourceHeader header;
  u8 partData[1];
} ResourceTable;
typedef struct ResourceEntry
{
  char pad00[0x64];
  s8 poseIndex;
  u8 partFlags;
} ResourceEntry;
typedef struct ResourcePart
{
  s32 flags;
  s32 count;
  s32 matrixIndex;
  char pad0C[0x64 - 0xC];
  s32 child;
  char pad68[4];
  s8 poseIndex;
  u8 partFlags;
} ResourcePart;
typedef struct PartData
{
  char pad00[0x64];
  s32 child;
} PartData;
typedef struct PackedTransform
{
  char pad00[0xC];
  Vec4s rotation;
} PackedTransform;
typedef struct PartNode
{
  char pad00[0x12];
  s8 state;
  char pad13[1];
  s8 flags;
} PartNode;
typedef struct Surface
{
  u16 kind;
  u16 flags;
} Surface;
typedef struct PoseParams
{
  char pad00[0x3C];
  f32 last;
} PoseParams;
typedef struct Shape
{
  s32 kind;
  char pad04[0x38 - 4];
  f32 height;
} Shape;
typedef struct AnimationState
{
  s32 time;
  s16 current;
  s16 next;
  u16 frames;
  u8 blending;
  s8 mode;
  s32 length;
  void *resource;
} AnimationState;
typedef struct WorldState
{
  char pad00[0x1218];
  volatile s32 updateFlag; /* FAKEMATCH: keep the shared update store after the branch. */
  char pad121C[0x12C0 - 0x121C];
  f32 scale;
} WorldState;
typedef struct PackedMtx
{
  s32 integer[8];
  s32 fractional[8];
} PackedMtx;
typedef struct FrameTail
{
  s32 count;
  char pad04[8];
  f32 current;
} FrameTail;
typedef struct FrameTotals
{
  s32 count;
  s32 score;
  char pad08[8];
  s32 frame;
  s32 previousCount;
  s32 currentCount;
  char pad1C[4];
  f32 previous;
  f32 current;
  f32 smooth;
} FrameTotals;
typedef struct RenderActor
{
  char pad00[1];
  s8 id;
  char pad02[6];
  f32 positionX;
  f32 positionY;
  f32 positionZ;
  Surface *shape;
  Shape *model;
  char pad1C[0x70 - 0x1C];
  f32 verticalOffset;
  f32 matrix74[16];
  s32 resourceHandle;
  s32 fieldB8;
  char padBC[0xC8 - 0xBC];
  s32 resourceId;
  char padCC[0xE6 - 0xCC];
  s8 boneCount;
  char padE7[0x100 - 0xE7];
  s32 flags;
  AnimationState animationA;
  AnimationState animationB;
  char pad12C[4];
  f32 field130;
  char pad134[0x13B - 0x134];
  u8 field13B;
  char pad13C[0x140 - 0x13C];
  char partMatrices[0x30];
  char part170;
  char pad171[0x17C - 0x171];
  s32 partMask;
  char pad180[2];
  s8 field182;
  char pad183[1];
  s8 field184;
  s8 field185;
  s8 field186;
  s8 field187;
  s32 field188;
  s32 field18C;
  s32 field190;
  char pad194[0x1D8 - 0x194];
  WorldState *world;
  char pad1DC[0x290 - 0x1DC];
  M2C_UNK (*transformCallback)(f32 *, M2C_UNK **);
  char pad294[0x2E0 - 0x294];
  s32 field2E0;
} RenderActor;
int __cmpdi2(int, unsigned, int, unsigned);
int func_80245788(void);
void func_802480E0(s32, s32, f32 *);
f32 func_8024D274(void *);
void func_802536F4(void *, void *);
void func_80261690(void *, s32, s32, s32, s32 *, void *);
void func_802624C8(void *);
s32 func_802624F8(void *);
void func_8026F690(f32 *, f32 *, f32 *);
void func_80270980(f32 *, void *);
void func_80270B1C(void *, f32, void *, void *);
void func_8027200C(void *, void *, f32);
void func_8027302C(float *, float *);
void func_802734B8(char *, float, float, float);
void func_802734EC(void *, f32, f32, f32);
s32 func_80274544(void);
f32 func_802752CC(void *, f32, f32);
s32 func_80279A30(void *, s32);
void func_8028C6B0(void *, s32, void *);
char *func_8028FD94(int *, int);
void func_802A67D0(void *, volatile long, char *);
f32 __floatdisf();
s32 __udivdi3();
void func_80247F08(void *, void *, f32 *, Vec3f, Vec3f, s32);
s32 *func_802518DC();
M2C_UNK func_80261EB8();
M2C_UNK func_8026E5E0();
M2C_UNK func_80272D70(f32 *, f32, s32, s32, f32);
s32 func_802C1FF0(void);

/* Cartridge-specific names for the same pose constants and frame totals. */
#if defined(VERSION_US)
#define D_800C8A24 D_800C3864
#define D_800C8A90 D_800C38D0
#define D_800C8A94 D_800C38D4
#define D_800C8A98 D_800C38D8
#define D_800C8A9C D_800C38DC
#define D_800C8AA0 D_800C38E0
#define D_800C8AA4 D_800C38E4
#define D_800C8AA8 D_800C38E8
#define D_800C8AAC D_800C38EC
#define D_800C8AB0 D_800C38F0
#define D_800C8AB4 D_800C38F4
#define D_800C8AB8 D_800C38F8
#define D_800C8ABC D_800C38FC
#define D_800C8AC0 D_800C3900
#define D_800C8AC4 D_800C3904
#define D_800C8AC8 D_800C3908
#define D_800C8ACC D_800C390C
#define D_80104530 D_800FE530
#define D_80104534 D_800FE534
#define D_80104548 D_800FE548
#elif defined(VERSION_EU)
#define D_800C8A24 D_800C3BE4
#define D_800C8A90 D_800C3C50
#define D_800C8A94 D_800C3C54
#define D_800C8A98 D_800C3C58
#define D_800C8A9C D_800C3C5C
#define D_800C8AA0 D_800C3C60
#define D_800C8AA4 D_800C3C64
#define D_800C8AA8 D_800C3C68
#define D_800C8AAC D_800C3C6C
#define D_800C8AB0 D_800C3C70
#define D_800C8AB4 D_800C3C74
#define D_800C8AB8 D_800C3C78
#define D_800C8ABC D_800C3C7C
#define D_800C8AC0 D_800C3C80
#define D_800C8AC4 D_800C3C84
#define D_800C8AC8 D_800C3C88
#define D_800C8ACC D_800C3C8C
#define D_80104530 D_80110530
#define D_80104534 D_80110534
#define D_80104548 D_80110548
#elif defined(VERSION_EU_MUL)
#define D_800C8A24 D_800C3C24
#define D_800C8A90 D_800C3C90
#define D_800C8A94 D_800C3C94
#define D_800C8A98 D_800C3C98
#define D_800C8A9C D_800C3C9C
#define D_800C8AA0 D_800C3CA0
#define D_800C8AA4 D_800C3CA4
#define D_800C8AA8 D_800C3CA8
#define D_800C8AAC D_800C3CAC
#define D_800C8AB0 D_800C3CB0
#define D_800C8AB4 D_800C3CB4
#define D_800C8AB8 D_800C3CB8
#define D_800C8ABC D_800C3CBC
#define D_800C8AC0 D_800C3CC0
#define D_800C8AC4 D_800C3CC4
#define D_800C8AC8 D_800C3CC8
#define D_800C8ACC D_800C3CCC
#define D_80104530 D_8010A530
#define D_80104534 D_8010A534
#define D_80104548 D_8010A548
#elif defined(VERSION_DE)
#define D_800C8A24 D_800C3934
#define D_800C8A90 D_800C39A0
#define D_800C8A94 D_800C39A4
#define D_800C8A98 D_800C39A8
#define D_800C8A9C D_800C39AC
#define D_800C8AA0 D_800C39B0
#define D_800C8AA4 D_800C39B4
#define D_800C8AA8 D_800C39B8
#define D_800C8AAC D_800C39BC
#define D_800C8AB0 D_800C39C0
#define D_800C8AB4 D_800C39C4
#define D_800C8AB8 D_800C39C8
#define D_800C8ABC D_800C39CC
#define D_800C8AC0 D_800C39D0
#define D_800C8AC4 D_800C39D4
#define D_800C8AC8 D_800C39D8
#define D_800C8ACC D_800C39DC
#define D_80104530 D_80100530
#define D_80104534 D_80100534
#define D_80104548 D_80100548
#endif
typedef struct ScaleConstants {
  f32 matrixScale;
  f32 rotationA;
  f32 partScale;
  f32 rotationB;
} ScaleConstants;
extern f32 D_800C8A90;
extern f32 D_800C8A94;
extern f32 D_800C8A98;
extern f32 D_800C8A9C;
extern f32 D_800C8AA0;
extern f32 D_800C8AA4;
extern f32 D_800C8AA8;
extern f32 D_800C8AAC;
extern f32 D_800C8AB0;
extern f32 D_800C8AB4;
extern f32 D_800C8AB8;
extern f32 D_800C8ABC;
extern f32 D_800C8AC0;
extern f32 D_800C8AC4;
extern f32 D_800C8AC8;
extern f32 D_800C8ACC;
extern FrameTotals D_80104530;
extern s32 D_80104534;
extern FrameTail D_80104548;
extern M2C_UNK D_8011FE88;
extern M2C_UNK D_8011FFB0;
extern M2C_UNK D_8013BA80;
extern s32 D_801462C8;
extern unsigned char D_800C8A24[];
extern f32 D_800C8AD0;
extern f32 D_800D06C0[0x18];
extern s32 D_800D2978;
extern s32 D_800D297C;
/* FAKEMATCH: identity helper retains the seed conversion expression shape. */
inline int inline_fn(int arg0)
{
  return arg0;
}

s32 func_802484A0(RenderActor *arg0, s32 *arg1, s32 arg2)
{
  RenderActor *actorCopy = arg0; /* FAKEMATCH: preserve actor across setup calls. */
  volatile f32 initialMtx[16]; /* FAKEMATCH: preserve the initial matrix store order. */
  PoseRecord pose[128];
  PoseWork work;
  TrackSample tracks[2];
  struct 
  {
    s32 frameFlag;
    s32 blendFlag;
    s32 modeFlag;
  } poseFlags;
  f32 sp20F8[16];
  PoseVectors vectors;
  volatile s32 sp21B8; /* FAKEMATCH: preserve field-copy ordering before the transform calls. */
  volatile s32 sp21BC; /* FAKEMATCH: preserve field-copy ordering before the transform calls. */
  volatile M2C_UNK32 sp21C0; /* FAKEMATCH: preserve field-copy ordering before the transform calls. */
  f32 sp21C8[16];
  f32 sp2208[16];
  void *sp2248;
  s32 *sp224C;
  void *sp2250;
  void *sp2254;
  s32 sp2258;
  s32 sp225C;
  s32 sp2260;
  s32 sp2264;
  s32 sp2268;
  s32 sp226C;
  s32 sp2270;
  f32 *sp2274;
  PackedMtx *sp2278;
  s32 sp227C;
  s32 sp2280;
  s32 sp2284;
  M2C_UNK (*temp_v0_17)(f32 *, M2C_UNK **);
  PoseRecord *var_s5;
  ResourceEntry *partEntry;
  PackedMtx *packedOutput;
  u32 *integerWord;
  u32 *fractionalWord;
  f32 temp_f0;
  f32 temp_f0_10;
  f32 temp_f0_11;
  f32 temp_f0_12;
  f32 temp_f0_13;
  f32 temp_f0_14;
  f32 temp_f0_15;
  f32 temp_f0_16;
  f32 temp_f0_2;
  f32 temp_f0_3;
  s32 new_var2;
  f32 temp_f0_4;
  f32 temp_f0_5;
  f32 temp_f0_6;
  f32 temp_f0_7;
  f32 temp_f0_8;
  f32 temp_f0_9;
  s32 *new_var5;
  f32 temp_f10;
  f32 temp_f11;
  f32 temp_f12;
  f32 temp_f14;
  f32 temp_f15;
  f32 temp_f1;
  f32 temp_f1_10;
  f32 temp_f1_11;
  f32 temp_f1_12;
  f32 temp_f1_13;
  f32 temp_f1_14;
  f32 temp_f1_15;
  f32 temp_f1_2;
  f32 temp_f1_3;
  f32 temp_f1_4;
  f32 temp_f1_5;
  f32 temp_f1_6;
  f32 temp_f1_7;
  f32 temp_f1_8;
  f32 temp_f1_9;
  f32 temp_f20;
  f32 temp_f2;
  f32 temp_f2_2;
  f32 temp_f2_3;
  f32 temp_f4;
  f32 temp_f4_2;
  f32 temp_f4_3;
  f32 temp_f5;
  f32 temp_f5_2;
  f32 temp_f6;
  f32 temp_f9;
  f32 rotationScaleA;
  f32 scaleFactor;
  f32 packingThreshold;
  f32 *matrixTail;
  f32 *frameRead;
  f32 *frameWrite;
  s32 packedFraction; /* FAKEMATCH: isolate the fractional packing temporary from the joint index. */
  u32 signBit; /* FAKEMATCH: keep the conversion sign mask live through packing. */
  f32 *matrixCursor;
  FrameTotals *totals;
  f32 var_f0;
  f32 var_f0_2;
  f32 var_f0_3;
  int new_var7;
  f32 var_f1;
  s16 temp_a1_2;
  s16 temp_a1_3;
  f32 *new_var12;
  f32 new_var6;
  s16 temp_a1_4;
  s16 temp_a1_5;
  s16 temp_a1_6;
  s16 temp_a1_7;
  s32 *temp_v0_4;
  s32 temp_a0_5;
  int new_var11;
  int new_var;
  s32 temp_a1;
  s32 temp_a2_11;
  s32 temp_lo;
  s32 temp_ret;
  s32 temp_s1;
  s32 temp_s1_2;
  s32 temp_s3;
  s32 temp_v0_18;
  s32 temp_v0_19;
  s32 temp_v0_20;
  s32 temp_v0_21;
  s32 temp_v0_22;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v1;
  s32 var_a0_2;
  s32 var_a0_3;
  s32 var_a0_4;
  s32 var_a0_5;
  s32 var_a0_6;
  s32 var_a0_7;
  s32 var_a0_8;
  s32 var_a0_9;
  float new_var8;
  s32 var_a1;
  s32 var_a1_10;
  s32 var_a1_11;
  s32 var_a1_12;
  s32 var_a1_13;
  s32 var_a1_14;
  s32 var_a1_15;
  s32 var_a1_16;
  s32 var_a1_3;
  s32 var_a1_4;
  s32 var_a1_5;
  s32 var_a1_6;
  s32 var_a1_7;
  s32 var_a1_8;
  s32 var_a1_9;
  s32 var_a2;
  s32 var_fp;
  s32 var_s0;
  s32 startFlag;
  s32 var_s4;
  s32 var_t2;
  s32 var_t3;
  s32 var_t4;
  s32 var_t5;
  s32 new_var9;
  s32 var_v0;
  s32 var_v0_10;
  s32 var_v0_11;
  s32 var_v0_12;
  s32 var_v0_13;
  s32 var_v0_14;
  s32 var_v0_15;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v0_6;
  s32 var_v0_7;
  s32 var_v0_8;
  s32 var_v0_9;
  s8 *temp_v0;
  s8 *temp_v0_12;
  JointRef *new_var4;
  s8 *temp_v0_14;
  s8 *temp_v0_15;
  s8 *temp_v0_23;
  s8 *temp_v0_6;
  s8 *temp_v0_8;
  s8 *temp_v0_9;
  u32 temp_v1_2;
  s32 temp_s7;
  void *temp_a0;
  void *temp_a0_2;
  void *temp_a0_3;
  void *temp_a0_4;
  void *temp_a0_6;
  void *temp_s0;
  void *temp_t2;
  unsigned int new_var10;
  void *temp_t5;
  void *temp_v0_10;
  void *temp_v0_11;
  void *temp_v0_13;
  void *temp_v0_16;
  void *temp_v0_5;
  void *temp_v0_7;
  void *var_a0;
  void *var_v1;
  void *var_v1_2;
  sp2248 = (void *) 0;
  temp_v0 = func_8028FD94(arg1, 5);
  work.resourceBytes = temp_v0;
  temp_v0_2 = ((ResourceHeader *) temp_v0)->count;
  sp226C = temp_v0_2;
  temp_v0_3 = func_80279A30(&D_8011FFB0, temp_v0_2);
  actorCopy->resourceHandle = temp_v0_3;
  if (temp_v0_3 == 0)
  {
    return 0;
  }
  var_s0 = 0;
  temp_a1 = actorCopy->resourceId;
  temp_s3 = actorCopy->flags & 1;
  temp_s1 = actorCopy->model->kind == 9;
  temp_v0_4 = func_802518DC(0, temp_a1, temp_a1, ((2 * (2 * actorCopy->boneCount)) + 0xF) & (~7), 4, 0, 0, D_800C8A24, 0);
  startFlag = var_s0;
  sp224C = temp_v0_4;
  if (temp_v0_4 != ((void *) 0))
  {
    temp_t2 = &actorCopy->animationA;
    sp2250 = temp_t2;
    sp2254 = &actorCopy->animationB;
    func_80261690(temp_t2, *temp_v0_4, actorCopy->resourceId, 0, (void *) 0, (void *) 0);
    if (func_802624F8(sp2250) != 0)
    {
      if (actorCopy->flags & 0x400)
      {
        func_80261690(sp2254, *sp224C, actorCopy->resourceId, 0, (void *) 0, (void *) 0);
        poseFlags.blendFlag = func_802624F8(sp2254);
      }
      else
      {
        poseFlags.blendFlag = 0;
      }
      var_a2 = 0;
      work.actor = actorCopy;
      work.poseBytes = (s8 *) (&pose[0]);
      work.partCount = arg2;
      work.argument = arg1;
      work.animationA = sp2250;
      work.animationB = sp2254;
      work.handle = actorCopy->resourceHandle;
      if ((temp_s3 == 0) || ((var_a0 = &actorCopy->animationA, temp_s1 != 0)))
      {
        if (startFlag == 0)
        {
          var_a2 = 1;
        }
        var_a0 = &actorCopy->animationA;
      }
      poseFlags.frameFlag = var_a2;
      func_80261EB8(var_a0, &tracks[0], var_a2);
      func_80261EB8(&actorCopy->animationB, &tracks[1]);
      sp2270 = actorCopy->model->kind;
      sp227C = 0;
      vectors.scale.x = D_800C8A90;
      vectors.scale.y = D_800C8A90;
      vectors.scale.z = D_800C8A90;
      temp_v1 = actorCopy->flags;
      if (temp_v1 & 0x300000)
      {
        if (temp_v1 & 0x100000)
        {
          temp_t5 = actorCopy->world;
          sp2248 = temp_t5;
          temp_f0 = ((WorldState *) temp_t5)->scale;
          if (temp_f0 != D_800C8A90)
          {
            sp227C = 1;
            if (temp_f0 > D_800C8A90)
            {
              vectors.scale.x = temp_f0;
              vectors.scale.y = ((WorldState *) temp_t5)->scale * D_800C8A94;
            }
            else
            {
              vectors.scale.x = temp_f0;
              vectors.scale.y = ((WorldState *) sp2248)->scale;
              vectors.scale.z = ((WorldState *) sp2248)->scale;
            }
          }
          poseFlags.frameFlag = 1;
        }
        else
        {
          poseFlags.frameFlag = 0;
        }
        if (func_80245788() != 0)
        {
          poseFlags.frameFlag = 0;
        }
      }
      if (func_80245788() == 0)
      {
        if (((AnimationState *) sp2250)->mode == 0)
        {
          if (((AnimationState *) sp2254)->mode == 0)
          {
            poseFlags.modeFlag = 0;
          }
          else
          {
            goto block_29;
          }
        }
        else
        {
          block_29:
          if (sp2270 == 1)
          {
            poseFlags.modeFlag = 0;
          }
          else
          {
            goto block_31;
          }

        }
      }
      else
      {
        block_31:
        poseFlags.modeFlag = 1;

      }
      if ((!(actorCopy->flags & 0x200000)) && ((sp2270 == 1) || (sp2270 == 0xB)))
      {
        var_t4 = 0xC3;
        if (D_801462C8 & 0x100)
        {
          var_t5 = 0xC7;
          var_t2 = 0xC2;
          var_t3 = 0xC6;
        }
        else
        {
          var_t4 = -1;
          var_t5 = -1;
          var_t2 = -1;
          var_t3 = -1;
        }
        sp2258 = var_t4;
        sp225C = var_t5;
        sp2260 = var_t2;
        sp2264 = var_t3;
        sp2268 = -1;
        if (D_801462C8 & 0x20)
        {
          sp2268 = 1;
        }
        if (D_801462C8 & 0x80)
        {
          sp227C = 1;
          func_8027200C(&vectors.scale.x, &vectors.scale.x, 0.5f);
        }
      }
      else
      {
        sp2258 = -1;
        sp225C = -1;
        sp2260 = -1;
        sp2264 = -1;
        sp2268 = -1;
      }
      var_s5 = &pose[0];
      new_var10 = 3000U;
      var_s4 = 0;
      initialMtx[0] = actorCopy->matrix74[0] * D_800C8A98;
      initialMtx[4] = actorCopy->matrix74[4] * D_800C8A98;
      initialMtx[8] = actorCopy->matrix74[8] * D_800C8A98;
      initialMtx[12] = actorCopy->matrix74[12] * D_800C8A98;
      initialMtx[1] = actorCopy->matrix74[1] * D_800C8A98;
      initialMtx[5] = actorCopy->matrix74[5] * D_800C8A98;
      initialMtx[9] = actorCopy->matrix74[9] * D_800C8A98;
      initialMtx[13] = actorCopy->matrix74[13] * D_800C8A98;
      initialMtx[2] = actorCopy->matrix74[2] * D_800C8A98;
      initialMtx[6] = actorCopy->matrix74[6] * D_800C8A98;
      initialMtx[10] = actorCopy->matrix74[10] * D_800C8A98;
      initialMtx[14] = actorCopy->matrix74[14] * D_800C8A98;
      initialMtx[11] = 0.0f;
      initialMtx[7] = 0.0f;
      initialMtx[3] = 0.0f;
      initialMtx[15] = D_800C8A98;
      sp2278 = (PackedMtx *) actorCopy->resourceHandle;
      var_a1 = func_802C1FF0();
      var_a0_2 = 0;
      D_80104530.count = var_a0_2;
      D_80104534 = var_a1;
      if (sp226C > 0)
      {
        rotationScaleA = D_800C8A9C;
        scaleFactor = D_800C8AA0;
        packingThreshold = D_800C8AA4;
        signBit = 0x80000000U;
        var_fp = 0;
        var_s5 = &pose[0];
        matrixTail = &pose[0].matrix[14];
        sp2280 = 0x51EB851F;
        sp2284 = 0;
        do
        {
          work.index = var_s4;
          temp_lo = var_s4 * ((ResourceHeader *) work.resourceBytes)->stride;
          partEntry = (ResourceEntry *) (&((ResourceTable *) work.resourceBytes)->partData[temp_lo]);
          work.partRef = (M2C_UNK *) partEntry;
          sp2274 = (f32 *) (&pose[partEntry->poseIndex]);
          temp_a1_2 = ((JointRef *) (var_fp + tracks[0].jointBase))->position;
          temp_s7 = partEntry->partFlags;
          if (temp_a1_2 == (-1))
          {
            temp_v0_5 = sp2284 + tracks[0].frameBase;
              vectors.positionA = *((Vec3f *) temp_v0_5);
          }
          else
          {
            temp_v0_6 = func_8028FD94(new_var9 = tracks[0].positionData, (s32) temp_a1_2);
            temp_a0 = (void *) (&((f32 *) temp_v0_6)[tracks[0].positionFrame0]);
            temp_v0_7 = (void *) (&((f32 *) temp_v0_6)[tracks[0].positionFrame1]);
            temp_f1 = ((Vec4f *) temp_a0)->x;
            vectors.positionA.x = temp_f1 + (tracks[0].blend * (((Vec4f *) temp_v0_7)->x - temp_f1));
            ;
            vectors.positionA.y = ((Vec4f *) temp_a0)->y + (tracks[0].blend * (((Vec4f *) temp_v0_7)->y - ((Vec4f *) temp_a0)->y));
            temp_f1_3 = ((Vec4f *) temp_a0)->z;
            vectors.positionA.z = temp_f1_3 + (tracks[0].blend * (((Vec4f *) temp_v0_7)->z - temp_f1_3));
          }
          if (poseFlags.modeFlag != 0)
          {
            temp_a1_3 = ((JointRef *) (var_fp + tracks[0].jointBase))->rotation;
            if (temp_a1_3 == (-1))
            {
              var_v1 = tracks[0].frameBase + sp2284;
              goto block_54;
            }
            temp_v0_8 = func_8028FD94(tracks[0].rotationData, (s32) temp_a1_3);
            func_80270B1C(&vectors.rotationA.x, tracks[0].blend, &((f32 *) temp_v0_8)[tracks[0].rotationFrame0], &((f32 *) temp_v0_8)[tracks[0].rotationFrame1]);
          }
          else
          {
            temp_a1_4 = ((JointRef *) (var_fp + tracks[0].jointBase))->rotation;
            if (temp_a1_4 == (-1))
            {
              var_v1 = tracks[0].frameBase + sp2284;
              block_54:
              vectors.rotationA.x = ((f32) ((PackedTransform *) var_v1)->rotation.x) * rotationScaleA;

              vectors.rotationA.y = ((f32) ((PackedTransform *) var_v1)->rotation.y) * rotationScaleA;
              vectors.rotationA.z = ((f32) ((PackedTransform *) var_v1)->rotation.z) * rotationScaleA;
              vectors.rotationA.w = ((f32) ((PackedTransform *) var_v1)->rotation.w) * rotationScaleA;
            }
            else
            {
              temp_v0_9 = func_8028FD94(tracks[0].rotationData, (s32) temp_a1_4);
              temp_a0_2 = (void *) (&((f32 *) temp_v0_9)[tracks[0].rotationFrame0]);
              temp_v0_10 = (void *) (&((f32 *) temp_v0_9)[tracks[0].rotationFrame1]);
              temp_f1_4 = ((Vec4f *) temp_a0_2)->x;
              vectors.rotationA.x = temp_f1_4 + (tracks[0].blend * (((Vec4f *) temp_v0_10)->x - temp_f1_4));
              temp_f1_5 = ((Vec4f *) temp_a0_2)->y;
              vectors.rotationA.y = temp_f1_5 + (tracks[0].blend * (((Vec4f *) temp_v0_10)->y - temp_f1_5));
              temp_f1_6 = ((Vec4f *) temp_a0_2)->z;
              vectors.rotationA.z = temp_f1_6 + (tracks[0].blend * (((Vec4f *) temp_v0_10)->z - temp_f1_6));
              temp_f1_7 = ((Vec4f *) temp_a0_2)->w;
              vectors.rotationA.w = temp_f1_7 + (tracks[0].blend * (((Vec4f *) temp_v0_10)->w - temp_f1_7));
            }
          }
          if (poseFlags.blendFlag != 0)
          {
            new_var4 = (JointRef *) (var_fp + tracks[1].jointBase);
            temp_a1_5 = new_var4->position;
            if (temp_a1_5 == (-1))
            {
              temp_v0_11 = sp2284 + tracks[1].frameBase;
              vectors.positionB = *((Vec3f *) temp_v0_11);
            }
            else
            {
              temp_v0_12 = func_8028FD94(tracks[1].positionData, (s32) temp_a1_5);
              temp_a0_3 = (void *) (&((f32 *) temp_v0_12)[tracks[1].positionFrame0]);
              temp_v0_13 = (void *) (&((f32 *) temp_v0_12)[tracks[1].positionFrame1]);
              ;
              vectors.positionB.x = ((Vec4f *) temp_a0_3)->x + (tracks[1].blend * (((Vec4f *) temp_v0_13)->x - ((Vec4f *) temp_a0_3)->x));
              temp_f1_9 = ((Vec4f *) temp_a0_3)->y;
              vectors.positionB.y = temp_f1_9 + (tracks[1].blend * (((Vec4f *) temp_v0_13)->y - temp_f1_9));
              temp_f1_10 = ((Vec4f *) temp_a0_3)->z;
              vectors.positionB.z = temp_f1_10 + (tracks[1].blend * (((Vec4f *) temp_v0_13)->z - temp_f1_10));
            }
            if (poseFlags.modeFlag != 0)
            {
              temp_a1_6 = new_var4->rotation;
              if (temp_a1_6 == (-1))
              {
                var_v1_2 = tracks[1].frameBase + sp2284;
                goto block_66;
              }
              temp_v0_14 = func_8028FD94(tracks[1].rotationData, (s32) temp_a1_6);
              func_80270B1C(&vectors.rotationB.x, tracks[1].blend, &((f32 *) temp_v0_14)[tracks[1].rotationFrame0], &((f32 *) temp_v0_14)[tracks[1].rotationFrame1]);
            }
            else
            {
              temp_a1_7 = ((JointRef *) (var_fp + tracks[1].jointBase))->rotation;
              if (temp_a1_7 == (-1))
              {
                var_v1_2 = tracks[1].frameBase + sp2284;
                block_66:
                vectors.rotationB.x = ((f32) ((PackedTransform *) var_v1_2)->rotation.x) * rotationScaleA;

                vectors.rotationB.y = ((f32) ((PackedTransform *) var_v1_2)->rotation.y) * rotationScaleA;
                vectors.rotationB.z = ((f32) ((PackedTransform *) var_v1_2)->rotation.z) * rotationScaleA;
                vectors.rotationB.w = ((f32) ((PackedTransform *) var_v1_2)->rotation.w) * rotationScaleA;
              }
              else
              {
                temp_v0_15 = func_8028FD94(tracks[1].rotationData, (s32) temp_a1_7);
                temp_a0_4 = (void *) (&((f32 *) temp_v0_15)[tracks[1].rotationFrame0]);
                temp_v0_16 = (void *) (&((f32 *) temp_v0_15)[tracks[1].rotationFrame1]);
                temp_f1_11 = ((Vec4f *) temp_a0_4)->x;
                vectors.rotationB.x = temp_f1_11 + (tracks[1].blend * (((Vec4f *) temp_v0_16)->x - temp_f1_11));
                temp_f1_12 = ((Vec4f *) temp_a0_4)->y;
                vectors.rotationB.y = temp_f1_12 + (tracks[1].blend * (((Vec4f *) temp_v0_16)->y - temp_f1_12));
                temp_f1_13 = ((Vec4f *) temp_a0_4)->z;
                vectors.rotationB.z = temp_f1_13 + (tracks[1].blend * (((Vec4f *) temp_v0_16)->z - temp_f1_13));
                ;
                vectors.rotationB.w = ((Vec4f *) temp_a0_4)->w + (tracks[1].blend * (((Vec4f *) temp_v0_16)->w - ((Vec4f *) temp_a0_4)->w));
              }
            }
            temp_f4 = actorCopy->field130;
            vectors.translation.x = vectors.positionB.x + (temp_f4 * (vectors.positionA.x - vectors.positionB.x));
            vectors.translation.y = vectors.positionB.y + (temp_f4 * (vectors.positionA.y - vectors.positionB.y));
            vectors.translation.z = vectors.positionB.z + (temp_f4 * (vectors.positionA.z - vectors.positionB.z));
            func_80270B1C(&vectors.blendedRotation.x, actorCopy->field130, &vectors.rotationB.x, &vectors.rotationA.x);
          }
          else
          {
            vectors.translation = vectors.positionA;
            vectors.blendedRotation = vectors.rotationA;
          }
          if (poseFlags.frameFlag != 0)
          {
            poseFlags.frameFlag = 0;
            vectors.translation.x = (vectors.translation.y = 0.0f);
          }
          temp_f6 = vectors.blendedRotation.x * vectors.blendedRotation.x;
          temp_f10 = vectors.blendedRotation.y * vectors.blendedRotation.y;
          temp_f11 = vectors.blendedRotation.z * vectors.blendedRotation.z;
          temp_f4_2 = vectors.blendedRotation.w * vectors.blendedRotation.w;
          temp_f5 = 2.0f * vectors.blendedRotation.x;
          temp_f9 = temp_f5 * vectors.blendedRotation.y;
          temp_f0_2 = 2.0f * vectors.blendedRotation.w;
          temp_f14 = temp_f0_2 * vectors.blendedRotation.z;
          temp_f5_2 = temp_f5 * vectors.blendedRotation.z;
          temp_f15 = temp_f0_2 * vectors.blendedRotation.y;
          temp_f0_3 = temp_f0_2 * vectors.blendedRotation.x;
          temp_f2 = (2.0f * vectors.blendedRotation.y) * vectors.blendedRotation.z;
          temp_f4_3 = temp_f4_2 - temp_f6;
          temp_f12 = temp_f9 + temp_f14;
          matrixCursor = sp20F8;
          sp20F8[3] = 0;
          sp20F8[7] = 0;
          sp20F8[11] = 0;
          sp20F8[14] = vectors.translation.z;
          sp20F8[12] = vectors.translation.x;
          sp20F8[13] = vectors.translation.y;
          sp20F8[1] = temp_f12;
          matrixCursor[2] = temp_f5_2 - temp_f15;
          sp20F8[9] = temp_f2 - temp_f0_3;
          sp20F8[6] = temp_f2 + temp_f0_3;
          new_var11 = -1;
          sp20F8[5] = (temp_f4_3 + temp_f10) - temp_f11;
          sp20F8[10] = (temp_f4_3 - temp_f10) + temp_f11;
          new_var8 = ((temp_f4_2 + temp_f6) - temp_f10) - temp_f11;
          ((PoseParams *) matrixCursor)->last = D_800C8AA8;
          temp_v0_17 = actorCopy->transformCallback;
          sp20F8[4] = temp_f9 - temp_f14;
          sp20F8[8] = temp_f5_2 + temp_f15;
          sp20F8[0] = new_var8;
          if (temp_v0_17 != ((void *) 0))
          {
            temp_v0_17(matrixCursor, &work.partRef);
          }
          func_8026F690((f32 *) var_s5, matrixCursor, sp2274);
          if (actorCopy->field182 != 0)
          {
            var_a0_3 = 4 * (actorCopy->field184 == var_s4);
            if (actorCopy->field185 == var_s4)
            {
              var_a0_3 = 3;
            }
            if (actorCopy->field186 == var_s4)
            {
              var_a0_3 = 2;
            }
            if (actorCopy->field187 == var_s4)
            {
              var_a0_3 = 1;
            }
            if ((var_a0_3 != 0) && (actorCopy->transformCallback != ((void *) 0)))
            {
              temp_s0 = &actorCopy->part170;
              if (var_s4 != 0)
              {
                vectors.turn.x = matrixTail[-2];
                vectors.turn.y = matrixTail[-1];
                do
                {
                  vectors.turn.z = matrixTail[0];
                  sp21B8 = actorCopy->field188;
                  sp21BC = actorCopy->field18C;
                  sp21C0 = actorCopy->field190;
                  var_f0 = D_800C8AB4;
                  if (var_a0_3 != 5)
                  {
                    var_f0 = (f32) var_a0_3;
                  }
                  temp_f20 = ((D_800D06C0[0x19 - ((PartNode *) temp_s0)->state] * D_800C8AAC) * D_800C8AB0) * var_f0;
                  func_8027302C(sp2208, (f32 *) var_s5);
                  func_8027200C(&vectors.turn.x, &vectors.turn.x, -1.0f);
                  func_802734B8((s8 *) sp2208, vectors.turn.x, vectors.turn.y, vectors.turn.z);
                  func_80272D70(sp21C8, temp_f20, sp21B8, sp21BC, *(f32 *)&sp21C0);
                }
                while (0);
                func_8026F690((f32 *) var_s5, sp2208, sp21C8);
                func_8027200C(&vectors.turn.x, &vectors.turn.x, -1.0f);
                func_802734B8((char *) var_s5, vectors.turn.x, vectors.turn.y, vectors.turn.z);
                if (((PartNode *) temp_s0)->flags == var_s4)
                {
                  ((PartNode *) temp_s0)->state = (s8) (((u8) ((PartNode *) temp_s0)->state) - 1);
                }
              }
            }
          }
          else
            if (((((var_s4 != 0) && (sp2248 != ((void *) 0))) && (((WorldState *) sp2248)->updateFlag != 0)) && (work.partRef != ((void *) 0))) && ((((PartData *) work.partRef)->child & 0xC30000) == 0x400000))
          {
            if ((actorCopy->flags & 0x01000000) && (actorCopy->fieldB8 != 0))
            {
              temp_v0_18 = func_80274544();
              sp21C8[12] = (f32) (temp_v0_18 % 100);
              temp_v0_19 = func_80274544();
              sp21C8[13] = (f32) (temp_v0_19 % 100);
              temp_v0_20 = func_80274544();
              sp21C8[14] = (f32) (temp_v0_20 % 100);
              *((Vec3f *) (&sp21C8[8])) = *((Vec3f *) (&sp21C8[12]));
              func_80270980(&vectors.turn.x, actorCopy->fieldB8 + (var_s4 << 6));
              func_80247F08(actorCopy, &actorCopy->part170, &vectors.turn.x, *((Vec3f *) (&actorCopy->positionX)), *((Vec3f *) (&sp21C8[8])), var_s4);
            }
            ((WorldState *) sp2248)->updateFlag = 0;
          }
          if (actorCopy->flags & 0x800000)
          {
            func_802480E0((s32) actorCopy, (s32) temp_s7, (f32 *) var_s5);
          }
          if (temp_s7 == sp2258)
          {
            sp2258 = new_var11;
            func_802734EC(var_s5, scaleFactor, scaleFactor, scaleFactor);
          }
          else
            if (temp_s7 == sp225C)
          {
            sp225C = new_var11;
            func_802734EC(var_s5, scaleFactor, scaleFactor, scaleFactor);
          }
          else
            if (temp_s7 == sp2260)
          {
            sp2260 = -1;
            func_802734EC(var_s5, scaleFactor, scaleFactor, scaleFactor);
          }
          else
            if (temp_s7 == sp2264)
          {
            sp2264 = -1;
            func_802734EC(var_s5, scaleFactor, scaleFactor, scaleFactor);
          }
          else
            if (temp_s7 == sp2268)
          {
            sp2268 = -1;
            func_802734EC(var_s5, D_800C8AB8, D_800C8AB8, D_800C8AB8);
          }
          if (sp227C != 0)
          {
            func_8027302C(sp20F8, (f32 *) var_s5);
            func_802734EC(sp20F8, vectors.scale.x, vectors.scale.y, vectors.scale.z);
            packedOutput = sp2278;
            fractionalWord = &packedOutput->fractional[0];
            integerWord = &packedOutput->integer[0];
            if (!(sp20F8[0] >= packingThreshold))
            {
              var_a1_3 = (s32) sp20F8[0];
            }
            else
            {
              var_a1_3 = ((s32) (sp20F8[0] - packingThreshold)) | signBit;
            }
            if (!(sp20F8[1] >= packingThreshold))
            {
              var_a0_4 = (s32) sp20F8[1];
              var_v0 = var_a1_3 & 0xFFFF0000;
            }
            else
            {
              var_a0_4 = ((s32) (sp20F8[1] - packingThreshold)) | signBit;
              ;
            }
            *integerWord = (s32) ((var_a1_3 & 0xFFFF0000) | (((u32) var_a0_4) >> 0x10));
            integerWord++;
            *fractionalWord = (s32) ((var_a1_3 << 0x10) | (var_a0_4 & 0xFFFF));
            fractionalWord++;
            if (!(sp20F8[2] >= packingThreshold))
            {
              var_a1_4 = (s32) sp20F8[2];
              var_v0_2 = var_a1_4 & 0xFFFF0000;
            }
            else
            {
              var_a1_4 = ((s32) (sp20F8[2] - packingThreshold)) | signBit;
              var_v0_2 = var_a1_4 & 0xFFFF0000;
            }
            *integerWord = var_v0_2;
            integerWord++;
            *fractionalWord = (s32) (var_a1_4 << 0x10);
            fractionalWord++;
            if (!(sp20F8[4] >= packingThreshold))
            {
              var_a1_5 = (s32) sp20F8[4];
            }
            else
            {
              var_a1_5 = ((s32) (sp20F8[4] - packingThreshold)) | signBit;
            }
            if (!(sp20F8[5] >= packingThreshold))
            {
              var_a0_5 = (s32) sp20F8[5];
              var_v0_3 = var_a1_5 & 0xFFFF0000;
            }
            else
            {
              var_a0_5 = ((s32) (sp20F8[5] - packingThreshold)) | signBit;
              do
              {
              }
              while (0);
              var_v0_3 = var_a1_5 & 0xFFFF0000;
            }
            *integerWord = (s32) (var_v0_3 | (((u32) var_a0_5) >> 0x10));
            integerWord++;
            packedFraction = var_a1_5 << 0x10;
            *fractionalWord = (s32) (packedFraction | (var_a0_5 & 0xFFFF));
            fractionalWord++;
            if (!(sp20F8[6] >= packingThreshold))
            {
              var_a1_6 = (s32) sp20F8[6];
              var_v0_4 = var_a1_6 & 0xFFFF0000;
            }
            else
            {
              var_a1_6 = ((s32) (sp20F8[6] - packingThreshold)) | signBit;
              var_v0_4 = var_a1_6 & 0xFFFF0000;
            }
            *integerWord = var_v0_4;
            integerWord++;
            *fractionalWord = (s32) (var_a1_6 << 0x10);
            fractionalWord++;
            if (!(sp20F8[8] >= packingThreshold))
            {
              var_a1_7 = (s32) sp20F8[8];
            }
            else
            {
              var_a1_7 = ((s32) (sp20F8[8] - packingThreshold)) | signBit;
            }
            if (!(sp20F8[9] >= packingThreshold))
            {
              var_a0_6 = (s32) (new_var6 = sp20F8[9]);
              var_v0_5 = var_a1_7 & 0xFFFF0000;
            }
            else
            {
              var_a0_6 = ((s32) (sp20F8[9] - packingThreshold)) | signBit;
              var_v0_5 = var_a1_7 & 0xFFFF0000;
            }
            *integerWord = (s32) ((var_a1_7 & 0xFFFF0000) | (((u32) var_a0_6) >> 0x10));
            integerWord++;
            *fractionalWord = (s32) ((var_a1_7 << 0x10) | (var_a0_6 & 0xFFFF));
            fractionalWord++;
            if (!(sp20F8[10] >= packingThreshold))
            {
              var_a1_8 = (s32) sp20F8[10];
              var_v0_6 = var_a1_8 & 0xFFFF0000;
            }
            else
            {
              var_a1_8 = ((s32) (sp20F8[10] - packingThreshold)) | signBit;
              var_v0_6 = var_a1_8 & 0xFFFF0000;
            }
            *integerWord = var_v0_6;
            integerWord++;
            *fractionalWord = (s32) (var_a1_8 << 0x10);
            fractionalWord++;
            if (!(sp20F8[12] >= packingThreshold))
            {
              var_a1_9 = (s32) sp20F8[12];
            }
            else
            {
              var_a1_9 = ((s32) (sp20F8[12] - packingThreshold)) | signBit;
            }
            if (!(sp20F8[13] >= packingThreshold))
            {
              var_a0_2 = (s32) sp20F8[13];
              var_v0_7 = var_a1_9 & 0xFFFF0000;
            }
            else
            {
              var_a0_2 = ((s32) (sp20F8[13] - packingThreshold)) | signBit;
              ;
            }
            *integerWord = (s32) ((var_a1_9 & 0xFFFF0000) | (((u32) var_a0_2) >> 0x10));
            integerWord++;
            *fractionalWord = (s32) ((var_a1_9 << 0x10) | (var_a0_2 & 0xFFFF));
            fractionalWord++;
            ;
            var_f0_2 = sp20F8[14];
            if (sp20F8[14] >= packingThreshold)
            {
              var_f0_3 = var_f0_2 - packingThreshold;
              goto block_198;
            }
            goto block_196;
          }
          packedOutput = sp2278;
          integerWord = &packedOutput->integer[0];
          fractionalWord = &packedOutput->fractional[0];
          temp_f0_4 = matrixTail[-14];
          if (!(temp_f0_4 >= packingThreshold))
          {
            var_a1_10 = (s32) temp_f0_4;
          }
          else
          {
            var_a1_10 = signBit;
            var_a1_10 = ((s32) (temp_f0_4 - packingThreshold)) | var_a1_10;
          }
          temp_f0_5 = matrixTail[-13];
          if (!(temp_f0_5 >= packingThreshold))
          {
            var_a0_7 = (s32) temp_f0_5;
            var_v0_8 = var_a1_10 & 0xFFFF0000;
          }
          else
          {
            do
            {
              var_a0_7 = ((s32) (temp_f0_5 - packingThreshold)) | signBit;
            }
            while (0);
            var_v0_8 = var_a1_10 & 0xFFFF0000;
          }
          *integerWord = (s32) (var_v0_8 | (((u32) var_a0_7) >> 0x10));
          integerWord++;
          *fractionalWord = (s32) ((var_a1_10 << 0x10) | (var_a0_7 & 0xFFFF));
          fractionalWord++;
          temp_f0_6 = matrixTail[-12];
          if (!(temp_f0_6 >= packingThreshold))
          {
            var_a1_11 = (s32) temp_f0_6;
            var_v0_9 = var_a1_11 & 0xFFFF0000;
          }
          else
          {
            var_a1_11 = ((s32) (temp_f0_6 - packingThreshold)) | signBit;
            ;
          }
          *integerWord = var_a1_11 & 0xFFFF0000;
          integerWord++;
          *fractionalWord = (s32) (var_a1_11 << 0x10);
          fractionalWord++;
          temp_f0_7 = matrixTail[-10];
          if (!(temp_f0_7 >= packingThreshold))
          {
            var_a1_12 = (s32) temp_f0_7;
          }
          else
          {
            var_a1_12 = ((s32) (temp_f0_7 - packingThreshold)) | signBit;
          }
          temp_f0_8 = matrixTail[-9];
          if (!(temp_f0_8 >= packingThreshold))
          {
            var_a0_8 = (s32) temp_f0_8;
            var_v0_10 = var_a1_12 & 0xFFFF0000;
          }
          else
          {
            var_a0_8 = ((s32) (temp_f0_8 - packingThreshold)) | signBit;
            var_v0_10 = var_a1_12 & 0xFFFF0000;
          }
          *integerWord = (s32) (var_v0_10 | (((u32) var_a0_8) >> 0x10));
          integerWord++;
          *fractionalWord = (s32) ((var_a1_12 << 0x10) | (var_a0_8 & 0xFFFF));
          fractionalWord++;
          temp_f0_9 = matrixTail[-8];
          if (!(temp_f0_9 >= packingThreshold))
          {
            var_a1_13 = (s32) temp_f0_9;
            var_v0_11 = var_a1_13 & 0xFFFF0000;
          }
          else
          {
            var_a1_13 = ((s32) (temp_f0_9 - packingThreshold)) | signBit;
            var_v0_11 = var_a1_13 & 0xFFFF0000;
          }
          *integerWord = var_v0_11;
          integerWord++;
          *fractionalWord = (s32) (var_a1_13 << 0x10);
          fractionalWord++;
          temp_f0_10 = matrixTail[-6];
          if (!(temp_f0_10 >= packingThreshold))
          {
            var_a1_14 = (s32) temp_f0_10;
          }
          else
          {
            var_a1_14 = inline_fn(((s32) (temp_f0_10 - packingThreshold)) | signBit);
          }
          temp_f0_11 = matrixTail[-5];
          if (!(temp_f0_11 >= packingThreshold))
          {
            var_a0_9 = (s32) temp_f0_11;
              var_v0_12 = var_a1_14 & 0xFFFF0000;
          }
          else
          {
            var_a0_9 = ((s32) (temp_f0_11 - packingThreshold)) | signBit;
            var_v0_12 = var_a1_14 & 0xFFFF0000;
          }
          *integerWord = (s32) (var_v0_12 | (((u32) var_a0_9) >> 0x10));
          integerWord++;
          *fractionalWord = (s32) ((var_a1_14 << 0x10) | (var_a0_9 & 0xFFFF));
          fractionalWord++;
          temp_f0_12 = matrixTail[-4];
          if (!(temp_f0_12 >= packingThreshold))
          {
            var_a1_15 = (s32) temp_f0_12;
            var_v0_13 = var_a1_15 & 0xFFFF0000;
          }
          else
          {
            var_a1_15 = ((s32) (temp_f0_12 - packingThreshold)) | signBit;
            var_v0_13 = var_a1_15 & 0xFFFF0000;
          }
          *integerWord = var_v0_13;
          integerWord++;
          *fractionalWord = (s32) (var_a1_15 << 0x10);
          fractionalWord++;
          temp_f0_13 = matrixTail[-2];
          if (!(temp_f0_13 >= packingThreshold))
          {
            var_a1_16 = (s32) temp_f0_13;
          }
          else
          {
            var_a1_16 = ((s32) (temp_f0_13 - packingThreshold)) | signBit;
          }
          temp_f0_14 = matrixTail[-1];
          if (!(temp_f0_14 >= packingThreshold))
          {
            var_a0_2 = (s32) temp_f0_14;
            var_v0_14 = var_a1_16 & 0xFFFF0000;
          }
          else
          {
            var_a0_2 = ((s32) (temp_f0_14 - packingThreshold)) | signBit;
            ;
          }
          *integerWord = (s32) ((var_a1_16 & 0xFFFF0000) | (((u32) var_a0_2) >> 0x10));
          integerWord++;
          *fractionalWord = (s32) ((var_a1_16 << 0x10) | (var_a0_2 & 0xFFFF));
          fractionalWord++;
          var_f0_2 = matrixTail[0];
          if (!(var_f0_2 >= packingThreshold))
          {
            block_196:
            var_a1 = (s32) var_f0_2;

            var_v0_15 = var_a1 & 0xFFFF0000;
          }
          else
          {
            var_f0_3 = var_f0_2 - packingThreshold;
            block_198:
            var_a1 = ((s32) var_f0_3) | signBit;

            var_v0_15 = var_a1 & 0xFFFF0000;
          }
          *integerWord = var_v0_15 | 1;
          *fractionalWord = var_a1 << 0x10;
          matrixTail += 16;
          var_s5++;
          var_fp += 4;
          var_s4 += 1;
          sp2278++;
          sp2284 += 0x14;
        }
        while (var_s4 < sp226C);
      }
      totals = &D_80104530;
      temp_a0_5 = func_802C1FF0() - totals->score;
      if (D_800D2978 != totals->frame)
      {
        temp_f2_2 = totals->current;
        temp_v0_21 = totals->currentCount;
        temp_f0_15 = temp_f2_2 * D_800C8AC0;
        totals->frame = (s32) D_800D2978;
        totals->current = 0.0f;
        totals->currentCount = 0;
        totals->previous = temp_f2_2;
        totals->previousCount = temp_v0_21;
        totals->smooth = (f32) ((totals->smooth * D_800C8ABC) + (temp_f2_2 * D_800C8AC0));
      }
      var_f1 = (f32) ((((u64) ((u32) temp_a0_5)) * 0x40U) / new_var10);
      D_80104548.count += 1;
      frameRead = &D_80104548.current;
      frameWrite = &D_80104548.current;
      *frameWrite = (f32) (*frameRead + var_f1);
      if (poseFlags.blendFlag != 0)
      {
        func_802624C8(sp2254);
      }
      func_802624C8(sp2250);
      if (sp2270 != 4)
      {
        if (sp2270 < 5)
        {
          if (sp2270 != 1)
          {
            actorCopy->verticalOffset = 0.0f;
          }
          else
          {
            goto block_214;
          }
        }
        else
          if (sp2270 != 0xB)
        {
          actorCopy->verticalOffset = 0.0f;
        }
        else
        {
          block_214:
          temp_f0_16 = func_8024D274(actorCopy);

          temp_f1_15 = ((pose[0].matrix[13] * D_800C8AC4) - actorCopy->positionY) - (temp_f0_16 * D_800C8AC8);
          actorCopy->verticalOffset = temp_f1_15;
          if (temp_f1_15 < 0.0f)
          {
            actorCopy->verticalOffset = 0.0f;
          }
          if (actorCopy->flags & 0x20000000)
          {
            temp_a0_6 = actorCopy->shape;
            if ((temp_a0_6 != ((void *) 0)) && (((Surface *) temp_a0_6)->flags & 0x40))
            {
              temp_f2_3 = ((actorCopy->positionY + actorCopy->verticalOffset) + temp_f0_16) - func_802752CC(temp_a0_6, actorCopy->positionX, actorCopy->positionZ);
              if (temp_f2_3 > 0.0f)
              {
                pose[0].matrix[13] -= temp_f2_3 * D_800C8ACC;
                actorCopy->verticalOffset = (f32) (actorCopy->verticalOffset - temp_f2_3);
              }
            }
          }
        }
      }
      else
      {
        actorCopy->verticalOffset = (f32) actorCopy->model->height;
      }
      if ((actorCopy->field2E0 != 0) && (new_var = actorCopy->partMask & (1 << actorCopy->id)))
      {
        temp_v0_23 = func_8028FD94(arg1, 3);
        temp_s1_2 = ((ResourceHeader *) temp_v0_23)->count;
        if (temp_s1_2 != 0)
        {
          new_var5 = &((ResourcePart *) temp_v0_23)->matrixIndex;
          func_8026E5E0(new_var5, temp_s1_2, &pose[0], actorCopy, func_8028FD94(arg1, 5));
        }
      }
      if (actorCopy->field13B != 0)
      {
        func_802A67D0(&D_8013BA80, (s32) actorCopy, &pose[0]);
      }
      if (!(actorCopy->flags & 8))
      {
        *((Vec3f *) (&work.positionX)) = *((Vec3f *) (&actorCopy->positionX));
        work.positionY += actorCopy->verticalOffset;
        work.positionY += func_8024D274(actorCopy) * D_800C8AD0;
        func_8028C6B0(&D_8011FE88, (s32) (&work.positionX), &actorCopy->partMatrices[3 * (D_800D297C * 8)]);
      }
      var_s0 = 1;
      actorCopy->flags = (s32) (actorCopy->flags | 0x200);
    }
    func_802536F4((void *) 0, sp224C);
  }
  if (var_s0 == 0)
  {
    actorCopy->resourceHandle = 0;
  }
  return var_s0;
}
