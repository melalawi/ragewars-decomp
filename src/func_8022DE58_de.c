#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022D944.h"
#include "types.h"



extern f32 func_8024E464_de(void *arg0);
extern f32 func_8024D398_de(void *);
extern f32 func_8024D284_de(void *arg0);
extern f32 func_8024E420_de(void *);
extern s32 func_8024491C_de(void *arg0, Vec3 arg1, Vec3 arg2, void *arg3,
                         f32 arg4, f32 arg5, f32 arg6, f32 arg7);
extern char D_801000F0;
extern char D_800FFFCC[];











void func_8022DE58_de(void *arg0, void *arg1) {
    Vec3 next;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 var_f23;

    var_f23 = (((((Model_func_80223E34_de *)(((func_8022DE48_S1 *)(arg0))->unk18))->height -
                    ((func_8022DE48_S1 *)(arg0))->unk780) -
                   ((func_8022DE48_S1 *)(arg0))->unk718) -
                  ((func_8022DE48_S1 *)(arg0))->unk720) -
                 ((func_8022DE48_S1 *)(arg0))->unk6F4;
    if (var_f23 > 0.0f) {
        temp_f22 = func_8024E464_de(arg1);
        temp_f21 = func_8024D398_de(arg1);
        temp_f20 = func_8024D284_de(arg1);
        temp_f0 = func_8024E420_de(arg1);
        next.x = ((func_8020E674_S1 *)(arg1))->unk8.v0;
        next.y = ((func_8020E674_S1 *)(arg1))->unk8.v1.y + var_f23;
        next.z = ((func_8020E674_S1 *)(arg1))->unk8.v1.z;
        if (func_8024491C_de(arg1, ((func_8020E674_S1 *)(arg1))->unk8.v1, next,
                           &D_801000F0, temp_f22, temp_f21, temp_f20,
                           temp_f0) != 0) {
            temp_f1 = ((func_8022DE48_S4 *)(*(void **)D_800FFFCC))->unkE8 -
                      ((func_8020E674_S1 *)(arg1))->unk8.v1.y;
            ((func_8022DE48_S1 *)(arg0))->unk6EC -= var_f23 - temp_f1;
            var_f23 = temp_f1;
        }
    }
    ((func_8022DE48_S1 *)(arg0))->unk6F4 += var_f23;
}
