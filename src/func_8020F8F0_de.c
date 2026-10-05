#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_8020EAE0.h"
#include "types.h"

/* Returns 1 when one of the object's ten entries at 0x3C matches its current value at 0x28C and the
   paired flag at 0x6C is set, and 0 otherwise or when the current value is zero. */


int func_8020F8F0_de(Obj_func_8020F8F0_de *obj) {
    int i;

    if (obj->current == 0) {
        return 0;
    }
    for (i = 0; i < 10; i++) {
        if (obj->keys[i] == obj->current && obj->flags[i] != 0) {
            return 1;
        }
    }
    return 0;
}

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;



s32 func_8020F93C_de(void *arg0)
{
  s32 var_a1;
  s32 var_v1;
  void *var_a0;
  var_a0 = arg0;
  var_a1 = 0;
  if ((((func_8020F93C_S1 *)(var_a0))->unk38) == 0)
  {
    return 0;
  }
  var_v1 = 0;
  do
  {
    if (((((func_8020F93C_S1 *)(var_a0))->unk3C) != 0) && ((((func_8020F93C_S1 *)(var_a0))->unk6C) != 0))
    {
      var_a1 += 1;
      var_a0++;
      var_a0--;
    }
    var_v1 += 1;
    var_a0 += 4;
  }
  while (var_v1 < 0xA);
  return var_a1;
}

extern func_802077F4_S2 D_800C21F0_eu_x;

s32 func_8020F984_de(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f1;
    s32 temp_v0;
    s32 mask;
    s32 var_a1;
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_a1 = -1;
    var_f1 = D_800C21F0_eu_x.unk4;
    var_v1 = 0;
    if (((func_8020F984_S2 *)(var_a0))->unk38 > 0) {
        mask = 0x300000;
        temp_f2 = var_f1;
        temp_v0 = ((func_8020F984_S2 *)(var_a0))->unk38;
        do {
            if ((((func_80203C40_S1 *)(((func_8020F984_S2 *)(var_a0))->unk3C))->unk100 & mask) &&
                ((temp_f0 = (f32)((func_8020F984_S2 *)(var_a0))->unk94, temp_f0 < var_f1) ||
                 (var_f1 == temp_f2)) &&
                (((func_8020F984_S2 *)(var_a0))->unk6C != 0)) {
                var_f1 = temp_f0;
                var_a1 = var_v1;
                var_a0++;
                var_a0--;
            }
            var_v1 += 1;
            var_a0 += 4;
        } while (var_v1 < temp_v0);
    }
    return var_a1;
}
