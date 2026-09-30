#include "../splat/types/shared/player_types.h"
#include "../splat/types/shared/quad.h"
#include "../splat/types/shared/scratch.h"
#include "../splat/types/shared/placed.h"
#include "../splat/types/shared/stateinfo.h"
#include "../splat/types/shared/model.h"
#include "../splat/types/shared/surface.h"
#include "../splat/types/shared/pickupdef.h"
#include "../splat/types/shared/pickup.h"
#include "../splat/types/shared/world.h"
#include "../splat/types/shared/charinfo.h"
#include "../splat/types/shared/floor.h"
#include "../splat/types/shared/body.h"
#include "../splat/types/shared/profile.h"
#include "../splat/types/shared/hud.h"
#include "../splat/types/shared/shadow.h"
#include "../splat/types/shared/voice.h"
#include "../splat/types/shared/effect.h"
#include "../splat/types/shared/input.h"
#include "../splat/types/shared/slot.h"
#include "../splat/types/shared/emitter.h"
#include "../splat/types/shared/game.h"
#include "../splat/types/shared/net.h"
#include "../splat/types/shared/player.h"


typedef Shared_Quad Quad;
typedef Shared_Scratch Scratch;
typedef Shared_Placed Placed;
typedef Shared_StateInfo StateInfo;
typedef Shared_Model Model;
typedef Shared_Surface Surface;
typedef Shared_PickupDef PickupDef;
typedef Shared_Pickup Pickup;
typedef Shared_World World;
typedef Shared_CharInfo CharInfo;
typedef Shared_Floor Floor;
typedef Shared_Body Body;
typedef Shared_Profile Profile;
typedef Shared_Hud Hud;
typedef Shared_Shadow Shadow;
typedef Shared_Voice Voice;
typedef Shared_Effect Effect;
typedef Shared_Input Input;
typedef Shared_Slot Slot;
typedef Shared_Emitter Emitter;
typedef Shared_Game Game;
typedef Shared_Net Net;
typedef SharedPlayer Player;
extern f32 D_800D2988;
#if defined(VERSION_US_REV1)
extern f32 D_800C78C4;
extern f32 D_800C78C8;
#define RW_QUARTER D_800C78C4
#define RW_THIRD D_800C78C8
#elif defined(VERSION_US)
extern f32 D_800C2704;
extern f32 D_800C2708;
#define RW_QUARTER D_800C2704
#define RW_THIRD D_800C2708
#elif defined(VERSION_EU)
extern f32 D_800C2A74;
extern f32 D_800C2A78;
#define RW_QUARTER D_800C2A74
#define RW_THIRD D_800C2A78
#elif defined(VERSION_EU_MUL)
extern f32 D_800C2AB4;
extern f32 D_800C2AB8;
#define RW_QUARTER D_800C2AB4
#define RW_THIRD D_800C2AB8
#elif defined(VERSION_DE)
extern f32 D_800C27D4;
extern f32 D_800C27D8;
#define RW_QUARTER D_800C27D4
#define RW_THIRD D_800C27D8
#else
#define RW_QUARTER 0.25f
#define RW_THIRD 1.3333334f
#endif
extern World D_8011FE88;
extern char D_8013B364;
extern Game D_801462C8;
extern Net D_801468A0;
extern u8 D_801462E5;
#if defined(VERSION_US_REV1)
extern s32 D_80146290;
extern s32 D_801042EC;
#define RW_INPUT_GATE D_80146290
#define RW_MODE D_801042EC
#elif defined(VERSION_US)
extern s32 D_801401D0;
extern s32 D_800FE2EC;
#define RW_INPUT_GATE D_801401D0
#define RW_MODE D_800FE2EC
#elif defined(VERSION_EU)
extern s32 D_801521D0;
extern s32 D_801102EC;
#define RW_INPUT_GATE D_801521D0
#define RW_MODE D_801102EC
#elif defined(VERSION_EU_MUL)
extern s32 D_8014C1D0;
extern s32 D_8010A2EC;
#define RW_INPUT_GATE D_8014C1D0
#define RW_MODE D_8010A2EC
#elif defined(VERSION_DE)
extern s32 D_801421D0;
extern s32 D_801002EC;
#define RW_INPUT_GATE D_801421D0
#define RW_MODE D_801002EC
#endif
extern s32 D_80146918;
extern s32 D_801468F4;
extern s32 D_8014694C;
extern s32 D_801450B8;
extern u8 *D_801041F0;
extern Model *D_8010428C;
extern s32 D_8013B2C8;
extern f32 D_8013B184;
extern char D_801040F0;
extern Floor *D_80103FCC;
extern CharInfo *D_800D052C[];
extern s32 D_800CE430[];
extern s32 D_800CE47C;
extern StateInfo D_800CED30[];
extern StateInfo D_800CE8C8[];
extern void func_80208158(s32);
extern void func_8020AF9C(void *, void *);
extern void func_80213CF8(void *, void *);
extern void func_80216488(void *, s32, s32, s32, s32, s32);
extern void func_80217F4C(void *, void *, void *);
extern void func_80218B84(void *, void *, void *);
extern void func_80219480(void *, void *);
extern void func_80219A40(void *, void *, void *);
extern void func_8021B1E4(void *, s32, s32, s32);
extern void func_8021E5D4(void *, void *);
extern void func_80220D20(void *);
extern s32 func_802227D0(void *, void *, s32);
extern void func_802228E4(void *, void *, void *);
extern void func_80222E80(void *, void *);
extern void func_80222FBC(void *, void *, s32 *);
extern void func_80229294(void *);
extern s32 func_8022ACA8(void *, s32, s32);
extern void func_8022B5B0(void *);
extern void func_8022B8D0(void *);
extern void func_8022BD84(void *, void *, void *);
extern void func_8022C070(void *, void *);
extern void func_8022C6D4(void *, void *);
extern s32 func_8022C750(void *, void *);
extern void func_8022C87C(void *, void *, s32 *);
extern s32 func_80243A80(void *, Vec3, s32 *);
extern s32 func_8024490C(void *, Vec3, Vec3, void *, f32, f32, f32, f32);
extern s32 func_80245788(void);
extern void func_80245D20(void *, void *, void *, s32);
extern void func_80246674(void *);
extern s32 func_802469F8(void *, s32, s32);
extern void func_80246E34(void *);
extern void func_80246FF4(void *);
extern s32 func_8024B690(void *, s32, s32);
extern s32 func_8024B6E4(void *, s32, s32);
extern f32 func_8024D274(void *);
extern f32 func_8024D388(void *);
extern f32 func_8024E410(void *);
extern f32 func_8024E454(void *);
extern s32 func_8024E61C(void *);
extern Surface *func_8024E7CC(void *);
extern void func_8025470C(s32);
extern s32 func_8025DE74(s16, Vec3, s32, s32);
extern void func_8025E438(s32);
extern void func_8025E460(f32);
extern f32 func_802745D4(f32);
extern void func_802748E0(f32 *, f32, f32);
extern f32 func_802752CC(Model *, f32, f32);
extern f32 func_80275E44(Model *, f32, f32);
extern void func_80278DE8(void *, s32, void *);
extern void func_80278E74(Model *, s32, void *);
extern void func_8028A258(void *, void *, Vec3 *, Vec3 *);
extern void func_8028B250(void *, void *, s32, s32);
extern s32 func_8029EB58(s32);
extern void func_802A75D0(void *, void *);
extern void func_802ADA44(void *, void *);
extern f32 func_802BC380(f32);
extern s32 func_8044DE70(void *, s32, s32, Placed *, s32);
void func_80220EB0(Player *player)
{
  Vec3 prev;
  Input saved;
  Vec3 diff;
  Placed found;
  Scratch scratch;
  f32 depth;
  f32 swim;
  Player *actor;
  s32 linkFlags;
  s32 soundFlags;
  s32 human;
  f32 scale;
  f32 remaining;
  f32 moved;
  f32 rise;
  f32 floor;
  f32 amount;
  f32 f22;
  f32 f21;
  f32 f20;
  f32 f0;
  Model *model;
  Vec3 *pos;
  Surface *material;
  Surface *before;
  Surface *after;
  Model *oldModel;
  Model *newModel;
  Pickup *entry;
  PickupDef *def;
  s32 *stateFlags;
  s32 ground;
  s32 flag;
  s32 hit;
  s32 sound;
  s32 first;
  s32 second;
  s32 low;
  s32 i;
  s32 enable;
  s32 offset;
  s32 count;
  s32 drain;
  s32 flags;
  void (*update)(void *, void *);
  s32 cur;
  s32 held;
  f32 goal;
  f32 change;
  CharInfo *slotInfo;
  Effect *effect;
  f32 lo;
  Surface *under;
  s32 slot;
  Game *game;
  Net *net;
  World *world;
  s16 next770;
  u16 next770u;
  linkFlags = 0;
  soundFlags = 0;
  scale = D_800D2988;
  if (player->views122C.view122C_4.fxFlags & 0x2000)
  {
    D_800D2988 = scale * RW_QUARTER;
  }
  else
    if (player->views122C.view122C_4.fxFlags & 0x80)
  {
    D_800D2988 = scale * RW_THIRD;
  }
  else
    if (player->views5E8.view11E0_186.unk11E0 > 0.0f)
  {
    D_800D2988 = scale * player->views5E8.view11E0_186.unk11E0;
  }
  human = player->views1C.view5D0_43.unk5D0 == 2;
  actor = player;
  if (func_80245788() != 0)
  {
    human = 1;
  }
  game = &D_801462C8;
  if (game->local != 0)
  {
    human = 1;
  }
  func_8020AF9C(&D_8013B364, player);
  if (player->views1450.view1450_0.unk1450 != 0)
  {
    func_80208158(player->views1454.view1454_0.unk1454);
  }
  if (game->local != 0)
  {
    func_8025470C(8);
  }
  enable = 0;
  player->views1C.view1D8_32.unk1D8 = player;
  player->views1C.view4C0_47.unk4C0 = player;
  if ((player->views1C.view38_2.unk38 & 0x1000) && (game->local == 0))
  {
    enable = (game - 1)->flags == 0;
  }
  func_8025E438(enable);
  if (D_801462E5 == 0)
  {
    if ((!((RW_INPUT_GATE != 0) && (player->views5E8.view688_43.input.held & 0x20))) && (player->views5E8.view688_43.input.pressed & 0x800))
    {
      if (player->unk13D4 != 0)
      {
        player->unk13D4 = 0;
      }
      else
      {
        player->unk13D4 = 1;
      }
    }
    if ((((D_801462E5 == 0) && (!((player->views5E8.viewCB8_163.unkCB8 != 0) && (player->views5E8.view938_162.unk938 != 0)))) && (!((RW_INPUT_GATE != 0) && (player->views5E8.view688_43.input.held & 0x20)))) && (player->views5E8.view688_43.input.pressed & 0x200))
    {
      slotInfo = D_800D052C[player->views5E8.view770_113.weapon];
      next770 = slotInfo->viewsC.viewC_0.next_s;
      next770u = slotInfo->viewsC.viewC_1.next_u;
      if (next770 != (-1))
      {
        if (player->views5E8.view602_14.slots[next770].owned != 0)
        {
          player->views5E8.view770_113.weapon = next770u;
        }
      }
    }
  }
  func_80220D20(player);
  func_80229294(player);
  func_8022B5B0(player);
  func_8022B8D0(player);
  actor->views1C.view100_8.unk100 &= ~0x20000;
  if (human && (player->views5E8.view11D8_147.unk11D8 <= 0.0f))
  {
    func_80246E34(actor);
  }
  if (((u16) player->views5E8.view650_16.state) >= 2)
  {
    func_80213CF8(actor, &actor->views1C.view170_23.unk170);
  }
  net = &D_801468A0;
  if (((net->linked != 0) && (net->host == 0)) && (player->views5D8.view5D8_9.profile->remote == 1))
  {
    linkFlags |= 0x2000;
    soundFlags |= 0x400000;
  }
  if ((D_80146918 != 0) && (player->views5D8.view5D8_9.profile->remote == 1))
  {
    linkFlags |= 0x2000;
  }
  if (player->views5E8.view704_67.unk704 > 0.0f)
  {
    f32 left = player->views5E8.view704_67.unk704 - D_800D2988;
    if (left < 0.0f)
    {
      left = 0.0f;
    }
    player->views5E8.view704_67.unk704 = left;
  }
  if (player->views5E8.view670_30.unk670 > 0.0f)
  {
    f32 left = player->views5E8.view670_30.unk670 - D_800D2988;
    if (left < 0.0f)
    {
      left = 0.0f;
    }
    player->views5E8.view670_30.unk670 = left;
  }
  saved = player->views5E8.view688_43.input;
  for (remaining = D_800D2988; remaining > 0.0f;)
  {
    remaining = 0.0f;
    player->views5E8.view654_25.prevState = (u16) player->views5E8.view650_16.state;
    player->views5E8.view65C_32.unk65C = player->views5E8.view664_27.unk664;
    model = actor->views0.view14_6.model;
    func_802228E4(player, actor, func_8024E7CC(actor));
    if (D_801462E5 == 0)
    {
      pos = &player->views0.view8_3.pos;
      if (((model != 0) && (pos != 0)) && (model->flags & 0x40))
      {
        amount = (f32) ((s32) (func_802752CC(model, pos->x, pos->z) - func_80275E44(model, pos->x, pos->z)));
        if (amount < 1024.0f)
        {
          func_8025E460(1.0f - (amount * 0.0009765625f));
          goto rumbled;
        }
      }
      func_8025E460(0.0f);
      rumbled:
      ;

      ;
      ;
    }
    player->views5E8.view66C_29.unk66C = D_800D2988 * player->views5E8.view784_117.unk784;
    func_8022C070(player, actor);
    player->views5E8.view6C8_57.speed = func_802BC380((player->views5E8.view6C0_64.velX * player->views5E8.view6C0_64.velX) + (player->views5E8.view6C4_67.velZ * player->views5E8.view6C4_67.velZ));
    player->views5E8.view75C_89.unk75C += player->views5E8.view6C8_57.speed * 0.021000001579523087f;
    player->views5E8.view758_87.unk758 += player->views5E8.view6C8_57.speed * 0.00010000000474974513f;
    player->views5E8.view6E8_79.unk6E8 = actor->views0.view8_3.pos;
    player->views5E8.view658_31.stateTime += D_800D2988;
    ground = func_8024E61C(actor);
    if (((ground != 0) && (player->views5E8.view6D0_71.onGround == 0)) && (player->views5E8.view6CC_70.lastVelY < (-51.19999694824219f)))
    {
      func_80246674(actor);
    }
    player->views5E8.view6D0_71.onGround = ground;
    player->views5E8.view6CC_70.lastVelY = actor->views1C.view20_2.velY;
    if (((ground == 0) && (player->views5E8.view650_16.state != 15)) && (!(actor->views1C.view38_2.unk38 & 0x2000)))
    {
      player->views5E8.view6E4_77.airTime += D_800D2988;
    }
    else
    {
      player->views5E8.view6E4_77.airTime = 0.0f;
    }
    if ((((u16) player->views5E8.view650_16.state) >= 2) && (player->views5E4.view5E4_2.health != 0))
    {
      f32 target;
      func_80222E80(player, actor);
      func_8022C6D4(player, actor);
      if (((func_8022C750(player, actor) == 0) && (player->views5E8.view728_73.unk728 != 0.0f)) && (!(actor->views1C.view38_2.unk38 & 0x100)))
      {
        if (((f32) func_8029EB58((s32) player->views5E8.view728_73.unk728)) < 0.7853982448577881f)
        {
          actor->views1C.view6C_9.yaw += player->views5E8.view728_73.unk728;
        }
        player->views5E8.view728_73.unk728 = 0.0f;
      }
      target = 0.0f;
      if (((D_800D052C[player->views5E8.view62E_17.character]->ammo <= 0) || (player->views5E8.view7E8_105.unk7E8 == 0)) || ((D_801468F4 != 0) && (player->views5D8.view5D8_9.profile->remote != 0)))
      {
        effect = &player->views5E8.view878_158.effect;
        player->views5E8.view7E8_105.unk7E8 = 0;
        cur = effect->state;
        if ((cur != 0) && (cur != 3))
        {
          effect->state = 3;
        }
      }
      if ((player->views5E4.view5E4_2.health != 0) && (player->views5E8.view7E8_105.unk7E8 != 0))
      {
        target = 0.7f;
        player->views5E8.view7E8_105.unk7E8 = 1;
      }
      player->views5E8.view7F0_133.unk7F0 = target;
      func_80219480(&player->views5E8.view878_158.effect, player);
      func_802748E0(&player->views5E8.view7EC_132.unk7EC, target, 0.5f);
      if ((target == 0.0f) && (player->views5E8.view7EC_132.unk7EC < 0.01f))
      {
        player->views5E8.view7EC_132.unk7EC = 0.0f;
      }
    }
    if ((func_80245788() == 0) || (((u32) (((u16) player->views5E8.view650_16.state) - 22)) < 12))
    {
      update = player->views13B4.view13B4_5.states[player->views5E8.view650_16.state].update;
      if (update != 0)
      {
        update(player, actor);
      }
    }
    material = func_8024E7CC(actor);
    if (material != 0)
    {
      func_80245D20(actor, material, &player->views5E8.view6E8_79.unk6E8, 1);
      if ((material->flags & 0x4000) && (player->views5E4.view5E4_2.health > 0))
      {
        func_802227D0(player, player, 32);
        func_80216488(scratch.views0.view0_0.damage, 0, 0x3E700, 0x41CCCCCC, 128, 0);
        func_80219A40(player, &player->views1C.view170_23.unk170, scratch.views0.view0_0.damage);
      }
      if (material->flags & 0x80000)
      {
        player->views5E8.view854_147.unk854 -= D_800D2988;
        if (player->views5E8.view854_147.unk854 <= 0.0f)
        {
          if (player->views5E4.view5E4_2.health > 0)
          {
            func_80216488(scratch.views0.view0_0.damage, 0, material->sound << 8, 0x41CCCCCC, 128, 0);
            func_80219A40(player, &player->views1C.view170_23.unk170, scratch.views0.view0_0.damage);
          }
          player->views5E8.view854_147.unk854 = material->timer;
        }
        player->unk12EC = 0;
      }
    }
    held = actor->views1C.view38_2.unk38 & 0xC0000;
    flag = held != 0;
    stateFlags = player->views13B4.view13B4_5.states[player->views5E8.view650_16.state].flags;
    if (player->views5E8.view71C_89.unk71C != 0)
    {
      flag = 1;
      if (player->views5E8.view650_16.state != 4)
      {
        func_802227D0(player, actor, 4);
      }
    }
    goal = 0.0f;
    if (flag)
    {
      goal = 40.96f;
    }
    depth = player->views5E8.view718_70.crouch;
    func_802748E0(&depth, goal, 0.25f);
    do
    {
      change = depth - player->views5E8.view718_70.crouch;
      if (change < 0.0f)
      {
        if ((-change) < 0.001f)
        {
          goto still;
        }
      }
      else
        if (change < 0.001f)
      {
        still:
        change = 0.0f;

      }
      moved = player->views5E8.view718_70.crouch + change;
      change = 40.96f - moved;
      lo = -10.24f;
    }
    while (0);
    player->views5E8.view718_70.crouch = moved;
    if ((lo <= change) && (change <= 10.24f))
    {
      *stateFlags |= 0x80;
    }
    else
    {
      *stateFlags &= ~0x80;
    }
    {
      f32 target = 0.0f;
      f32 step;
      if (((u32) (((u16) player->views5E8.view650_16.state) - 9)) < 4)
      {
        target = 66.56f;
      }
      swim = player->views5E8.view720_90.swim;
      func_802748E0(&swim, target, 0.25f);
      step = swim - player->views5E8.view720_90.swim;
      if (step < 0.0f)
      {
        if ((-step) < 0.001f)
        {
          goto calm;
        }
      }
      else
        if (step < 0.001f)
      {
        calm:
        step = 0.0f;

      }
      player->views5E8.view720_90.swim += step;
    }
    rise = (((player->views18.view18_5.body->ceiling - player->views5E8.view780_116.unk780) - player->views5E8.view718_70.crouch) - player->views5E8.view720_90.swim) - player->views5E8.view6F4_83.unk6F4;
    if (rise > 0.0f)
    {
      f22 = func_8024E454(actor);
      f21 = func_8024D388(actor);
      f20 = func_8024D274(actor);
      f0 = func_8024E410(actor);
      scratch.views0.view0_1.to.x = actor->views0.view8_3.pos.x;
      scratch.views0.view0_1.to.y = actor->views0.view8_3.pos.y + rise;
      scratch.views0.view0_1.to.z = actor->views0.view8_3.pos.z;
      if (func_8024490C(actor, actor->views0.view8_3.pos, scratch.views0.view0_1.to, &D_801040F0, f22, f21, f20, f0) != 0)
      {
        floor = D_80103FCC->y - actor->views0.view8_3.pos.y;
        player->views5E8.view6E8_79.unk6E8.y -= rise - floor;
        rise = floor;
      }
    }
    player->views5E8.view6F4_83.unk6F4 += rise;
    func_8022BD84(player, actor, material);
    if (player->views5E8.view678_40.unk678 > 0.0f)
    {
      player->views5E8.view678_40.unk678 -= D_800D2988;
      if (player->views5E8.view678_40.unk678 < 0.0f)
      {
        player->views5E8.view678_40.unk678 = 0.0f;
      }
    }
    func_8021E5D4(player, actor);
    oldModel = actor->views0.view14_6.model;
    prev = actor->views0.view8_3.pos;
    before = func_8024E7CC(actor);
    if (player->views5E8.view5EA_2.unk5EA != 0)
    {
      actor->views1C.view100_8.unk100 |= 0x10000;
      if (player->views5E8.view11D8_147.unk11D8 > 0.0f)
      {
        player->views5E8.view6E8_79.unk6E8 = player->views0.view8_3.pos;
      }
      hit = func_80243A80(actor, player->views5E8.view6E8_79.unk6E8, stateFlags);
      actor->views1C.view100_8.unk100 &= ~0x10000;
    }
    else
    {
      hit = 0;
    }
    newModel = actor->views0.view14_6.model;
    after = func_8024E7CC(actor);
    if (before != after)
    {
      func_80278E74(oldModel, linkFlags | 2, actor);
      func_80278E74(newModel, linkFlags | 1, actor);
      if ((after != 0) && (after->flags & 0x80000))
      {
        player->views5E8.view854_147.unk854 = after->timer;
      }
    }
    func_8028A258(&D_8011FE88, actor, &prev, &actor->views0.view8_3.pos);
    if (hit != 0)
    {
      if ((D_801041F0 != 0) && ((*D_801041F0) == 1))
      {
        func_80278DE8(D_801041F0, soundFlags | 2, actor);
      }
      if (D_8010428C != 0)
      {
        func_80278E74(D_8010428C, linkFlags | 4, actor);
      }
      func_80222FBC(player, actor, stateFlags);
      func_8022C87C(player, actor, stateFlags);
      if ((RW_MODE == 2) && (((u32) (((u16) player->views5E8.view650_16.state) - 5)) < 2))
      {
        if (actor->views1C.view20_2.velY > 0.0f)
        {
          actor->views1C.view20_2.velY = 0.0f;
        }
        player->views5E8.view650_16.state = 6;
        player->views5E8.view6C4_67.velZ *= 0.001f;
        player->views5E8.view6C0_64.velX *= 0.001f;
      }
    }
    if ((D_801041F0 != 0) && ((*D_801041F0) == 3))
    {
      func_802ADA44(player, D_801041F0);
    }
    if ((before != 0) && (after != 0))
    {
      if (after->flags & 0x4000000)
      {
        if (after->item != player->views5E8.view5EC_5.unk5EC)
        {
          player->views5E8.view5EC_5.unk5EC = after->item;
        }
      }
      if (after->flags & 0x8000000)
      {
        player->views5E8.view5EC_5.unk5EC = after->item;
        player->views5E8.view5F0_9.unk5F0 = after->item;
        D_8013B2C8 = after->item;
      }
    }
    world = &D_8011FE88;
    for (i = 0; i < world->count; i++)
    {
      entry = world->objects[i];
      if (entry != 0)
      {
        if ((!(entry->def->flags & 4)) && ((def = entry->def) != 0))
        {
          diff.x = player->views0.view8_3.pos.x - entry->pos.x;
          diff.y = player->views0.view8_3.pos.y - entry->pos.y;
          diff.z = player->views0.view8_3.pos.z - entry->pos.z;
          if (((f32) ((s32) func_802BC380(((diff.x * diff.x) + (diff.y * diff.y)) + (diff.z * diff.z)))) < def->radius)
          {
            if (func_8044DE70(&D_8011FE88, -1, def->item, &found, 1) != 0)
            {
              world->offset.x = player->views0.view8_3.pos.x - found.pos.x;
              world->offset.y = player->views0.view8_3.pos.y - found.pos.y;
              world->offset.z = player->views0.view8_3.pos.z - found.pos.z;
            }
            else
            {
              world->offset = diff;
            }
            func_8025DE74(0x230, player->views0.view8_3.pos, 0, -1);
            func_8021B1E4(player, def->item, 0, 0);
            break;
          }
        }
      }
    }

    player->views5E8.view688_43.input.pressed = 0;
    player->views5E8.view688_43.input.unk2C = 0;
    player->views5E8.view688_43.input.unk30 = 0;
    player->views5E8.view688_43.input.unk34 = 0;
  }

  player->views5E8.view688_43.input = saved;
  {
    f32 fade = player->views5E8.view11E0_186.unk11E0;
    D_800D2988 = scale;
    if (fade != 0.0f)
    {
      f32 left = fade - (scale * 0.042857144f);
      if (left < 0.0f)
      {
        left = 0.0f;
      }
      if (player->views5E8.view678_40.unk678)
      {
        fade = left;
      }
      else
      {
        fade = left;
      }
      player->views5E8.view11E0_186.unk11E0 = fade;
    }
  }
  under = func_8024E7CC(actor);
  if ((under != 0) && (under->flags & 0x4000))
  {
    actor->views1C.view20_2.velY = 0.0f;
  }
  else
    if (actor->views0.view8_3.pos.y < (D_8013B184 - 5120.0f))
  {
    func_8021B1E4(player, player->views5E8.view5EC_5.unk5EC, 0, 0);
  }
  if (func_8024E61C(actor) != 0)
  {
    player->views5E8.view6F8_84.unk6F8 = actor->views0.view8_3.pos;
  }
  if (human)
  {
    sound = 102;
    if (D_801462E5 != 0)
    {
      if ((D_801468F4 != 0) && (player->views5D8.view5D8_9.profile->remote != 0))
      {
        sound = D_800CE47C;
      }
      else
      {
        sound = D_800CE430[player->views18.view18_5.body->kind];
        player->views0.view3_2.team = player->views5D8.view5D8_9.profile->team;
      }
    }
    func_8028B250(&D_8011FE88, player, sound, player->views5E8.view86C_125.unk86C);
    if (player->views5E8.view870_157.unk870 != player->views5E8.view86C_125.unk86C)
    {
      if ((func_8024B690(actor, player->views5E8.view86C_125.unk86C, 0) == 0) && (func_80245788() != 0))
      {
        func_8024B690(actor, 7000, 0);
      }
    }
    first = func_802469F8(actor, player->views5E8.view86C_125.unk86C, -1);
    second = func_802469F8(actor, player->views5E8.view86C_125.unk86C, first);
    low = second;
    if (second > first)
    {
      low = first;
    }
    flag = second;
    if (flag < first)
    {
      flag = first;
    }
    if (actor->views1C.view10E_20.animPending != 0)
    {
      if (actor->views1C.view108_16.anim == low)
      {
        if (func_802745D4(100.0f) < 0.4f)
        {
          func_8024B6E4(actor, flag, 0);
          actor->views1C.view10E_20.animPending = 0;
        }
      }
      else
      {
        func_8024B6E4(actor, low, 0);
        actor->views1C.view10E_20.animPending = 0;
      }
    }
  }
  if (!human)
  {
    func_80246FF4(actor);
  }
  player->views1C.view2E8_37.emitter.pos = player->views0.view8_3.pos;
  player->views1C.view2E8_37.emitter.model = player->views0.view14_6.model;
  player->views1C.view2E8_37.emitter.unk40 = player->views1C.view40_5.unk40;
  player->views1C.view2E8_37.emitter.unk6C = player->views1C.view6C_9.yaw;
  player->views1C.view2E8_37.emitter.unk5C = player->views1C.view5C_6.unk5C;
  player->views5E8.view774_115.unk774 = player->views0.view8_3.pos;
  if ((D_801462C8.flags & 8) || ((D_801462C8.split != 0) && (player->views5D8.view5D8_9.profile->counts != 0)))
  {
    player->views5E8.view5F4_13.ammo[0] = func_8022ACA8(player, 0, 0);
    player->views5E8.view5F4_13.ammo[1] = func_8022ACA8(player, 1, 0);
    player->views5E8.view5F4_13.ammo[2] = func_8022ACA8(player, 2, 0);
  }
  if (D_801462C8.flags & 4)
  {
    for (slot = 21; slot >= 0; slot--)
    {
      player->views5E8.view602_14.slots[slot].owned = 1;
    }

  }
  if (player->views5DC.view5DC_8.hud != 0)
  {
    player->views5DC.view5DC_8.hud->score = player->views16D4.view16D4_0.unk16D4;
    player->views5DC.view5DC_8.hud->bonus = player->unk16D8;
  }
  if (player->unk16D8 != 0)
  {
    count = player->unk16D8;
    drain = (count * 2) / 3;
    if (drain < 5)
    {
      drain = 5;
    }
    if (count < drain)
    {
      player->unk16D8 = 0;
    }
    else
    {
      player->unk16D8 = count - drain;
    }
  }
  func_80217F4C(&player->views5E8.view938_162.unk938, player, &player->views1C.view458_40.unk458);
  func_80218B84(&player->views5E8.viewCCC_164.unkCCC, player, &player->views1C.view458_40.unk458);
  if (player->views5E8.view62E_17.character == 0)
  {
    player->views13B4.view13B4_5.states = D_800CED30;
  }
  else
  {
    player->views13B4.view13B4_5.states = D_800CE8C8;
  }
  func_802A75D0(&player->views5E8.viewD40_165.unkD40, player);
  if (player->views5E8.view11D8_147.unk11D8 > 0.0f)
  {
    player->views5E8.view11D8_147.unk11D8 -= D_800D2988;
    if (player->views5E8.view11D8_147.unk11D8 <= 0.0f)
    {
      player->views1C.view100_8.unk100 |= 0x1000000;
    }
  }
  if (player->views5E8.view11DC_185.unk11DC > 0.0f)
  {
    player->views5E8.view11DC_185.unk11DC -= scale;
    if (player->views5E8.view11DC_185.unk11DC <= 0.0f)
    {
      player->views5E8.view11DC_185.unk11DC = 0.0f;
      player->views122C.view122C_4.fxFlags &= ~0x2000;
    }
  }
  if (player->views5E8.view11EC_189.unk11EC > 0.0f)
  {
    f32 left = player->views5E8.view11EC_189.unk11EC - D_800D2988;
    if (!(left >= 0.0f))
    {
      left = 0.0f;
    }
    player->views5E8.view11EC_189.unk11EC = left;
  }
  player->views5E8.view688_43.input.shadow->pos = player->views0.view8_3.pos;
  if ((player->views1450.view1450_0.unk1450 != 0) && (D_8014694C == 0))
  {
    offset = 23;
  }
  else
  {
    offset = 0;
    if (D_801450B8 != 1)
    {
      offset = 23;
    }
  }
  func_8028B250(&D_8011FE88, &player->views1C.view2E8_37.emitter, D_800D052C[player->views5E8.view62E_17.character]->sound + offset, player->views1C.view484_44.voice->bank);
  if (!(player->views1C.view100_8.unk100 & 0x400))
  {
    player->views5E8.view870_157.unk870 = player->views5E8.view86C_125.unk86C;
  }
  if (player->views122C.view122C_4.fxFlags & 0x4000)
  {
    if (player->views5E8.view11D8_147.unk11D8 <= 0.0f)
    {
      player->views122C.view122C_4.fxFlags &= ~0x4000;
    }
  }
  if (player->views122C.view122C_4.fxFlags & 0x2000)
  {
    if (player->views5E8.view11DC_185.unk11DC <= 0.0f)
    {
      player->views122C.view122C_4.fxFlags &= ~0x2000;
    }
  }
  if ((!(player->views122C.view122C_4.fxFlags & 0x10020)) && (player->views122C.view122C_4.fxFlags != 0))
  {
    player->fxTime -= D_800D2988;
    if (player->fxTime <= 0.0f)
    {
      player->unk1240 = 0.0f;
      player->fxStage = -1;
      player->fxTime = 0.0f;
      player->fxSpeed = 0.0f;
      player->views122C.view122C_4.fxFlags &= 0xFFFF6000;
    }
    else
    {
      /* FAKEMATCH: declare the operands in reverse order to tune FP allocation. */
      f32 right;
      f32 prior;
      f32 left;
      prior = player->unk1240;
      right = player->unk1244;
      left = prior - right;
      if (left < 0.0f)
      {
        left = 0.0f;
      }
      /* FAKEMATCH: merge both branch results through the original value. */
      if (player->views5E8.view678_40.unk678)
      {
        right = left;
      }
      else
      {
        right = left;
      }
      player->unk1240 = right;
    }
  }
  else
    if (player->views122C.view122C_4.fxFlags & 0x10000)
  {
    player->fxTime = ((player->fxTime--) < 0.0f) ? (0.0f) : (player->fxTime--);
    player->views5E8.view5F4_13.ammo[1] = ((player->views5E8.view5F4_13.ammo[1]--) < 0) ? (0) : (player->views5E8.view5F4_13.ammo[1]--);
    if ((player->views5E8.view5F4_13.ammo[1] == 0) || (player->fxTime == 0.0f))
    {
      player->fxTime = 0.0f;
      player->views122C.view122C_4.fxFlags &= ~0x18400;
    }
  }
  else
    if (player->views122C.view122C_4.fxFlags & 0x20)
  {
    if (player->fxStage == (-1))
    {
      player->fxTime = 0.0f;
      player->fxStage = 0;
      player->fxSpeed = 75.0f;
    }
    if (player->fxStage == 0)
    {
      player->fxTime += D_800D2988;
      if ((player->fxTime > 15.0f) || (player->fxTime < 0.0f))
      {
        player->fxSpeed = -player->fxSpeed;
      }
      if (player->fxTime > 30.0f)
      {
        player->fxTime = 0.0f;
        player->fxStage = 1;
        player->fxSpeed = 20.0f;
      }
    }
    else
      if (player->fxStage == 1)
    {
      player->fxTime += D_800D2988;
      if (player->fxTime > 75.0f)
      {
        player->fxStage = 2;
        player->fxTime = 0.0f;
      }
    }
    else
      if (player->fxStage == 2)
    {
      player->fxTime += D_800D2988;
      if (player->fxTime >= 150.0f)
      {
        player->fxStage = 3;
        player->fxTime = 0.0f;
      }
    }
    else
      if (player->fxStage == 3)
    {
      player->fxTime += player->fxSpeed;
      if (player->fxTime > 600.0f)
      {
        player->fxStage = -1;
        player->fxTime = 0.0f;
        player->views122C.view122C_4.fxFlags &= ~0x20;
      }
    }
  }
}
