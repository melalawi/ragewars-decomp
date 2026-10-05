#include "common/types_8a8189af7b05.h"
#include "span_1000/code_80206258.h"
#include "types.h"





extern char D_8011D8D0;
extern s32 func_802800C0_de(void *, void *, void *, void *, s32, s32,
                         Triple, Vector4f, Triple, s32, s32, s32);






void func_802064A0_de(void *arg0, void *arg1, Triple arg2,
                   s32 unused5, s32 arg6) {
    s32 result;

    result = func_802800C0_de(&D_8011D8D0, arg0, arg0,
                           &((func_802062E0_S1 *)(arg1))->unk124, 0, arg6,
                           ((func_802064A0_S2 *)(arg0))->unk1C,
                           ((func_802064A0_S2 *)(arg0))->unk5C,
                           arg2, 0, -1, 0);
    ((func_802062E0_S1 *)(arg1))->unk128 -= result;
}
