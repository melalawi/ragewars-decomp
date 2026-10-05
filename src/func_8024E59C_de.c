#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8024E130.h"
#include "types.h"



extern void func_8024E79C_de(void *arg0, Triple_func_8024E59C_de t, void *arg4, s32 *arg5, s32 arg6, s32 arg7);
extern f32 func_80275DD4_de(s32, s32, s32);






void func_8024E59C_de(void *arg0, void *arg1, void *arg2) {
    Triple_func_8024E59C_de t;
    s32 sp30;

    t.a = ((func_8024E58C_S1 *)(arg1))->unk0;
    t.b = 0;
    t.c = ((func_8024E58C_S1 *)(arg1))->unk8;
    func_8024E79C_de(arg0, t, arg2, &sp30, 0, 0);
    ((func_8024E58C_S2 *)(arg2))->unk4 = func_80275DD4_de(sp30, *(s32 *)arg2, ((func_8024E58C_S2 *)(arg2))->unk8);
}
