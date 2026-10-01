
#include "basetypes.h"
extern f32 D_800C6D80;
extern f32 D_800C6D84;
extern f32 D_800C6D88;
typedef struct func_80209AE8_S1 func_80209AE8_S1;
struct func_80209AE8_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x5D8 - 0x18 - sizeof(void*)];
    void* unk5D8;
};

f32 func_80209AE8(void *arg0)
{
  void *object;
  u8 state;
  f32 var_f0;
  f32 var_f1;
  object = *((void **) arg0);
  state = *((u8 *) (((char *) (((func_80209AE8_S1 *)(object))->unk5D8)) + 0x93));
  var_f1 = *((f32 *) (((char *) (((func_80209AE8_S1 *)(object))->unk18)) + 0x2C));
  var_f1 = var_f1 * D_800C6D80;
  switch (state)
  {
    case 1:
      goto done;

    default:
      *((s8 *) (((char *) (*((void **) (((char *) (*((void **) arg0))) + 0x5D8)))) + 0x93)) = 0;

    case 0:
      var_f0 = D_800C6D84;
      break;

    case 2:
      var_f0 = D_800C6D88;
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
