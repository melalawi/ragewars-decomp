#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

extern void func_8025E5D0(s32 *arg0, s32 arg1, s32 arg2, f32 *arg3);
extern void func_80273744(void *arg0, s32 arg1);
extern void func_80272908(void *, void *, void *);

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
    func_80273744(mtx, *(s32 *) (o1 + 0x6C));
    func_80272908(mtx, inVec, outVec);
    outVec[0] *= *(f32 *) (o1 + 0x50);
    outVec[1] *= *(f32 *) (o1 + 0x54);
    outVec[2] *= *(f32 *) (o1 + 0x58);
    *(Vec3i *) arg0 = *(Vec3i *) outVec;
    return arg0;
}
