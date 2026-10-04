#include "common/types.h"
#include "span_1000/code_80233C78.h"
#include "types.h"



extern s32 D_800DE880_de;
extern void func_80272A10_de(void *, void *, Vec3 *);




void func_80239244_de(s32 arg0, s32 arg1, f32 *arg2, f32 *arg3) {
    Vec3 value;
    f32 half;

    func_80272A10_de(arg0 + 0x1E0, arg1, &value);
    half = (f32)(D_800DE880_de / 2);
    *arg2 = value.x * half + half;
    *arg3 = value.y * (f32)(-((func_80203E78_S1 *)(&D_800DE880_de))->unk4 / 2) +
            (f32)(((func_80203E78_S1 *)(&D_800DE880_de))->unk4 / 2);
}
