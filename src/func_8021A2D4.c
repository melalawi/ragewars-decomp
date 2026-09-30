#include "../splat/types/shared/effectentry.h"
#include "../splat/types/shared/variant.h"
#include "../splat/types/shared/status.h"
#include "../splat/types/shared/control.h"
#include "../splat/types/shared/objectinfo.h"
#include "../splat/types/shared/entity.h"
#include "../splat/types/shared/actor.h"
#include "../splat/types/shared/rendercontext.h"
#include "../splat/types/shared/effectvalues.h"
#include "../splat/types/shared/effectparams.h"
#include "../splat/types/shared/effectfloats.h"
#include "../splat/types/shared/globalstatus.h"
#include "../splat/types/shared/visibilityglobals.h"
#include "../splat/types/shared/visibilityroot.h"
/* note: Draws an actor with visibility, color effects, and optional weapon attachments. */
typedef Shared_EffectEntry EffectEntry;
typedef Shared_Variant Variant;
typedef Shared_Status Status;
typedef Shared_Control Control;
typedef Shared_ObjectInfo ObjectInfo;
typedef Shared_Entity Entity;
typedef Shared_Actor Actor;
typedef Shared_RenderContext RenderContext;
typedef Shared_EffectValues EffectValues;
typedef Shared_EffectParams EffectParams;
typedef Shared_EffectFloats EffectFloats;
typedef Shared_GlobalStatus GlobalStatus;
void func_80228F94(Actor *, s32, RenderContext *);
void **func_8024BFC4(Actor *, s32);
void func_802536F4(void *, void *);
void func_8026D4F0(void **, s32, s32, s32, s32, void *, s32, u8, u8, u8, u8);
void func_8026DA4C(void **, s32, s32, s32, void *, s32);
s32 func_8026B6A0();
typedef Shared_VisibilityGlobals VisibilityGlobals;
/* FAKEMATCH: volatile preserves independent visibility flag reads. */
extern volatile u8 D_801462E5;
typedef Shared_VisibilityRoot VisibilityRoot;
extern VisibilityRoot D_801462E3;
extern s32 D_801468F4;
extern GlobalStatus D_801468A0;
extern s32 D_800CE478;
/* FAKEMATCH: volatile preserves animation comparison ordering. */
extern volatile s32 D_800CE47C;
extern ObjectInfo *D_800D052C[];
extern s32 D_800D15E0;
extern EffectValues D_800D15E4;
/* FAKEMATCH: volatile preserves the effect float store/load order. */
extern volatile f32 D_800D15F0;
extern volatile f32 D_800D15F4;
extern const f32 D_800C73D4;
extern const f32 D_800C73D8;
extern const f32 D_800C73DC;
extern volatile f32 D_800C73E0;
extern s32 D_800D297C;
void func_8021A2D4(Actor *arg0, s32 arg1, RenderContext *arg2)
{
  f32 var_f0;
  s16 temp_v0;
  s16 temp_v0_2;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 temp_v1_4;
  s32 var_a1;
  s32 var_s2;
  s32 temp_v1_3;
  void **temp_v0_3;
  EffectValues *temp_a0;
  Entity *temp_s0;
  GlobalStatus *temp_global;
  VisibilityGlobals *temp_visibility;
  temp_s0 = arg0->entity;
  if (temp_s0->active > 0.0f)
  {
    temp_v1 = temp_s0->flags;
    var_s2 = 1;
    if (temp_v1 & 0x8000)
    {
      var_s2 = 0;
    }
    else
    {
      temp_s0->flags = (s32) (temp_v1 | 0x8000);
    }
    temp_a0 = &D_800D15E4;
    D_800D15E4.value = 0;
    D_800D15E0 = 3;
    if (temp_s0->flags & 0x4000)
    {
      temp_a0->x = D_800C73D4;
      temp_a0->y = 0;
    }
    else
    {
      temp_a0->x = 0;
      temp_a0->y = D_800C73D8;
    }
    if (temp_s0->fixed_color != 0)
    {
      D_800D15F0 = D_800C73DC;
    }
    else
    {
      D_800D15F0 = (f32) temp_s0->control->color;
    }
    temp_global = &D_801468A0;
    D_800D15F4 = D_800C73E0;
    if ((temp_global->active != 0) && (temp_s0->status->enabled != 0))
    {
      arg0->color = (u8) temp_global->color;
    }
    else
    {
      arg0->color = (u8) arg0->variant->color;
    }
    func_8026B6A0(arg2->target, temp_s0, arg0->action, 1, &arg0->effects[D_800D297C], 0, (s32) arg0->subtype);
    D_800D15E0 = 0;
    if (var_s2 != 0)
    {
      temp_s0->flags = (s32) (temp_s0->flags & 0xFFFF7FFF);
    }
    /* FAKEMATCH: volatile keeps the active path field read order. */
    temp_v1_2 = ((volatile Entity *) temp_s0)->state;
    if ((((((((u32) (temp_v1_2 - 0x11)) >= 2U) && (temp_v1_2 != 0xF)) && ((((volatile Status *) temp_s0->status)->enabled == 0) || (D_801468F4 == 0))) && (((volatile Entity *) temp_s0)->action_state != 0)) && (temp_s0->animation != D_800CE47C)) && (!(((volatile Entity *) temp_s0)->flags & 0x20)))
    {
      temp_v0 = temp_s0->object_id;
      temp_v1_3 = D_800D052C[temp_v0]->id;
      var_a1 = temp_v1_3 - 0x4B3;
      if (temp_v0 >= 0x10)
      {
        var_a1 = temp_v1_3 - 0x4B5;
      }
      goto block_52;
    }
    return;
  }
  /* FAKEMATCH: the byte view exposes the aligned active word through a real field. */
  temp_visibility = &D_801462E3.visibility;
  if ((temp_visibility->enabled == 0) || ((((temp_s0->status->enabled == 0) || ((*((s32 *) temp_visibility->active)) == 0)) || (temp_s0->action_state != 0)) && (((D_801462E5 == 0) || ((temp_s0->special == 0) && (temp_s0->animation != D_800CE478))) || (temp_s0->action_state != 0))))
  {
    if (temp_s0->flags & 0x20)
    {
      func_80228F94(arg0, arg1, arg2);
    }
    else
    {
      temp_global = &D_801468A0;
      if ((temp_global->active != 0) && (temp_s0->status->enabled != 0))
      {
        arg0->color = (u8) temp_global->color;
      }
      else
      {
        arg0->color = (u8) arg0->variant->color;
      }
      func_8026B6A0(arg2->target, temp_s0, arg0->action, 1, &arg0->effects[D_800D297C], 0, (s32) arg0->subtype);
      if (temp_s0->effect_strength > 0.0f)
      {
        func_8026D4F0(arg2->target, (s32) temp_s0, arg0->action, 1, (s32) (&arg0->effects[D_800D297C]), (void *) 0, (s32) arg0->subtype, (u8) ((s32) temp_s0->red), (u8) ((s32) temp_s0->green), (u8) ((s32) temp_s0->blue), (u8) (((s32) temp_s0->effect_strength) & 0xFF));
      }
    }
    temp_v1_4 = temp_s0->state;
    if ((((((((u32) (temp_v1_4 - 0x11)) >= 2U) && (temp_v1_4 != 0xF)) && ((temp_s0->status->enabled == 0) || (D_801468F4 == 0))) && (temp_s0->action_state != 0)) && (temp_s0->animation != D_800CE47C)) && (!(temp_s0->flags & 0x20)))
    {
      temp_v0_2 = temp_s0->object_id;
      var_a1 = D_800D052C[temp_v0_2]->id;
      var_a1 -= 0x4B3;
      if (temp_v0_2 >= 0x10)
      {
        var_a1 -= 2;
      }
      goto block_52;
    }
  }
  return;
  block_52:
  if (var_a1 >= 0)
  {
    temp_v0_3 = func_8024BFC4(arg0, var_a1);
    if (temp_v0_3 != ((void *) 0))
    {
      func_8026DA4C(temp_v0_3, arg0->action, 1, (s32) (&arg0->effects[D_800D297C]), (void *) 0, (s32) arg0->subtype);
      func_802536F4((void *) 0, temp_v0_3);
    }
  }

}


