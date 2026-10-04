#include "span_1000/code_8028B64C.h"
#include "span_1000/types.h"
#include "types.h"
extern s32 func_802654E8_de(void *arg0, s32 arg1, s32 arg2);
extern s32 func_8028FE3C_de(s32 arg0, s32 arg1, s32 arg2, s32 *arg3);
extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);

extern s32 D_00285160;
extern s32 D_800C51D8;






s32 func_8028BE08_de(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    char *o = (char *) arg0;
    void *p;
    s32 idx;
    s32 sp28;
    s32 result;

    p = ((func_8028BDE4_S1 *)(o))->unk98;
    idx = func_802654E8_de(&((func_8024C5C4_S2 *)(p))->unk8, ((func_8024C5C4_S2 *)(p))->unk4, arg1);
    if (idx == -1) {
        return 0;
    }
    result = func_8028FE3C_de(((func_8028BDE4_S1 *)(o))->unk58, ((func_8028BDE4_S1 *)(o))->unk28, idx, &sp28);
    return func_8025193C_de(0, result, result, sp28, arg2, 0, (s32) &D_00285160, &D_800C51D8, arg3);
}
