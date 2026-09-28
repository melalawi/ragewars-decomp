#include "basetypes.h"

extern s32 func_80265508(void *arg0, s32 arg1, s32 arg2);
extern s32 func_8028FE1C(s32 arg0, s32 arg1, s32 arg2, s32 *arg3);
extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);

extern s32 D_285130;
extern s32 D_800CA2C8;

s32 func_8028BDE4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    char *o = (char *) arg0;
    void *p;
    s32 idx;
    s32 sp28;
    s32 result;

    p = *(void **) (o + 0x98);
    idx = func_80265508((char *) p + 8, *(s32 *) ((char *) p + 4), arg1);
    if (idx == -1) {
        return 0;
    }
    result = func_8028FE1C(*(s32 *) (o + 0x58), *(s32 *) (o + 0x28), idx, &sp28);
    return func_802518DC(0, result, result, sp28, arg2, 0, (s32) &D_285130, &D_800CA2C8, arg3);
}
