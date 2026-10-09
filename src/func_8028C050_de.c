#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8028B64C.h"
#include "types.h"

extern s32 func_80275B10_de(void *arg0, f32 arg1, f32 arg2);
extern f32 func_80275DD4_de(s32, s32, s32);
extern f32 func_8027525C_de(void *arg0, s32 arg1, s32 arg2);
extern s32 func_80286728_de(void *, void *);
extern char D_8011FE88[];








void *func_8028C050_de(void *arg0, void *arg1) {
    f32 lower;
    f32 upper;
    f32 value;

    if (arg0 != 0 &&
        func_80275B10_de(arg0, ((func_8028C02C_S1 *)(arg1))->unk0.v0,
                          ((func_8028C02C_S1 *)(arg1))->unk8.v0) != 0) {
        if (!(((func_8022EA2C_S1 *)(arg0))->unk2 & 0x40)) {
            return arg0;
        }
        lower = func_80275DD4_de(arg0,
            ((func_8028C02C_S1 *)(arg1))->unk0.v1, ((func_8028C02C_S1 *)(arg1))->unk8.v1);
        upper = func_8027525C_de(arg0,
            ((func_8028C02C_S1 *)(arg1))->unk0.v1, ((func_8028C02C_S1 *)(arg1))->unk8.v1);
        value = ((func_8028C02C_S1 *)(arg1))->unk4;
        if (lower <= value && value <= upper) {
            return arg0;
        }
    }
    return func_80286728_de(D_8011FE88, arg1);
}
