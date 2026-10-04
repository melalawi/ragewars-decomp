#include "common/types.h"
#include "span_1000/code_80258760.h"
#include "types.h"



extern f32 D_800C3EE0_de[];
extern s32 func_80257DD4_de(void *, s32, Vec3, s32, s32);




void func_80258A7C_de(void *arg0, s32 arg1, Vec3 arg2, s32 arg3, s32 arg4, f32 arg5) {
    ((func_80258A9C_S1 *)(arg0))->unk2BBC = arg5;
    func_80257DD4_de(arg0, arg1, arg2, arg3, arg4);
    ((func_80258A9C_S1 *)(arg0))->unk2BBC = D_800C3EE0_de[1];
}
