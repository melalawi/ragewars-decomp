#include "../include/shared/weaponmetadata.h"
#include "../include/shared/weaponslot.h"
#include "../include/shared/weaponworld.h"
#include "../include/shared/target.h"
#include "../include/shared/node.h"
#include "../include/shared/arg0.h"
#include "../include/shared/func_8020aa40_s1.h"
#include "../include/shared/func_8020aa40_s2.h"
/* Find the nearest world object matching each active target ID, clearing its active flag when no object is close enough. */

f32 func_80272768(void *arg0, void *arg1);
s32 func_8028B238(void *arg0, s16 arg1);
extern f32 D_800C6E30[];
typedef Shared_WeaponMetadata WeaponMetadata;
typedef Shared_WeaponSlot WeaponSlot;

typedef Shared_WeaponWorld WeaponWorld;
extern WeaponWorld D_8011FE88;
typedef Shared_Target Target;
typedef Shared_Node Node;

typedef Shared_Arg0 Arg0;
typedef Shared_func_8020AA40_S1 func_8020AA40_S1;
typedef Shared_func_8020AA40_S2 func_8020AA40_S2;


void func_8020AA40(Arg0 *arg0)
{
  f32 temp_f0;
  f32 var_f20;
  f32 var_f21;
  s32 *temp_a0;
  s32 var_s2;
  s32 var_s4;
  u32 var_v0;
  u32 compare_id;
  WeaponSlot *temp_s0;
  Target *temp_s1;
  Node *var_s5;
  WeaponSlot *var_s3;
  WeaponWorld *ww;
  var_s5 = arg0->unk24;
  ww = &D_8011FE88;
  if (var_s5 != 0)
  {
    var_f21 = D_800C6E30[0];
    do
    {
      temp_a0 = arg0->unk0;
      temp_s1 = (Target *) (&((func_8020AA40_S1 *) temp_a0)->unk0[(var_s5->unk0 * (*temp_a0)) + 8]);
      if (temp_s1->unkC & 1)
      {
        var_f20 = D_800C6E30[1];
        var_s3 = 0;
        if (temp_s1->unkE != 0x653)
        {
          var_s4 = 0;
          if (var_s4 < ww->unk140)
          {
            var_s2 = 0;
            do
            {
              temp_s0 = (WeaponSlot *) (&((func_8020AA40_S2 *) ww->unk138)->unk0[var_s2]);
              compare_id = temp_s1->unkE;
              if (compare_id == 0x64E)
              {
                var_v0 = temp_s0->unkE4;
                goto compare;
              }
              if (((u32) (temp_s0->unkE4 - 0x643)) >= 2U)
              {
                goto advance;
              }
              var_v0 = func_8028B238(ww, temp_s0->unk18->unk28);
              compare_id = temp_s1->unkE;
              compare:
              if (var_v0 == compare_id)
              {
                temp_f0 = func_80272768(temp_s1, &temp_s0->unk8);
                if ((temp_f0 < var_f20) || (var_f20 == var_f21))
                {
                  if (temp_s1)
                  {
                    var_f20 = temp_f0;
                    var_s3 = temp_s0;
                  }
                  else
                  {
                    var_f20 = temp_f0;
                    var_s3 = temp_s0;
                  }
                }
              }

              advance:
              var_s2 += 0x2E8;

            }
            while ((++var_s4) < ww->unk140);
          }
          if (var_s3 != 0)
          {
            if (var_f20 < D_800C6E30[2])
            {
              var_s5->unk34 = var_s3;
              goto next_node;
            }
          }
          var_s5->unk34 = 0;
          temp_s1->unkC = (u16) (temp_s1->unkC & 0xFFFE);
        }
      }
      next_node:
      var_s5 = var_s5->unk10;

    }
    while (var_s5 != 0);
  }
}
