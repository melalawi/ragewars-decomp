/* Advances the fractional animation clock and updates every active object with the resulting tick flag. */

#include "basetypes.h"
typedef struct 
{
  char pad[0xB4C];
  s32 values[64];
  s32 unkC4C;
  char padc50[0x1A6CC];
  f32 unk1B31C;
} State;
extern void func_802505CC(s32, s32);
typedef struct func_8028D658_S1 func_8028D658_S1;
struct func_8028D658_S1 {
    char pad0[0x4];
    State unk4;
};

void func_8028D658(State *arg0)
{
  f32 temp_f1;
  s32 temp_a0;
  int first_index;
  s32 var_s0;
  s32 var_s3;
  State *var_s1;
  temp_f1 = arg0->unk1B31C + 1.0f;
  arg0->unk1B31C = temp_f1;
  var_s3 = 1;
  if (!(temp_f1 > 0.0f))
  {
    var_s3 = 0;
  }
  if (var_s3 != 0)
  {
    arg0->unk1B31C = (f32) (temp_f1 - ((f32) (((s32) temp_f1) + 1)));
  }
  var_s0 = (first_index = 0);
  if (arg0->unkC4C > first_index)
  {
    var_s1 = arg0;
    do
    {
      temp_a0 = var_s1->values[0];
      func_802505CC(temp_a0, var_s3);
      var_s1 = &((func_8028D658_S1 *)(var_s1))->unk4;
      var_s0 += 1;
    }
    while (var_s0 < arg0->unkC4C);
  }
}
