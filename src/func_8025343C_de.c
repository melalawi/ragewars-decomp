#include "common/types.h"
#include "span_1000/code_80252714.h"
#include "span_1000/types.h"
#include "types.h"






extern Queue_func_802517B4_de D_80101140;

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);
extern struct Shape_typemap_165 *func_802548B8_de(s32, s32, u32, void *);
extern s32 func_802BB420_de(Queue_func_802517B4_de *, s32, s32);

struct Shape_typemap_165 *func_8025343C_de(s32 arg0, s32 arg1, u32 arg2, void *arg3) {
    struct Shape_typemap_165 *var_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_v0;
    s32 temp_s0;
    u32 temp_s1;
    void *temp_s2;

    temp_s0 = arg1;
    temp_s1 = arg2;
    temp_s2 = arg3;
    temp_a0 = func_802BCF30_de();
    temp_v1 = D_8010115C + 1;
    D_8010115C = temp_v1;
    if (temp_v1 != 1) {
        func_802BCF50_de(temp_a0);
        func_802BB2A0_de((s32)&D_80101140, 0, 1);
    } else {
        func_802BCF50_de(temp_a0);
    }
    var_s0 = func_802548B8_de(0, temp_s0, temp_s1, temp_s2);
    temp_v0 = func_802BCF30_de();
    temp_v1_2 = D_8010115C - 1;
    D_8010115C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802BCF50_de(temp_v0);
        func_802BB420_de(&D_80101140, 0, 1);
    } else {
        func_802BCF50_de(temp_v0);
    }
    return var_s0;
}
