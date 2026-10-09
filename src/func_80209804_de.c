#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80208000.h"
#include "types.h"

void func_80209804_de(s32 arg0)
{
  s32 var_v0;
  void *var_a0;
  int new_var;
  new_var = -1;
  var_v0 = 3;
  var_a0 = arg0 + 0xC;
  do
  {
    ((func_80204468_S3 *)(var_a0))->unk14 = new_var;
    var_v0 -= 1;
    var_a0 -= 4;
  }
  while (var_v0 >= 0);
}

/* Pops the front of a four-entry queue at offset 0x14 of a record: shifts the entries down one,
   marks the last empty with -1 and returns whether an entry remains at the front. */

s32 func_80209828_de(struct Queue *queue) {
    s32 i;

    for (i = 1; i < 4; i++) {
        queue->items[i - 1] = queue->items[i];
    }
    queue->items[3] = -1;
    return queue->items[0] != -1;
}

/** Store the second argument at byte offset 0x214 in the first argument. */
void func_8020986C_de(void *object, int value) {
    ((func_8020986C_S1 *)(object))->unk214 = value;
}

s32 func_80209874_de(void *arg0, s32 arg1) {
    void *node;
    s32 *entry;
    s32 *found;
    SharedCallback5 callback;

    node = ((ObjectLinks220 *)(arg0))->unk_214;
    found = 0;
    ((ObjectLinks220 *)(arg0))->unk_21C = arg1;
    while (node != 0) {
        entry = &((struct Shape_typemap_30 *)(node))->field_20;
        if (*entry != -1) {
            while (*entry != -1) {
                if (*entry == arg1) {
                    found = entry;
                    node = 0;
                    break;
                }
                entry += 8;
            }
        }
        if (node != 0) {
            node = *(void **)node;
        }
    }
    if (found == 0) {
        return 0;
    }
    ((ObjectLinks220 *)(arg0))->unk_218 = found;
    callback = ((struct CallbackState8 *) found)->callback;
    if (callback != 0) {
        callback(*(void **)arg0, 0);
    }
    return 1;
}

void func_80209910_de(void **arg0, float arg1) {
    float result = arg1 * D_800C1C88_de;
    if (arg0 != 0) {
        ((func_80209910_S1 *)((*arg0)))->unk6A0 = -result;
    }
}

int func_8020993C_de(void *arg0) {
    return *(int *)arg0 + 0x8;
}

s32 func_802726F8_de(f32 *, f32 *);
extern f32 *func_8020C994_de(void *, s32);
extern s32 D_8013B364;
void func_80209948_de(struct TargetPositionRef *arg0, s32 arg1) {
    func_802726F8_de(arg0->target->position, func_8020C994_de(&D_8013B364, arg1));
}

/** Reset three state words and set the final state to one. */
void func_80209988_de(void *arg0) {
    ((func_80209988_S1 *)(arg0))->unk2F4 = 0;
    ((func_80209988_S1 *)(arg0))->unk2F8 = 0;
    ((func_80209988_S1 *)(arg0))->unk2FC = 1;
}

/** Clear five consecutive object words beginning at offset 0x300. */
void func_8020999C_de(void *arg0) {
    ((func_8020999C_S1 *)(arg0))->unk300 = 0;
    ((func_8020999C_S1 *)(arg0))->unk304 = 0;
    ((func_8020999C_S1 *)(arg0))->unk308 = 0;
    ((func_8020999C_S1 *)(arg0))->unk30C = 0;
    ((func_8020999C_S1 *)(arg0))->unk310 = 0;
}

extern char D_80103FD0;
extern void **D_80103FCC;

extern s32 func_802444A4_de(void *arg0, Vec3 arg1, Vec3 arg2, void *arg3);

s32 func_802099B4_de(void **arg0, void *arg1) {
    Vec3 first;
    Vec3 second;

    if (arg0 == 0 || arg1 == 0) {
        return 0;
    }

    first = ((Player *)(*arg0))->pos;
    second = ((Player *)(arg1))->pos;
    first.y += D_800C1C8C_de;
    second.y += D_800C1C8C_de;
    if (func_802444A4_de(*arg0, first, second, &D_80103FD0) != 0) {
        return *D_80103FCC == arg1;
    }
    return 1;
}

s32 func_80209A94_de(void *arg0) {
    s32 val;

    val = ((func_80209A94_S1 *)(arg0))->unk21C;
    if (val >= 8) {
        goto ge_8;
    }
    if (val >= 3) {
        goto ret1;
    }
    if (val == 1) {
        goto ret1;
    }
    goto ret0;
ge_8:
    if (val != 0xD) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}

/** Report whether the state word at offset 0x21C equals eight. */
int func_80209AD8_de(char *object) {
    return ((func_80209A94_S1 *)(object))->unk21C == 8;
}
