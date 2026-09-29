
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
