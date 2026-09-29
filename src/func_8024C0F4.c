#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

extern void func_8025E5D0(s32 *arg0, s32 arg1, s32 arg2, f32 *arg3);
extern void func_80273744(void *arg0, s32 arg1);
extern void func_80272908(void *, void *, void *);

typedef struct func_8024C0F4_S1 func_8024C0F4_S1;
struct func_8024C0F4_S1 {
    char pad0[0x50];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x6C - 0x58 - sizeof(f32)];
    s32 unk6C;
};

void *func_8024C0F4(void *arg0, void *arg1, s32 *arg2) {
    char *o1 = (char *) arg1;
    char mtx[0x40];
    f32 spVec[3];
    f32 inVec[3];
    f32 outVec[3];

    func_8025E5D0(arg2, 0, *arg2, spVec);
    inVec[0] = spVec[0];
    inVec[1] = spVec[2];
    inVec[2] = spVec[1];
    func_80273744(mtx, ((func_8024C0F4_S1 *)(o1))->unk6C);
    func_80272908(mtx, inVec, outVec);
    outVec[0] *= ((func_8024C0F4_S1 *)(o1))->unk50;
    outVec[1] *= ((func_8024C0F4_S1 *)(o1))->unk54;
    outVec[2] *= ((func_8024C0F4_S1 *)(o1))->unk58;
    *(Vec3i *) arg0 = *(Vec3i *) outVec;
    return arg0;
}
