#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8028DF6C.h"
#include "types.h"
#include "common/types_06e4f7ef1f9e.h"

s32 func_8028DF90_de(void *arg0, s32 arg1) {
    void *temp_v0;
    temp_v0 = func_8028FDB4_de((((struct Field_void_80 *) ((s8 *) arg0))->value), 1);
    func_8028FDB4_de(temp_v0, 0);
    return func_8028FDB4_de(temp_v0, 1) + arg1;
}

void func_8028DFE4_de(struct Shape_func_802764D4_de_2 *arg0, struct Shape_func_802764D4_de_2 *arg1) {
    struct Shape_func_802764D4_de_2 tmp;

    tmp = *arg0;
    *arg0 = *arg1;
    *arg1 = tmp;
}

s32 func_8028E020_de(void *arg0, void *arg1) {
    s32 var_v0;
    var_v0 = 1;
    if ((((struct func_802077F4_S2 *) ((s8 *) arg0))->unk4) < (((struct func_802077F4_S2 *) ((s8 *) arg1))->unk4)) {
        var_v0 = -1;
    }
    return var_v0;
}

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;





s32 func_8028E044_de(void *arg0, void *arg1)
{
  f32 new_var;
  s32 var_v0;
  new_var = ((func_802077F4_S2 *)(arg0))->unk4;
  var_v0 = 1;
  if ((((func_802077F4_S2 *)(arg1))->unk4) < new_var)
  {
    var_v0 = -1;
  }
  return var_v0;
}

void func_8028E068_de(void *arg0) {
    s32 found;
    s32 clear_index;
    char *record;
    char *clear_ptr;
    char *out;
    s32 wanted_type;

    found = 0;
    clear_index = 15;
    record = ((func_8028E044_S1 *)(arg0))->unk138;
    clear_ptr = &((func_8028E044_S1 *)(arg0))->unk3C;
    ((func_8028E044_S1 *)(arg0))->unk1B6A4 = 0;
    do {
        ((func_8028E044_S2 *)(clear_ptr))->unk1B664 = 0;
        clear_index--;
        clear_ptr -= 4;
    } while (clear_index >= 0);

    if (((func_8028E044_S1 *)(arg0))->unk140 > 0) {
        clear_index = 0;
        wanted_type = 14;
        out = (char *)((found * 4) + (s32)arg0);
        do {
            if (*((func_8024C654_S1 *)(record))->unk18 == wanted_type) {
                ((func_8028E044_S2 *)(out))->unk1B664 = record;
                out += 4;
                found++;
            }
            if (found >= 16) {
                break;
            }
            clear_index++;
            if (clear_index >= ((func_8028E044_S1 *)(arg0))->unk140) {
                break;
            }
            record += 0x2E8;
        } while (1);
    }
    ((func_8028E044_S1 *)(arg0))->unk1B6A4 = found;
}
