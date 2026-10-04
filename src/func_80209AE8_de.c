#include "common/types.h"
#include "span_1000/code_80208410.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"







f32 func_80209AE8_de(void *arg0)
{
  void *object;
  u8 state;
  f32 var_f0;
  f32 var_f1;
  object = *((void **) arg0);
  state = ((struct func_80209B64_S2 *) ((char *) ((func_80209B64_S1 *) object)->unk5D8))->unk93;
  var_f1 = ((struct func_8022C070_S1 *) ((char *) ((func_80209B64_S1 *) object)->unk18))->unk2C;
  var_f1 = var_f1 * D_800C1C90_de;
  switch (state)
  {
    case 1:
      goto done;

    default:
      ((struct func_80209B64_S5 *) ((char *) ((struct func_80209B64_S4 *) ((char *) (*((void **) arg0))))->unk5D8))->unk93 = 0;

    case 0:
      var_f0 = D_800C1C94_de;
      break;

    case 2:
      var_f0 = D_800C1C98_de;
      break;

  }

  var_f1 *= var_f0;
  done:
  return var_f1;

}
