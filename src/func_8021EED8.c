#ifdef NON_MATCHING
/* Draws the player HUD, animated score icons, and fading player names. */
/* Data names follow each cartridge while preserving the shared HUD layout. */
#if defined(VERSION_US)
#define hudData76EC D_800C252C
#define hudDataE61C D_800C92EC
#define hudDataE680 us_D_800C9350
#define hudDataE6AC D_800C937C
#define hudDataE6E8 D_800C93B8
#define hudDataF1A8 D_800C9E78
#define hudDataF1B8 D_800C9E88
#define hudDataF1D8 D_800C9EA8
#elif defined(VERSION_EU)
#define hudData76EC D_800C289C
#define hudDataE61C D_800C9FBC
#define hudDataE680 D_800CA020
#define hudDataE6AC D_800CA04C
#define hudDataE6E8 D_800CA088
#define hudDataF1A8 D_800CAB48
#define hudDataF1B8 D_800CAB58
#define hudDataF1D8 D_800CAB78
#elif defined(VERSION_EU_X)
#define hudData76EC D_800C28DC
#define hudDataE61C D_800CA98C
#define hudDataE680 D_800CA9F0
#define hudDataE6AC eu_x_D_800CAA1C
#define hudDataE6E8 eu_x_D_800CAA58
#define hudDataF1A8 D_800CB518
#define hudDataF1B8 D_800CB528
#define hudDataF1D8 D_800CB548
#elif defined(VERSION_DE)
#define hudData76EC D_800C25FC
#define hudDataE61C D_800C93D8
#define hudDataE680 D_800C943C
#define hudDataE6AC D_800C9468
#define hudDataE6E8 D_800C94A4
#define hudDataF1A8 D_800C9F64
#define hudDataF1B8 D_800C9F74
#define hudDataF1D8 D_800C9F94
#else
#define hudData76EC D_800C76EC
#define hudDataE61C D_800CE61C
#define hudDataE680 D_800CE680
#define hudDataE6AC D_800CE6AC
#define hudDataE6E8 D_800CE6E8
#define hudDataF1A8 D_800CF1A8
#define hudDataF1B8 D_800CF1B8
#define hudDataF1D8 D_800CF1D8
#endif
#define hudDataE3E0 D_800CE3E0[0]
#define hudDataE3E4 D_800CE3E0[1]
#define hudDataE47C D_800CE47C
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef int M2C_UNK;
typedef int M2C_UNK32;
typedef struct HudOwner
{
  char gap0[4];
  s16 counter4;
  s16 counter6;
  char gap8[0x84 - 8];
  char name[0x8F - 0x84];
  u8 active;
  char gap90[2];
  u8 teamIndex;
} HudOwner;
typedef struct HudView
{
  char gap0[0x24];
  s32 flags24;
  char gap28[0x29C - 0x28];
  f32 width;
  f32 height;
  f32 originX;
  f32 originY;
} HudView;
typedef struct HudMode
{
  s32 mode;
  char gap04[0x20 - 4];
  s32 hideMain;
  s32 teams;
  char gap28[0x2C - 0x28];
  union 
  {
    s32 teamScores[10];
    struct 
    {
      s32 primaryScores[5];
      s32 alternateScores[5];
    } split;
  } scores;
  s32 rule54;
  char gap58[0x78 - 0x58];
  s32 squads;
  char gap7C[0x98 - 0x7C];
  s32 rule98;
} HudMode;
typedef union HudGlobalBlock
{
  struct {
    char gap0[1];
    u8 gameMode;
    char gap2[8];
    u8 counterMode;
    char gapB[6];
    u8 visible;
  } counters;
  struct {
    char gap0[0x5A8];
    HudMode guard;
  } modes;
  struct {
    char gap0[0x5CC];
    HudMode score;
  } scores;
  struct {
    char gap0[0x664];
    s32 names;
  } flags;
} HudGlobalBlock;
extern HudGlobalBlock hudGlobals;
#define D_8014687C hudGlobals.modes.guard
extern HudMode D_801468A0;
#define D_801462D5 hudGlobals.counters.gameMode
#define D_801462DE hudGlobals.counters.counterMode
#define D_801462E5 hudGlobals.counters.visible
#define D_80146938 hudGlobals.flags.names
typedef struct HudGfxCommand
{
  s32 opcode;
  s32 payload;
} HudGfxCommand;
typedef struct EffectLayout
{
  char gap0[228];
  u16 fieldE4;
  char gapE6[1266];
  HudOwner *field5D8;
  HudView *view;
  char gap5E0[4];
  s32 healthFixed;
  char gap5E8[2];
  s16 field5EA;
  char gap5EC[12];
  s16 ammoSlot2;
  char gap5FA[52];
  s16 field62E;
  char gap630[0x878 - 0x630];
  char object878;
  char gap879[0x938 - 0x879];
  char object938;
  char gap939[0xCCC - 0x939];
  char objectCCC;
  char gapCCD[0xD40 - 0xCCD];
  char objectD40;
  char gapD41[0xE2C - 0xD41];
  char objectE2C;
  char gapE2D[0xE68 - 0xE2D];
  char objectE68;
  char gapE69[0xEA4 - 0xE69];
  char objectEA4;
  char gapEA5[0xEE0 - 0xEA5];
  char objectEE0;
  char gapEE1[0xEF0 - 0xEE1];
  f32 fieldEF0;
  f32 fieldEF4;
  char gapEF8[36];
  s32 fieldF1C;
  char gapF20[4];
  s32 fieldF24;
  char gapF28[4];
  f32 fieldF2C;
  f32 fieldF30;
  char gapF34[32];
  s32 fieldF54;
  char objectF58[240];
  s32 field1048;
  char gap104C[4];
  u32 field1050;
  char gap1054[4];
  f32 field1058;
  f32 field105C;
  char gap1060[28];
  f32 field107C;
  s32 field1080;
  s32 field1084;
  char gap1088[4];
  u32 field108C;
  char gap1090[4];
  f32 field1094;
  f32 field1098;
  char gap109C[32];
  s32 field10BC;
  s32 field10C0;
  char gap10C4[4];
  u32 field10C8;
  char gap10CC[4];
  f32 field10D0;
  f32 field10D4;
  char gap10D8[32];
  s32 field10F8;
  char gap10FC[8];
  s32 field1104;
  char gap1108[40];
  f32 field1130;
  s32 field1134;
  char gap1138[8];
  s32 field1140;
  char gap1144[40];
  f32 field116C;
  s32 field1170;
  char gap1174[8];
  s32 field117C;
  char gap1180[40];
  f32 field11A8;
  s32 field11AC;
  char gap11B0[28];
  s32 field11CC;
  s32 field11D0;
  s32 field11D4;
  f32 field11D8;
  char gap11DC[8];
  f32 field11E4;
  char gap11E8[68];
  s32 field122C;
  f32 field1230;
  char gap1234[4];
  s32 field1238;
  char gap123C[132];
  f32 field12C0;
  char gap12C4[8];
  struct EffectLayout *slotOwners[8];
  char gap12EC[8];
  s32 slotFades[8];
  s32 slotWidths[8];
  s32 field1334;
  s32 field1338;
  s32 field133C;
  char gap1340[272];
  s32 field1450;
  char gap1454[0x16E0 - 0x1454];
  struct EffectLayout *next;
} EffectLayout;
extern f32 hudData7894;
extern f32 D_800CE3E0[2];
s32 func_802ABC18(s32, s32, s16, s16, f32, f32, s32);
M2C_UNK func_802183E8(void *, void *, void *);
M2C_UNK func_80218F08(void *, void *, void *);
M2C_UNK func_80219490(void *, void *);
M2C_UNK func_8021E27C(void *, void *);
M2C_UNK func_8021EA30(void *, void *);
M2C_UNK func_8022C1D8(void *, void *);
M2C_UNK func_8022C36C(void *, void *);
M2C_UNK func_802536F4(M2C_UNK, s16 **);
int func_802831FC(void *, void *);
s16 **func_8028BE88(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_802A78F0(void *, void *);
M2C_UNK func_802A8A94(void *);
M2C_UNK func_802A921C(s32, f32, f32, f32, f32, s32, s32, s32);
M2C_UNK func_802A94E8();
M2C_UNK func_802A9F18(void *, s32, s32, s32, s32, s32, f32, f32);
M2C_UNK func_802AA224(s32);
M2C_UNK func_802AB6FC(void *, void *);
f32 func_802AB854();
M2C_UNK func_802ABB2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32);
M2C_UNK func_802ABB58(f32, f32);
s32 func_802C2410(char *, const char *, ...);
f32 func_80442460(void *, f32, f32);
extern char hudData76EC[];
extern s32 hudDataE47C;
extern char hudDataE61C;
extern char hudDataE680;
extern char hudDataE6AC;
extern char hudDataE6E8;
extern s32 D_800E28D0;
extern s32 D_800E28D4;
extern s32 D_800E28D8;
extern s32 *D_80110634;
extern char D_8011FE88;
extern char D_80121990;
extern f32 D_8013B870;
extern s32 D_801450B8;
extern s32 D_801468C4;
extern f32 hudDataF1A8[];
extern f32 hudDataF1B8[];
extern f32 hudDataF1D8[];
void func_8021EED8(EffectLayout *arg0, HudView *arg1)
{
  u8 *counterMode;
  HudMode *secondaryMode;
  HudMode *scoreMode;
  HudMode *initialScoreMode;
  /* FAKEMATCH: these copy/flag locals reproduce compiler lifetimes. */
  int new_var6;
  HudMode *guardMode;
  HudMode *earlyScoreMode;
  HudMode *tailMode;
  HudMode *tailModeAfterCall;
  /* FAKEMATCH: preserve the secondary score x-coordinate lifetime. */
  float new_var4;
  char sp20[16];
  /* FAKEMATCH: reuse the coordinate locals across disjoint HUD sections. */
  f32 hudF25;
  f32 hudF21;
  f32 iconScaleY;
  f32 firstScoreIconX;
  f32 firstScoreIconY;
  /* FAKEMATCH: split the numeric and sprite y offsets to match allocator priorities. */
  f32 regpart_firstScoreIconY;
  f32 flashIconHeight;
  f32 nameScaleX;
  f32 nameScaleY;
  M2C_UNK var_a1;
  M2C_UNK var_a1_4;
  M2C_UNK var_a2;
  f32 temp_f0;
  f32 temp_f0_2;
  f32 temp_f0_3;
  f32 temp_f0_4;
  f32 temp_f0_5;
  f32 temp_f0_6;
  f32 temp_f1;
  f32 temp_f1_2;
  f32 temp_f1_3;
  f32 temp_f1_4;
  f32 temp_f1_5;
  f32 temp_f20;
  f32 temp_f20_2;
  EffectLayout *new_var;
  f32 temp_f23;
  f32 temp_f26;
  f32 temp_f2;
  f32 temp_f2_2;
  f32 temp_f2_3;
  f32 temp_f3;
  f32 temp_f4;
  f32 var_f0;
  f32 var_f0_2;
  f32 var_f0_3;
  f32 var_f0_4;
  f32 var_f0_5;
  f32 var_f0_6;
  f32 var_f0_7;
  f32 var_f1;
  f32 var_f1_2;
  f32 var_f1_3;
  f32 var_f1_4;
  f32 var_f1_5;
  f32 var_f1_6;
  f32 var_f1_7;
  f32 var_f22;
  f32 var_f23;
  f32 var_f24;
  /* FAKEMATCH: retain the status-icon y-coordinate expression boundary. */
  float new_var7;
  f32 var_f2;
  f32 var_f2_2;
  f32 var_f2_3;
  f32 var_f2_4;
  f32 var_f3;
  s16 **temp_v0;
  s16 **temp_v0_6;
  s16 **temp_v0_9;
  /* FAKEMATCH: scalar temporaries avoid two unused array stack slots. */
  s16 *new_var2_0;
  s16 *new_var2_1;
  s16 *temp_v1_7;
  s32 temp_a0_5;
  s16 temp_s0_2;
  s16 temp_s0_3;
  s16 var_a2_2;
  s32 var_s0_8;
  s32 var_s1_3;
  s32 var_s0_9;
  s32 var_s1_6;
  s32 **gfxCursor;
  s32 *temp_a0;
  s32 *temp_a0_2;
  s32 temp_a0_3;
  s32 temp_a0_4;
  s32 temp_a1;
  s32 temp_a1_2;
  s32 temp_f5;
  s32 temp_f5_2;
  s32 temp_f5_3;
  s32 temp_f5_4;
  s32 temp_v0_10;
  s32 temp_v0_11;
  s32 temp_v0_12;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 temp_v0_5;
  s32 temp_v0_7;
  s32 temp_v0_8;
  s32 temp_v1;
  s32 temp_v1_4;
  s32 temp_v1_8;
  s32 var_a0_2;
  s32 var_a0_3;
  s32 var_a0_5;
  s32 var_a0_6;
  s32 var_a1_2;
  s32 var_a1_3;
  s32 var_a1_5;
  s32 var_a3;
  /* FAKEMATCH: share disjoint health/status integer lifetimes to match s0 allocation. */
  s32 hudCounter;
  s32 var_s0;
  /* FAKEMATCH: keep the zero numeric-draw argument in a local. */
  int new_var5;
  s32 var_s0_11;
  s32 var_s0_12;
  s32 var_s0_2;
  s32 var_s0_3;
  s32 var_s0_4;
  s32 var_s0_5;
  s32 var_s0_6;
  /* FAKEMATCH: retain the score-resource selection flag lifetime. */
  unsigned short new_var8;
  s32 var_s0_7;
  s32 var_s1_5;
  s32 var_s1;
  s32 var_s1_2;
  s32 var_s2;
  s32 var_s2_2;
  s32 var_s5;
  s32 var_s4_2;
  s32 var_s4;
  s32 var_v0;
  f32 new_var3;
  s32 var_v0_2;
  s32 var_v1;
  u8 temp_v1_2;
  u8 temp_v1_6;
  u8 var_a0_7;
  void *var_a0;
  void *var_s1_4;
  void *var_v1_2;
  void *var_v1_3;
  guardMode = &D_8014687C;
  if ((guardMode->mode != 0xB) && (guardMode->mode != 8))
  {
    func_802A8A94(&arg0->objectE2C);
    func_802A8A94(&arg0->objectE68);
    func_802A8A94(&arg0->objectEA4);
    func_802A8A94(&arg0->objectEE0);
    func_802A8A94(&arg0->fieldF1C);
    func_802A8A94(arg0->objectF58);
    func_802A8A94(&arg0->field1048);
    func_802A8A94(&arg0->field1084);
    func_802A8A94(&arg0->field10C0);
    func_8021E27C(arg0, arg1);
    if (arg1->flags24 == 0)
    {
      func_80219490(&arg0->object878, arg1);
    }
    func_802183E8(&arg0->object938, arg1, arg0);
    func_80218F08(&arg0->objectCCC, arg1, arg0);
    func_802A78F0(&arg0->objectD40, arg0);
    func_802AA224(hudGlobals.counters.counterMode);
    temp_f23 = arg1->width / ((f32) D_800E28D0);
    temp_f26 = arg1->height / ((f32) D_800E28D4);
    var_f0 = 1.5f;
    var_f1 = 1.5f;
    if (D_800E28D8 == 0)
    {
      var_f0 = 1.0f;
      var_f1 = 1.0f;
    }
    var_f24 = temp_f23 * var_f1;
    var_f22 = temp_f26 * var_f0;
    earlyScoreMode = &D_801468A0;
    if (earlyScoreMode->hideMain == 0)
    {
      func_8021EA30(arg0, arg1);
    }
    /* FAKEMATCH: volatile access preserves the target load order. */
    hudCounter = (*(volatile s32 *)&arg0->healthFixed + 0xFF) >> 8;
    /* FAKEMATCH: volatile access preserves the target load order. */
    hudF21 = (arg0->fieldEF0 * var_f24) + *(volatile f32 *)&arg1->originX;
    /* FAKEMATCH: volatile access preserves the target load order. */
    hudF25 = ((arg0->fieldEF4 * var_f22) + *(volatile f32 *)&arg1->originY) + arg1->height;
    /* FAKEMATCH: volatile access preserves the target load order. */
    if (((volatile HudMode *)earlyScoreMode)->hideMain == 0)
    {
      func_802A921C(hudCounter, hudF21 - (var_f24 * 3.0f), hudF25 - (var_f22 * 4.0f), var_f24, var_f22, 1, 0, 0);
    }
    hudCounter = arg0->healthFixed;
    temp_v1 = arg0->field1134;
    if (hudCounter != temp_v1)
    {
      if (hudCounter < temp_v1)
      {
        arg0->field1130 = (f32) (arg0->field1130 + ((f32) ((((s32) (temp_v1 - hudCounter)) >> 8) * 5)));
        if (hudCounter == 0)
        {
          arg0->field1130 = 255.0f;
        }
        if (arg0->field1130 < 50.0f)
        {
          arg0->field1130 = 50.0f;
        }
        if (arg0->field1130 > 255.0f)
        {
          arg0->field1130 = 255.0f;
        }
        arg0->field1104 = 2;
      }
      arg0->field1134 = hudCounter;
    }
    if (arg0->field11D8 > 0.0f)
    {
      temp_f0 = arg0->field1130 - 12.0f;
      var_f2 = temp_f0;
      if (temp_f0 < 0.0f)
      {
        var_f2 = 0.0f;
      }
      arg0->field1130 = var_f2;
      if (arg0->field122C & 0x4000)
      {
        var_s4 = 0x7D;
        if (var_f2 != 0.0f)
        {
          var_s4 = (s32) (253.0f - (128.0f - (var_f2 * 0.512000024f)));
          var_s5 = (s32) (198.0f - (var_f2 * 0.791999996f));
          var_s2 = (s32) (34.0f - (var_f2 * 0.136000007f));
        }
        else
        {
          var_s5 = 0xC6;
          var_s2 = 0x22;
        }
      }
      else
      {
        var_s4 = 0;
        if (var_f2 != 0.0f)
        {
          var_s4 = (s32) (var_f2 * 1.01199996f);
          var_s5 = (s32) (105.0f - (var_f2 * 0.419999987f));
          var_s2 = (s32) (179.0f - (var_f2 * 0.716000021f));
        }
        else
        {
          var_s5 = 0x69;
          var_s2 = 0xB3;
        }
      }
      var_s1 = 0;
      hudF25 = arg1->originX + (arg1->width * 0.5f);
      hudF21 = arg1->originY + (arg1->height * 0.5f);
      func_802AA224(0xFAU);
      gfxCursor = &D_80110634;
      temp_a0 = *gfxCursor;
      flashIconHeight = var_f22 * 1.5f;
      *gfxCursor = temp_a0 + 2;
      ((HudGfxCommand *) temp_a0)->opcode = 0xFB000000;
      ((HudGfxCommand *) temp_a0)->payload = (s32) ((((var_s4 << 0x18) | ((var_s5 & 0xFF) << 0x10)) | ((var_s2 & 0xFF) << 8)) | 0xFA);
      do
      {
        temp_f0_5 = var_f22;
        temp_f0_2 = var_f24 * hudDataF1A8[var_s1 + 4];
        temp_f1 = temp_f0_5 * hudDataF1B8[var_s1 + 4];
        /* FAKEMATCH: retain a single-pass block for compiler instruction ordering. */
        do
        {
          temp_a1 = var_s1;
          var_s1 += 1;
          func_802ABC18(0x208, temp_a1, (s16) ((s32) (hudF25 + temp_f0_2)), (s16) ((s32) (hudF21 + temp_f1)), temp_f23, flashIconHeight, 1);
        }
        while (0);
      }
      while (var_s1 < 4);
      arg0->field1104 = 0;
    }
    if (arg0->field1104 == 2)
    {
      var_f0_2 = arg0->field1130 - 12.0f;
      if (var_f0_2 < 0.0f)
      {
        var_f0_2 = 0.0f;
      }
      arg0->field1130 = var_f0_2;
      if (var_f0_2 > 0.0f)
      {
        gfxCursor = &D_80110634;
        temp_a0_2 = *gfxCursor;
        hudF25 = arg1->originX + (arg1->width * 0.5f);
        ((HudGfxCommand *) temp_a0_2)->opcode = 0xFB000000;
        temp_f2 = arg0->field1130;
        *gfxCursor = temp_a0_2 + 2;
        hudF21 = arg1->originY + (arg1->height * 0.5f);
        if (!(temp_f2 >= 2.14748365e+09f))
        {
          var_v1 = (s32) temp_f2;
          var_s1_2 = 0;
        }
        else
        {
          var_v1 = ((s32) (temp_f2 - 2.14748365e+09f)) | 0x80000000;
        }
        flashIconHeight = var_f22 * 1.5f;
        var_s1_2 = 0;
        ((HudGfxCommand *) temp_a0_2)->payload = (s32) (0xFD000000 | (var_v1 & 0xFF));
        /* FAKEMATCH: retain a single-pass block for compiler instruction ordering. */
        do
        {
          loop_41:
          temp_f0_3 = var_f24 * hudDataF1A8[var_s1_2 + 4];

          temp_f1_2 = var_f22 * hudDataF1B8[var_s1_2 + 4];
          temp_a1_2 = var_s1_2;
          var_s1_2 += 1;
          func_802ABC18(0x208, temp_a1_2, (s16) ((s32) (hudF25 + temp_f0_3)), (s16) ((s32) (hudF21 + temp_f1_2)), temp_f23, flashIconHeight, 1);
          if (var_s1_2 >= 4)
          {
            /* FAKEMATCH: retain a single-pass block for compiler instruction ordering. */
            do
            {
            }
            while (0);
            goto flash_done;
          }
          goto loop_41;
        }
        while (0);
      }
      else
      {
        arg0->field1104 = 0;
      }
    }
    flash_done:
    var_f0_3 = 1.0f;

    var_f1_2 = 1.0f;
    if (D_800E28D8 == 0)
    {
      var_f0_3 = 0.75f;
      var_f1_2 = 0.75f;
    }
    var_f24 = temp_f23 * var_f1_2;
    var_f22 = temp_f26 * var_f0_3;
    counterMode = &D_801462E5;
    if ((*counterMode) == 0)
    {
      temp_s0_2 = arg0->field5EA;
      if (arg0->fieldF54 != temp_s0_2)
      {
        func_802AB6FC(&arg0->fieldF1C, &hudDataE61C);
        arg0->fieldF54 = (s32) temp_s0_2;
      }
      if ((arg0->fieldF1C != 0) && (arg0->fieldF24 != 0))
      {
        hudF21 = (arg0->fieldF2C * temp_f23) + arg1->originX;
        hudF25 = (arg0->fieldF30 * temp_f26) + arg1->originY;
        func_802ABC18(0x12C, 0, (s16) ((s32) (hudF21 + (temp_f23 * 18.0f))), (s16) ((s32) (hudF25 + (temp_f26 * 28.0f))), temp_f23, temp_f26, 1);
        func_802ABC18(new_var6 = 0x1F6, 0, (s16) ((s32) hudF21), (s16) ((s32) hudF25), temp_f23, temp_f26, 1);
        func_802A921C((s32) arg0->field5EA, hudF21 + (temp_f23 * 30.0f), hudF25 + (temp_f26 * 24.0f), temp_f23, temp_f26, 1, 0, 0);
      }
    }
    else
      if (((D_801462D5 == 1) || (D_801462D5 == 4)) && (arg0->field1450 == 0))
    {
      var_s0_3 = arg0->field133C - 1;
      if (var_s0_3 < 0)
      {
        var_s0_3 = 0;
      }
      hudF21 = (arg0->fieldF2C * var_f24) + arg1->originX;
      hudF25 = (arg0->fieldF30 * var_f22) + arg1->originY;
      func_802AA224((s32) arg0->field107C);
      firstScoreIconY = var_f22 * 22.0f;
      func_802A921C(var_s0_3, hudF21, hudF25 + firstScoreIconY, var_f24, var_f22, 1, 0, 0);
      firstScoreIconX = var_f24 * 20.0f;
      regpart_firstScoreIconY = var_f22 * 16.0f;
      temp_f20 = var_f22 * 1.5f;
      func_802ABC18(0x1F6, 0, (s16) ((s32) (hudF21 + firstScoreIconX)), (s16) ((s32) (hudF25 + regpart_firstScoreIconY)), var_f24, temp_f20, 1);
      if (D_80146938 != 0)
      {
        func_802ABC18(0x203, 0, (s16) ((s32) (hudF21 + (var_f24 * 40.0f))), (s16) ((s32) (hudF25 + (var_f22 * 11.0f))), var_f24, temp_f20, 1);
      }
    }
    initialScoreMode = &D_801468A0;
    if ((initialScoreMode->hideMain == 0) && ((*counterMode) != 0))
    {
      if (initialScoreMode->teams != 0)
      {
        temp_v1_2 = arg0->field5D8->teamIndex;
        if (temp_v1_2 != 0xFF)
        {
          var_s0_4 = initialScoreMode->scores.teamScores[temp_v1_2];
          var_v0 = var_s0_4 < (-0x63);
        }
        else
        {
          var_s0_4 = 0;
          goto block_66;
        }
      }
      else
      {
        var_s0_4 = (s32) arg0->field5D8->counter4;
        block_66:
        var_v0 = var_s0_4 < (-0x63);

      }
      if (var_v0 != 0)
      {
        var_s0_4 = -0x63;
      }
      if (arg0->field1080 != var_s0_4)
      {
        func_802AB6FC(&arg0->field1048, &hudDataE680);
        arg0->field1080 = var_s0_4;
        arg0->field11CC = 0;
      }
      if (arg0->field1050 == 0)
      {
        arg0->field1050 = 1U;
      }
      arg0->field1048 = 1;
      arg0->field107C = 255.0f;
      new_var5 = 0;
        if ((arg0->field1048 != 0) && (arg0->field1050 != 0))
      {
        var_s1_3 = 1;
        new_var8 = D_801468C4 != 0;
        if (new_var8)
        {
          temp_v0 = func_8028BE88(&D_8011FE88, 0x204, 0, 1);
        }
        else
        {
          temp_v0 = func_8028BE88(&D_8011FE88, 0x1FA, 0, 1);
        }
        if (temp_v0 != 0)
        {
          new_var2_0 = *temp_v0;
          var_s1_3 = 1;
          if (new_var2_0 != 0)
          {
            var_s1_3 = *new_var2_0;
          }
          func_802536F4(0, temp_v0);
        }
        hudF25 = (arg0->field105C * var_f22) + arg1->originY;
        hudF21 = arg1->width + ((arg0->field1058 * var_f24) + arg1->originX);
        temp_f1_3 = var_s1_3 == 0;
        if (hudF21 > 200.0f)
        {
          /* FAKEMATCH: equivalent branches retain the original basic-block shape. */
          if (arg0)
          {
            hudF21 -= 12.0f;
          }
          else
          {
            hudF21 -= 12.0f;
          }
        }
        func_802AA224((s32) arg0->field107C);
        func_802A921C(arg0->field1080, hudF21 + (var_f24 * 48.0f), hudF25 + (var_f22 * 22.0f), var_f24, var_f22, 1, new_var5, 0);
        if (((u32) arg0->field1050) < 2U)
        {
          scoreMode = &D_801468A0;
          if (scoreMode->rule98 != 0)
          {
            func_802ABC18(0x202, 0, (s16) ((s32) hudF21), (s16) ((s32) (hudF25 + (var_f22 * 11.0f))), var_f24, var_f22 * 1.5f, 1);
          }
          var_a0_2 = 0x204;
          if (scoreMode->teams != 0)
          {
            var_f1_3 = var_f24 * 8.0f;
            var_f2_2 = var_f22 * 16.0f;
            var_f0_4 = var_f22 * 1.5f;
          }
          else
          {
            var_f1_3 = var_f24 * 8.0f;
            var_f2_2 = var_f22 * 16.0f;
            var_f0_4 = var_f22 * 1.5f;
            var_a0_2 = 0x1FA;
          }
          func_802ABC18(var_a0_2, 0, (s16) ((s32) (hudF21 + var_f1_3)), (s16) ((s32) (hudF25 + var_f2_2)), var_f24, var_f0_4, 1);
          var_s0_5 = 0;
          arg0->field1338 = 0;
          arg0->field1334 = 0;
          do
          {
            arg0->slotOwners[var_s0_5] = 0;
            arg0->slotFades[var_s0_5] = 0xFF;
            var_s0_5 += 1;
          }
          while (var_s0_5 < 8);
        }
        else
        {
          scoreMode = &D_801468A0;
          temp_v0_2 = arg0->field11CC + 1;
          arg0->field11CC = temp_v0_2;
          var_s0_6 = 0;
          if (temp_v0_2 >= (var_s1_3 * 4))
          {
            arg0->field11CC = 0;
            arg0->field1050 = 1U;
            arg0->field1338 = 0;
            arg0->field1334 = 0;
            do
            {
              arg0->slotOwners[var_s0_6] = 0;
              arg0->slotFades[var_s0_6] = 0xFF;
              var_s0_6 += 1;
            }
            while (var_s0_6 < 8);
          }
          if (scoreMode->rule98 != 0)
          {
            func_802ABC18(0x202, 0, (s16) ((s32) hudF21), (s16) ((s32) (hudF25 + (var_f22 * 11.0f))), var_f24, var_f22 * 1.5f, 1);
          }
          var_a0_3 = 0x204;
          if (scoreMode->teams != 0)
          {
            temp_v0_3 = arg0->field11CC;
            /* FAKEMATCH: retain the compiler division-check expression boundary. */
            if (var_s1_3 == 0)
            {
            }
            /* FAKEMATCH: retain the compiler division-check expression boundary. */
            if ((var_s1_3 == (-1)) && ((temp_v0_3 / var_s1_3) == 0x80000000))
            {
            }
            var_a1_2 = temp_v0_3 % var_s1_3;
            var_f1_4 = var_f24 * 8.0f;
            var_f2_3 = var_f22 * 16.0f;
            var_f0_5 = var_f22 * 1.5f;
          }
          else
          {
            temp_v0_4 = arg0->field11CC;
            /* FAKEMATCH: retain the compiler division-check expression boundary. */
            if (temp_f1_3)
            {
            }
            /* FAKEMATCH: retain the compiler division-check expression boundary. */
            if ((var_s1_3 == (-1)) && ((temp_v0_4 / var_s1_3) == 0x80000000))
            {
            }
            var_a1_2 = temp_v0_4 % var_s1_3;
            var_f1_4 = var_f24 * 8.0f;
            var_f2_3 = var_f22 * 16.0f;
            var_f0_5 = var_f22 * 1.5f;
            var_a0_3 = 0x1FA;
          }
          func_802ABC18(var_a0_3, var_a1_2, (s16) ((s32) (hudF21 + var_f1_4)), (s16) ((s32) (hudF25 + var_f2_3)), var_f24, var_f0_5, 1);
          func_802A94E8();
          func_802ABB58(1.0f, 1.0f);
          if (D_80146938 == 0)
          {
            var_s0_7 = arg0->field1338;
            if (var_s0_7 >= arg0->field1334)
            {
              
              nameScaleX = 0.5f;
              
              nameScaleY = 16.0f;
              do
              {
                if (arg0->slotOwners[var_s0_7] != 0)
                {
                  if ((D_800E28D8 == 0) && ((var_s4_2 = 0xF, D_801450B8 == 1)))
                  {
                    var_f23 = 0.75f;
                  }
                  else
                  {
                    var_f23 = 1.0f;
                    var_s4_2 = 0;
                  }
                  var_f24 *= var_f23;
                  /* FAKEMATCH: retain a single-pass block for compiler instruction ordering. */
                  do
                  {
                  }
                  while (0);
                  func_802C2410(sp20, hudData76EC, arg0->slotOwners[var_s0_7]->field5D8->name);
                  func_802ABB2C(0, 0, 0, 1, 1, 1);
                  temp_f20_2 = ((D_8013B870 * nameScaleX) * var_f24) * func_802AB854();
                  var_f22 *= var_f23;
                  temp_f5 = (s32) func_80442460(sp20, temp_f20_2, func_802AB854());
                  arg0->slotWidths[var_s0_7] = temp_f5;
                  var_a1_3 = arg0->field1338;
                  var_s2_2 = temp_f5;
                  if (var_s0_7 < var_a1_3)
                  {
                    
                    do
                    {
                      var_s2_2 = (var_s2_2 + 8) + arg0->slotWidths[var_a1_3];
                      var_a1_3 -= 1;
                      
                    }
                    while (var_s0_7 < var_a1_3);
                  }
                  temp_f5_2 = (s32) ((hudF21 - 12.0f) + ((f32) var_s4_2));
                  temp_f5_3 = (s32) (hudF25 + 4.0f);
                  func_802A9F18(sp20, (temp_f5_2 - var_s2_2) + 2, (s32) (((f32) (temp_f5_3 + 2)) + (var_f22 * nameScaleY)), arg0->slotFades[var_s0_7], 0, 0, var_f24 * nameScaleX, var_f22);
                  if (arg0->slotOwners[var_s0_7] == arg0)
                  {
                    var_a1_4 = 0;
                    var_a2 = 0;
                  }
                  else
                  {
                    var_a1_4 = 0xFF;
                    var_a2 = 0xFF;
                  }
                  func_802ABB2C(0xFF, var_a1_4, var_a2, 1, 1, 1);
                  func_802A9F18(sp20, temp_f5_2 - var_s2_2, (s32) (((f32) temp_f5_3) + (var_f22 * nameScaleY)), arg0->slotFades[var_s0_7], 0, 0, var_f24 * nameScaleX, var_f22);
                  temp_v0_5 = arg0->slotFades[var_s0_7] - 6;
                  arg0->slotFades[var_s0_7] = temp_v0_5;
                  if (temp_v0_5 < 0)
                  {
                    arg0->slotFades[var_s0_7] = 0;
                    temp_a0_3 = arg0->field1334;
                    temp_v1_4 = temp_a0_3 + 1;
                    var_v0_2 = temp_v1_4;
                    if (temp_v1_4 < 0)
                    {
                      var_v0_2 = temp_a0_3 + 8;
                    }
                    arg0->field1334 = (s32) (temp_v1_4 - ((var_v0_2 >> 3) * 8));
                  }
                  var_f24 = var_f24 / var_f23;
                  var_f22 = var_f22 / var_f23;
                }
                var_s0_7 -= 1;
                
              }
              while (var_s0_7 >= arg0->field1334);
            }
          }
        }
      }
      secondaryMode = &D_801468A0;
      if (secondaryMode->rule54 != 0)
      {
        temp_s0_3 = arg0->field5D8->counter6;
        if (arg0->field10BC != temp_s0_3)
        {
          func_802AB6FC(&arg0->field1084, &hudDataE6AC);
          if (arg0->field10BC == (-1))
          {
            arg0->field108C = 1U;
          }
          arg0->field10BC = (s32) temp_s0_3;
        }
        if (arg0->field108C == 0)
        {
          arg0->field108C = 1U;
        }
        arg0->field1084 = 1;
        if (arg0->field108C != 0)
        {
          var_s0_8 = 1;
          temp_v0_6 = func_8028BE88(&D_8011FE88, 0x1FD, 0, 1);
          if (temp_v0_6 != 0)
          {
            new_var2_1 = *temp_v0_6;
            /* FAKEMATCH: retain a single-pass block for compiler instruction ordering. */
            do
            {
              if (new_var2_1 != 0)
              {
                var_s0_8 = *new_var2_1;
              }
            }
            while (0);
            func_802536F4(0, temp_v0_6);
          }
          new_var4 = ((arg0->field1094 * var_f24) + arg1->originX) + arg1->width;
          hudF25 = (arg0->field1098 * var_f22) + arg1->originY;
          hudF21 = new_var4;
          if (hudF21 > 200.0f)
          {
            hudF21 -= 12.0f;
          }
          func_802AA224((s32) arg0->field107C);
          func_802A921C((s32) arg0->field5D8->counter6, hudF21 + (var_f24 * 48.0f), hudF25 + (var_f22 * 20.0f), var_f24, var_f22, 1, 0, 0);
          var_a0_5 = 0x1FD;
          if (((u32) arg0->field108C) < 2U)
          {
            var_a1_5 = 0;
            func_802ABC18(var_a0_5, var_a1_5, (s16) ((s32) (hudF21 + (var_f24 * 8.0f))), (s16) ((s32) (hudF25 + (var_f22 * 16.0f))), var_f24, var_f22, 1);
          }
          else
          {
            temp_v0_7 = arg0->field11D4 + 1;
            arg0->field11D4 = temp_v0_7;
            if (temp_v0_7 >= (var_s0_8 * 4))
            {
              arg0->field11D4 = 0;
              arg0->field108C = 1U;
            }
            temp_v0_8 = arg0->field11D4;
            /* FAKEMATCH: retain the compiler division-check expression boundary. */
            if (var_s0_8 == 0)
            {
            }
            /* FAKEMATCH: retain the compiler division-check expression boundary. */
            if ((var_s0_8 == (-1)) && ((temp_v0_8 / var_s0_8) == 0x80000000))
            {
            }
            var_a1_5 = temp_v0_8 % var_s0_8;
            var_a0_5 = 0x1FD;
            func_802ABC18(var_a0_5, var_a1_5, (s16) ((s32) (hudF21 + (var_f24 * 8.0f))), (s16) ((s32) (hudF25 + (var_f22 * 16.0f))), var_f24, var_f22, 1);
          }
        }
      }
      else
        if (secondaryMode->squads != 0)
      {
        temp_v1_6 = arg0->field5D8->teamIndex;
        if (temp_v1_6 != 0xFF)
        {
          var_s0_9 = secondaryMode->scores.split.alternateScores[temp_v1_6];
        }
        else
        {
          var_s0_9 = 0;
        }
        if (arg0->field10F8 != var_s0_9)
        {
          func_802AB6FC(&arg0->field10C0, &hudDataE6E8);
          if (arg0->field10F8 == (-1))
          {
            arg0->field10C8 = 1U;
          }
          arg0->field10F8 = var_s0_9;
        }
        if (arg0->field10C8 == 0)
        {
          arg0->field10C8 = 1U;
        }
        arg0->field10C0 = 1;
        if (arg0->field10C8 != 0)
        {
          var_s1_5 = 1;
          temp_v0_9 = func_8028BE88(&D_8011FE88, 0x201, 0, 1);
          if (temp_v0_9 != 0)
          {
            temp_v1_7 = *temp_v0_9;
            if (temp_v1_7 != 0)
            {
              var_s1_5 = *temp_v1_7;
            }
            func_802536F4(0, temp_v0_9);
          }
          hudF25 = (arg0->field10D4 * var_f22) + arg1->originY;
          hudF21 = ((arg0->field10D0 * var_f24) + arg1->originX) + arg1->width;
          if (hudF21 > (temp_f3 = 200.0f))
          {
            hudF21 -= 12.0f;
          }
          func_802AA224((s32) arg0->field107C);
          func_802A921C(var_s0_9, hudF21 + (48.0f * var_f24), hudF25 + (var_f22 * 20.0f), var_f24, var_f22, 1, 0, 0);
          var_a0_5 = 0x201;
          if (((u32) arg0->field10C8) < 2U)
          {
            var_f1_5 = var_f24 * 8.0f;
            var_f2_4 = var_f22 * 16.0f;
            iconScaleY = var_f22 * 1.5f;
            var_a1_5 = 0;
          }
          else
          {
            temp_v0_10 = arg0->field11D0 + 1;
            arg0->field11D0 = temp_v0_10;
            if (temp_v0_10 >= (var_s1_5 * 4))
            {
              arg0->field11D0 = 0;
              arg0->field10C8 = 1U;
            }
            temp_v0_11 = arg0->field11D0;
            /* FAKEMATCH: retain the compiler division-check expression boundary. */
            if (var_s1_5 == 0)
            {
            }
            /* FAKEMATCH: retain the compiler division-check expression boundary. */
            if ((var_s1_5 == (-1)) && ((temp_v0_11 / var_s1_5) == 0x80000000))
            {
            }
            var_a1_5 = temp_v0_11 % var_s1_5;
            var_f1_5 = var_f24 * 8.0f;
            var_f2_4 = var_f22 * 16.0f;
            iconScaleY = var_f22 * 1.5f;
            var_a0_5 = 0x201;
          }
          var_a2_2 = (s16) ((s32) (hudF21 + var_f1_5));
          var_a3 = (s32) (hudF25 + var_f2_4);
          block_175:
          func_802ABC18(var_a0_5, var_a1_5, var_a2_2, (s16) var_a3, var_f24, iconScaleY, 1);

        }
      }
    }
    if (arg0->field122C & 0x10000)
    {
      temp_f5_4 = (s32) arg0->field1230;
      if (temp_f5_4 != arg0->field1170)
      {
        arg0->field1140 = 2;
        arg0->field1170 = temp_f5_4;
      }
      if (arg0->field1140 == 2)
      {
        temp_f0_4 = arg0->field1230 * 5.0f;
        var_f3 = temp_f0_4;
        if (temp_f0_4 > 255.0f)
        {
          var_f3 = 255.0f;
        }
        arg0->field116C = var_f3;
        if (var_f3 > 0.0f)
        {
          hudF21 = arg1->originX + (arg1->width * 0.5f);
          hudF25 = arg1->originY + (arg1->height * 0.5f);
          func_802AA224((s32) var_f3);
          var_a0_5 = (s16) ((s32) (hudF21 - (var_f24 * 31.0f)));
          func_802ABC18(0x209, 0, var_a0_5, (s16) ((s32) (hudF25 - (var_f22 * 32.0f))), var_f24, var_f22, 1);
        }
        else
        {
          arg0->field1140 = 0;
        }
      }
    }
    temp_v0_12 = arg0->field122C;
    if (((temp_v0_12 != 0) && (temp_v0_12 < 0x2000)) || (arg0->field11E4 > 0.0f))
    {
      hudCounter = (s32) arg0->field1230;
      if ((hudCounter != arg0->field11AC) || (arg0->field11E4 > 0.0f))
      {
        arg0->field117C = 2;
        arg0->field11AC = hudCounter;
      }
      temp_a0_4 = arg0->field117C;
      if (temp_a0_4 == 2)
      {
        if (arg0->field122C & 0x20)
        {
          temp_v1_8 = arg0->field1238;
          if (temp_v1_8 == temp_a0_4)
          {
            var_f1_6 = 255.0f - (arg0->field1230 * 1.70000005f);
            if (var_f1_6 < 0.0f)
            {
              var_f1_6 = 0.0f;
            }
            arg0->field11A8 = var_f1_6;
          }
          else
          {
            if (temp_v1_8 == 3)
            {
              arg0->field11A8 = 0.0f;
            }
            else
            {
              goto block_205;
            }
          }
        }
        else
        {
          temp_f1_3 = arg0->field1230;
          if (temp_f1_3 > 0.0f)
          {
            var_f0_6 = temp_f1_3 * 5.0f;
            if (var_f0_6 > 255.0f)
            {
              /* FAKEMATCH: equivalent branches retain the original status block shape. */
              if (var_f24)
              {
                goto block_205;
              }
              else
              {
                goto block_205;
              }
            }
            goto block_206;
          }
          if (arg0->field11E4 > 0.0f)
          {
            block_205:
            var_f0_6 = 255.0f;

            block_206:
            arg0->field11A8 = var_f0_6;

          }
        }
        temp_f2_2 = arg0->field11A8;
        if (temp_f2_2 > 0.0f)
        {
          hudF21 = arg1->originX + arg1->width;
          hudF25 = arg1->originY + arg1->height;
          hudCounter = 0;
          if (arg0->field11E4 > 0.0f)
          {
            hudCounter = 1;
          }
          func_802AA224((s32) temp_f2_2);
          func_802ABC18(0x20C, hudCounter, (s16) ((s32) (hudF21 - (var_f24 * 70.0f))), (s16) ((s32) (new_var7 = hudF25 - (var_f22 * 140.0f))), var_f24, var_f22, 1);
        }
        else
        {
          arg0->field1140 = 0;
        }
      }
    }
    temp_f4 = arg0->field12C0;
    if (temp_f4 < 1.0f)
    {
      temp_f3 = (1.0f - hudDataE3E4) * 0.25f;
      hudF25 = arg1->originY + arg1->height;
      hudF21 = arg1->originX;
      temp_f0_5 = hudDataE3E4 + temp_f3;
      var_s0_11 = 3;
      if (!(temp_f4 < temp_f0_5))
      {
        temp_f0_6 = temp_f0_5 + temp_f3;
        var_s0_11 = 2;
        if (!(temp_f4 < temp_f0_6))
        {
          var_s0_11 = 0;
          if (temp_f4 < (temp_f0_6 + temp_f3))
          {
            var_s0_11 = 1;
          }
        }
      }
      func_802AA224(0xFFU);
      var_f0_7 = var_f24 * 10.0f;
      var_f1_7 = 140.0f;
      var_f1_7 = var_f22 * var_f1_7;
      var_a0_6 = 0x20B;
      goto block_225;
    }
    if (temp_f4 > 1.0f)
    {
      temp_f2_3 = (hudDataE3E0 - 1.0f) * 0.25f;
      hudF25 = arg1->originY + arg1->height;
      hudF21 = arg1->originX;
      var_s0_11 = 3;
      if (!((hudDataE3E0 - temp_f2_3) < temp_f4))
      {
        temp_f1_4 = 2.0f * temp_f2_3;
        var_s0_11 = 2;
        if (!((hudDataE3E0 - temp_f1_4) < temp_f4))
        {
          var_s0_11 = 0;
          if ((hudDataE3E0 - (temp_f1_4 + temp_f2_3)) < temp_f4)
          {
            var_s0_11 = 1;
          }
        }
      }
      func_802AA224(0xFFU);
      var_f0_7 = var_f24 * 10.0f;
      var_f1_7 = var_f22 * 140.0f;
      var_a0_6 = 0x20A;
      block_225:
      func_802ABC18(var_a0_6, var_s0_11, (s16) ((s32) (hudF21 + var_f0_7)), (s16) ((s32) (hudF25 - var_f1_7)), var_f24, var_f22, 1);

    }
    if ((arg0->field62E == 0xC) && (arg0->fieldE4 != hudDataE47C))
    {
      var_s1_6 = 3 - func_802831FC(&D_80121990, arg0);
      temp_a0_5 = arg0->ammoSlot2;
      if (temp_a0_5 < var_s1_6)
      {
        var_s1_6 = temp_a0_5;
      }
      var_s0_12 = 0;
      hudF21 = arg1->originX + (arg1->width * 0.5f);
      hudF25 = arg1->originY + (arg1->height * 0.5f);
      do
      {
        var_a0_7 = 0x40;
        if (var_s1_6 > 0)
        {
          /* FAKEMATCH: equivalent branches extend the name-scale lifetime. */
          if (nameScaleX)
          {
            var_a0_7 = 0xFF;
          }
          else
          {
            var_a0_7 = 0xFF;
          }
        }
        var_s1_6 -= 1;
        func_802AA224(var_a0_7);
        temp_f1_5 = hudDataF1D8[var_s0_12] * var_f24;
        func_802ABC18(0x2F4, 0, (s16) ((s32) (hudF21 + temp_f1_5)), (s16) ((s32) (hudF25 + (var_f22 * 64.0f))), var_f24, var_f22, 1);
        var_s0_12 += 1;
      }
      while (var_s0_12 < 3);
    }
    tailMode = &D_801468A0;
    if (tailMode->hideMain == 0)
    {
      if ((arg0->field5D8->active == 1) && (tailMode->rule54 != 0))
      {
        func_8022C1D8(arg0, arg1);
      }
      tailModeAfterCall = &D_801468A0;
      if (((tailModeAfterCall->hideMain == 0) && (tailModeAfterCall->squads != 0)) && (arg0->field5D8->active != 0))
      {
        func_8022C36C(arg0, arg1);
      }
    }
  }
}

#endif
