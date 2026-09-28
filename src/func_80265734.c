
#include "basetypes.h"
extern f32 func_802BB630(f32 arg0);
extern f32 D_800C9488;
extern f32 D_800C948C;
extern f32 D_800C9490;
f32 func_80265734(f32 arg0)
{
  f32 var_f1;
  f32 var_f0;
  var_f0 = arg0;
  if (var_f0 < 0.0f)
  {
    var_f1 = 0.0f;
    var_f0 = var_f1;
  }
  else
  {
    var_f1 = D_800C9488;
    if (var_f1 < var_f0)
    {
      var_f0 = var_f1;
    }
  }
  return (D_800C9490 - func_802BB630(var_f0 * D_800C948C)) * (*((f32 *) (((char *) (&D_800C9490)) + 4)));
}
