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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1BC0_4 = 0.00999999978f;
const float unbake_rodata_800C1BC4_4 = 0.899999976f;
const float unbake_rodata_800C1BC8_4 = 1.10000002f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6D80_4 = 0.00999999978f;
const float unbake_rodata_800C6D84_4 = 0.899999976f;
const float unbake_rodata_800C6D88_4 = 1.10000002f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1F30_4 = 0.00999999978f;
const float unbake_rodata_800C1F34_4 = 0.899999976f;
const float unbake_rodata_800C1F38_4 = 1.10000002f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1F70_4 = 0.00999999978f;
const float unbake_rodata_800C1F74_4 = 0.899999976f;
const float unbake_rodata_800C1F78_4 = 1.10000002f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1C90_4 = 0.00999999978f;
const float unbake_rodata_800C1C94_4 = 0.899999976f;
const float unbake_rodata_800C1C98_4 = 1.10000002f;
#endif
