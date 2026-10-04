#include "common/types.h"
#include "span_1000/code_8024B644.h"
#include "types.h"





extern void func_8025E5B0_de(s32 *, s32, f32, f32 *);
extern void func_802736D4_de(void *, s32);
extern void func_80272898_de(void *arg0, void *arg1, void *arg2);
extern void func_8024E79C_de(void *arg0, Triple arg1, void *arg2, s32 *arg3,
                          s32 arg4, s32 arg5);





void func_8024C34C_de(void *arg0, s32 *arg1) {
    Scratch scratch;
    f32 zero;

    zero = 0.0f;
    func_8025E5B0_de(arg1, 0, zero, scratch.first);
    func_8025E5B0_de(arg1, 0, *(f32 *)arg1, scratch.second);
    scratch.in[0] = scratch.second[0] - scratch.first[0];
    scratch.in[1] = zero;
    scratch.in[2] = scratch.second[1] - scratch.first[1];
    func_802736D4_de(scratch.matrix, ((func_8024C33C_S1 *)(arg0))->unk6C);
    func_80272898_de(scratch.matrix, scratch.in, scratch.out);
    scratch.position[0] = ((func_8024C33C_S1 *)(arg0))->unk8.v0 +
                          (scratch.out[0] * ((func_8024C33C_S1 *)(arg0))->unk50);
    scratch.position[1] = ((func_8024C33C_S1 *)(arg0))->unkC;
    scratch.position[2] = ((func_8024C33C_S1 *)(arg0))->unk10 +
                          (scratch.out[2] * ((func_8024C33C_S1 *)(arg0))->unk58);
    func_8024E79C_de(arg0, *(Triple *)scratch.position, &((func_8024C33C_S1 *)(arg0))->unk8.v1,
                  &((func_8024C33C_S1 *)(arg0))->unk14, 0, 0);
}
