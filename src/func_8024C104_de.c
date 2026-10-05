#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8024BA6C.h"
#include "types.h"



extern void func_8025E5B0_de(s32 *arg0, s32 arg1, s32 arg2, f32 *arg3);
extern void func_802736D4_de(void *arg0, s32 arg1);
extern void func_80272898_de(void *, void *, void *);




void *func_8024C104_de(void *arg0, void *arg1, s32 *arg2) {
    char *o1 = (char *) arg1;
    char mtx[0x40];
    f32 spVec[3];
    f32 inVec[3];
    f32 outVec[3];

    func_8025E5B0_de(arg2, 0, *arg2, spVec);
    inVec[0] = spVec[0];
    inVec[1] = spVec[2];
    inVec[2] = spVec[1];
    func_802736D4_de(mtx, ((func_8024C0F4_S1 *)(o1))->unk6C);
    func_80272898_de(mtx, inVec, outVec);
    outVec[0] *= ((func_8024C0F4_S1 *)(o1))->unk50;
    outVec[1] *= ((func_8024C0F4_S1 *)(o1))->unk54;
    outVec[2] *= ((func_8024C0F4_S1 *)(o1))->unk58;
    *(Triple *) arg0 = *(Triple *) outVec;
    return arg0;
}
