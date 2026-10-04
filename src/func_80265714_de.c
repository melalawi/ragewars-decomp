#include "common/types.h"
#include "span_1000/code_8026565C.h"
#include "span_C76B0/data.h"
#include "types.h"

extern f32 func_802B6560_de(f32 arg0);



f32 func_80265714_de(f32 arg0)
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
    var_f1 = D_800C4398_de;
    if (var_f1 < var_f0)
    {
      var_f0 = var_f1;
    }
  }
  return (D_800C43A0_de - func_802B6560_de(var_f0 * D_800C439C_de)) * (((struct func_802077F4_S2 *) ((char *) (&D_800C43A0_de)))->unk4);
}
